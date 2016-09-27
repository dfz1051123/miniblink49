// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ImageBitmap.h"

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
const WrapperTypeInfo V8ImageBitmap::wrapperTypeInfo = { gin::kEmbedderBlink, V8ImageBitmap::domTemplate, V8ImageBitmap::refObject, V8ImageBitmap::derefObject, V8ImageBitmap::trace, 0, 0, V8ImageBitmap::preparePrototypeObject, V8ImageBitmap::installConditionallyEnabledProperties, "ImageBitmap", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ImageBitmap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ImageBitmap::s_wrapperTypeInfo = V8ImageBitmap::wrapperTypeInfo;

namespace ImageBitmapV8Internal {

static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ImageBitmap* impl = V8ImageBitmap::toImpl(holder);
    v8SetReturnValueInt(info, impl->width());
}

static void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ImageBitmapV8Internal::widthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ImageBitmap* impl = V8ImageBitmap::toImpl(holder);
    v8SetReturnValueInt(info, impl->height());
}

static void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ImageBitmapV8Internal::heightAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ImageBitmapV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8ImageBitmapAccessors[] = {
    {"width", ImageBitmapV8Internal::widthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"height", ImageBitmapV8Internal::heightAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8ImageBitmapTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ImageBitmap", v8::Local<v8::FunctionTemplate>(), V8ImageBitmap::internalFieldCount,
        0, 0,
        V8ImageBitmapAccessors, WTF_ARRAY_LENGTH(V8ImageBitmapAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8ImageBitmap::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ImageBitmapTemplate);
}

bool V8ImageBitmap::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ImageBitmap::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ImageBitmap* V8ImageBitmap::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ImageBitmap::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ImageBitmap>()->ref();
#endif
}

void V8ImageBitmap::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<ImageBitmap>()->deref();
#endif
}

} // namespace blink
