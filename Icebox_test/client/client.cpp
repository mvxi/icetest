#include <Ice/Ice.h>
#include <Hello.h>

using namespace std;
using namespace Demo;

int main(int argc, char* argv[]) {
  int status = 0;
  Ice::CommunicatorPtr ic;
  try {
    ic = Ice::initialize(argc, argv);
    Ice::ObjectPrx base = ic->stringToProxy( "dodo:tcp -p 10002");
    cout<<"server info: " << base << endl;
    HelloPrx hp = HelloPrx::checkedCast(base);
    if (hp)
      hp->sayHello();
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
