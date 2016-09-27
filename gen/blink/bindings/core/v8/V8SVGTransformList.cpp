// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGTransformList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGMatrix.h"
#include "bindings/core/v8/V8SVGTransform.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8SVGTransformList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGTransformList::domTemplate, V8SVGTransformList::refObject, V8SVGTransformList::derefObject, V8SVGTransformList::trace, 0, V8SVGTransformList::visitDOMWrapper, V8SVGTransformList::preparePrototypeObject, V8SVGTransformList::installConditionallyEnabledProperties, "SVGTransformList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTransformListTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGTransformListTearOff::s_wrapperTypeInfo = V8SVGTransformList::wrapperTypeInfo;

namespace SVGTransformListTearOffV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGTransformListTearOffV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void numberOfItemsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void numberOfItemsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGTransformListTearOffV8Internal::numberOfItemsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clear", "SVGTransformList", info.Holder(), info.GetIsolate());
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    impl->clear(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void initializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initialize", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGTransformTearOff* newItem;
    {
        newItem = V8SVGTransform::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGTransform'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->initialize(newItem, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void initializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::initializeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getItem", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->getItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::getItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertItemBefore", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGTransformTearOff* newItem;
    unsigned index;
    {
        newItem = V8SVGTransform::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGTransform'.");
            exceptionState.throwIfNeeded();
            return;
        }
        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->insertItemBefore(newItem, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void insertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::insertItemBeforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceItem", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGTransformTearOff* newItem;
    unsigned index;
    {
        newItem = V8SVGTransform::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGTransform'.");
            exceptionState.throwIfNeeded();
            return;
        }
        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->replaceItem(newItem, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void replaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::replaceItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeItem", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->removeItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::removeItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void appendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendItem", "SVGTransformList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGTransformTearOff* newItem;
    {
        newItem = V8SVGTransform::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGTransform'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->appendItem(newItem, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void appendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::appendItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void createSVGTransformFromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "createSVGTransformFromMatrix", "SVGTransformList", 1, info.Length()), info.GetIsolate());
        return;
    }
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGMatrixTearOff* matrix;
    {
        matrix = V8SVGMatrix::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!matrix) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("createSVGTransformFromMatrix", "SVGTransformList", "parameter 1 is not of type 'SVGMatrix'."));
            return;
        }
    }
    v8SetReturnValue(info, impl->createSVGTransformFromMatrix(matrix));
}

static void createSVGTransformFromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGTransformListTearOffV8Internal::createSVGTransformFromMatrixMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void consolidateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "consolidate", "SVGTransformList", info.Holder(), info.GetIsolate());
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->consolidate(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void consolidateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::SVGTransformListConsolidate);
    SVGTransformListTearOffV8Internal::consolidateMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedGetterContext, "SVGTransformList", info.Holder(), info.GetIsolate());
    RefPtrWillBeRawPtr<SVGTransformTearOff> result = impl->getItem(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    SVGTransformListTearOffV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGTransformListTearOff* impl = V8SVGTransformList::toImpl(info.Holder());
    SVGTransformTearOff* propertyValue = V8SVGTransform::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "SVGTransformList", info.Holder(), info.GetIsolate());
    if (!propertyValue) {
        exceptionState.throwTypeError("The provided value is not of type 'SVGTransform'.");
        exceptionState.throwIfNeeded();
        return;
    }
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
    SVGTransformListTearOffV8Internal::indexedPropertySetter(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGTransformListTearOffV8Internal

void V8SVGTransformList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGTransformListTearOff* impl = scriptWrappable->toImpl<SVGTransformListTearOff>();
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        if (DOMDataStore::containsWrapper(contextElement, isolate))
            DOMDataStore::setWrapperReference(wrapper, contextElement, isolate);
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGTransformListAccessors[] = {
    {"length", SVGTransformListTearOffV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberOfItems", SVGTransformListTearOffV8Internal::numberOfItemsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8SVGTransformListMethods[] = {
    {"clear", SVGTransformListTearOffV8Internal::clearMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"initialize", SVGTransformListTearOffV8Internal::initializeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getItem", SVGTransformListTearOffV8Internal::getItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"insertItemBefore", SVGTransformListTearOffV8Internal::insertItemBeforeMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"replaceItem", SVGTransformListTearOffV8Internal::replaceItemMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"removeItem", SVGTransformListTearOffV8Internal::removeItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"appendItem", SVGTransformListTearOffV8Internal::appendItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"createSVGTransformFromMatrix", SVGTransformListTearOffV8Internal::createSVGTransformFromMatrixMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"consolidate", SVGTransformListTearOffV8Internal::consolidateMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8SVGTransformListTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGTransformList", v8::Local<v8::FunctionTemplate>(), V8SVGTransformList::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGTransformList", v8::Local<v8::FunctionTemplate>(), V8SVGTransformList::internalFieldCount,
            0, 0,
            V8SVGTransformListAccessors, WTF_ARRAY_LENGTH(V8SVGTransformListAccessors),
            V8SVGTransformListMethods, WTF_ARRAY_LENGTH(V8SVGTransformListMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(SVGTransformListTearOffV8Internal::indexedPropertyGetterCallback, SVGTransformListTearOffV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<SVGTransformListTearOff>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8SVGTransformList::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGTransformListTemplate);
}

bool V8SVGTransformList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGTransformList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGTransformListTearOff* V8SVGTransformList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGTransformList::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGTransformListTearOff>()->ref();
#endif
}

void V8SVGTransformList::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGTransformListTearOff>()->deref();
#endif
}

} // namespace blink
