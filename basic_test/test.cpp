// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `test.ice'

#include <test.h>
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

static const ::std::string __level1__level2__test__output_name = "output";

::Ice::Object* IceInternal::upCast(::level1::level2::coco* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::level1::level2::coco* p) { return p; }

::Ice::Object* IceInternal::upCast(::level1::level2::vivi* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::level1::level2::vivi* p) { return p; }

::Ice::Object* IceInternal::upCast(::level1::level2::test* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::level1::level2::test* p) { return p; }

void
level1::level2::__read(::IceInternal::BasicStream* __is, ::level1::level2::cocoPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::level1::level2::coco;
        v->__copyFrom(proxy);
    }
}

void
level1::level2::__read(::IceInternal::BasicStream* __is, ::level1::level2::viviPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::level1::level2::vivi;
        v->__copyFrom(proxy);
    }
}

void
level1::level2::__read(::IceInternal::BasicStream* __is, ::level1::level2::testPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::level1::level2::test;
        v->__copyFrom(proxy);
    }
}

void
level1::level2::__writecocoseq(::IceInternal::BasicStream* __os, const ::level1::level2::cocoPtr* begin, const ::level1::level2::cocoPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
level1::level2::__readcocoseq(::IceInternal::BasicStream* __is, ::level1::level2::cocoseq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::level1::level2::__patch__cocoPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
level1::level2::__writeviviseq(::IceInternal::BasicStream* __os, const ::level1::level2::viviPtr* begin, const ::level1::level2::viviPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
level1::level2::__readviviseq(::IceInternal::BasicStream* __is, ::level1::level2::viviseq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::level1::level2::__patch__viviPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
level1::level2::__writevivimap(::IceInternal::BasicStream* __os, const ::level1::level2::vivimap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::level1::level2::vivimap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
level1::level2::__readvivimap(::IceInternal::BasicStream* __is, ::level1::level2::vivimap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::level1::level2::viviPtr> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::level1::level2::vivimap::iterator __i = v.insert(v.end(), pair);
        __is->read(::level1::level2::__patch__viviPtr, &__i->second);
    }
}

const ::std::string&
IceProxy::level1::level2::coco::ice_staticId()
{
    return ::level1::level2::coco::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::level1::level2::coco::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::level1::level2::coco);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::level1::level2::coco::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::level1::level2::coco);
}

::IceProxy::Ice::Object*
IceProxy::level1::level2::coco::__newInstance() const
{
    return new coco;
}

const ::std::string&
IceProxy::level1::level2::vivi::ice_staticId()
{
    return ::level1::level2::vivi::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::level1::level2::vivi::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::level1::level2::vivi);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::level1::level2::vivi::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::level1::level2::vivi);
}

::IceProxy::Ice::Object*
IceProxy::level1::level2::vivi::__newInstance() const
{
    return new vivi;
}

::level1::level2::viviPtr
IceProxy::level1::level2::test::output(const ::level1::level2::cocoPtr& c, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__level1__level2__test__output_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::level1::level2::test* __del = dynamic_cast< ::IceDelegate::level1::level2::test*>(__delBase.get());
            return __del->output(c, __ctx);
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
IceProxy::level1::level2::test::ice_staticId()
{
    return ::level1::level2::test::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::level1::level2::test::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::level1::level2::test);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::level1::level2::test::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::level1::level2::test);
}

::IceProxy::Ice::Object*
IceProxy::level1::level2::test::__newInstance() const
{
    return new test;
}

