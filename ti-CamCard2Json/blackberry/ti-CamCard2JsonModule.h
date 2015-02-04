/**
 * ti-CamCard2Json.h
 *
 *
 */

#ifndef NATIVE_ti-CamCard2Json_MODULE
#define NATIVE_ti-CamCard2Json_MODULE

#include "TiCore.h"

class ti-CamCard2JsonModule : public Ti::TiModule
{
public:
	CREATE_MODULE(ti-CamCard2JsonModule);
	ti-CamCard2JsonModule(const char*);
	virtual ~ti-CamCard2JsonModule();

	virtual Ti::TiValue getModuleId();
	virtual Ti::TiValue getModuleVersion();
	virtual Ti::TiValue getModuleName();


};

#endif
