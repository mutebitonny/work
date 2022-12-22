/*
 * example1.c
 *
 * Created: 12/17/2022 8:51:36 AM
 * Author : MUTEBI TONNY
 */ 

#include <avr/io.h>


int main(void)
{
	unsigned char z;
	DDRB = 0xff;
	for(z=0;z<=255;z++)
	PORTB=z;
    
    while (1) 
    {
    }
	return 0;
}

