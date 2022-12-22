/*
 * GccApplication1.c
 *
 * Created: 11/22/2022 11:02:47 PM
 * Author : toshiba
 */ 

#include <avr/io.h>

#include <util/delay.h>
#define rs PG2
#define rw PG1
#define enable PG2
#define dataline PORTH


int main(void)
{ 
	// we have made all of them out put cause its the code that gives the program what to do
	DDRH = 0xFF;
	DDRG = 0xFF;
	
    /* Replace with your application code */
    while (1) 
    {
		
		PORTG &=~(1<<rs);// commande mode
		PORTG &=~(1<<rw);//write mode
		
		
		PORTG &=~(1<<enable);//set low
		_delay_ms(1);
		PORTG |=(1<<enable);//high
		_delay_ms(1);
		
		//turn display on, cursor show, blink ==0f
		PORTH = 0X0f;
		PORTG &=~(1<<enable);//set low
		_delay_ms(1);
		PORTG |=(1<<enable);//high   
		_delay_ms(1);
		
		PORTH = 0X3f;
		//function set -00111111 ==3f
		PORTG &=~(1<<enable);// set low
		_delay_ms(1);
		
		PORTH = 0X1c;
		PORTG |=(1<<enable);//high
		_delay_ms(1);
		//shift - 00011100 -=1c
		PORTG &=~(1<<enable);//set low
		_delay_ms(1);
		PORTG |=(1<<enable);//high
		_delay_ms(1);
		
		PORTH = 0X01;
		//clear screen 01
		PORTG &=~(1<<enable);//set low
		_delay_ms(1);
		PORTG |= (1<<enable);//high
		_delay_ms(1);
		
		
		//data mode
		PORTG &=(1<<rs);
		PORTH = "A";
		//clear screen 01
		PORTG &=~(1<<enable);//set low
		_delay_ms(1);
		PORTG |= (1<<enable);//high
		_delay_ms(1);
		
    }
}

