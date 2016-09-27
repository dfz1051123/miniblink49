// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DirectoryReader.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8EntriesCallback.h"
#include "bindings/modules/v8/V8ErrorCallback.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DirectoryReader::wrapperTypeInfo = { gin::kEmbedderBlink, V8DirectoryReader::domTemplate, V8DirectoryReader::refObject, V8DirectoryReader::derefObject, V8DirectoryReader::trace, 0, 0, V8DirectoryReader::preparePrototypeObject, V8DirectoryReader::installConditionallyEnabledProperties, "DirectoryReader", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DirectoryReader.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DirectoryReader::s_wrapperTypeInfo = V8DirectoryReader::wrapperTypeInfo;

namespace DirectoryReaderV8Internal {

static void readEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "readEntries", "DirectoryReader", 1, info.Length()), info.GetIsolate());
        return;
    }
    DirectoryReader* impl = V8DirectoryReader::toImpl(info.Holder());
    EntriesCallback* successCallback;
    ErrorCallback* errorCallback;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("readEntries", "DirectoryReader", "The callback provided as parameter 1 is not a function."));
            return;
        }
        successCallback = V8EntriesCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("readEntries", "DirectoryReader", "The callback provided as parameter 2 is not a function."));
                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
    }
    impl->readEntries(successCallback, errorCallback);
}

static void readEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DirectoryReaderV8Internal::readEntriesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DirectoryReaderV8Internal

static const V8DOMConfiguration::MethodConfiguration V8DirectoryReaderMethods[] = {
    {"readEntries", DirectoryReaderV8Internal::readEntriesMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8DirectoryReaderTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DirectoryReader", v8::Local<v8::FunctionTemplate>(), V8DirectoryReader::internalFieldCount,
        0, 0,
        0, 0,
        V8DirectoryReaderMethods, WTF_ARRAY_LENGTH(V8DirectoryReaderMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DirectoryReader::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DirectoryReaderTemplate);
}

bool V8DirectoryReader::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DirectoryReader::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DirectoryReader* V8DirectoryReader::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DirectoryReader::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DirectoryReader::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
