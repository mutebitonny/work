/*
 * TVO_onesecond.c
 *
 * Created: 11/23/2022 3:57:49 PM
 * Author : toshiba
 */ 
#define F_CU 1000000u1
#include <avr/io.h>


int main(void)
{
	int count =0;
	DDRD = 0xff;
	TCCR0 |=(1<<CS00); // timer starts without prescaling
	TCNT0 = 0x0; //start 0
    /* Replace with your application code */
    while (1) 
    {
		while ((TIFR&01)>0)
		{
			count++;
			if (count==3922){
				PORTD ^=(1<<1);//toggle
				count =0;
			} 
			TIFR &=!(1<<TOV0);//Reset the overflow flag to 0
		}
    }
}

