/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.records.NdefRecordApplicationProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.records.NdefRecordProxy.h"

#define TAG "NdefRecordApplicationProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> NdefRecordApplicationProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass NdefRecordApplicationProxy::javaClass = NULL;

NdefRecordApplicationProxy::NdefRecordApplicationProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NdefRecordApplicationProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordApplication");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void NdefRecordApplicationProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	NdefRecordProxy::dispose();
}

Handle<FunctionTemplate> NdefRecordApplicationProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/records/NdefRecordApplicationProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordApplication");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		NdefRecordProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NdefRecordApplicationProxy>)->GetFunction());

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
		String::NewSymbol("packageName"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getPackageName", titanium::Proxy::getProperty, String::NewSymbol("packageName"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setPackageName", titanium::Proxy::onPropertyChanged, String::NewSymbol("packageName"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