::level1::level2::viviPtr
IceDelegateM::level1::level2::test::output(const ::level1::level2::cocoPtr& c, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __level1__level2__test__output_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(c.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::level1::level2::viviPtr __ret;
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
        __is->read(::level1::level2::__patch__viviPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::level1::level2::viviPtr
IceDelegateD::level1::level2::test::output(const ::level1::level2::cocoPtr& c, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::level1::level2::viviPtr& __result, const ::level1::level2::cocoPtr& c, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_c(c)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::level1::level2::test* servant = dynamic_cast< ::level1::level2::test*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->output(_m_c, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::level1::level2::viviPtr& _result;
        const ::level1::level2::cocoPtr& _m_c;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __level1__level2__test__output_name, ::Ice::Normal, __context);
    ::level1::level2::viviPtr __result;
    try
    {
        _DirectI __direct(__result, c, __current);
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

level1::level2::coco::coco(::Ice::Int __ice_a, const ::std::string& __ice_b) :
    a(__ice_a),
    b(__ice_b)
{
}

::Ice::ObjectPtr
level1::level2::coco::ice_clone() const
{
    ::level1::level2::cocoPtr __p = new ::level1::level2::coco(*this);
    return __p;
}

static const ::std::string __level1__level2__coco_ids[2] =
{
    "::Ice::Object",
    "::level1::level2::coco"
};

bool
level1::level2::coco::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__level1__level2__coco_ids, __level1__level2__coco_ids + 2, _s);
}

::std::vector< ::std::string>
level1::level2::coco::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__level1__level2__coco_ids[0], &__level1__level2__coco_ids[2]);
}

const ::std::string&
level1::level2::coco::ice_id(const ::Ice::Current&) const
{
    return __level1__level2__coco_ids[1];
}

const ::std::string&
level1::level2::coco::ice_staticId()
{
    return __level1__level2__coco_ids[1];
}

void
level1::level2::coco::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(a);
    __os->write(b);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
level1::level2::coco::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(a);
    __is->read(b);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
level1::level2::coco::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::coco was not generated with stream support";
    throw ex;
}

void
level1::level2::coco::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::coco was not generated with stream support";
    throw ex;
}

class __F__level1__level2__coco : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::level1::level2::coco::ice_staticId());
        return new ::level1::level2::coco;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__level1__level2__coco_Ptr = new __F__level1__level2__coco;

const ::Ice::ObjectFactoryPtr&
level1::level2::coco::ice_factory()
{
    return __F__level1__level2__coco_Ptr;
}

class __F__level1__level2__coco__Init
{
public:

    __F__level1__level2__coco__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::level1::level2::coco::ice_staticId(), ::level1::level2::coco::ice_factory());
    }

    ~__F__level1__level2__coco__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::level1::level2::coco::ice_staticId());
    }
};

static __F__level1__level2__coco__Init __F__level1__level2__coco__i;

#ifdef __APPLE__
extern "C" { void __F__level1__level2__coco__initializer() {} }
#endif

void 
level1::level2::__patch__cocoPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::level1::level2::cocoPtr* p = static_cast< ::level1::level2::cocoPtr*>(__addr);
    assert(p);
    *p = ::level1::level2::cocoPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::level1::level2::coco::ice_staticId(), v->ice_id());
    }
}

bool
level1::level2::operator==(const ::level1::level2::coco& l, const ::level1::level2::coco& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
level1::level2::operator<(const ::level1::level2::coco& l, const ::level1::level2::coco& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

level1::level2::vivi::vivi(const ::level1::level2::cocoPtr& __ice_c, const ::std::string& __ice_d) :
    c(__ice_c),
    d(__ice_d)
{
}

::Ice::ObjectPtr
level1::level2::vivi::ice_clone() const
{
    ::level1::level2::viviPtr __p = new ::level1::level2::vivi(*this);
    return __p;
}

static const ::std::string __level1__level2__vivi_ids[2] =
{
    "::Ice::Object",
    "::level1::level2::vivi"
};

bool
level1::level2::vivi::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__level1__level2__vivi_ids, __level1__level2__vivi_ids + 2, _s);
}

::std::vector< ::std::string>
level1::level2::vivi::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__level1__level2__vivi_ids[0], &__level1__level2__vivi_ids[2]);
}

const ::std::string&
level1::level2::vivi::ice_id(const ::Ice::Current&) const
{
    return __level1__level2__vivi_ids[1];
}

const ::std::string&
level1::level2::vivi::ice_staticId()
{
    return __level1__level2__vivi_ids[1];
}

void
level1::level2::vivi::__incRef()
{
    __gcIncRef();
}

void
level1::level2::vivi::__decRef()
{
    __gcDecRef();
}

