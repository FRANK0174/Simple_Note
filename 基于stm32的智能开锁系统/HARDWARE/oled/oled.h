#ifndef __OLED_H
#define __OLED_H			  	 
#include "sys.h"
#include "stdlib.h"	    

 
/*********************************************
//oled
//������
//7��0.96��oled & GEC M4 ���� :
GND	->GND				2   
VCC	->3.3V			1
D0	->DCMI D0    8		PC6
D1	->DCMI D1     9		PC7
RES	->DCMI_RESET	7		PG15
DC	->DCMI__SCL		4   PD6
CS	->DCMI_VSYNC	3		PB7
************************************************/							   
 

//OLEDģʽ����
//0: 4�ߴ���ģʽ  ��ģ���BS1��BS2����GND��
//1: ����8080ģʽ ��ģ���BS1��BS2����VCC��
#define OLED_MODE 	0 
		    						  
//-----------------OLED�˿ڶ���----------------  					   
#define OLED_CS 	PBout(7)
#define OLED_RST  PGout(15)	
#define OLED_RS 	PDout(6)
#define OLED_WR 	PAout(4)		  
#define OLED_RD 	PDout(7)
 
//ʹ��4�ߴ��нӿ�ʱʹ�� 
#define OLED_SCLK 	PCout(6)
#define OLED_SDIN 	PCout(7)
		     
#define OLED_CMD  	0		//д����
#define OLED_DATA 	1		//д����
//OLED�����ú���
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);		   
							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y,const u8 *p,u8 size);	
void OLED_Show_Font(u16 x,u16 y,u8 fnum);
void OLED_Show_Image(u8 fnum);
#endif  
	 



