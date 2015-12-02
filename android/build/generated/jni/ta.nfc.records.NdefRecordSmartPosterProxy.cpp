/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.records.NdefRecordSmartPosterProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.records.NdefRecordProxy.h"

#define TAG "NdefRecordSmartPosterProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> NdefRecordSmartPosterProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass NdefRecordSmartPosterProxy::javaClass = NULL;

NdefRecordSmartPosterProxy::NdefRecordSmartPosterProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NdefRecordSmartPosterProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordSmartPoster");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void NdefRecordSmartPosterProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	NdefRecordProxy::dispose();
}

Handle<FunctionTemplate> NdefRecordSmartPosterProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/records/NdefRecordSmartPosterProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NdefRecordSmartPoster");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		NdefRecordProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NdefRecordSmartPosterProxy>)->GetFunction());

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
		String::NewSymbol("title"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getTitle", titanium::Proxy::getProperty, String::NewSymbol("title"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setTitle", titanium::Proxy::onPropertyChanged, String::NewSymbol("title"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("uri"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getUri", titanium::Proxy::getProperty, String::NewSymbol("uri"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setUri", titanium::Proxy::onPropertyChanged, String::NewSymbol("uri"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("action"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getAction", titanium::Proxy::getProperty, String::NewSymbol("action"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setAction", titanium::Proxy::onPropertyChanged, String::NewSymbol("action"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("mimeType"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getMimeType", titanium::Proxy::getProperty, String::NewSymbol("mimeType"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setMimeType", titanium::Proxy::onPropertyChanged, String::NewSymbol("mimeType"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
