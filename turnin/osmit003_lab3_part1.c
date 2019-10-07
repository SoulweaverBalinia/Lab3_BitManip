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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
    /* Insert your solution below */
    
    unsigned char numA;
    unsigned char numB;
    unsigned char i;
    
    while (1) {
		numA = 0;
		numB = 0;
		
		for (i = 0; i < 8; i++) {
			if (((PINA >> i) & 0x01) == 1) {
				numA++;
			}
			
			if (((PINB >> i) & 0x01) == 1) {
				numB++;
			}
		}
		PORTC = numA + numB;
    }
    return 0;
}
