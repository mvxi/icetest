#include "Ice/Ice.h"
#include "Hello.h"

using namespace std;
using namespace Demo;
class HelloI : public Hello
{
 public:
   virtual void sayHello(const Ice::Current & current);

};
