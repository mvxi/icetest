// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TimeInfo.ice'

#include <TimeInfo.h>
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

static const ::std::string __Temp__TimeInfo__getServerTime_name = "getServerTime";

static const ::std::string __Temp__TimeInfo__getServerInfo_name = "getServerInfo";

static const ::std::string __Temp__TimeInfo__getServerInfos_name = "getServerInfos";

static const ::std::string __Temp__TimeInfo__getTimeInfo_name = "getTimeInfo";

::Ice::Object* IceInternal::upCast(::Temp::TimeInfo* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::Temp::TimeInfo* p) { return p; }

void
Temp::__read(::IceInternal::BasicStream* __is, ::Temp::TimeInfoPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Temp::TimeInfo;
        v->__copyFrom(proxy);
    }
}

bool
Temp::TimeOfDay::operator==(const TimeOfDay& __rhs) const
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
Temp::TimeOfDay::operator<(const TimeOfDay& __rhs) const
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
Temp::TimeOfDay::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(hour);
    __os->write(minute);
    __os->write(second);
}

void
Temp::TimeOfDay::__read(::IceInternal::BasicStream* __is)
{
    __is->read(hour);
    __is->read(minute);
    __is->read(second);
}

::Temp::TimeOfDay
IceProxy::Temp::TimeInfo::getServerTime(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Temp__TimeInfo__getServerTime_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Temp::TimeInfo* __del = dynamic_cast< ::IceDelegate::Temp::TimeInfo*>(__delBase.get());
            return __del->getServerTime(__ctx);
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

::std::string
IceProxy::Temp::TimeInfo::getServerInfo(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Temp__TimeInfo__getServerInfo_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Temp::TimeInfo* __del = dynamic_cast< ::IceDelegate::Temp::TimeInfo*>(__delBase.get());
            return __del->getServerInfo(__ctx);
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

::Temp::Infos
IceProxy::Temp::TimeInfo::getServerInfos(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Temp__TimeInfo__getServerInfos_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Temp::TimeInfo* __del = dynamic_cast< ::IceDelegate::Temp::TimeInfo*>(__delBase.get());
            return __del->getServerInfos(__ctx);
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

::Temp::TimeInfoPrx
IceProxy::Temp::TimeInfo::getTimeInfo(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__Temp__TimeInfo__getTimeInfo_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Temp::TimeInfo* __del = dynamic_cast< ::IceDelegate::Temp::TimeInfo*>(__delBase.get());
            return __del->getTimeInfo(__ctx);
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

const ::std::string&
IceProxy::Temp::TimeInfo::ice_staticId()
{
    return ::Temp::TimeInfo::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Temp::TimeInfo::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Temp::TimeInfo);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Temp::TimeInfo::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Temp::TimeInfo);
}

::IceProxy::Ice::Object*
IceProxy::Temp::TimeInfo::__newInstance() const
{
    return new TimeInfo;
}

::Temp::TimeOfDay
IceDelegateM::Temp::TimeInfo::getServerTime(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Temp__TimeInfo__getServerTime_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::Temp::TimeOfDay __ret;
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

::std::string
IceDelegateM::Temp::TimeInfo::getServerInfo(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Temp__TimeInfo__getServerInfo_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::std::string __ret;
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
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Temp::Infos
IceDelegateM::Temp::TimeInfo::getServerInfos(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Temp__TimeInfo__getServerInfos_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::Temp::Infos __ret;
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
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Temp::TimeInfoPrx
IceDelegateM::Temp::TimeInfo::getTimeInfo(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Temp__TimeInfo__getTimeInfo_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::Temp::TimeInfoPrx __ret;
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
        ::Temp::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Temp::TimeOfDay
IceDelegateD::Temp::TimeInfo::getServerTime(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Temp::TimeOfDay& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Temp::TimeInfo* servant = dynamic_cast< ::Temp::TimeInfo*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getServerTime(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Temp::TimeOfDay& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Temp__TimeInfo__getServerTime_name, ::Ice::Normal, __context);
    ::Temp::TimeOfDay __result;
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

::std::string
IceDelegateD::Temp::TimeInfo::getServerInfo(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Temp::TimeInfo* servant = dynamic_cast< ::Temp::TimeInfo*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getServerInfo(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Temp__TimeInfo__getServerInfo_name, ::Ice::Normal, __context);
    ::std::string __result;
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

::Temp::Infos
IceDelegateD::Temp::TimeInfo::getServerInfos(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Temp::Infos& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Temp::TimeInfo* servant = dynamic_cast< ::Temp::TimeInfo*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getServerInfos(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Temp::Infos& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Temp__TimeInfo__getServerInfos_name, ::Ice::Normal, __context);
    ::Temp::Infos __result;
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

::Temp::TimeInfoPrx
IceDelegateD::Temp::TimeInfo::getTimeInfo(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Temp::TimeInfoPrx& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Temp::TimeInfo* servant = dynamic_cast< ::Temp::TimeInfo*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getTimeInfo(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Temp::TimeInfoPrx& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Temp__TimeInfo__getTimeInfo_name, ::Ice::Normal, __context);
    ::Temp::TimeInfoPrx __result;
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

::Ice::ObjectPtr
Temp::TimeInfo::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __Temp__TimeInfo_ids[2] =
{
    "::Ice::Object",
    "::Temp::TimeInfo"
};

bool
Temp::TimeInfo::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Temp__TimeInfo_ids, __Temp__TimeInfo_ids + 2, _s);
}

::std::vector< ::std::string>
Temp::TimeInfo::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Temp__TimeInfo_ids[0], &__Temp__TimeInfo_ids[2]);
}

const ::std::string&
Temp::TimeInfo::ice_id(const ::Ice::Current&) const
{
    return __Temp__TimeInfo_ids[1];
}

const ::std::string&
Temp::TimeInfo::ice_staticId()
{
    return __Temp__TimeInfo_ids[1];
}

::Ice::DispatchStatus
Temp::TimeInfo::___getServerTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Temp::TimeOfDay __ret = getServerTime(__current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Temp::TimeInfo::___getServerInfo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = getServerInfo(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Temp::TimeInfo::___getServerInfos(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Temp::Infos __ret = getServerInfos(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Temp::TimeInfo::___getTimeInfo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Temp::TimeInfoPrx __ret = getTimeInfo(__current);
    __os->write(::Ice::ObjectPrx(::IceInternal::upCast(__ret.get())));
    return ::Ice::DispatchOK;
}

static ::std::string __Temp__TimeInfo_all[] =
{
    "getServerInfo",
    "getServerInfos",
    "getServerTime",
    "getTimeInfo",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
Temp::TimeInfo::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__Temp__TimeInfo_all, __Temp__TimeInfo_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Temp__TimeInfo_all)
    {
        case 0:
        {
            return ___getServerInfo(in, current);
        }
        case 1:
        {
            return ___getServerInfos(in, current);
        }
        case 2:
        {
            return ___getServerTime(in, current);
        }
        case 3:
        {
            return ___getTimeInfo(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Temp::TimeInfo::__write(::IceInternal::BasicStream* __os) const
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
Temp::TimeInfo::__read(::IceInternal::BasicStream* __is, bool __rid)
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
Temp::TimeInfo::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Temp::TimeInfo was not generated with stream support";
    throw ex;
}

void
Temp::TimeInfo::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type Temp::TimeInfo was not generated with stream support";
    throw ex;
}

void 
Temp::__patch__TimeInfoPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::Temp::TimeInfoPtr* p = static_cast< ::Temp::TimeInfoPtr*>(__addr);
    assert(p);
    *p = ::Temp::TimeInfoPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::Temp::TimeInfo::ice_staticId(), v->ice_id());
    }
}

bool
Temp::operator==(const ::Temp::TimeInfo& l, const ::Temp::TimeInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
Temp::operator<(const ::Temp::TimeInfo& l, const ::Temp::TimeInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
