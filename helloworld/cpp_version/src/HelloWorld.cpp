#include <hxcpp.h>

#ifndef INCLUDED_HelloWorld
#include <HelloWorld.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void HelloWorld_obj::__construct()
{
	return null();
}

//HelloWorld_obj::~HelloWorld_obj() { }

Dynamic HelloWorld_obj::__CreateEmpty() { return  new HelloWorld_obj; }
hx::ObjectPtr< HelloWorld_obj > HelloWorld_obj::__new()
{  hx::ObjectPtr< HelloWorld_obj > result = new HelloWorld_obj();
	result->__construct();
	return result;}

Dynamic HelloWorld_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelloWorld_obj > result = new HelloWorld_obj();
	result->__construct();
	return result;}

Void HelloWorld_obj::main( ){
{
		HX_STACK_FRAME("HelloWorld","main",0x5383b167,"HelloWorld.main","HelloWorld.hx",3,0x00bb8cbe)
		HX_STACK_LINE(3)
		::haxe::Log_obj::trace(HX_CSTRING("Hello World"),hx::SourceInfo(HX_CSTRING("HelloWorld.hx"),3,HX_CSTRING("HelloWorld"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HelloWorld_obj,main,(void))


HelloWorld_obj::HelloWorld_obj()
{
}

Dynamic HelloWorld_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HelloWorld_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HelloWorld_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelloWorld_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelloWorld_obj::__mClass,"__mClass");
};

#endif

Class HelloWorld_obj::__mClass;

void HelloWorld_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("HelloWorld"), hx::TCanCast< HelloWorld_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void HelloWorld_obj::__boot()
{
}

