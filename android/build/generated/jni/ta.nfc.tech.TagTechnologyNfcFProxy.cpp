/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.tech.TagTechnologyNfcFProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "ta.nfc.tech.TagTechnologyProxy.h"

#define TAG "TagTechnologyNfcFProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> TagTechnologyNfcFProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass TagTechnologyNfcFProxy::javaClass = NULL;

TagTechnologyNfcFProxy::TagTechnologyNfcFProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void TagTechnologyNfcFProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcF");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void TagTechnologyNfcFProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	TagTechnologyProxy::dispose();
}

Handle<FunctionTemplate> TagTechnologyNfcFProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/tech/TagTechnologyNfcFProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("TagTechnologyNfcF");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		TagTechnologyProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<TagTechnologyNfcFProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "setTimeout", TagTechnologyNfcFProxy::setTimeout);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getMaxTransceiveLength", TagTechnologyNfcFProxy::getMaxTransceiveLength);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getManufacturer", TagTechnologyNfcFProxy::getManufacturer);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getTimeout", TagTechnologyNfcFProxy::getTimeout);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getSystemCode", TagTechnologyNfcFProxy::getSystemCode);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "transceive", TagTechnologyNfcFProxy::transceive);

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
Handle<Value> TagTechnologyNfcFProxy::setTimeout(const Arguments& args)
{
	LOGD(TAG, "setTimeout()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "setTimeout", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTimeout' with signature '(I)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTimeout: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> TagTechnologyNfcFProxy::getMaxTransceiveLength(const Arguments& args)
{
	LOGD(TAG, "getMaxTransceiveLength()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "getMaxTransceiveLength", "()I");
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
Handle<Value> TagTechnologyNfcFProxy::getManufacturer(const Arguments& args)
{
	LOGD(TAG, "getManufacturer()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "getManufacturer", "()Lti/modules/titanium/BufferProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getManufacturer' with signature '()Lti/modules/titanium/BufferProxy;'";
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
Handle<Value> TagTechnologyNfcFProxy::getTimeout(const Arguments& args)
{
	LOGD(TAG, "getTimeout()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "getTimeout", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getTimeout' with signature '()I'";
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
Handle<Value> TagTechnologyNfcFProxy::getSystemCode(const Arguments& args)
{
	LOGD(TAG, "getSystemCode()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "getSystemCode", "()Lti/modules/titanium/BufferProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getSystemCode' with signature '()Lti/modules/titanium/BufferProxy;'";
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
Handle<Value> TagTechnologyNfcFProxy::transceive(const Arguments& args)
{
	LOGD(TAG, "transceive()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(TagTechnologyNfcFProxy::javaClass, "transceive", "(Lti/modules/titanium/BufferProxy;)Lti/modules/titanium/BufferProxy;");
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