void
level1::level2::vivi::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
level1::level2::vivi::__usesClasses()
{
    return true;
}

void
level1::level2::vivi::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(c)
    {
        ::IceInternal::upCast(c.get())->__addObject(_c);
    }
}

void
level1::level2::vivi::__gcClear()
{
    if(c)
    {
        if(::IceInternal::upCast(c.get())->__usesClasses())
        {
            ::IceInternal::upCast(c.get())->__decRefUnsafe();
            c.__clearHandleUnsafe();
        }
        else
        {
            c = 0;
        }
    }
}

void
level1::level2::vivi::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(c.get())));
    __os->write(d);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
level1::level2::vivi::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::level1::level2::__patch__cocoPtr, &c);
    __is->read(d);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
level1::level2::vivi::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::vivi was not generated with stream support";
    throw ex;
}

void
level1::level2::vivi::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::vivi was not generated with stream support";
    throw ex;
}

class __F__level1__level2__vivi : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::level1::level2::vivi::ice_staticId());
        return new ::level1::level2::vivi;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__level1__level2__vivi_Ptr = new __F__level1__level2__vivi;

const ::Ice::ObjectFactoryPtr&
level1::level2::vivi::ice_factory()
{
    return __F__level1__level2__vivi_Ptr;
}

class __F__level1__level2__vivi__Init
{
public:

    __F__level1__level2__vivi__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::level1::level2::vivi::ice_staticId(), ::level1::level2::vivi::ice_factory());
    }

    ~__F__level1__level2__vivi__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::level1::level2::vivi::ice_staticId());
    }
};

static __F__level1__level2__vivi__Init __F__level1__level2__vivi__i;

#ifdef __APPLE__
extern "C" { void __F__level1__level2__vivi__initializer() {} }
#endif

void 
level1::level2::__patch__viviPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::level1::level2::viviPtr* p = static_cast< ::level1::level2::viviPtr*>(__addr);
    assert(p);
    *p = ::level1::level2::viviPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::level1::level2::vivi::ice_staticId(), v->ice_id());
    }
}

bool
level1::level2::operator==(const ::level1::level2::vivi& l, const ::level1::level2::vivi& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
level1::level2::operator<(const ::level1::level2::vivi& l, const ::level1::level2::vivi& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
level1::level2::test::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __level1__level2__test_ids[2] =
{
    "::Ice::Object",
    "::level1::level2::test"
};

bool
level1::level2::test::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__level1__level2__test_ids, __level1__level2__test_ids + 2, _s);
}

::std::vector< ::std::string>
level1::level2::test::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__level1__level2__test_ids[0], &__level1__level2__test_ids[2]);
}

const ::std::string&
level1::level2::test::ice_id(const ::Ice::Current&) const
{
    return __level1__level2__test_ids[1];
}

const ::std::string&
level1::level2::test::ice_staticId()
{
    return __level1__level2__test_ids[1];
}

::Ice::DispatchStatus
level1::level2::test::___output(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::level1::level2::cocoPtr c;
    __is->read(::level1::level2::__patch__cocoPtr, &c);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::level1::level2::viviPtr __ret = output(c, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __level1__level2__test_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "output"
};

::Ice::DispatchStatus
level1::level2::test::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__level1__level2__test_all, __level1__level2__test_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __level1__level2__test_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___output(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
level1::level2::test::__write(::IceInternal::BasicStream* __os) const
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
level1::level2::test::__read(::IceInternal::BasicStream* __is, bool __rid)
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
level1::level2::test::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::test was not generated with stream support";
    throw ex;
}

void
level1::level2::test::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type level1::level2::test was not generated with stream support";
    throw ex;
}

void 
level1::level2::__patch__testPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::level1::level2::testPtr* p = static_cast< ::level1::level2::testPtr*>(__addr);
    assert(p);
    *p = ::level1::level2::testPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::level1::level2::test::ice_staticId(), v->ice_id());
    }
}

bool
level1::level2::operator==(const ::level1::level2::test& l, const ::level1::level2::test& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
level1::level2::operator<(const ::level1::level2::test& l, const ::level1::level2::test& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
