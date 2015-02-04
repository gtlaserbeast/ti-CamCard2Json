/*
 * TestProxy.h
 *
 *  Created on: Sep 6, 2013
 *      Author: penrique
 */

#ifndef NATIVE_ti-CamCard2Json_TESTPROXY_H_
#define NATIVE_ti-CamCard2Json_TESTPROXY_H_

#include "TiCore.h"

class ExampleProxy : Ti::TiProxy
{
public:
	CREATE_PROXY(ExampleProxy)
	ExampleProxy(const char*);
	virtual ~ExampleProxy();
};

#endif /* NATIVE_ti-CamCard2Json_TESTPROXY_H_ */
