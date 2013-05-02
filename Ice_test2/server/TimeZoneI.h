#include <Ice/Ice.h>
#include "TimeZone.h"
#include <time.h>
#include <iostream>

class ClockI:public ::TimeZone::Clock {
private:
  ::TimeZone::TimeOfDay tod_;
public:
  virtual ::TimeZone::TimeOfDay getTime(const ::Ice::Current& );
  virtual void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Current&);
};
::TimeZone::TimeOfDay ClockI::getTime(const ::Ice::Current& context) {
/*
  time_t t = time(NULL);
  struct tm *cur_time = localtime(&t);
  tod_.hour = cur_time->tm_hour;
  tod_.minute = cur_time->tm_min;
  tod_.second = cur_time->tm_sec;
*/
  return tod_;
}
void ClockI::setTime(const ::TimeZone::TimeOfDay& tod, const ::Ice::Current& context) {
  tod_ = tod;
}

class WorldTimeI: public ::TimeZone::WorldTime {
private:
 ::TimeZone::TimeMap timeZones_;
public:
  virtual void addZone(const ::std::string& timeZone, const ::TimeZone::ClockPrx& clock, const ::Ice::Current& context);
  virtual void removeZone(const ::std::string& timeZone, const ::Ice::Current& context);
  virtual ::TimeZone::ClockPrx findZone(const ::std::string& timeZone, const ::Ice::Current& context);

  virtual ::TimeZone::TimeMap listZones(const ::Ice::Current& context) { return timeZones_; }
  virtual void setZones(const ::TimeZone::TimeMap&  timeZones, const ::Ice::Current& context) {  timeZones_ = timeZones;}
};

void WorldTimeI::addZone(const ::std::string& timeZone, const ::TimeZone::ClockPrx& clock, const ::Ice::Current& context) {
  std::cout <<"timezone:" << timeZone << "   clock:" << clock <<endl;
  timeZones_.insert(pair< ::std::string, ::TimeZone::ClockPrx >(timeZone, clock)); 
}
::TimeZone::ClockPrx WorldTimeI::findZone(const ::std::string& timeZone, const ::Ice::Current& context) {
  ::TimeZone::ClockPrx clock = NULL;
  ::TimeZone::TimeMap::iterator iter = timeZones_.find(timeZone);
  if (iter != timeZones_.end()) {
    clock = iter->second;
  }
  std::cout <<"timezone:" << timeZone << "   clock:" << clock <<endl;
  return clock;
}
void WorldTimeI::removeZone(const ::std::string& timeZone, const ::Ice::Current& context) {
  ::TimeZone::TimeMap::iterator iter = timeZones_.find(timeZone);
  if (iter != timeZones_.end()) {
    timeZones_.erase(iter);
  }
}
