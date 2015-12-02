/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.tech.TagTechnologyNfcVProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.tech.TagTechnologyProxy.h"

#define TAG "TagTechnologyNfcVProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> TagTechnologyNfcVProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass TagTechnologyNfcVProxy::javaClass = NULL;

TagTechnologyNfcVProxy::TagTechnologyNfcVProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void TagTechnologyNfcVProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcV");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void TagTechnologyNfcVProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	TagTechnologyProxy::dispose();
}

Handle<FunctionTemplate> TagTechnologyNfcVProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/tech/TagTechnologyNfcVProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcV");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		TagTechnologyProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<TagTechnologyNfcVProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getDsfId", TagTechnologyNfcVProxy::getDsfId);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getMaxTransceiveLength", TagTechnologyNfcVProxy::getMaxTransceiveLength);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getResponseFlags", TagTechnologyNfcVProxy::getResponseFlags);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "transceive", TagTechnologyNfcVProxy::transceive);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> TagTechnologyNfcVProxy::getDsfId(const Arguments& args)
{
	LOGD(TAG, "getDsfId()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcVProxy::javaClass, "getDsfId", "()Lbyte;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getDsfId' with signature '()Lbyte;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}
Handle<Value> TagTechnologyNfcVProxy::getMaxTransceiveLength(const Arguments& args)
{
	LOGD(TAG, "getMaxTransceiveLength()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcVProxy::javaClass, "getMaxTransceiveLength", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getMaxTransceiveLength' with signature '()I'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(env, jResult);



	return v8Result;

}
Handle<Value> TagTechnologyNfcVProxy::getResponseFlags(const Arguments& args)
{
	LOGD(TAG, "getResponseFlags()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcVProxy::javaClass, "getResponseFlags", "()Lbyte;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getResponseFlags' with signature '()Lbyte;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}
Handle<Value> TagTechnologyNfcVProxy::transceive(const Arguments& args)
{
	LOGD(TAG, "transceive()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcVProxy::javaClass, "transceive", "(Lti/modules/titanium/BufferProxy;)Lti/modules/titanium/BufferProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'transceive' with signature '(Lti/modules/titanium/BufferProxy;)Lti/modules/titanium/BufferProxy;'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "transceive: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	if (!args[0]->IsObject() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Object.";
		LOGE(TAG, error);
		return titanium::JSException::Error(error);
	}
	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Object> arg_0 = args[0]->ToObject();
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
