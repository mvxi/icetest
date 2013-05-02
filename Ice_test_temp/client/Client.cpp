#include <Ice/Ice.h>
#include <Printer.h>
using namespace std;
using namespace Demo;
int
main(int argc, char* argv[])
{
time_t t1 = time(NULL);
int status = 0;
int count = atoi(argv[1]);  
for (int i=0;i <count; i++) {
Ice::CommunicatorPtr ic;
try {

ic = Ice::initialize(argc, argv);
  char *remote;
  if (i%2 ==0)
    remote = "SimplePrinter:tcp -h 10.3.18.186 -p 10000";
  else 
    remote = "SimplePrinter:tcp -h 10.3.18.163 -p 10000";
  Ice::ObjectPrx base = ic->stringToProxy(
  /*
  连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
  SimplePrinter:tcp -h 10.3.18.186 -p 10000
  */
  remote);
  PrinterPrx printer = PrinterPrx::checkedCast(base);
  if (!printer)
  throw "Invalid proxy";
  printer->printString("Hello World!");
//  Ice::Int re1 = printer->add(1,2);
//  if (i%100 == 0) 
 //   cout <<"i:" << i<<endl;
  } catch (const Ice::Exception& ex) {
  cerr << ex << endl;
  status = 1;
  } catch (const char* msg) {
  cerr << msg << endl;
  status = 1;
  }
if (ic)
ic->destroy();
}
time_t t2 = time(NULL);
cout <<"elapse:" << (t2-t1)<<endl;
return status;
}

