/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ta.nfc.NfcModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"



#include "ta.nfc.NdefMessageProxy.h"
#include "ta.nfc.NfcAdapterProxy.h"
#include "ta.nfc.NfcForegroundDispatchFilter.h"
#include "ta.nfc.records.NdefRecordApplicationProxy.h"
#include "ta.nfc.records.NdefRecordEmptyProxy.h"
#include "ta.nfc.records.NdefRecordExternalProxy.h"
#include "ta.nfc.records.NdefRecordMediaProxy.h"
#include "ta.nfc.records.NdefRecordSmartPosterProxy.h"
#include "ta.nfc.records.NdefRecordTextProxy.h"
#include "ta.nfc.records.NdefRecordUriProxy.h"
#include "ta.nfc.tech.TagTechnologyIsoDepProxy.h"
#include "ta.nfc.tech.TagTechnologyMifareClassicProxy.h"
#include "ta.nfc.tech.TagTechnologyMifareUltralightProxy.h"
#include "ta.nfc.tech.TagTechnologyNdefFormatableProxy.h"
#include "ta.nfc.tech.TagTechnologyNdefProxy.h"
#include "ta.nfc.tech.TagTechnologyNfcAProxy.h"
#include "ta.nfc.tech.TagTechnologyNfcBProxy.h"
#include "ta.nfc.tech.TagTechnologyNfcFProxy.h"
#include "ta.nfc.tech.TagTechnologyNfcVProxy.h"

#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "NfcModule"

using namespace v8;

		namespace ta {
		namespace nfc {


Persistent<FunctionTemplate> NfcModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass NfcModule::javaClass = NULL;

NfcModule::NfcModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void NfcModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Nfc");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void NfcModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> NfcModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ta/nfc/NfcModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Nfc");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<NfcModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in NfcModule");
		//return;
	}


		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NFCB", "android.nfc.tech.NfcB");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NFCF", "android.nfc.tech.NfcF");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_SMART_POSTER", "Sp");

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_MIME_MEDIA", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_TAG_TYPE_PRO", 2);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_ALTERNATIVE_CARRIER", "ac");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NFCV", "android.nfc.tech.NfcV");

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_WELL_KNOWN", 1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NDEFFORMATABLE", "android.nfc.tech.NdefFormatable");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_TEXT", "T");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "ACTION_NDEF_DISCOVERED", "android.nfc.action.NDEF_DISCOVERED");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_SIZE_4K", 4096);

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_EMPTY", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "RECOMMENDED_ACTION_DO_ACTION", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_TAG_TYPE_UNKNOWN", -1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "ENCODING_UTF16", "UTF-16");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_BLOCK_SIZE", 16);

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_SIZE_MINI", 320);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NFCA", "android.nfc.tech.NfcA");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TAG_TYPE_NFC_FORUM_TYPE_3", "org.nfcforum.ndef.type3");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TAG_TYPE_NFC_FORUM_TYPE_4", "org.nfcforum.ndef.type4");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_ULTRALIGHT_PAGE_SIZE", 4);

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_ABSOLUTE_URI", 3);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TAG_TYPE_NFC_FORUM_TYPE_1", "org.nfcforum.ndef.type1");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NDEF", "android.nfc.tech.Ndef");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TAG_TYPE_NFC_FORUM_TYPE_2", "org.nfcforum.ndef.type2");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "ACTION_TAG_DISCOVERED", "android.nfc.action.TAG_DISCOVERED");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_SIZE_1K", 1024);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_MIFARE_CLASSIC", "android.nfc.tech.MifareClassic");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_TAG_TYPE_PLUS", 1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TAG_TYPE_MIFARE_CLASSIC", "com.nxp.ndef.mifareclassic");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_URI", "U");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_NDEF_FORMATABLE", "android.nfc.tech.NdefFormatable");

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_HANDOVER_CARRIER", "Hc");

		DEFINE_INT_CONSTANT(prototypeTemplate, "RECOMMENDED_ACTION_SAVE_FOR_LATER", 1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_MIFARE_ULTRALIGHT", "android.nfc.tech.MifareUltralight");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_ULTRALIGHT_TYPE_ULTRALIGHT", 1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_HANDOVER_SELECT", "Hs");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_ULTRALIGHT_TYPE_UNKNOWN", -1);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "ACTION_TECH_DISCOVERED", "android.nfc.action.TECH_DISCOVERED");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_SIZE_2K", 2048);

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_TAG_TYPE_CLASSIC", 0);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "ENCODING_UTF8", "UTF-8");

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_UNKNOWN", 5);

		DEFINE_INT_CONSTANT(prototypeTemplate, "RECOMMENDED_ACTION_UNKNOWN", -1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_EXTERNAL_TYPE", 4);

		DEFINE_INT_CONSTANT(prototypeTemplate, "TNF_UNCHANGED", 6);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "RTD_HANDOVER_REQUEST", "Hr");

		DEFINE_INT_CONSTANT(prototypeTemplate, "MIFARE_ULTRALIGHT_TYPE_ULTRALIGHT_C", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "RECOMMENDED_ACTION_OPEN_FOR_EDITING", 2);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "TECH_ISODEP", "android.nfc.tech.IsoDep");


	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


		} // nfc
		} // ta
