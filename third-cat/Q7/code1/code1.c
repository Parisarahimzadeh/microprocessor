/*
 * code1.c
 *
 * Created: 1/22/2024 9:03:09 PM
 * Author: Parisa
 */


#include <mega32.h>
#include <delay.h>
#include <stdio.h>


char test;


void main(void)
{

#asm ("sei")

UCSRA = 0x00;
UCSRB = 0b10011100; //0x98; //enable interrupt //UCSZ2
UCSRC = 0x86; //Even Parity

UBRRH = 0x00;
UBRRL = 0x25;

DDRB = 0xff;



while(1){ 
        
        putchar(0x55);
        delay_ms(1000); 
        putchar(0x00);
        delay_ms(1000);
        
    }
}

interrupt[USART_RXC] void usart_rx_isr(){

   test = getchar();
   PORTB = test;

}
