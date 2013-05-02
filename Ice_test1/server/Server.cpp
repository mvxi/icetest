#include <Ice/Ice.h>
#include <Printer.h>

using namespace std;
using namespace Demo;

class PrinterI : public Printer
{
 public:
 virtual void printString(const string &s, const Ice::Current &);
 virtual Ice::Int add(Ice::Int num1, Ice::Int num2, const Ice::Current &);
 virtual Ice::Int multiply(Ice::Int num1, Ice::Int num2, const Ice::Current &);
 virtual string retString(const Ice::Current &);
 	
};

void PrinterI::printString(const string &s, const Ice::Current &)
{  cout << s <<endl;
}

Ice::Int PrinterI::add(Ice::Int num1, Ice::Int num2, const Ice::Current &)
{
  return num1 + num2;
}

Ice::Int PrinterI::multiply(Ice::Int num1, Ice::Int num2, const Ice::Current &)
{
  return num1 * num2;

}

string PrinterI::retString( const Ice::Current &)
{
  return "Hello world!!";
}


int
main(int argc, char* argv[])
{
int status = 0;
Ice::CommunicatorPtr ic;
try {
ic = Ice::initialize(argc, argv);
Ice::ObjectAdapterPtr adapter
= ic->createObjectAdapterWithEndpoints(
"SimplePrinterAdapter", "default -p 10000");  //默认建立的是tcp 连接
Ice::ObjectPtr object = new PrinterI;
PrinterPrx spPrx = PrinterPrx::uncheckedCast(adapter->add(object, ic->stringToIdentity("SimplePrinter")));
cout << "PrinterPrx:" <<spPrx <<endl;
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

