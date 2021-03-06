// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#include <Ice/Ice.h>
#include <HelloServiceI.h>
#include <HelloI.h>
#include <iostream>

using namespace std;

extern "C"
{

//
// Factory function
//
ICE_DECLSPEC_EXPORT IceBox::Service*
create(Ice::CommunicatorPtr communicator)
{
    return new HelloServiceI;
}

}

HelloServiceI::HelloServiceI()
{
}

HelloServiceI::~HelloServiceI()
{
}

void
HelloServiceI::start(const string& name, const Ice::CommunicatorPtr& communicator, const Ice::StringSeq& args)
{
   cout << "objectadapter: " <<name <<endl;
    _adapter = communicator->createObjectAdapter(name);
    Demo::HelloPtr hello = new HelloI;
    _adapter->add(hello, communicator->stringToIdentity("dodo"));
    _adapter->activate();
}

void
HelloServiceI::stop()
{
    _adapter->destroy();
}
