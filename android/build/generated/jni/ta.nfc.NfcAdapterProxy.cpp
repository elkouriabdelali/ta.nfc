/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.NfcAdapterProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.kroll.KrollProxy.h"

#define TAG "NfcAdapterProxy"

using namespace v8;

		namespace ta {
		namespace nfc {
			namespace nfc {


Persistent<FunctionTemplate> NfcAdapterProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass NfcAdapterProxy::javaClass = NULL;

NfcAdapterProxy::NfcAdapterProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NfcAdapterProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NfcAdapter");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void NfcAdapterProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollProxy::dispose();
}

Handle<FunctionTemplate> NfcAdapterProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/NfcAdapterProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("NfcAdapter");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NfcAdapterProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "setNdefPushMessage", NfcAdapterProxy::setNdefPushMessage);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "isNdefPushEnabled", NfcAdapterProxy::isNdefPushEnabled);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "enableForegroundDispatch", NfcAdapterProxy::enableForegroundDispatch);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "setBeamPushUris", NfcAdapterProxy::setBeamPushUris);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "isEnabled", NfcAdapterProxy::isEnabled);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "disableForegroundDispatch", NfcAdapterProxy::disableForegroundDispatch);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "onNewIntent", NfcAdapterProxy::onNewIntent);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "disableForegroundNdefPush", NfcAdapterProxy::disableForegroundNdefPush);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "enableForegroundNdefPush", NfcAdapterProxy::enableForegroundNdefPush);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------
	instanceTemplate->SetAccessor(
		String::NewSymbol("onPushComplete"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnPushComplete", titanium::Proxy::getProperty, String::NewSymbol("onPushComplete"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnPushComplete", titanium::Proxy::onPropertyChanged, String::NewSymbol("onPushComplete"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onPushMessage"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnPushMessage", titanium::Proxy::getProperty, String::NewSymbol("onPushMessage"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnPushMessage", titanium::Proxy::onPropertyChanged, String::NewSymbol("onPushMessage"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onNdefDiscovered"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnNdefDiscovered", titanium::Proxy::getProperty, String::NewSymbol("onNdefDiscovered"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnNdefDiscovered", titanium::Proxy::onPropertyChanged, String::NewSymbol("onNdefDiscovered"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onTagDiscovered"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnTagDiscovered", titanium::Proxy::getProperty, String::NewSymbol("onTagDiscovered"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnTagDiscovered", titanium::Proxy::onPropertyChanged, String::NewSymbol("onTagDiscovered"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onTechDiscovered"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnTechDiscovered", titanium::Proxy::getProperty, String::NewSymbol("onTechDiscovered"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnTechDiscovered", titanium::Proxy::onPropertyChanged, String::NewSymbol("onTechDiscovered"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onBeamPushUris"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnBeamPushUris", titanium::Proxy::getProperty, String::NewSymbol("onBeamPushUris"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnBeamPushUris", titanium::Proxy::onPropertyChanged, String::NewSymbol("onBeamPushUris"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> NfcAdapterProxy::setNdefPushMessage(const Arguments& args)
{
	LOGD(TAG, "setNdefPushMessage()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "setNdefPushMessage", "(Lta/nfc/NdefMessageProxy;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setNdefPushMessage' with signature '(Lta/nfc/NdefMessageProxy;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setNdefPushMessage: Invalid number of arguments. Expected 1 but got %d", args.Length());
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
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> NfcAdapterProxy::isNdefPushEnabled(const Arguments& args)
{
	LOGD(TAG, "isNdefPushEnabled()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "isNdefPushEnabled", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isNdefPushEnabled' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}
Handle<Value> NfcAdapterProxy::enableForegroundDispatch(const Arguments& args)
{
	LOGD(TAG, "enableForegroundDispatch()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "enableForegroundDispatch", "(Lta/nfc/NfcForegroundDispatchFilter;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'enableForegroundDispatch' with signature '(Lta/nfc/NfcForegroundDispatchFilter;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "enableForegroundDispatch: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> NfcAdapterProxy::setBeamPushUris(const Arguments& args)
{
	LOGD(TAG, "setBeamPushUris()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "setBeamPushUris", "(Ljava/lang/Object;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setBeamPushUris' with signature '(Ljava/lang/Object;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setBeamPushUris: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> NfcAdapterProxy::isEnabled(const Arguments& args)
{
	LOGD(TAG, "isEnabled()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "isEnabled", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isEnabled' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}
Handle<Value> NfcAdapterProxy::disableForegroundDispatch(const Arguments& args)
{
	LOGD(TAG, "disableForegroundDispatch()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "disableForegroundDispatch", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'disableForegroundDispatch' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

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
Handle<Value> NfcAdapterProxy::onNewIntent(const Arguments& args)
{
	LOGD(TAG, "onNewIntent()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "onNewIntent", "(Lorg/appcelerator/titanium/proxy/IntentProxy;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'onNewIntent' with signature '(Lorg/appcelerator/titanium/proxy/IntentProxy;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "onNewIntent: Invalid number of arguments. Expected 1 but got %d", args.Length());
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
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> NfcAdapterProxy::disableForegroundNdefPush(const Arguments& args)
{
	LOGD(TAG, "disableForegroundNdefPush()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "disableForegroundNdefPush", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'disableForegroundNdefPush' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

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
Handle<Value> NfcAdapterProxy::enableForegroundNdefPush(const Arguments& args)
{
	LOGD(TAG, "enableForegroundNdefPush()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(NfcAdapterProxy::javaClass, "enableForegroundNdefPush", "(Lta/nfc/NdefMessageProxy;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'enableForegroundNdefPush' with signature '(Lta/nfc/NdefMessageProxy;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "enableForegroundNdefPush: Invalid number of arguments. Expected 1 but got %d", args.Length());
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
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------


			} // namespace nfc
		} // nfc
		} // ta
