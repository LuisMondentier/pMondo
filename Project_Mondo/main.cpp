/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	main.cpp	//Dev_StopClock

#include <avr/io.h>
#include <avr/interrupt.h>

#include "stopclock.h"

void main() {
	StopClock stopClock;
	stopClock.start();
	sei();
}

ISR(TIMER0_OVF_vect) {
	if (centiseconds < 100)
		centiseconds++;
	else
	{
		centiseconds = 0;
		if (seconds < 60)
			seconds++;
		else
		{
			if (minutes < 60)
				minutes++;
			else
			{
				if (hours < 99)
					hours++;
			}
		}
	}
}