/*	Author: osmit003
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: 
 *      Count the number of 1s on ports A and B and output 
 *      that number on port C
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
    /* Insert your solution below */
    unsigned char tmpA = 0x00;
    unsigned char tmpC = 0x00;
    
    while(1) {
        tmpA = PINA & 0x0F;
	}
	
	return 1;
}
