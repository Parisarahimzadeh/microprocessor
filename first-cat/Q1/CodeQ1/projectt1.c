/*
 * projectt1.c
 *
 * Created: 11/17/2023 7:02:40 PM
 * Author: Parisa
 */

#include <mega32.h>
#include <delay.h>

unsigned char sevenSegmentMap[16] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111, // 9
    0b01110111, // A
    0b01111100, // B
    0b00111001, // C
    0b01011110, // D
    0b01111001, // E
    0b01110001  // F
        
};

void main(void) {
    
    DDRA = 0x00; 
    DDRB = 0xFF;
    DDRC = 0xFF; 

    while(1) {
        
        unsigned char input = PINA;

        
        unsigned char digit1 = sevenSegmentMap[input >> 4]; 
        unsigned char digit2 = sevenSegmentMap[input & 0x0F]; 

        
        PORTB = digit1;

        
        PORTC = digit2;

        delay_ms(100); 
    }
}