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
			namespace nfc {


class TagTechnologyMifareClassicProxy : public titanium::Proxy
{
public:
	explicit TagTechnologyMifareClassicProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> restore(const v8::Arguments&);
	static v8::Handle<v8::Value> getMaxTransceiveLength(const v8::Arguments&);
	static v8::Handle<v8::Value> increment(const v8::Arguments&);
	static v8::Handle<v8::Value> authenticateSectorWithKeyB(const v8::Arguments&);
	static v8::Handle<v8::Value> sectorToBlock(const v8::Arguments&);
	static v8::Handle<v8::Value> authenticateSectorWithKeyA(const v8::Arguments&);
	static v8::Handle<v8::Value> transceive(const v8::Arguments&);
	static v8::Handle<v8::Value> readBlock(const v8::Arguments&);
	static v8::Handle<v8::Value> getSize(const v8::Arguments&);
	static v8::Handle<v8::Value> setTimeout(const v8::Arguments&);
	static v8::Handle<v8::Value> transfer(const v8::Arguments&);
	static v8::Handle<v8::Value> blockToSector(const v8::Arguments&);
	static v8::Handle<v8::Value> getBlockCountInSector(const v8::Arguments&);
	static v8::Handle<v8::Value> getType(const v8::Arguments&);
	static v8::Handle<v8::Value> decrement(const v8::Arguments&);
	static v8::Handle<v8::Value> getTimeout(const v8::Arguments&);
	static v8::Handle<v8::Value> writeBlock(const v8::Arguments&);
	static v8::Handle<v8::Value> getBlockCount(const v8::Arguments&);
	static v8::Handle<v8::Value> getSectorCount(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_kEY_MIFARE_APPLICATION_DIRECTORY(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_kEY_DEFAULT(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_kEY_NFC_FORUM(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

			} // namespace nfc
		} // nfc
		} // ta
