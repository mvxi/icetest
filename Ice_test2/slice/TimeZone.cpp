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

#include <TimeZone.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

static const ::std::string __TimeZone__Clock__getTime_name = "getTime";

static const ::std::string __TimeZone__Clock__setTime_name = "setTime";

static const ::std::string __TimeZone__WorldTime__addZone_name = "addZone";

static const ::std::string __TimeZone__WorldTime__removeZone_name = "removeZone";

static const ::std::string __TimeZone__WorldTime__findZone_name = "findZone";

static const ::std::string __TimeZone__WorldTime__listZones_name = "listZones";

static const ::std::string __TimeZone__WorldTime__setZones_name = "setZones";

::Ice::Object* IceInternal::upCast(::TimeZone::Clock* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::TimeZone::Clock* p) { return p; }

::Ice::Object* IceInternal::upCast(::TimeZone::WorldTime* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::TimeZone::WorldTime* p) { return p; }

void
TimeZone::__read(::IceInternal::BasicStream* __is, ::TimeZone::ClockPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::TimeZone::Clock;
        v->__copyFrom(proxy);
    }
}

void
TimeZone::__read(::IceInternal::BasicStream* __is, ::TimeZone::WorldTimePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::TimeZone::WorldTime;
        v->__copyFrom(proxy);
    }
}

TimeZone::GenericError::GenericError(const ::std::string& __ice_reason) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    UserException(),
#else
    ::Ice::UserException(),
#endif
    reason(__ice_reason)
{
}

TimeZone::GenericError::~GenericError() throw()
{
}

static const char* __TimeZone__GenericError_name = "TimeZone::GenericError";

::std::string
TimeZone::GenericError::ice_name() const
{
    return __TimeZone__GenericError_name;
}

::Ice::Exception*
TimeZone::GenericError::ice_clone() const
{
    return new GenericError(*this);
}

void
TimeZone::GenericError::ice_throw() const
{
    throw *this;
}

void
TimeZone::GenericError::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::TimeZone::GenericError"), false);
    __os->startWriteSlice();
    __os->write(reason);
    __os->endWriteSlice();
}

void
TimeZone::GenericError::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(reason);
    __is->endReadSlice();
}

void
TimeZone::GenericError::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::GenericError was not generated with stream support";
    throw ex;
}

void
TimeZone::GenericError::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::GenericError was not generated with stream support";
    throw ex;
}

struct __F__TimeZone__GenericError : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::TimeZone::GenericError();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__TimeZone__GenericError__Ptr = new __F__TimeZone__GenericError;

const ::IceInternal::UserExceptionFactoryPtr&
TimeZone::GenericError::ice_factory()
{
    return __F__TimeZone__GenericError__Ptr;
}

class __F__TimeZone__GenericError__Init
{
public:

    __F__TimeZone__GenericError__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::TimeZone::GenericError", ::TimeZone::GenericError::ice_factory());
    }

    ~__F__TimeZone__GenericError__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::TimeZone::GenericError");
    }
};

static __F__TimeZone__GenericError__Init __F__TimeZone__GenericError__i;

#ifdef __APPLE__
extern "C" { void __F__TimeZone__GenericError__initializer() {} }
#endif

TimeZone::BadTimeValue::BadTimeValue(const ::std::string& __ice_reason) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError(__ice_reason)
#else
    ::TimeZone::GenericError(__ice_reason)
#endif
{
}

TimeZone::BadTimeValue::~BadTimeValue() throw()
{
}

static const char* __TimeZone__BadTimeValue_name = "TimeZone::BadTimeValue";

::std::string
TimeZone::BadTimeValue::ice_name() const
{
    return __TimeZone__BadTimeValue_name;
}

::Ice::Exception*
TimeZone::BadTimeValue::ice_clone() const
{
    return new BadTimeValue(*this);
}

void
TimeZone::BadTimeValue::ice_throw() const
{
    throw *this;
}

void
TimeZone::BadTimeValue::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::TimeZone::BadTimeValue"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError::__write(__os);
#else
    ::TimeZone::GenericError::__write(__os);
#endif
}

void
TimeZone::BadTimeValue::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError::__read(__is, true);
#else
    ::TimeZone::GenericError::__read(__is, true);
#endif
}

void
TimeZone::BadTimeValue::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::BadTimeValue was not generated with stream support";
    throw ex;
}

