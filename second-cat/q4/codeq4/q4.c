/*
 * q4.c
 *
 * Created: 1/19/2024 3:42:33 PM
 * Author: Parisa
 */

#include <mega32.h>
#include <delay.h>

flash unsigned char pat[10][4] = {
                                 {0b00000000, 0b00000000, 0b00000000, 0b10000000},
                                {0b00000000, 0b10000000, 0b10000000, 0b01000000},
                                {0b10000000, 0b01000000, 0b01000000, 0b00100000},
                                {0b01000000, 0b00100000, 0b00100000, 0b00010000},
                                {0b00100000, 0b00010000, 0b00010000, 0b00001000},
                                {0b00010000, 0b00001000, 0b00001000, 0b00000100},
                                {0b00001000, 0b00000100, 0b00000100, 0b00000010},
                                {0b00000100, 0b00000010, 0b00000010, 0b00000001},
                                {0b00000010, 0b00000001, 0b00000001, 0b00000000},
                                {0b00000001, 0b00000000, 0b00000000, 0b00000000},

}; 
int delayTime = 1;
int row = 0;
int col = 0;


void main(void)
{



DDRA = 0xff;
DDRB = 0xff;


while(1){ 
        
       for(row = 0; row < 10; row++){
       
        if(row == 4){
            delayTime = 5;
        } else {
            delayTime = 1;
        }
        
        for(col = 0; col < 25 * delayTime ; col++){
            PORTB=pat[row][0];
            PORTA=0b11100111;
            delay_ms(10);
       
            PORTB=pat[row][1];
            PORTA=0b11101111;
            delay_ms(10);
       
            PORTB=pat[row][2];
            PORTA=0b11011111;
            delay_ms(10);
       
            PORTB=pat[row][3];
            PORTA=0b11100111;
            delay_ms(10);
        }   
       }    
    }
}