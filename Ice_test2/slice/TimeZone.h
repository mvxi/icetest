// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TimeZone.ice'

#ifndef __TimeZone_h__
#define __TimeZone_h__

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
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
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

namespace TimeZone
{

class Clock;

class WorldTime;

}

}

namespace TimeZone
{

class Clock;
bool operator==(const Clock&, const Clock&);
bool operator<(const Clock&, const Clock&);

class WorldTime;
bool operator==(const WorldTime&, const WorldTime&);
bool operator<(const WorldTime&, const WorldTime&);

}

namespace IceInternal
{

::Ice::Object* upCast(::TimeZone::Clock*);
::IceProxy::Ice::Object* upCast(::IceProxy::TimeZone::Clock*);

::Ice::Object* upCast(::TimeZone::WorldTime*);
::IceProxy::Ice::Object* upCast(::IceProxy::TimeZone::WorldTime*);

}

namespace TimeZone
{

typedef ::IceInternal::Handle< ::TimeZone::Clock> ClockPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::TimeZone::Clock> ClockPrx;

void __read(::IceInternal::BasicStream*, ClockPrx&);
void __patch__ClockPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::TimeZone::WorldTime> WorldTimePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::TimeZone::WorldTime> WorldTimePrx;

void __read(::IceInternal::BasicStream*, WorldTimePrx&);
void __patch__WorldTimePtr(void*, ::Ice::ObjectPtr&);

}

namespace TimeZone
{

class GenericError : public ::Ice::UserException
{
public:

    GenericError() {}
    explicit GenericError(const ::std::string&);
    virtual ~GenericError() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static GenericError __GenericError_init;

class BadTimeValue : public ::TimeZone::GenericError
{
public:

    BadTimeValue() {}
    explicit BadTimeValue(const ::std::string&);
    virtual ~BadTimeValue() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

struct TimeOfDay
{
    ::Ice::Int hour;
    ::Ice::Int minute;
    ::Ice::Int second;

