#include <Ice/Ice.h>
#include "PrintI.h"
#include "TimeZoneI.h"

int main(int argc, char* argv[]) {
  int status = 0;
  Ice::CommunicatorPtr ic;
  try {
    ic = Ice::initialize(argc, argv);
    Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("SimplePrinterAdapter", "default -p 10000");  //默认建立的是tcp 连接
    Ice::ObjectPtr print= new PrinterI;
    adapter->add(print, ic->stringToIdentity("SimplePrinter"));
    Ice::ObjectPtr clock= new ClockI;
    adapter->add(clock, ic->stringToIdentity("clock"));
    Ice::ObjectPtr world_time= new WorldTimeI;
    adapter->add(world_time, ic->stringToIdentity("worldtime"));
    adapter->activate();
    ic->waitForShutdown();
  } catch (const Ice::Exception & e) {
    cerr << e << endl;
    status = 1;
  } catch (const char * msg) {
    cerr << msg << endl;
    status = 1;
  }
  if (ic)
    ic->destroy();
  return status;
}

