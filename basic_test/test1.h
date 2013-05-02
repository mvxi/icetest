// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `test1.ice'

#ifndef __test1_h__
#define __test1_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace level1
{

namespace level2
{

class test;

}

}

}

namespace level1
{

namespace level2
{

class test;
bool operator==(const test&, const test&);
bool operator<(const test&, const test&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::level1::level2::test*);
::IceProxy::Ice::Object* upCast(::IceProxy::level1::level2::test*);

}

namespace level1
{

namespace level2
{

typedef ::IceInternal::Handle< ::level1::level2::test> testPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::level1::level2::test> testPrx;

void __read(::IceInternal::BasicStream*, testPrx&);
void __patch__testPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace level1
{

namespace level2
{

struct coco
{
    ::Ice::Int a;
    ::std::string b;

    bool operator==(const coco&) const;
    bool operator<(const coco&) const;
    bool operator!=(const coco& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const coco& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const coco& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const coco& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::level1::level2::coco> cocoseq;
void __writecocoseq(::IceInternal::BasicStream*, const ::level1::level2::coco*, const ::level1::level2::coco*);
void __readcocoseq(::IceInternal::BasicStream*, cocoseq&);

struct vivi
{
    ::level1::level2::coco c;
    ::std::string d;

    bool operator==(const vivi&) const;
    bool operator<(const vivi&) const;
    bool operator!=(const vivi& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const vivi& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const vivi& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const vivi& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::level1::level2::vivi> viviseq;
void __writeviviseq(::IceInternal::BasicStream*, const ::level1::level2::vivi*, const ::level1::level2::vivi*);
void __readviviseq(::IceInternal::BasicStream*, viviseq&);

typedef ::std::map< ::std::string, ::level1::level2::vivi> vivimap;
void __writevivimap(::IceInternal::BasicStream*, const vivimap&);
void __readvivimap(::IceInternal::BasicStream*, vivimap&);

}

}

namespace IceProxy
{

namespace level1
{

namespace level2
{

class test : virtual public ::IceProxy::Ice::Object
{
public:

    ::level1::level2::vivi output(const ::level1::level2::coco& c)
    {
        return output(c, 0);
    }
    ::level1::level2::vivi output(const ::level1::level2::coco& c, const ::Ice::Context& __ctx)
    {
        return output(c, &__ctx);
    }
    
private:

    ::level1::level2::vivi output(const ::level1::level2::coco&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<test> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<test> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<test*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<test*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace level1
{

namespace level2
{

class test : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::level1::level2::vivi output(const ::level1::level2::coco&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace level1
{

namespace level2
{

class test : virtual public ::IceDelegate::level1::level2::test,
             virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::level1::level2::vivi output(const ::level1::level2::coco&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace level1
{

namespace level2
{

class test : virtual public ::IceDelegate::level1::level2::test,
             virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::level1::level2::vivi output(const ::level1::level2::coco&, const ::Ice::Context*);
};

}

}

}

namespace level1
{

namespace level2
{

class test : virtual public ::Ice::Object
{
public:

    typedef testPrx ProxyType;
    typedef testPtr PointerType;
    
    test() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::level1::level2::vivi output(const ::level1::level2::coco&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___output(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
