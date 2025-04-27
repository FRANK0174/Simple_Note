#include "stm32f4xx_it.h"
#include "led.h"
#include "stm32f4xx.h"
#include "stm32f4xx_exti.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_syscfg.h"
#include <delay.h>



/*******************************************************************************
* �� �� ��         : main
* ��������		   : ������
* ��    ��         : ��
* ��    ��         : ��
*******************************************************************************/


#include "stm32f4xx.h"


  

void INIT_BEEP(){
	GPIO_InitTypeDef  GPIO_InitStructure;

  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//ʹ��GPIOFʱ��

  //GPIOF9,F10��ʼ������
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//��ͨ���ģʽ
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
  GPIO_Init(GPIOF, &GPIO_InitStructure);//��ʼ��
  GPIO_ResetBits(GPIOF,GPIO_Pin_8);//BEEP on
}

int main(void)
{
    INIT_BEEP();
    GPIO_SetBits(GPIOF,GPIO_Pin_8);//BEEP OFF == initlizing
    GPIO_ResetBits(GPIOF,GPIO_Pin_8);//BEEP on
    delay_ms(5000);
    GPIO_SetBits(GPIOF,GPIO_Pin_8);//BEEP OFF
}



