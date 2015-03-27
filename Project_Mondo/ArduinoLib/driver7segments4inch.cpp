/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	driver7segments4inch.cpp

#include "driver7segments4inch.h"

void SevenSegments::SevenSegments(){
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	_pin2 = 2;
	_pin3 = 3;
	_pin4 = 4;
	_pin5 = 5;
	_pin6 = 6;
	_pin7 = 7;
	_pin9 = 9;
	_pin10 = 10;	
}	//End Constructor

void show0(){
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show0

void show1(){
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
	digitalWrite(_pin7, HIGH);
	digitalWrite(_pin9, HIGH);
	digitalWrite(_pin10, LOW);
}	//End show1

void show2(){
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, HIGH);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show2

void show3(){
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, HIGH);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show3

void show4(){
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, HIGH);
	digitalWrite(_pin10, LOW);
}	//End show4

void show5(){
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, HIGH);
}	//End show5

void show6(){
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, HIGH);
	digitalWrite(_pin10, HIGH);
}	//End show6

void show7(){
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, HIGH);
	digitalWrite(_pin7, HIGH);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show7

void show8(){
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show8

void show9() {
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
	digitalWrite(_pin4, LOW);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, LOW);
}	//End show 9

void showError(){
	digitalWrite(_pin2, LOW);
	digitalWrite(_pin3, LOW);
	digitalWrite(_pin4, HIGH);
	digitalWrite(_pin5, HIGH);
	digitalWrite(_pin6, LOW);
	digitalWrite(_pin7, LOW);
	digitalWrite(_pin9, LOW);
	digitalWrite(_pin10, HIGH);
}	//End showError