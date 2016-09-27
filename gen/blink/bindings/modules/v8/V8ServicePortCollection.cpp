// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ServicePortCollection.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8ServicePortConnectOptions.h"
#include "bindings/modules/v8/V8ServicePortMatchOptions.h"
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
const WrapperTypeInfo V8ServicePortCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8ServicePortCollection::domTemplate, V8ServicePortCollection::refObject, V8ServicePortCollection::derefObject, V8ServicePortCollection::trace, 0, 0, V8ServicePortCollection::preparePrototypeObject, V8ServicePortCollection::installConditionallyEnabledProperties, "ServicePortCollection", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ServicePortCollection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ServicePortCollection::s_wrapperTypeInfo = V8ServicePortCollection::wrapperTypeInfo;

namespace ServicePortCollectionV8Internal {

static void onconnectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    EventListener* cppValue(impl->onconnect());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onconnectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ServicePortCollectionV8Internal::onconnectAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onconnectAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onconnect(), v8Value, V8ServicePortCollection::eventListenerCacheIndex);
    impl->setOnconnect(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onconnectAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    ServicePortCollectionV8Internal::onconnectAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    EventListener* cppValue(impl->onmessage());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ServicePortCollectionV8Internal::onmessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onmessage(), v8Value, V8ServicePortCollection::eventListenerCacheIndex);
    impl->setOnmessage(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    ServicePortCollectionV8Internal::onmessageAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void oncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    EventListener* cppValue(impl->onclose());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void oncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ServicePortCollectionV8Internal::oncloseAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void oncloseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onclose(), v8Value, V8ServicePortCollection::eventListenerCacheIndex);
    impl->setOnclose(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncloseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    ServicePortCollectionV8Internal::oncloseAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void connectMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(info.Holder());
    V8StringResource<> url;
    ServicePortConnectOptions options;
    {
        url = info[0];
        if (!url.prepare(exceptionState))
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            return;
        }
        V8ServicePortConnectOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->connect(scriptState, url, options, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void connectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "connect", "ServicePortCollection", info.Holder(), info.GetIsolate());
    connectMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void connectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ServicePortCollectionV8Internal::connectMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void matchMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(info.Holder());
    ServicePortMatchOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8ServicePortMatchOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->match(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void matchMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "match", "ServicePortCollection", info.Holder(), info.GetIsolate());
    matchMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void matchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ServicePortCollectionV8Internal::matchMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void matchAllMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    ServicePortCollection* impl = V8ServicePortCollection::toImpl(info.Holder());
    ServicePortMatchOptions options;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('options') is not an object.");
            return;
        }
        V8ServicePortMatchOptions::toImpl(info.GetIsolate(), info[0], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->matchAll(scriptState, options);
    v8SetReturnValue(info, result.v8Value());
}

static void matchAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "matchAll", "ServicePortCollection", info.Holder(), info.GetIsolate());
    matchAllMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void matchAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ServicePortCollectionV8Internal::matchAllMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ServicePortCollectionV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8ServicePortCollectionAccessors[] = {
    {"onmessage", ServicePortCollectionV8Internal::onmessageAttributeGetterCallback, ServicePortCollectionV8Internal::onmessageAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onclose", ServicePortCollectionV8Internal::oncloseAttributeGetterCallback, ServicePortCollectionV8Internal::oncloseAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8ServicePortCollectionMethods[] = {
    {"connect", ServicePortCollectionV8Internal::connectMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"match", ServicePortCollectionV8Internal::matchMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"matchAll", ServicePortCollectionV8Internal::matchAllMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ServicePortCollectionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::navigatorConnectEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ServicePortCollection", V8EventTarget::domTemplate(isolate), V8ServicePortCollection::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ServicePortCollection", V8EventTarget::domTemplate(isolate), V8ServicePortCollection::internalFieldCount,
            0, 0,
            V8ServicePortCollectionAccessors, WTF_ARRAY_LENGTH(V8ServicePortCollectionAccessors),
            V8ServicePortCollectionMethods, WTF_ARRAY_LENGTH(V8ServicePortCollectionMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8ServicePortCollection::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ServicePortCollectionTemplate);
}

bool V8ServicePortCollection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ServicePortCollection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ServicePortCollection* V8ServicePortCollection::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ServicePortCollection::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    ExecutionContext* context = toExecutionContext(prototypeObject->CreationContext());
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    if (context && (context->isServiceWorkerGlobalScope())) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration = {"onconnect", ServicePortCollectionV8Internal::onconnectAttributeGetterCallback, ServicePortCollectionV8Internal::onconnectAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, v8::Local<v8::Object>(), prototypeObject, v8::Local<v8::Function>(), signature, accessorConfiguration);
    }
}

void V8ServicePortCollection::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8ServicePortCollection::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