    bool operator==(const TimeOfDay&) const;
    bool operator<(const TimeOfDay&) const;
    bool operator!=(const TimeOfDay& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const TimeOfDay& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const TimeOfDay& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const TimeOfDay& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::std::string, ::TimeZone::ClockPrx> TimeMap;
void __writeTimeMap(::IceInternal::BasicStream*, const TimeMap&);
void __readTimeMap(::IceInternal::BasicStream*, TimeMap&);

class BadZoneName : public ::TimeZone::GenericError
{
public:

    BadZoneName() {}
    explicit BadZoneName(const ::std::string&);
    virtual ~BadZoneName() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

namespace IceProxy
{

namespace TimeZone
{

class Clock : virtual public ::IceProxy::Ice::Object
{
public:

    ::TimeZone::TimeOfDay getTime()
    {
        return getTime(0);
    }
    ::TimeZone::TimeOfDay getTime(const ::Ice::Context& __ctx)
    {
        return getTime(&__ctx);
    }
    
private:

    ::TimeZone::TimeOfDay getTime(const ::Ice::Context*);
    
public:

    void setTime(const ::TimeZone::TimeOfDay& time)
    {
        setTime(time, 0);
    }
    void setTime(const ::TimeZone::TimeOfDay& time, const ::Ice::Context& __ctx)
    {
        setTime(time, &__ctx);
    }
    
private:

    void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Clock> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Clock> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Clock*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Clock*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class WorldTime : virtual public ::IceProxy::Ice::Object
{
public:

    void addZone(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c)
    {
        addZone(zoneName, c, 0);
    }
    void addZone(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c, const ::Ice::Context& __ctx)
    {
        addZone(zoneName, c, &__ctx);
    }
    
private:

    void addZone(const ::std::string&, const ::TimeZone::ClockPrx&, const ::Ice::Context*);
    
public:

    void removeZone(const ::std::string& zoneName)
    {
        removeZone(zoneName, 0);
    }
    void removeZone(const ::std::string& zoneName, const ::Ice::Context& __ctx)
    {
        removeZone(zoneName, &__ctx);
    }
    
private:

    void removeZone(const ::std::string&, const ::Ice::Context*);
    
public:

    ::TimeZone::ClockPrx findZone(const ::std::string& zoneName)
    {
        return findZone(zoneName, 0);
    }
    ::TimeZone::ClockPrx findZone(const ::std::string& zoneName, const ::Ice::Context& __ctx)
    {
        return findZone(zoneName, &__ctx);
    }
    
private:

    ::TimeZone::ClockPrx findZone(const ::std::string&, const ::Ice::Context*);
    
public:

    ::TimeZone::TimeMap listZones()
    {
        return listZones(0);
    }
    ::TimeZone::TimeMap listZones(const ::Ice::Context& __ctx)
    {
        return listZones(&__ctx);
    }
    
private:

    ::TimeZone::TimeMap listZones(const ::Ice::Context*);
    
public:

    void setZones(const ::TimeZone::TimeMap& zones)
    {
        setZones(zones, 0);
    }
    void setZones(const ::TimeZone::TimeMap& zones, const ::Ice::Context& __ctx)
    {
        setZones(zones, &__ctx);
    }
    
private:

    void setZones(const ::TimeZone::TimeMap&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<WorldTime> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WorldTime> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WorldTime*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<WorldTime*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace IceDelegate
{

namespace TimeZone
{

class Clock : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::TimeZone::TimeOfDay getTime(const ::Ice::Context*) = 0;

    virtual void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Context*) = 0;
};

class WorldTime : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void addZone(const ::std::string&, const ::TimeZone::ClockPrx&, const ::Ice::Context*) = 0;

    virtual void removeZone(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::TimeZone::ClockPrx findZone(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::TimeZone::TimeMap listZones(const ::Ice::Context*) = 0;

    virtual void setZones(const ::TimeZone::TimeMap&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace TimeZone
{

class Clock : virtual public ::IceDelegate::TimeZone::Clock,
              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::TimeZone::TimeOfDay getTime(const ::Ice::Context*);

    virtual void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Context*);
};

class WorldTime : virtual public ::IceDelegate::TimeZone::WorldTime,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void addZone(const ::std::string&, const ::TimeZone::ClockPrx&, const ::Ice::Context*);

    virtual void removeZone(const ::std::string&, const ::Ice::Context*);

    virtual ::TimeZone::ClockPrx findZone(const ::std::string&, const ::Ice::Context*);

    virtual ::TimeZone::TimeMap listZones(const ::Ice::Context*);

    virtual void setZones(const ::TimeZone::TimeMap&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace TimeZone
{

class Clock : virtual public ::IceDelegate::TimeZone::Clock,
              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::TimeZone::TimeOfDay getTime(const ::Ice::Context*);

    virtual void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Context*);
};

class WorldTime : virtual public ::IceDelegate::TimeZone::WorldTime,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void addZone(const ::std::string&, const ::TimeZone::ClockPrx&, const ::Ice::Context*);

    virtual void removeZone(const ::std::string&, const ::Ice::Context*);

    virtual ::TimeZone::ClockPrx findZone(const ::std::string&, const ::Ice::Context*);

    virtual ::TimeZone::TimeMap listZones(const ::Ice::Context*);

    virtual void setZones(const ::TimeZone::TimeMap&, const ::Ice::Context*);
};

}

}

namespace TimeZone
{

class Clock : virtual public ::Ice::Object
{
public:

    typedef ClockPrx ProxyType;
    typedef ClockPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::TimeZone::TimeOfDay getTime(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTime(const ::TimeZone::TimeOfDay&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class WorldTime : virtual public ::Ice::Object
{
public:

    typedef WorldTimePrx ProxyType;
    typedef WorldTimePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void addZone(const ::std::string&, const ::TimeZone::ClockPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addZone(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeZone(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeZone(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::TimeZone::ClockPrx findZone(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findZone(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::TimeZone::TimeMap listZones(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___listZones(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setZones(const ::TimeZone::TimeMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setZones(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif
