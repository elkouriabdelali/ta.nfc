/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace ta {
		namespace nfc {


class NfcTagProxy : public titanium::Proxy
{
public:
	explicit NfcTagProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> getId(const v8::Arguments&);
	static v8::Handle<v8::Value> getTechList(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_id(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_techList(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

		} // nfc
		} // ta
