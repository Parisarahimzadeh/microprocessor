/*
 * codeQ2.c
 *
 * Created: 12/27/2023 10:04:01 PM
 * Author: Parisa
 */

#include <mega32.h>
#include <delay.h>

flash unsigned char digits[10] = {0xBF, 0x06, 0x5B, 0x4F, 0x66, 0xED, 0xFD, 0x07, 0xFF, 0xEF } ;

int count = 0;

void main(void)
{
DDRA= 0xFF;
DDRB= 0xFF;
DDRD= 0xFF;

while (1)
    {
      if(PIND.2 == 1){
        count = 0;
      }
        
      if(PIND.0==1){
        if(count>=0 && count<=55){
            PORTA = digits[count / 10];
            PORTB = digits[count % 10];
            if(PIND.1 == 0){
                count++;
            } else {
                count--; 
            }
            
        }
      }
      
        
       delay_ms(1000);
    }
}
