/*
 * trafficLight.c
 *
 * Created: 12/9/2023 9:23:28 PM
 * Author: Parisa
 */

#include <Mega16.h>
#include <delay.h>


void main(void)
{
DDRA = 0xFF; 
while (1)
    {
        PORTA.0 = 0;
        PORTA.1 = 0;
        PORTA.2 = 1; 
        PORTA.3 = 1;
        PORTA.4 = 0;
        PORTA.5 = 0;
        delay_ms(60000);
        
        PORTA.0 = 0;
        PORTA.1 = 1;
        PORTA.2 = 0; 
        PORTA.3 = 1;
        PORTA.4 = 0;
        PORTA.5 = 0;
        delay_ms(10000);
        
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0; 
        PORTA.3 = 1;
        PORTA.4 = 0;
        PORTA.5 = 0;
        delay_ms(2000); 
        
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0; 
        PORTA.3 = 0;
        PORTA.4 = 0;
        PORTA.5 = 1;
        delay_ms(60000);
        
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0; 
        PORTA.3 = 0;
        PORTA.4 = 1;
        PORTA.5 = 0;
        delay_ms(10000); 
        
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0; 
        PORTA.3 = 0;
        PORTA.4 = 0;
        PORTA.5 = 1;
        delay_ms(2000);

    }
}
