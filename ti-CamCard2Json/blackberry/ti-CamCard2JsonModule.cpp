/**
 * ti-CamCard2Json.cpp
 *
 *
 */

#include "ti-CamCard2JsonModule.h"
#include "ExampleProxy.h"

ti-CamCard2JsonModule::ti-CamCard2JsonModule(const char* name) : Ti::TiModule(name)
{
	addFunction("createExample", ExampleProxy::CreateProxy);
}

ti-CamCard2JsonModule::~ti-CamCard2JsonModule()
{

}

Ti::TiValue ti-CamCard2JsonModule::getModuleId()
{
	Ti::TiValue val;
	val.setString("CamCard2Json");
	return val;
}
Ti::TiValue ti-CamCard2JsonModule::getModuleVersion()
{
	Ti::TiValue val;
	val.setString("1.0.0");
	return val;
}
Ti::TiValue ti-CamCard2JsonModule::getModuleName()
{
	Ti::TiValue val;
	val.setString("ti-CamCard2Json");
	return val;
}