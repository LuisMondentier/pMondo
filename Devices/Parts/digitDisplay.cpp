/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	digitDisplay.cpp

#include digitDisplay.h

void DigitDisplay::DigitDisplay() {
	
}	//End DigitDisplay constructor

void DigitDisplay::display_off() {
	_led1.turn_off();
	_led2.turn_off();
	_led3.turn_off();
	_led4.turn_off();
	_led5.turn_off();
	_led6.turn_off();
	_led7.turn_off();
	
}	//End display_off

void DigitDisplay::display_0() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led3.turn_on();
	_led4.turn_on();
	_led5.turn_on();
	_led6.turn_on();
	
}	//End display_0

void DigitDisplay::display_1() {
	display_off();
	_led2.turn_on();
	_led3.turn_on();
	
}	//End display_1

void DigitDisplay::display_2() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led4.turn_on();
	_led5.turn_on();
	_led7.turn_on();
	
}	//End display_2

void DigitDisplay::display_3() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led3.turn_on();
	_led4.turn_on();
	_led7.turn_on();
	
}	//End display_3

void DigitDisplay::display_4() {
	display_off();
	_led2.turn_on();
	_led3.turn_on();
	_led6.turn_on();
	_led7.turn_on();
	
}	//End display_4

void DigitDisplay::display_5() {
	display_off();
	_led1.turn_on();
	_led3.turn_on();
	_led4.turn_on();
	_led6.turn_on();
	_led7.turn_on();
	
}	//End display_5

void DigitDisplay::display_6() {
	display_off();
	_led1.turn_on();
	_led3.turn_on();
	_led4.turn_on();
	_led5.turn_on();
	_led6.turn_on();
	_led7.turn_on();
	
}	//End display_6

void DigitDisplay::display_7() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led3.turn_on();
	
}	//End display_7

void DigitDisplay::display_8() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led3.turn_on();
	_led4.turn_on();
	_led5.turn_on();
	_led6.turn_on();
	_led7.turn_on();
	
}	//End display_8

void DigitDisplay::display_9() {
	display_off();
	_led1.turn_on();
	_led2.turn_on();
	_led3.turn_on();
	_led6.turn_on();
	_led7.turn_on();
	
}	//End display_9