void
TimeZone::BadTimeValue::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::BadTimeValue was not generated with stream support";
    throw ex;
}

struct __F__TimeZone__BadTimeValue : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::TimeZone::BadTimeValue();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__TimeZone__BadTimeValue__Ptr = new __F__TimeZone__BadTimeValue;

const ::IceInternal::UserExceptionFactoryPtr&
TimeZone::BadTimeValue::ice_factory()
{
    return __F__TimeZone__BadTimeValue__Ptr;
}

class __F__TimeZone__BadTimeValue__Init
{
public:

    __F__TimeZone__BadTimeValue__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::TimeZone::BadTimeValue", ::TimeZone::BadTimeValue::ice_factory());
    }

    ~__F__TimeZone__BadTimeValue__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::TimeZone::BadTimeValue");
    }
};

static __F__TimeZone__BadTimeValue__Init __F__TimeZone__BadTimeValue__i;

#ifdef __APPLE__
extern "C" { void __F__TimeZone__BadTimeValue__initializer() {} }
#endif

bool
TimeZone::TimeOfDay::operator==(const TimeOfDay& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(hour != __rhs.hour)
    {
        return false;
    }
    if(minute != __rhs.minute)
    {
        return false;
    }
    if(second != __rhs.second)
    {
        return false;
    }
    return true;
}

bool
TimeZone::TimeOfDay::operator<(const TimeOfDay& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(hour < __rhs.hour)
    {
        return true;
    }
    else if(__rhs.hour < hour)
    {
        return false;
    }
    if(minute < __rhs.minute)
    {
        return true;
    }
    else if(__rhs.minute < minute)
    {
        return false;
    }
    if(second < __rhs.second)
    {
        return true;
    }
    else if(__rhs.second < second)
    {
        return false;
    }
    return false;
}

void
TimeZone::TimeOfDay::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(hour);
    __os->write(minute);
    __os->write(second);
}

void
TimeZone::TimeOfDay::__read(::IceInternal::BasicStream* __is)
{
    __is->read(hour);
    __is->read(minute);
    __is->read(second);
}

void
TimeZone::__writeTimeMap(::IceInternal::BasicStream* __os, const ::TimeZone::TimeMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::TimeZone::TimeMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(p->second.get())));
    }
}

void
TimeZone::__readTimeMap(::IceInternal::BasicStream* __is, ::TimeZone::TimeMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::TimeZone::ClockPrx> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::TimeZone::TimeMap::iterator __i = v.insert(v.end(), pair);
        ::TimeZone::__read(__is, __i->second);
    }
}

TimeZone::BadZoneName::BadZoneName(const ::std::string& __ice_reason) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError(__ice_reason)
#else
    ::TimeZone::GenericError(__ice_reason)
#endif
{
}

TimeZone::BadZoneName::~BadZoneName() throw()
{
}

static const char* __TimeZone__BadZoneName_name = "TimeZone::BadZoneName";

::std::string
TimeZone::BadZoneName::ice_name() const
{
    return __TimeZone__BadZoneName_name;
}

::Ice::Exception*
TimeZone::BadZoneName::ice_clone() const
{
    return new BadZoneName(*this);
}

void
TimeZone::BadZoneName::ice_throw() const
{
    throw *this;
}

void
TimeZone::BadZoneName::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::TimeZone::BadZoneName"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError::__write(__os);
#else
    ::TimeZone::GenericError::__write(__os);
#endif
}

void
TimeZone::BadZoneName::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    GenericError::__read(__is, true);
#else
    ::TimeZone::GenericError::__read(__is, true);
#endif
}

void
TimeZone::BadZoneName::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::BadZoneName was not generated with stream support";
    throw ex;
}

void
TimeZone::BadZoneName::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception TimeZone::BadZoneName was not generated with stream support";
    throw ex;
}

struct __F__TimeZone__BadZoneName : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::TimeZone::BadZoneName();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__TimeZone__BadZoneName__Ptr = new __F__TimeZone__BadZoneName;

const ::IceInternal::UserExceptionFactoryPtr&
TimeZone::BadZoneName::ice_factory()
{
    return __F__TimeZone__BadZoneName__Ptr;
}

class __F__TimeZone__BadZoneName__Init
{
public:

    __F__TimeZone__BadZoneName__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::TimeZone::BadZoneName", ::TimeZone::BadZoneName::ice_factory());
    }

    ~__F__TimeZone__BadZoneName__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::TimeZone::BadZoneName");
    }
};

