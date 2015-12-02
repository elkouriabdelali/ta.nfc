/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.NfcForegroundDispatchFilter.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.kroll.KrollProxy.h"

#define TAG "NfcForegroundDispatchFilter"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> NfcForegroundDispatchFilter::proxyTemplate = Persistent<FunctionTemplate>();
jclass NfcForegroundDispatchFilter::javaClass = NULL;

NfcForegroundDispatchFilter::NfcForegroundDispatchFilter(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NfcForegroundDispatchFilter::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NfcForegroundDispatchFilter");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void NfcForegroundDispatchFilter::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollProxy::dispose();
}

Handle<FunctionTemplate> NfcForegroundDispatchFilter::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/NfcForegroundDispatchFilter");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NfcForegroundDispatchFilter");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NfcForegroundDispatchFilter>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------
	instanceTemplate->SetAccessor(
		String::NewSymbol("intent"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getIntent", titanium::Proxy::getProperty, String::NewSymbol("intent"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setIntent", titanium::Proxy::onPropertyChanged, String::NewSymbol("intent"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("intentFilters"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getIntentFilters", titanium::Proxy::getProperty, String::NewSymbol("intentFilters"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setIntentFilters", titanium::Proxy::onPropertyChanged, String::NewSymbol("intentFilters"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("techLists"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getTechLists", titanium::Proxy::getProperty, String::NewSymbol("techLists"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setTechLists", titanium::Proxy::onPropertyChanged, String::NewSymbol("techLists"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
