// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Storage.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8Storage::wrapperTypeInfo = { gin::kEmbedderBlink, V8Storage::domTemplate, V8Storage::refObject, V8Storage::derefObject, V8Storage::trace, 0, 0, V8Storage::preparePrototypeObject, V8Storage::installConditionallyEnabledProperties, "Storage", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Storage.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Storage::s_wrapperTypeInfo = V8Storage::wrapperTypeInfo;

namespace StorageV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Storage* impl = V8Storage::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "length", "Storage", holder, info.GetIsolate());
    unsigned cppValue(impl->length(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueUnsigned(info, cppValue);
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    StorageV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void keyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "key", "Storage", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Storage* impl = V8Storage::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    String result = impl->key(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void keyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    StorageV8Internal::keyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getItem", "Storage", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Storage* impl = V8Storage::toImpl(info.Holder());
    V8StringResource<> key;
    {
        key = info[0];
        if (!key.prepare())
            return;
    }
    String result = impl->getItem(key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "getItem", "Storage", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Storage.getItem", info.Length(), loggerArgs.data());
    }
    StorageV8Internal::getItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setItem", "Storage", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Storage* impl = V8Storage::toImpl(info.Holder());
    V8StringResource<> key;
    V8StringResource<> data;
    {
        key = info[0];
        if (!key.prepare())
            return;
        data = info[1];
        if (!data.prepare())
            return;
    }
    impl->setItem(key, data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "setItem", "Storage", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Storage.setItem", info.Length(), loggerArgs.data());
    }
    StorageV8Internal::setItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeItem", "Storage", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Storage* impl = V8Storage::toImpl(info.Holder());
    V8StringResource<> key;
    {
        key = info[0];
        if (!key.prepare())
            return;
    }
    impl->removeItem(key, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeItem", "Storage", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Storage.removeItem", info.Length(), loggerArgs.data());
    }
    StorageV8Internal::removeItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clear", "Storage", info.Holder(), info.GetIsolate());
    Storage* impl = V8Storage::toImpl(info.Holder());
    impl->clear(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "clear", "Storage", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Storage.clear", info.Length(), loggerArgs.data());
    }
    StorageV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedGetterContext, "Storage", info.Holder(), info.GetIsolate());
    String result = impl->anonymousIndexedGetter(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result.isNull())
        return;
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    StorageV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    V8StringResource<> propertyValue = v8Value;
    if (!propertyValue.prepare())
        return;
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "Storage", info.Holder(), info.GetIsolate());
    bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    StorageV8Internal::indexedPropertySetter(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyDeleter(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedDeletionContext, "Storage", info.Holder(), info.GetIsolate());
    DeleteResult result = impl->anonymousIndexedDeleter(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result != DeleteUnknownProperty)
        return v8SetReturnValueBool(info, result == DeleteSuccess);
}

static void indexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    StorageV8Internal::indexedPropertyDeleter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    Storage* impl = V8Storage::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    v8::String::Utf8Value namedProperty(nameString);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "Storage", info.Holder(), info.GetIsolate());
    String result = impl->anonymousNamedGetter(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result.isNull())
        return;
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    StorageV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertySetter(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    v8::String::Utf8Value namedProperty(nameString);
    ExceptionState exceptionState(ExceptionState::SetterContext, *namedProperty, "Storage", info.Holder(), info.GetIsolate());
    Storage* impl = V8Storage::toImpl(info.Holder());
    V8StringResource<> propertyName(nameString);
    if (!propertyName.prepare())
        return;
    V8StringResource<> propertyValue = v8Value;
    if (!propertyValue.prepare())
        return;
    bool result = impl->anonymousNamedSetter(propertyName, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void namedPropertySetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    StorageV8Internal::namedPropertySetter(name, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "Storage", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    StorageV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyDeleter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::DeletionContext, *namedProperty, "Storage", info.Holder(), info.GetIsolate());
    DeleteResult result = impl->anonymousNamedDeleter(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (result != DeleteUnknownProperty)
        return v8SetReturnValueBool(info, result == DeleteSuccess);
}

static void namedPropertyDeleterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    StorageV8Internal::namedPropertyDeleter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    Storage* impl = V8Storage::toImpl(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "Storage", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Local<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i) {
        if (!v8CallBoolean(v8names->Set(info.GetIsolate()->GetCurrentContext(), v8::Integer::New(info.GetIsolate(), i), v8String(info.GetIsolate(), names[i]))))
            return;
    }
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    StorageV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace StorageV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8StorageAccessors[] = {
    {"length", StorageV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8StorageTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Storage", v8::Local<v8::FunctionTemplate>(), V8Storage::internalFieldCount,
        0, 0,
        V8StorageAccessors, WTF_ARRAY_LENGTH(V8StorageAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(StorageV8Internal::indexedPropertyGetterCallback, StorageV8Internal::indexedPropertySetterCallback, 0, StorageV8Internal::indexedPropertyDeleterCallback, 0);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }
    {
        v8::NamedPropertyHandlerConfiguration config(StorageV8Internal::namedPropertyGetterCallback, StorageV8Internal::namedPropertySetterCallback, StorageV8Internal::namedPropertyQueryCallback, StorageV8Internal::namedPropertyDeleterCallback, StorageV8Internal::namedPropertyEnumeratorCallback);
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kOnlyInterceptStrings));
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kNonMasking));
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }
    const V8DOMConfiguration::MethodConfiguration keyMethodConfiguration = {
        "key", StorageV8Internal::keyMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), keyMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration getItemMethodConfiguration = {
        "getItem", StorageV8Internal::getItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), getItemMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration setItemMethodConfiguration = {
        "setItem", StorageV8Internal::setItemMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), setItemMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration removeItemMethodConfiguration = {
        "removeItem", StorageV8Internal::removeItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), removeItemMethodConfiguration);
    const V8DOMConfiguration::MethodConfiguration clearMethodConfiguration = {
        "clear", StorageV8Internal::clearMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), clearMethodConfiguration);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Storage::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8StorageTemplate);
}

bool V8Storage::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Storage::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Storage* V8Storage::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Storage::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Storage::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
