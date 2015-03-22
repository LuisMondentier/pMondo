/////////////////////////////////////////
//
//	Project_Mondo
//
//	Author: Luis Fernández González
//
/////////////////////////////////////////
//	stopclock.h

#ifndef STOP_CLOCK_H_
#define STOP_CLOCK_H_

#include "temp.h"

class StopClock {
public:
	StopClock();
	void set(temp time);
	void reset();
	void start();
	void stop();
	temp show();
private:
	temp _time;
	bool _END;
};

#endif