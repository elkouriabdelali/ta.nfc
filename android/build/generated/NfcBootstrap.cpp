/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
#include <jni.h>
#include <v8.h>

#include <AndroidUtil.h>
#include <KrollBindings.h>
#include <V8Util.h>

#include "BootstrapJS.cpp"
#include "KrollGeneratedBindings.cpp"

#define TAG "ta.nfc"

using namespace v8;

static Persistent<Object> bindingCache;

static Handle<Value> Nfc_getBinding(const Arguments& args)
{
	HandleScope scope;

	if (args.Length() == 0) {
		return ThrowException(Exception::Error(String::New("Nfc.getBinding requires 1 argument: binding")));
	}

	if (bindingCache.IsEmpty()) {
		bindingCache = Persistent<Object>::New(Object::New());
	}

	Handle<String> binding = args[0]->ToString();

	if (bindingCache->Has(binding)) {
		return bindingCache->Get(binding);
	}

	String::Utf8Value bindingValue(binding);

	LOGD(TAG, "Looking up binding: %s", *bindingValue);

	titanium::bindings::BindEntry *extBinding = ::NfcBindings::lookupGeneratedInit(
		*bindingValue, bindingValue.length());

	if (!extBinding) {
		LOGE(TAG, "Couldn't find binding: %s, returning undefined", *bindingValue);
		return Undefined();
	}

	Handle<Object> exports = Object::New();
	extBinding->bind(exports);
	bindingCache->Set(binding, exports);

	return exports;
}

static void Nfc_init(Handle<Object> exports)
{
	HandleScope scope;

	for (int i = 0; titanium::natives[i].name; ++i) {
		Local<String> name = String::New(titanium::natives[i].name);
		Handle<String> source = IMMUTABLE_STRING_LITERAL_FROM_ARRAY(
			titanium::natives[i].source, titanium::natives[i].source_length);

		exports->Set(name, source);
	}

	exports->Set(String::New("getBinding"), FunctionTemplate::New(Nfc_getBinding)->GetFunction());
}

static void Nfc_dispose()
{
	HandleScope scope;
	if (bindingCache.IsEmpty()) {
		return;
	}

	Local<Array> propertyNames = bindingCache->GetPropertyNames();
	uint32_t length = propertyNames->Length();

	for (uint32_t i = 0; i < length; ++i) {
		String::Utf8Value binding(propertyNames->Get(i));
		int bindingLength = binding.length();

		titanium::bindings::BindEntry *extBinding =
			::NfcBindings::lookupGeneratedInit(*binding, bindingLength);

		if (extBinding && extBinding->dispose) {
			extBinding->dispose();
		}
	}

	bindingCache.Dispose();
	bindingCache = Persistent<Object>();
}

static titanium::bindings::BindEntry NfcBinding = {
	"ta.nfc",
	Nfc_init,
	Nfc_dispose
};

// Main module entry point
extern "C" JNIEXPORT void JNICALL
Java_ta_nfc_NfcBootstrap_nativeBootstrap
	(JNIEnv *env, jobject self)
{
	titanium::KrollBindings::addExternalBinding("ta.nfc", &NfcBinding);
	titanium::KrollBindings::addExternalLookup(&(::NfcBindings::lookupGeneratedInit));
}
