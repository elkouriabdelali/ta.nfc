/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.tech.TagTechnologyNfcBProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.tech.TagTechnologyProxy.h"

#define TAG "TagTechnologyNfcBProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> TagTechnologyNfcBProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass TagTechnologyNfcBProxy::javaClass = NULL;

TagTechnologyNfcBProxy::TagTechnologyNfcBProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void TagTechnologyNfcBProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcB");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void TagTechnologyNfcBProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	TagTechnologyProxy::dispose();
}

Handle<FunctionTemplate> TagTechnologyNfcBProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/tech/TagTechnologyNfcBProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcB");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		TagTechnologyProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<TagTechnologyNfcBProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getProtocolInfo", TagTechnologyNfcBProxy::getProtocolInfo);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getMaxTransceiveLength", TagTechnologyNfcBProxy::getMaxTransceiveLength);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "transceive", TagTechnologyNfcBProxy::transceive);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getApplicationData", TagTechnologyNfcBProxy::getApplicationData);

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
Handle<Value> TagTechnologyNfcBProxy::getProtocolInfo(const Arguments& args)
{
	LOGD(TAG, "getProtocolInfo()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcBProxy::javaClass, "getProtocolInfo", "()Lti/modules/titanium/BufferProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getProtocolInfo' with signature '()Lti/modules/titanium/BufferProxy;'";
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
Handle<Value> TagTechnologyNfcBProxy::getMaxTransceiveLength(const Arguments& args)
{
	LOGD(TAG, "getMaxTransceiveLength()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcBProxy::javaClass, "getMaxTransceiveLength", "()I");
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
Handle<Value> TagTechnologyNfcBProxy::transceive(const Arguments& args)
{
	LOGD(TAG, "transceive()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcBProxy::javaClass, "transceive", "(Lti/modules/titanium/BufferProxy;)Lti/modules/titanium/BufferProxy;");
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
Handle<Value> TagTechnologyNfcBProxy::getApplicationData(const Arguments& args)
{
	LOGD(TAG, "getApplicationData()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcBProxy::javaClass, "getApplicationData", "()Lti/modules/titanium/BufferProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getApplicationData' with signature '()Lti/modules/titanium/BufferProxy;'";
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

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
