// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8IDBIndex.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8IDBObjectStore.h"
#include "bindings/modules/v8/V8IDBRequest.h"
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
const WrapperTypeInfo V8IDBIndex::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBIndex::domTemplate, V8IDBIndex::refObject, V8IDBIndex::derefObject, V8IDBIndex::trace, 0, 0, V8IDBIndex::preparePrototypeObject, V8IDBIndex::installConditionallyEnabledProperties, "IDBIndex", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBIndex.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBIndex::s_wrapperTypeInfo = V8IDBIndex::wrapperTypeInfo;

namespace IDBIndexV8Internal {

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBIndex* impl = V8IDBIndex::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBIndexV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void objectStoreAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBIndex* impl = V8IDBIndex::toImpl(holder);
    RawPtr<IDBObjectStore> cppValue(impl->objectStore());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "objectStore"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void objectStoreAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBIndexV8Internal::objectStoreAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyPathAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBIndex* impl = V8IDBIndex::toImpl(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    v8SetReturnValue(info, impl->keyPath(scriptState).v8Value());
}

static void keyPathAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBIndexV8Internal::keyPathAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void multiEntryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBIndex* impl = V8IDBIndex::toImpl(holder);
    v8SetReturnValueBool(info, impl->multiEntry());
}

static void multiEntryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBIndexV8Internal::multiEntryAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void uniqueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    IDBIndex* impl = V8IDBIndex::toImpl(holder);
    v8SetReturnValueBool(info, impl->unique());
}

static void uniqueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    IDBIndexV8Internal::uniqueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "get", "IDBIndex", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue key;
    {
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->get(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::getMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getKey", "IDBIndex", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue key;
    {
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->getKey(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::getKeyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getAll", "IDBIndex", info.Holder(), info.GetIsolate());
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue range;
    unsigned maxCount;
    {
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            maxCount = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            maxCount = 4294967295u;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->getAll(scriptState, range, maxCount, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::getAllMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getAllKeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getAllKeys", "IDBIndex", info.Holder(), info.GetIsolate());
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue range;
    unsigned maxCount;
    {
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            maxCount = toUInt32(info.GetIsolate(), info[1], EnforceRange, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            maxCount = 4294967295u;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->getAllKeys(scriptState, range, maxCount, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getAllKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::getAllKeysMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void countMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "count", "IDBIndex", info.Holder(), info.GetIsolate());
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue key;
    {
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->count(scriptState, key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void countMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::countMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void openCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "openCursor", "IDBIndex", info.Holder(), info.GetIsolate());
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue range;
    V8StringResource<> direction;
    {
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            direction = info[1];
            if (!direction.prepare())
                return;
            static const char* validValues[] = {
                "next",
                "nextunique",
                "prev",
                "prevunique",
            };
            if (!isValidEnum(direction, validValues, WTF_ARRAY_LENGTH(validValues), "IDBCursorDirection", exceptionState)) {
                exceptionState.throwIfNeeded();
                return;
            }
        } else {
            direction = String("next");
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->openCursor(scriptState, range, direction, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void openCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::openCursorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void openKeyCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "openKeyCursor", "IDBIndex", info.Holder(), info.GetIsolate());
    IDBIndex* impl = V8IDBIndex::toImpl(info.Holder());
    ScriptValue range;
    V8StringResource<> direction;
    {
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            direction = info[1];
            if (!direction.prepare())
                return;
            static const char* validValues[] = {
                "next",
                "nextunique",
                "prev",
                "prevunique",
            };
            if (!isValidEnum(direction, validValues, WTF_ARRAY_LENGTH(validValues), "IDBCursorDirection", exceptionState)) {
                exceptionState.throwIfNeeded();
                return;
            }
        } else {
            direction = String("next");
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<IDBRequest> result = impl->openKeyCursor(scriptState, range, direction, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void openKeyCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    IDBIndexV8Internal::openKeyCursorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace IDBIndexV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8IDBIndexAccessors[] = {
    {"name", IDBIndexV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"objectStore", IDBIndexV8Internal::objectStoreAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"keyPath", IDBIndexV8Internal::keyPathAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"multiEntry", IDBIndexV8Internal::multiEntryAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"unique", IDBIndexV8Internal::uniqueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8IDBIndexMethods[] = {
    {"get", IDBIndexV8Internal::getMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getKey", IDBIndexV8Internal::getKeyMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"count", IDBIndexV8Internal::countMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"openCursor", IDBIndexV8Internal::openCursorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"openKeyCursor", IDBIndexV8Internal::openKeyCursorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8IDBIndexTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "IDBIndex", v8::Local<v8::FunctionTemplate>(), V8IDBIndex::internalFieldCount,
        0, 0,
        V8IDBIndexAccessors, WTF_ARRAY_LENGTH(V8IDBIndexAccessors),
        V8IDBIndexMethods, WTF_ARRAY_LENGTH(V8IDBIndexMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::indexedDBExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getAllMethodConfiguration = {
            "getAll", IDBIndexV8Internal::getAllMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getAllMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::indexedDBExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getAllKeysMethodConfiguration = {
            "getAllKeys", IDBIndexV8Internal::getAllKeysMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getAllKeysMethodConfiguration);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8IDBIndex::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBIndexTemplate);
}

bool V8IDBIndex::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBIndex::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBIndex* V8IDBIndex::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8IDBIndex::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8IDBIndex::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
