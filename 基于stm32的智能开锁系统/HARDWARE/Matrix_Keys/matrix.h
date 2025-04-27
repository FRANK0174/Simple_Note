#ifndef __MATRIX_H
#define __MATRIX_H

#include <sys.h>
#include <stm32f4xx_rcc.h>

// 端口定义
#define M_KEY0 PFout(3) // PE3
#define M_KEY1 PFout(2) // PE2
#define M_KEY2 PFout(1) // PE1
#define M_KEY3 PFout(0) // PE0
#define M_KEY4 PFout(4) // PE4
#define M_KEY5 PFout(5) // PE5
#define M_KEY6 PFout(6) // PE6
#define M_KEY7 PFout(7) // PE7

uint16_t Key_scan(void);

#endif
