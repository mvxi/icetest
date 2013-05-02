module Temp{  //modle 是命名空间
struct TimeOfDay {  //struct只用于创建用户自动义类型
  int hour;
  int minute;
  int second;
};
sequence<string> Infos;
interface TimeInfo {   //interface用于创建接口
/*Note that nothing but operation definitions
are allowed to appear inside an interface definition. In particular, you cannot
define a type, an exception, or a data member inside an interface. 
*/
  TimeOfDay getServerTime();
  string getServerInfo();
  Infos getServerInfos();
  TimeInfo* getTimeInfo();
};
};
