/*
 * Q3.c
 *
 * Created: 12/30/2023 8:57:41 PM
 * Author: Parisa
 */

#include <mega32.h>
#include <delay.h>

flash unsigned char digits[10] = {0xBF, 0x06, 0x5B, 0x4F, 0x66, 0xED, 0xFD, 0x07, 0xFF, 0xEF } ;

int count = 0;
int gam = 0;

void main(void)
{
DDRA= 0xFF;
DDRB= 0xFF;
DDRC= 0x00;
DDRD= 0x00;


while (1)
    {
     gam = (PINC.0 * 1) + (PINC.1 * 2) + (PINC.2 * 4) + (PINC.3 * 8) + (PINC.4 * 16) + (PINC.5 * 32) + (PINC.6 * 64) + (PINC.7 * 128);
     
      if(PIND.2 == 1){
        count = 0;
      }
        
      if(PIND.0==1){
        if(count>=0 && count<=55){
            PORTA = digits[count / 10];
            PORTB = digits[count % 10];
            if(PIND.1 == 0){
                count = gam + count;
            } else {
                count = gam - count; 
            }
            
        }
      }
      
        
       delay_ms(1000);
    }
}
