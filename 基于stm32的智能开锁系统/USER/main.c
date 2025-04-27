#include "stm32f4xx_it.h"
#include "led.h"
#include "stm32f4xx.h"
#include "stm32f4xx_exti.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_syscfg.h"
#include <delay.h>



/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/


#include "stm32f4xx.h"


  

void INIT_BEEP(){
	GPIO_InitTypeDef  GPIO_InitStructure;

  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//使能GPIOF时钟

  //GPIOF9,F10初始化设置
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//普通输出模式
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOF, &GPIO_InitStructure);//初始化
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



