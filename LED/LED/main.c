/*
 * LED.c
 *
 * Created: 11/22/2022 7:20:47 PM
 * Author : toshiba
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRH = 0xFF;
    while (1) 
    {
		PORTH = 0b00000100;
		_delay_ms(300);
		PORTH = 0b00000001;
		_delay_ms(300);
    }
}