static __F__TimeZone__BadZoneName__Init __F__TimeZone__BadZoneName__i;

#ifdef __APPLE__
extern "C" { void __F__TimeZone__BadZoneName__initializer() {} }
#endif

::TimeZone::TimeOfDay
IceProxy::TimeZone::Clock::getTime(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__TimeZone__Clock__getTime_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::Clock* __del = dynamic_cast< ::IceDelegate::TimeZone::Clock*>(__delBase.get());
            return __del->getTime(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::TimeZone::Clock::setTime(const ::TimeZone::TimeOfDay& time, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__TimeZone__Clock__setTime_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::Clock* __del = dynamic_cast< ::IceDelegate::TimeZone::Clock*>(__delBase.get());
            __del->setTime(time, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::TimeZone::Clock::ice_staticId()
{
    return ::TimeZone::Clock::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::TimeZone::Clock::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::TimeZone::Clock);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::TimeZone::Clock::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::TimeZone::Clock);
}

::IceProxy::Ice::Object*
IceProxy::TimeZone::Clock::__newInstance() const
{
    return new Clock;
}

void
IceProxy::TimeZone::WorldTime::addZone(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::WorldTime* __del = dynamic_cast< ::IceDelegate::TimeZone::WorldTime*>(__delBase.get());
            __del->addZone(zoneName, c, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::TimeZone::WorldTime::removeZone(const ::std::string& zoneName, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__TimeZone__WorldTime__removeZone_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::WorldTime* __del = dynamic_cast< ::IceDelegate::TimeZone::WorldTime*>(__delBase.get());
            __del->removeZone(zoneName, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::TimeZone::ClockPrx
IceProxy::TimeZone::WorldTime::findZone(const ::std::string& zoneName, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__TimeZone__WorldTime__findZone_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::WorldTime* __del = dynamic_cast< ::IceDelegate::TimeZone::WorldTime*>(__delBase.get());
            return __del->findZone(zoneName, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::TimeZone::TimeMap
IceProxy::TimeZone::WorldTime::listZones(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__TimeZone__WorldTime__listZones_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::WorldTime* __del = dynamic_cast< ::IceDelegate::TimeZone::WorldTime*>(__delBase.get());
            return __del->listZones(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::TimeZone::WorldTime::setZones(const ::TimeZone::TimeMap& zones, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::TimeZone::WorldTime* __del = dynamic_cast< ::IceDelegate::TimeZone::WorldTime*>(__delBase.get());
            __del->setZones(zones, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::TimeZone::WorldTime::ice_staticId()
{
    return ::TimeZone::WorldTime::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::TimeZone::WorldTime::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::TimeZone::WorldTime);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::TimeZone::WorldTime::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::TimeZone::WorldTime);
}

::IceProxy::Ice::Object*
IceProxy::TimeZone::WorldTime::__newInstance() const
{
    return new WorldTime;
}

::TimeZone::TimeOfDay
IceDelegateM::TimeZone::Clock::getTime(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__Clock__getTime_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::TimeZone::TimeOfDay __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::TimeZone::Clock::setTime(const ::TimeZone::TimeOfDay& time, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__Clock__setTime_name, ::Ice::Idempotent, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        time.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::TimeZone::BadTimeValue&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        __og.is()->skipEmptyEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::TimeZone::WorldTime::addZone(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__WorldTime__addZone_name, ::Ice::Idempotent, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(zoneName);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(c.get())));
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::TimeZone::WorldTime::removeZone(const ::std::string& zoneName, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__WorldTime__removeZone_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(zoneName);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::TimeZone::BadZoneName&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        __og.is()->skipEmptyEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::TimeZone::ClockPrx
IceDelegateM::TimeZone::WorldTime::findZone(const ::std::string& zoneName, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__WorldTime__findZone_name, ::Ice::Idempotent, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(zoneName);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::TimeZone::ClockPrx __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::TimeZone::BadZoneName&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::TimeZone::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::TimeZone::TimeMap
IceDelegateM::TimeZone::WorldTime::listZones(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__WorldTime__listZones_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::TimeZone::TimeMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::TimeZone::__readTimeMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::TimeZone::WorldTime::setZones(const ::TimeZone::TimeMap& zones, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __TimeZone__WorldTime__setZones_name, ::Ice::Idempotent, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::TimeZone::__writeTimeMap(__os, zones);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::TimeZone::TimeOfDay
IceDelegateD::TimeZone::Clock::getTime(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::TimeZone::TimeOfDay& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::Clock* servant = dynamic_cast< ::TimeZone::Clock*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getTime(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::TimeZone::TimeOfDay& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__Clock__getTime_name, ::Ice::Idempotent, __context);
    ::TimeZone::TimeOfDay __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::TimeZone::Clock::setTime(const ::TimeZone::TimeOfDay& time, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::TimeZone::TimeOfDay& time, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_time(time)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::Clock* servant = dynamic_cast< ::TimeZone::Clock*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                servant->setTime(_m_time, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        const ::TimeZone::TimeOfDay& _m_time;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__Clock__setTime_name, ::Ice::Idempotent, __context);
    try
    {
        _DirectI __direct(time, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::TimeZone::BadTimeValue&)
    {
        throw;
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::TimeZone::WorldTime::addZone(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& zoneName, const ::TimeZone::ClockPrx& c, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_zoneName(zoneName),
            _m_c(c)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::WorldTime* servant = dynamic_cast< ::TimeZone::WorldTime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addZone(_m_zoneName, _m_c, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_zoneName;
        const ::TimeZone::ClockPrx& _m_c;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__WorldTime__addZone_name, ::Ice::Idempotent, __context);
    try
    {
        _DirectI __direct(zoneName, c, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::TimeZone::WorldTime::removeZone(const ::std::string& zoneName, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& zoneName, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_zoneName(zoneName)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::WorldTime* servant = dynamic_cast< ::TimeZone::WorldTime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                servant->removeZone(_m_zoneName, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        const ::std::string& _m_zoneName;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__WorldTime__removeZone_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(zoneName, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::TimeZone::BadZoneName&)
    {
        throw;
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::TimeZone::ClockPrx
IceDelegateD::TimeZone::WorldTime::findZone(const ::std::string& zoneName, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::TimeZone::ClockPrx& __result, const ::std::string& zoneName, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_zoneName(zoneName)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::WorldTime* servant = dynamic_cast< ::TimeZone::WorldTime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->findZone(_m_zoneName, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        ::TimeZone::ClockPrx& _result;
        const ::std::string& _m_zoneName;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__WorldTime__findZone_name, ::Ice::Idempotent, __context);
    ::TimeZone::ClockPrx __result;
    try
    {
        _DirectI __direct(__result, zoneName, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::TimeZone::BadZoneName&)
    {
        throw;
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::TimeZone::TimeMap
IceDelegateD::TimeZone::WorldTime::listZones(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::TimeZone::TimeMap& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::WorldTime* servant = dynamic_cast< ::TimeZone::WorldTime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->listZones(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::TimeZone::TimeMap& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__WorldTime__listZones_name, ::Ice::Idempotent, __context);
    ::TimeZone::TimeMap __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::TimeZone::WorldTime::setZones(const ::TimeZone::TimeMap& zones, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::TimeZone::TimeMap& zones, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_zones(zones)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::TimeZone::WorldTime* servant = dynamic_cast< ::TimeZone::WorldTime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setZones(_m_zones, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::TimeZone::TimeMap& _m_zones;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __TimeZone__WorldTime__setZones_name, ::Ice::Idempotent, __context);
    try
    {
        _DirectI __direct(zones, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::ObjectPtr
TimeZone::Clock::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __TimeZone__Clock_ids[2] =
{
    "::Ice::Object",
    "::TimeZone::Clock"
};

bool
TimeZone::Clock::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__TimeZone__Clock_ids, __TimeZone__Clock_ids + 2, _s);
}

::std::vector< ::std::string>
TimeZone::Clock::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__TimeZone__Clock_ids[0], &__TimeZone__Clock_ids[2]);
}

const ::std::string&
TimeZone::Clock::ice_id(const ::Ice::Current&) const
{
    return __TimeZone__Clock_ids[1];
}

const ::std::string&
TimeZone::Clock::ice_staticId()
{
    return __TimeZone__Clock_ids[1];
}

::Ice::DispatchStatus
TimeZone::Clock::___getTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::TimeZone::TimeOfDay __ret = getTime(__current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
TimeZone::Clock::___setTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::TimeZone::TimeOfDay time;
    time.__read(__is);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        setTime(time, __current);
    }
    catch(const ::TimeZone::BadTimeValue& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

static ::std::string __TimeZone__Clock_all[] =
{
    "getTime",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setTime"
};

::Ice::DispatchStatus
TimeZone::Clock::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__TimeZone__Clock_all, __TimeZone__Clock_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __TimeZone__Clock_all)
    {
        case 0:
        {
            return ___getTime(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___setTime(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
TimeZone::Clock::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
TimeZone::Clock::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
TimeZone::Clock::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TimeZone::Clock was not generated with stream support";
    throw ex;
}

void
TimeZone::Clock::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TimeZone::Clock was not generated with stream support";
    throw ex;
}

void 
TimeZone::__patch__ClockPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::TimeZone::ClockPtr* p = static_cast< ::TimeZone::ClockPtr*>(__addr);
    assert(p);
    *p = ::TimeZone::ClockPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::TimeZone::Clock::ice_staticId(), v->ice_id());
    }
}

bool
TimeZone::operator==(const ::TimeZone::Clock& l, const ::TimeZone::Clock& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
TimeZone::operator<(const ::TimeZone::Clock& l, const ::TimeZone::Clock& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
TimeZone::WorldTime::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __TimeZone__WorldTime_ids[2] =
{
    "::Ice::Object",
    "::TimeZone::WorldTime"
};

bool
TimeZone::WorldTime::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__TimeZone__WorldTime_ids, __TimeZone__WorldTime_ids + 2, _s);
}

::std::vector< ::std::string>
TimeZone::WorldTime::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__TimeZone__WorldTime_ids[0], &__TimeZone__WorldTime_ids[2]);
}

const ::std::string&
TimeZone::WorldTime::ice_id(const ::Ice::Current&) const
{
    return __TimeZone__WorldTime_ids[1];
}

const ::std::string&
TimeZone::WorldTime::ice_staticId()
{
    return __TimeZone__WorldTime_ids[1];
}

::Ice::DispatchStatus
TimeZone::WorldTime::___addZone(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string zoneName;
    ::TimeZone::ClockPrx c;
    __is->read(zoneName);
    ::TimeZone::__read(__is, c);
    __is->endReadEncaps();
    addZone(zoneName, c, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
TimeZone::WorldTime::___removeZone(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string zoneName;
    __is->read(zoneName);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        removeZone(zoneName, __current);
    }
    catch(const ::TimeZone::BadZoneName& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
TimeZone::WorldTime::___findZone(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string zoneName;
    __is->read(zoneName);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::TimeZone::ClockPrx __ret = findZone(zoneName, __current);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    }
    catch(const ::TimeZone::BadZoneName& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
TimeZone::WorldTime::___listZones(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::TimeZone::TimeMap __ret = listZones(__current);
    ::TimeZone::__writeTimeMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
TimeZone::WorldTime::___setZones(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::TimeZone::TimeMap zones;
    ::TimeZone::__readTimeMap(__is, zones);
    __is->endReadEncaps();
    setZones(zones, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __TimeZone__WorldTime_all[] =
{
    "addZone",
    "findZone",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "listZones",
    "removeZone",
    "setZones"
};

::Ice::DispatchStatus
TimeZone::WorldTime::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__TimeZone__WorldTime_all, __TimeZone__WorldTime_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __TimeZone__WorldTime_all)
    {
        case 0:
        {
            return ___addZone(in, current);
        }
        case 1:
        {
            return ___findZone(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
        case 6:
        {
            return ___listZones(in, current);
        }
        case 7:
        {
            return ___removeZone(in, current);
        }
        case 8:
        {
            return ___setZones(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
TimeZone::WorldTime::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
TimeZone::WorldTime::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
TimeZone::WorldTime::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TimeZone::WorldTime was not generated with stream support";
    throw ex;
}

void
TimeZone::WorldTime::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type TimeZone::WorldTime was not generated with stream support";
    throw ex;
}

void 
TimeZone::__patch__WorldTimePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::TimeZone::WorldTimePtr* p = static_cast< ::TimeZone::WorldTimePtr*>(__addr);
    assert(p);
    *p = ::TimeZone::WorldTimePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::TimeZone::WorldTime::ice_staticId(), v->ice_id());
    }
}

bool
TimeZone::operator==(const ::TimeZone::WorldTime& l, const ::TimeZone::WorldTime& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
TimeZone::operator<(const ::TimeZone::WorldTime& l, const ::TimeZone::WorldTime& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
