/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	digitDisplay.h

#ifndef DIGIT_DISPLAY_H_
#define DIGIT_DISPLAY_H_

#include "ledLeader.h"

class DigitDisplay {
	public:
		void DigitDisplay();
		void display_off();
		void display_0();
		void display_1();
		void display_2();
		void display_3();
		void display_4();
		void display_5();
		void display_6();
		void display_7();
		void display_8();
		void display_9();
	private:
		LedLeader _led1;
		LedLeader _led2;
		LedLeader _led3;
		LedLeader _led4;
		LedLeader _led5;
		LedLeader _led6;
		LedLeader _led7;
}

#endif