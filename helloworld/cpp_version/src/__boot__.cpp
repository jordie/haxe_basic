#include <hxcpp.h>

#include <haxe/Log.h>
#include <Std.h>
#include <HelloWorld.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::Std_obj::__register();
::HelloWorld_obj::__register();
::haxe::Log_obj::__boot();
::HelloWorld_obj::__boot();
::Std_obj::__boot();
}

