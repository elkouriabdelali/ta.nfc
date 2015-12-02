/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.records.NdefRecordTextProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.records.NdefRecordProxy.h"

#define TAG "NdefRecordTextProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> NdefRecordTextProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass NdefRecordTextProxy::javaClass = NULL;

NdefRecordTextProxy::NdefRecordTextProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NdefRecordTextProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordText");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void NdefRecordTextProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	NdefRecordProxy::dispose();
}

Handle<FunctionTemplate> NdefRecordTextProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/records/NdefRecordTextProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordText");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		NdefRecordProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NdefRecordTextProxy>)->GetFunction());

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
		String::NewSymbol("text"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getText", titanium::Proxy::getProperty, String::NewSymbol("text"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setText", titanium::Proxy::onPropertyChanged, String::NewSymbol("text"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("languageCode"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getLanguageCode", titanium::Proxy::getProperty, String::NewSymbol("languageCode"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setLanguageCode", titanium::Proxy::onPropertyChanged, String::NewSymbol("languageCode"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("encoding"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getEncoding", titanium::Proxy::getProperty, String::NewSymbol("encoding"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setEncoding", titanium::Proxy::onPropertyChanged, String::NewSymbol("encoding"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
