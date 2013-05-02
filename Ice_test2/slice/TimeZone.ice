module TimeZone {
exception GenericError {
  string reason;
};
exception BadTimeValue extends GenericError {
};
struct TimeOfDay {
  int hour;
  int minute;
  int second;
};
/*
Clock* 表示ClockPrx
*/
interface Clock {
  idempotent TimeOfDay getTime();
  idempotent void setTime(TimeOfDay time) throws BadTimeValue;  
};
dictionary<string, Clock*> TimeMap;

exception BadZoneName extends GenericError {};
interface WorldTime {
  idempotent void addZone(string zoneName, Clock* c);
  void removeZone(string zoneName) throws BadZoneName;

  idempotent Clock* findZone(string zoneName) throws BadZoneName;

  idempotent TimeMap listZones();
  idempotent void setZones(TimeMap zones);   
};

};
