/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	stopclock.cpp

#include "stopclock.h"

StopClock::StopClock(){
	_time.hours = 0;
	_time.minutes = 0;
	_time.seconds = 0;
	_time.centiseconds = 0;
	_END = true;

}	//End constructor

void StopClock::set(temp time){
	_time.hours = time.hours;
	_time.minutes = time.minutes;
	_time.seconds = time.seconds;
	_time.centiseconds = time.centiseconds;

}	//End set

void StopClock::reset(){
	_time.hours = 0;
	_time.minutes = 0;
	_time.seconds = 0;
	_time.centiseconds = 0;

}	//End reset

void StopClock::start(){
	_END = false;

	while (_END == false)
	{
		
	}

}	//End start

void StopClock::stop(){
	_END = true;

}	//End stop

temp StopClock::show(){
	temp now;
	now.hours = _time.hours;
	now.minutes = _time.minutes;
	now.seconds = _time.seconds;
	now.centiseconds = _time.centiseconds;
	return now;

}	//End show