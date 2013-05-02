#include <Ice/Ice.h>
#include "Printer.h"
#include "TimeZone.h"
using namespace std;
using namespace Demo;

int ShowPrinter(const Ice::CommunicatorPtr &ic) {
  const char *printer_ep = "SimplePrinter:tcp -h 10.3.18.163 -p 10000";
  int status = 0;
  try {
    Ice::ObjectPrx base = ic->stringToProxy(
    /*
    连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
    SimplePrinter:tcp -h 10.3.18.186 -p 10000
    */
     printer_ep 
    );
    //"SimplePrinter:default -p 10000");
    PrinterPrx printer = PrinterPrx::checkedCast(base);
    if (!printer)
      throw "Invalid proxy";
    printer->printString("Hello World!");
    Ice::Int re1 = printer->add(1,2);
    Ice::Int re2 = printer->multiply(3,4);
    
    cout<<"re1:"<<re1<<"  "<<"re2:"<<re2<<"  "<<printer->retString() <<endl;
  } catch (const Ice::Exception& ex) {
    cerr << ex << endl;
    status = 1;
  } catch (const char* msg) {
    cerr << msg << endl;
    status = 1;
  }
  return status;
}

int SetTimeZone(const Ice::CommunicatorPtr &ic) {
  const char *timezone_ep = "clock:tcp -h 10.3.18.163 -p 10000";
  int status = 0;
  try {
    Ice::ObjectPrx base = ic->stringToProxy(
    /*
    连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
    SimplePrinter:tcp -h 10.3.18.186 -p 10000
    */
     timezone_ep 
    );
    //"SimplePrinter:default -p 10000");
    ::TimeZone::ClockPrx clock= ::TimeZone::ClockPrx::checkedCast(base);
    if (!clock)
      throw "Invalid proxy";
    ::TimeZone::TimeOfDay tod;
    tod.hour = 13;
    tod.minute = 36;
    tod.second = 32;
    clock->setTime(tod); 
//    ::TimeZone::TimeOfDay tod = clock->getTime();
//    cout<<"hour:"<<tod.hour<<"  "<<"minute:"<<tod.minute<<"  second:"<<tod.second <<endl;
  } catch (const Ice::Exception& ex) {
    cerr << ex << endl;
    status = 1;
  } catch (const char* msg) {
    cerr << msg << endl;
    status = 1;
  }
  return status;
}

int SetWorldTime(const Ice::CommunicatorPtr &ic) {
  const char *timezone_ep = "clock:tcp -h 10.3.18.163 -p 10000";
  const char *wt_ep= "worldtime:tcp -h 10.3.18.163 -p 10000";
  int status = 0;
  try {
    Ice::ObjectPrx base = ic->stringToProxy(
    /*
    连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
    SimplePrinter:tcp -h 10.3.18.186 -p 10000
    */
     timezone_ep 
    );
    //"SimplePrinter:default -p 10000");
    ::TimeZone::ClockPrx clock= ::TimeZone::ClockPrx::checkedCast(base);
    if (!clock)
      throw "Invalid proxy";
    ::TimeZone::TimeOfDay tod;
    tod.hour = 13;
    tod.minute = 36;
    tod.second = 32;
    clock->setTime(tod); 
//    ::TimeZone::TimeOfDay tod = clock->getTime();
//    cout<<"hour:"<<tod.hour<<"  "<<"minute:"<<tod.minute<<"  second:"<<tod.second <<endl;
    
    base = ic->stringToProxy(wt_ep);
    ::TimeZone::WorldTimePrx wt = ::TimeZone::WorldTimePrx::checkedCast(base);
    wt->addZone("beijing", clock);
  } catch (const Ice::Exception& ex) {
    cerr << ex << endl;
    status = 1;
  } catch (const char* msg) {
    cerr << msg << endl;
    status = 1;
  }
  return status;
}

int GetWorldTime(const Ice::CommunicatorPtr &ic) {
  const char *wt_ep= "worldtime:tcp -h 10.3.18.163 -p 10000";
  int status = 0;
  try {
    Ice::ObjectPrx base = ic->stringToProxy(
    /*
    连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
    SimplePrinter:tcp -h 10.3.18.186 -p 10000
    */
     wt_ep 
    );
    ::TimeZone::WorldTimePrx wt = ::TimeZone::WorldTimePrx::checkedCast(base);
    ::TimeZone::ClockPrx clock = wt->findZone("beijingx");
    if (clock) {
      ::TimeZone::TimeOfDay tod = clock->getTime();
      cout<<"hour:"<<tod.hour<<"  "<<"minute:"<<tod.minute<<"  second:"<<tod.second <<endl;
    }else
      cout<<"clock null" <<endl;
      
  } catch (const Ice::Exception& ex) {
    cerr << ex << endl;
    status = 1;
  } catch (const char* msg) {
    cerr << msg << endl;
    status = 1;
  }
  return status;
}
int main(int argc, char* argv[]) {
  int status = 0;
  Ice::CommunicatorPtr ic;
  ic = Ice::initialize(argc, argv);
  //status = ShowPrinter(ic);
	//status = GetTimeZone(ic);
  status = GetWorldTime(ic);
  if (ic)
    ic->destroy();
  return status;
}
