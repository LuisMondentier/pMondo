/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	driver7segments4inch.h

#ifndef DRIVER_7_SEGMENTS_4_INCH_H_
#define DRIVER_7_SEGMENTS_4_INCH_H_

#include "Arduino.h"

class SevenSegments{
  public:
    SevenSegments();
    void show0();
    void show1();
    void show2();
    void show3();
    void show4();
    void show5();
    void show6();
    void show7();
    void show8();
    void show9();
	void showError();
  private:
    int _pin2;
    int _pin3;
    int _pin4;
    int _pin5;
    int _pin6;
    int _pin7;
    int _pin9;
    int _pin10;
};

#endif