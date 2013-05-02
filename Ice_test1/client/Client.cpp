#include <Ice/Ice.h>
#include <Printer.h>
using namespace std;
using namespace Demo;
int
main(int argc, char* argv[])
{
int status = 0;
Ice::CommunicatorPtr ic;
try {
ic = Ice::initialize(argc, argv);
Ice::ObjectPrx base = ic->stringToProxy(
/*
连接远端主机需要用这个串，需要指明tcp ,否则报Ice::EndpointParseException
SimplePrinter:tcp -h 10.3.18.186 -p 10000
*/
//"SimplePrinter:tcp -h 10.3.18.186 -p 10000");
"SimplePrinter:default -p 10000");
PrinterPrx printer = PrinterPrx::checkedCast(base);
if (!printer)
throw "Invalid proxy";
cout << "PrinterPrx:" <<printer<<endl;
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
if (ic)
ic->destroy();
return status;
}

