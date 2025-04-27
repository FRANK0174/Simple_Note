#ifndef __BEEP_H
#define __BEEP_H

#include <sys.h>
#include <stm32f4xx_rcc.h>

//定义开关
#define BEEPON 0
#define BEEPOFF 1
//BEEP端口定义
#define BEEP PFout(8)	// BEEP


#endif

