#ifndef MILLIS_TIMER_H
#define MILLIS_TIMER_H
#include "Arduino.h"

class MillisTimer {
public:
  MillisTimer(): waitTime(100)
  {
    reset();
  }
  
  MillisTimer(uint32_t waitTime): waitTime(waitTime)
  {
    reset();
  }
  
  void setDelay(int waitTime) {
  	this->waitTime = waitTime;
  }
  void reset() {
  	startTime = millis();
  }
  
  bool timeUp() {
    return millis() - startTime >  waitTime;
  }
  
  

private:
  unsigned long startTime;
  uint32_t waitTime;
};

#endif
