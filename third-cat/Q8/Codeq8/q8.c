/*
 * q8.c
 *
 * Created: 1/19/2024 2:31:45 PM
 * Author: Parisa
 */


#include <mega32.h>
#include <delay.h>
#include <lcd.h>
#include <stdio.h>

#asm 
.equ __lcd_port=0x18
#endasm


char ch[16];


void main(void)
{

lcd_init(16);
lcd_clear();

UCSRA = 0x00;
UCSRB = 0x18;
UCSRC = 0x86;

UBRRH = 0x00;
UBRRL = 0x25;



while(1){ 

        scanf("%s", ch);
        lcd_clear();
        lcd_gotoxy(0,0);
        lcd_puts(ch);
        delay_ms(50);
        
    }
}