//==========================================
// Filename:
//     init.c
//
// Description:
//      关闭WatchDog,初始化LED灯.
//
// Author/Created Date:
//      Guangwei Jiang, Dec09'10
//
// Modification History:
// 
//
//
// Note:
//    
//==========================================
//
// 
//


//--------------------------------------------------------------------------------------
// Include Files
//--------------------------------------------------------------------------------------
#include "s3c24xx.h"


//-----------------------------------------------------------------
// 关闭WatchDog
//-----------------------------------------------------------------
void disable_watch_dog(void)
{
	WTCON = 0;					// 写0关闭WatchDog
}

//-----------------------------------------------------------------
// 初始化LED灯
//-----------------------------------------------------------------
void init_led(void)
{
    GPBCON = GPB5_out | GPB6_out | GPB7_out | GPB8_out ;
    GPBDAT |= (0x0f<<5);		// 关闭所有的LED灯
}