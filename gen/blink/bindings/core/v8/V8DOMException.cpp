// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DOMException.h"

#include "bindings/core/v8/ExceptionState.h"
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
const WrapperTypeInfo V8DOMException::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMException::domTemplate, V8DOMException::refObject, V8DOMException::derefObject, V8DOMException::trace, 0, 0, V8DOMException::preparePrototypeObject, V8DOMException::installConditionallyEnabledProperties, "DOMException", 0, WrapperTypeInfo::WrapperTypeExceptionPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMException.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMException::s_wrapperTypeInfo = V8DOMException::wrapperTypeInfo;

namespace DOMExceptionV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMException* impl = V8DOMException::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->code());
}

static void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMExceptionV8Internal::codeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMException* impl = V8DOMException::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMExceptionV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMException* impl = V8DOMException::toImpl(holder);
    v8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    DOMExceptionV8Internal::messageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMException* impl = V8DOMException::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    DOMExceptionV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace DOMExceptionV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8DOMExceptionAccessors[] = {
    {"code", DOMExceptionV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"name", DOMExceptionV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"message", DOMExceptionV8Internal::messageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8DOMExceptionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "DOMException", v8::Local<v8::FunctionTemplate>(), V8DOMException::internalFieldCount,
        0, 0,
        V8DOMExceptionAccessors, WTF_ARRAY_LENGTH(V8DOMExceptionAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8DOMExceptionConstants[] = {
        {"INDEX_SIZE_ERR", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"DOMSTRING_SIZE_ERR", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"HIERARCHY_REQUEST_ERR", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"WRONG_DOCUMENT_ERR", 4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_CHARACTER_ERR", 5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NO_DATA_ALLOWED_ERR", 6, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NO_MODIFICATION_ALLOWED_ERR", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NOT_FOUND_ERR", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NOT_SUPPORTED_ERR", 9, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INUSE_ATTRIBUTE_ERR", 10, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_STATE_ERR", 11, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SYNTAX_ERR", 12, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_MODIFICATION_ERR", 13, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NAMESPACE_ERR", 14, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_ACCESS_ERR", 15, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"VALIDATION_ERR", 16, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"TYPE_MISMATCH_ERR", 17, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SECURITY_ERR", 18, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NETWORK_ERR", 19, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ABORT_ERR", 20, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"URL_MISMATCH_ERR", 21, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"QUOTA_EXCEEDED_ERR", 22, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"TIMEOUT_ERR", 23, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"INVALID_NODE_TYPE_ERR", 24, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"DATA_CLONE_ERR", 25, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8DOMExceptionConstants, WTF_ARRAY_LENGTH(V8DOMExceptionConstants));
    const V8DOMConfiguration::MethodConfiguration toStringMethodConfiguration = {
        "toString", DOMExceptionV8Internal::toStringMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), toStringMethodConfiguration);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8DOMException::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMExceptionTemplate);
}

bool V8DOMException::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMException::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMException* V8DOMException::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8DOMException::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8DOMException::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
