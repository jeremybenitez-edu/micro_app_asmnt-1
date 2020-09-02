/******************************************************************************
 * 	FileName:     main.c
 *
 * This assignment must be completed in class.  
 * You don?t need to hand over the source code but 
 * you have until the end of the class to complete it 
 * and give a demo to the teacher.
 *
 * September 2020
 * 		
 ******************************************************************************/

#include "common/Tick.h"
#include "common/console.h"
#include "initBoard.h"
#include "fsm.h"

int main( void)
{
    initIO();
    TickInit();			// initializes the tick function   
    initUart1();
    fprintf2(_UART1, "Hello UART1\n");
    
    while( 1){
        task1();
	}//while(1))

}// main

