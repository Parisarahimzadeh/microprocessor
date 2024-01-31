/*
 * codeQ2.c
 *
 * Created: 12/27/2023 10:04:01 PM
 * Author: Parisa
 */

#include <mega32.h>
#include <delay.h>

flash unsigned char digits[10] = {0xBF, 0x06, 0x5B, 0x4F, 0x66, 0xED, 0xFD, 0x07, 0xFF, 0xEF } ;

int j = 0;

void main(void)
{
DDRA= 0xFF;
DDRB= 0xFF;
DDRD= 0x00;

while (1)
    {
      if(PIND.2 == 1){
        j = 0;
      }
        
      if(PIND.0==1){
        if(j>=0 && j<=55){
            PORTA = digits[j / 10];
            PORTB = digits[j % 10];
            if(PIND.1 == 0){
                j++;
            } else {
                j--; 
            }
            
        }
        
        
      }
      
        
       delay_ms(1000);
    }
}
