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

