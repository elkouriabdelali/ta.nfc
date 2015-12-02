/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
var bootstrap = kroll.NativeModule.require("bootstrap"),
	invoker = kroll.NativeModule.require("invoker"),
	Titanium = kroll.binding("Titanium").Titanium;

function moduleBootstrap(moduleBinding) {
	function lazyGet(object, binding, name, namespace) {
		return bootstrap.lazyGet(object, binding,
			name, namespace, moduleBinding.getBinding);
	}

	var module = moduleBinding.getBinding("ta.nfc.NfcModule")["Nfc"];
	var invocationAPIs = module.invocationAPIs = [];
	module.apiName = "Nfc";

	function addInvocationAPI(module, moduleNamespace, namespace, api) {
		invocationAPIs.push({ namespace: namespace, api: api });
	}

		addInvocationAPI(module, "Nfc", "Nfc", "createNdefMessage");
	addInvocationAPI(module, "Nfc", "Nfc", "createNfcAdapter");
	addInvocationAPI(module, "Nfc", "Nfc", "createNfcForegroundDispatchFilter");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordApplication");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordEmpty");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordExternal");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordMedia");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordSmartPoster");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordText");
	addInvocationAPI(module, "Nfc", "Nfc", "createNdefRecordUri");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyIsoDep");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyMifareClassic");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyMifareUltralight");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNdefFormatable");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNdef");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNfcA");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNfcB");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNfcF");
	addInvocationAPI(module, "Nfc", "Nfc", "createTagTechnologyNfcV");

			if (!("__propertiesDefined__" in module)) {		
		Object.defineProperties(module, {
			"TagTechnologyIsoDep": {
				get: function() {
					var TagTechnologyIsoDep = lazyGet(this, "ta.nfc.tech.TagTechnologyIsoDepProxy", "TagTechnologyIsoDep", "TagTechnologyIsoDep");
					return TagTechnologyIsoDep;
				},
				configurable: true
			},
			"NdefRecord": {
				get: function() {
					var NdefRecord = lazyGet(this, "ta.nfc.records.NdefRecordProxy", "NdefRecord", "NdefRecord");
					return NdefRecord;
				},
				configurable: true
			},
			"NdefRecordApplication": {
				get: function() {
					var NdefRecordApplication = lazyGet(this, "ta.nfc.records.NdefRecordApplicationProxy", "NdefRecordApplication", "NdefRecordApplication");
					return NdefRecordApplication;
				},
				configurable: true
			},
			"NdefRecordMedia": {
				get: function() {
					var NdefRecordMedia = lazyGet(this, "ta.nfc.records.NdefRecordMediaProxy", "NdefRecordMedia", "NdefRecordMedia");
					return NdefRecordMedia;
				},
				configurable: true
			},
			"NdefRecordEmpty": {
				get: function() {
					var NdefRecordEmpty = lazyGet(this, "ta.nfc.records.NdefRecordEmptyProxy", "NdefRecordEmpty", "NdefRecordEmpty");
					return NdefRecordEmpty;
				},
				configurable: true
			},
			"TagTechnologyNfcA": {
				get: function() {
					var TagTechnologyNfcA = lazyGet(this, "ta.nfc.tech.TagTechnologyNfcAProxy", "TagTechnologyNfcA", "TagTechnologyNfcA");
					return TagTechnologyNfcA;
				},
				configurable: true
			},
			"NdefRecordUnknown": {
				get: function() {
					var NdefRecordUnknown = lazyGet(this, "ta.nfc.records.NdefRecordUnknownProxy", "NdefRecordUnknown", "NdefRecordUnknown");
					return NdefRecordUnknown;
				},
				configurable: true
			},
			"NdefRecordSmartPoster": {
				get: function() {
					var NdefRecordSmartPoster = lazyGet(this, "ta.nfc.records.NdefRecordSmartPosterProxy", "NdefRecordSmartPoster", "NdefRecordSmartPoster");
					return NdefRecordSmartPoster;
				},
				configurable: true
			},
			"NfcForegroundDispatchFilter": {
				get: function() {
					var NfcForegroundDispatchFilter = lazyGet(this, "ta.nfc.NfcForegroundDispatchFilter", "NfcForegroundDispatchFilter", "NfcForegroundDispatchFilter");
					return NfcForegroundDispatchFilter;
				},
				configurable: true
			},
			"NdefRecordExternal": {
				get: function() {
					var NdefRecordExternal = lazyGet(this, "ta.nfc.records.NdefRecordExternalProxy", "NdefRecordExternal", "NdefRecordExternal");
					return NdefRecordExternal;
				},
				configurable: true
			},
			"TagTechnologyMifareClassic": {
				get: function() {
					var TagTechnologyMifareClassic = lazyGet(this, "ta.nfc.tech.TagTechnologyMifareClassicProxy", "TagTechnologyMifareClassic", "TagTechnologyMifareClassic");
					return TagTechnologyMifareClassic;
				},
				configurable: true
			},
			"NdefRecordUri": {
				get: function() {
					var NdefRecordUri = lazyGet(this, "ta.nfc.records.NdefRecordUriProxy", "NdefRecordUri", "NdefRecordUri");
					return NdefRecordUri;
				},
				configurable: true
			},
			"NfcTag": {
				get: function() {
					var NfcTag = lazyGet(this, "ta.nfc.NfcTagProxy", "NfcTag", "NfcTag");
					return NfcTag;
				},
				configurable: true
			},
			"TagTechnologyNdef": {
				get: function() {
					var TagTechnologyNdef = lazyGet(this, "ta.nfc.tech.TagTechnologyNdefProxy", "TagTechnologyNdef", "TagTechnologyNdef");
					return TagTechnologyNdef;
				},
				configurable: true
			},
			"TagTechnologyNdefFormatable": {
				get: function() {
					var TagTechnologyNdefFormatable = lazyGet(this, "ta.nfc.tech.TagTechnologyNdefFormatableProxy", "TagTechnologyNdefFormatable", "TagTechnologyNdefFormatable");
					return TagTechnologyNdefFormatable;
				},
				configurable: true
			},
			"NdefRecordText": {
				get: function() {
					var NdefRecordText = lazyGet(this, "ta.nfc.records.NdefRecordTextProxy", "NdefRecordText", "NdefRecordText");
					return NdefRecordText;
				},
				configurable: true
			},
			"TagTechnologyNfcF": {
				get: function() {
					var TagTechnologyNfcF = lazyGet(this, "ta.nfc.tech.TagTechnologyNfcFProxy", "TagTechnologyNfcF", "TagTechnologyNfcF");
					return TagTechnologyNfcF;
				},
				configurable: true
			},
			"TagTechnology": {
				get: function() {
					var TagTechnology = lazyGet(this, "ta.nfc.tech.TagTechnologyProxy", "TagTechnology", "TagTechnology");
					return TagTechnology;
				},
				configurable: true
			},
			"TagTechnologyNfcB": {
				get: function() {
					var TagTechnologyNfcB = lazyGet(this, "ta.nfc.tech.TagTechnologyNfcBProxy", "TagTechnologyNfcB", "TagTechnologyNfcB");
					return TagTechnologyNfcB;
				},
				configurable: true
			},
			"TagTechnologyMifareUltralight": {
				get: function() {
					var TagTechnologyMifareUltralight = lazyGet(this, "ta.nfc.tech.TagTechnologyMifareUltralightProxy", "TagTechnologyMifareUltralight", "TagTechnologyMifareUltralight");
					return TagTechnologyMifareUltralight;
				},
				configurable: true
			},
			"NdefMessage": {
				get: function() {
					var NdefMessage = lazyGet(this, "ta.nfc.NdefMessageProxy", "NdefMessage", "NdefMessage");
					return NdefMessage;
				},
				configurable: true
			},
			"NfcAdapter": {
				get: function() {
					var NfcAdapter = lazyGet(this, "ta.nfc.NfcAdapterProxy", "NfcAdapter", "NfcAdapter");
					return NfcAdapter;
				},
				configurable: true
			},
			"TagTechnologyNfcV": {
				get: function() {
					var TagTechnologyNfcV = lazyGet(this, "ta.nfc.tech.TagTechnologyNfcVProxy", "TagTechnologyNfcV", "TagTechnologyNfcV");
					return TagTechnologyNfcV;
				},
				configurable: true
			},
		
		});
		module.constructor.prototype.createNdefMessage = function() {
			return new module.NdefMessage(arguments);
		}
		module.constructor.prototype.createNfcAdapter = function() {
			return new module.NfcAdapter(arguments);
		}
		module.constructor.prototype.createNfcForegroundDispatchFilter = function() {
			return new module.NfcForegroundDispatchFilter(arguments);
		}
		module.constructor.prototype.createNdefRecordApplication = function() {
			return new module.NdefRecordApplication(arguments);
		}
		module.constructor.prototype.createNdefRecordEmpty = function() {
			return new module.NdefRecordEmpty(arguments);
		}
		module.constructor.prototype.createNdefRecordExternal = function() {
			return new module.NdefRecordExternal(arguments);
		}
		module.constructor.prototype.createNdefRecordMedia = function() {
			return new module.NdefRecordMedia(arguments);
		}
		module.constructor.prototype.createNdefRecordSmartPoster = function() {
			return new module.NdefRecordSmartPoster(arguments);
		}
		module.constructor.prototype.createNdefRecordText = function() {
			return new module.NdefRecordText(arguments);
		}
		module.constructor.prototype.createNdefRecordUri = function() {
			return new module.NdefRecordUri(arguments);
		}
		module.constructor.prototype.createTagTechnologyIsoDep = function() {
			return new module.TagTechnologyIsoDep(arguments);
		}
		module.constructor.prototype.createTagTechnologyMifareClassic = function() {
			return new module.TagTechnologyMifareClassic(arguments);
		}
		module.constructor.prototype.createTagTechnologyMifareUltralight = function() {
			return new module.TagTechnologyMifareUltralight(arguments);
		}
		module.constructor.prototype.createTagTechnologyNdefFormatable = function() {
			return new module.TagTechnologyNdefFormatable(arguments);
		}
		module.constructor.prototype.createTagTechnologyNdef = function() {
			return new module.TagTechnologyNdef(arguments);
		}
		module.constructor.prototype.createTagTechnologyNfcA = function() {
			return new module.TagTechnologyNfcA(arguments);
		}
		module.constructor.prototype.createTagTechnologyNfcB = function() {
			return new module.TagTechnologyNfcB(arguments);
		}
		module.constructor.prototype.createTagTechnologyNfcF = function() {
			return new module.TagTechnologyNfcF(arguments);
		}
		module.constructor.prototype.createTagTechnologyNfcV = function() {
			return new module.TagTechnologyNfcV(arguments);
		}
		}
		module.__propertiesDefined__ = true;
		return module;

}
exports.bootstrap = moduleBootstrap;
