/*
 * q5.c
 *
 * Created: 1/22/2024 6:53:24 PM
 * Author: Parisa
 */


#include <mega32.h>
#include <stdio.h>
#include <delay.h>
#include <lcd.h>


#asm 
.equ __lcd_port  = 0x15
#endasm

int i = 0;
int j = 0;

char b[4];
int value = 0;



void main(void)
{
DDRC = 0xff;
DDRA = 0x00;

lcd_init(16);
lcd_clear();


while (1)
    { 
           
        for(j = 0; j < 2; j++){
        
            for(i = 15; i >= 0; i--){
            
                value = (PINA.0 * 1) + (PINA.1 * 2) + (PINA.2 * 4) + (PINA.3 * 8) + (PINA.4 * 16) + (PINA.5 * 32) + (PINA.6 * 64) + (PINA.7 * 128);
                sprintf(b,"%d",value);
                lcd_clear();
                lcd_gotoxy(i,j);
                lcd_puts(b);
                delay_ms(100);
            }
           
        }
        
    }
}