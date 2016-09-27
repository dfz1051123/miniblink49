// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MediaKeySystemConfiguration.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8MediaKeySystemMediaCapability.h"

namespace blink {

void V8MediaKeySystemConfiguration::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeySystemConfiguration& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> audioCapabilitiesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "audioCapabilities")).ToLocal(&audioCapabilitiesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (audioCapabilitiesValue.IsEmpty() || audioCapabilitiesValue->IsUndefined()) {
            // Do nothing.
        } else {
            HeapVector<MediaKeySystemMediaCapability> audioCapabilities = toImplArray<HeapVector<MediaKeySystemMediaCapability>>(audioCapabilitiesValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setAudioCapabilities(audioCapabilities);
        }
    }

    {
        v8::Local<v8::Value> distinctiveIdentifierValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "distinctiveIdentifier")).ToLocal(&distinctiveIdentifierValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (distinctiveIdentifierValue.IsEmpty() || distinctiveIdentifierValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> distinctiveIdentifier = distinctiveIdentifierValue;
            if (!distinctiveIdentifier.prepare(exceptionState))
                return;
            static const char* validValues[] = {
                "required",
                "optional",
                "not-allowed",
            };
            if (!isValidEnum(distinctiveIdentifier, validValues, WTF_ARRAY_LENGTH(validValues), "MediaKeysRequirement", exceptionState))
                return;
            impl.setDistinctiveIdentifier(distinctiveIdentifier);
        }
    }

    {
        v8::Local<v8::Value> initDataTypesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "initDataTypes")).ToLocal(&initDataTypesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (initDataTypesValue.IsEmpty() || initDataTypesValue->IsUndefined()) {
            // Do nothing.
        } else {
            Vector<String> initDataTypes = toImplArray<Vector<String>>(initDataTypesValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setInitDataTypes(initDataTypes);
        }
    }

    {
        v8::Local<v8::Value> labelValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "label")).ToLocal(&labelValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (labelValue.IsEmpty() || labelValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> label = labelValue;
            if (!label.prepare(exceptionState))
                return;
            impl.setLabel(label);
        }
    }

    {
        v8::Local<v8::Value> persistentStateValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "persistentState")).ToLocal(&persistentStateValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (persistentStateValue.IsEmpty() || persistentStateValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> persistentState = persistentStateValue;
            if (!persistentState.prepare(exceptionState))
                return;
            static const char* validValues[] = {
                "required",
                "optional",
                "not-allowed",
            };
            if (!isValidEnum(persistentState, validValues, WTF_ARRAY_LENGTH(validValues), "MediaKeysRequirement", exceptionState))
                return;
            impl.setPersistentState(persistentState);
        }
    }

    {
        v8::Local<v8::Value> sessionTypesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "sessionTypes")).ToLocal(&sessionTypesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sessionTypesValue.IsEmpty() || sessionTypesValue->IsUndefined()) {
            // Do nothing.
        } else {
            Vector<String> sessionTypes = toImplArray<Vector<String>>(sessionTypesValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setSessionTypes(sessionTypes);
        }
    }

    {
        v8::Local<v8::Value> videoCapabilitiesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "videoCapabilities")).ToLocal(&videoCapabilitiesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (videoCapabilitiesValue.IsEmpty() || videoCapabilitiesValue->IsUndefined()) {
            // Do nothing.
        } else {
            HeapVector<MediaKeySystemMediaCapability> videoCapabilities = toImplArray<HeapVector<MediaKeySystemMediaCapability>>(videoCapabilitiesValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setVideoCapabilities(videoCapabilities);
        }
    }

}

v8::Local<v8::Value> toV8(const MediaKeySystemConfiguration& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MediaKeySystemConfiguration(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MediaKeySystemConfiguration(const MediaKeySystemConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAudioCapabilities()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "audioCapabilities"), toV8(impl.audioCapabilities(), creationContext, isolate))))
            return false;
    }

    if (impl.hasDistinctiveIdentifier()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "distinctiveIdentifier"), v8String(isolate, impl.distinctiveIdentifier()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "distinctiveIdentifier"), v8String(isolate, String("optional")))))
            return false;
    }

    if (impl.hasInitDataTypes()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "initDataTypes"), toV8(impl.initDataTypes(), creationContext, isolate))))
            return false;
    }

    if (impl.hasLabel()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "label"), v8String(isolate, impl.label()))))
            return false;
    }

    if (impl.hasPersistentState()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "persistentState"), v8String(isolate, impl.persistentState()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "persistentState"), v8String(isolate, String("optional")))))
            return false;
    }

    if (impl.hasSessionTypes()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "sessionTypes"), toV8(impl.sessionTypes(), creationContext, isolate))))
            return false;
    }

    if (impl.hasVideoCapabilities()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "videoCapabilities"), toV8(impl.videoCapabilities(), creationContext, isolate))))
            return false;
    }

    return true;
}

MediaKeySystemConfiguration NativeValueTraits<MediaKeySystemConfiguration>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MediaKeySystemConfiguration impl;
    V8MediaKeySystemConfiguration::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
