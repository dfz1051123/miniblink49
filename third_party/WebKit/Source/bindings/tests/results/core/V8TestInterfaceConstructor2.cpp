// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceConstructor2.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8TestInterfaceEmpty.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8TestInterfaceConstructor2::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceConstructor2::domTemplate, V8TestInterfaceConstructor2::refObject, V8TestInterfaceConstructor2::derefObject, V8TestInterfaceConstructor2::trace, 0, 0, V8TestInterfaceConstructor2::preparePrototypeObject, V8TestInterfaceConstructor2::installConditionallyEnabledProperties, "TestInterfaceConstructor2", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceConstructor2.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceConstructor2::s_wrapperTypeInfo = V8TestInterfaceConstructor2::wrapperTypeInfo;

namespace TestInterfaceConstructor2V8Internal {

static void constructor1(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    V8StringResource<> stringArg;
    {
        stringArg = info[0];
        if (!stringArg.prepare())
            return;
    }
    RefPtr<TestInterfaceConstructor2> impl = TestInterfaceConstructor2::create(stringArg);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor2::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor2(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor2", info.Holder(), info.GetIsolate());
    Dictionary dictionaryArg;
    {
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('dictionaryArg') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        dictionaryArg = Dictionary(info[0], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtr<TestInterfaceConstructor2> impl = TestInterfaceConstructor2::create(dictionaryArg);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor2::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor3(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor2", info.Holder(), info.GetIsolate());
    Vector<Vector<String>> stringSequenceSequenceArg;
    {
        stringSequenceSequenceArg = toImplArray<Vector<Vector<String>>>(info[0], 1, info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtr<TestInterfaceConstructor2> impl = TestInterfaceConstructor2::create(stringSequenceSequenceArg);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor2::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor4(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor2", info.Holder(), info.GetIsolate());
    TestInterfaceEmpty* testInterfaceEmptyArg;
    int longArg;
    V8StringResource<> defaultUndefinedOptionalStringArg;
    V8StringResource<> defaultNullStringOptionalStringArg;
    Dictionary defaultUndefinedOptionalDictionaryArg;
    V8StringResource<> optionalStringArg;
    {
        testInterfaceEmptyArg = V8TestInterfaceEmpty::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        longArg = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        defaultUndefinedOptionalStringArg = info[2];
        if (!defaultUndefinedOptionalStringArg.prepare())
            return;
        if (!info[3]->IsUndefined()) {
            defaultNullStringOptionalStringArg = info[3];
            if (!defaultNullStringOptionalStringArg.prepare())
                return;
        } else {
            defaultNullStringOptionalStringArg = nullptr;
        }
        if (!isUndefinedOrNull(info[4]) && !info[4]->IsObject()) {
            exceptionState.throwTypeError("parameter 5 ('defaultUndefinedOptionalDictionaryArg') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        defaultUndefinedOptionalDictionaryArg = Dictionary(info[4], info.GetIsolate(), exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (UNLIKELY(info.Length() <= 5)) {
            RefPtr<TestInterfaceConstructor2> impl = TestInterfaceConstructor2::create(testInterfaceEmptyArg, longArg, defaultUndefinedOptionalStringArg, defaultNullStringOptionalStringArg, defaultUndefinedOptionalDictionaryArg);
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor2::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        optionalStringArg = info[5];
        if (!optionalStringArg.prepare())
            return;
    }
    RefPtr<TestInterfaceConstructor2> impl = TestInterfaceConstructor2::create(testInterfaceEmptyArg, longArg, defaultUndefinedOptionalStringArg, defaultNullStringOptionalStringArg, defaultUndefinedOptionalDictionaryArg, optionalStringArg);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8TestInterfaceConstructor2::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "TestInterfaceConstructor2", info.Holder(), info.GetIsolate());
    switch (std::min(6, info.Length())) {
    case 1:
        if (info[0]->IsArray()) {
            TestInterfaceConstructor2V8Internal::constructor3(info);
            return;
        }
        if (info[0]->IsObject()) {
            TestInterfaceConstructor2V8Internal::constructor2(info);
            return;
        }
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor1(info);
            return;
        }
        break;
    case 2:
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor4(info);
            return;
        }
        break;
    case 3:
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor4(info);
            return;
        }
        break;
    case 4:
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor4(info);
            return;
        }
        break;
    case 5:
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor4(info);
            return;
        }
        break;
    case 6:
        if (true) {
            TestInterfaceConstructor2V8Internal::constructor4(info);
            return;
        }
        break;
    default:
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No matching constructor signature.");
    exceptionState.throwIfNeeded();
}

} // namespace TestInterfaceConstructor2V8Internal

void V8TestInterfaceConstructor2::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("TestInterfaceConstructor2"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    TestInterfaceConstructor2V8Internal::constructor(info);
}

static void installV8TestInterfaceConstructor2Template(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "TestInterfaceConstructor2", v8::Local<v8::FunctionTemplate>(), V8TestInterfaceConstructor2::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    functionTemplate->SetCallHandler(V8TestInterfaceConstructor2::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8TestInterfaceConstructor2::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceConstructor2Template);
}

bool V8TestInterfaceConstructor2::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TestInterfaceConstructor2::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceConstructor2* V8TestInterfaceConstructor2::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8TestInterfaceConstructor2::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor2>()->ref();
}

void V8TestInterfaceConstructor2::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<TestInterfaceConstructor2>()->deref();
}

} // namespace blink
