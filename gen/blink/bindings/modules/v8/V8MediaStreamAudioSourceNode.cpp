// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8MediaStreamAudioSourceNode.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaStream.h"
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
const WrapperTypeInfo V8MediaStreamAudioSourceNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaStreamAudioSourceNode::domTemplate, V8MediaStreamAudioSourceNode::refObject, V8MediaStreamAudioSourceNode::derefObject, V8MediaStreamAudioSourceNode::trace, 0, 0, V8MediaStreamAudioSourceNode::preparePrototypeObject, V8MediaStreamAudioSourceNode::installConditionallyEnabledProperties, "MediaStreamAudioSourceNode", &V8AudioSourceNode::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaStreamAudioSourceNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaStreamAudioSourceNode::s_wrapperTypeInfo = V8MediaStreamAudioSourceNode::wrapperTypeInfo;

namespace MediaStreamAudioSourceNodeV8Internal {

static void mediaStreamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaStreamAudioSourceNode* impl = V8MediaStreamAudioSourceNode::toImpl(holder);
    RawPtr<MediaStream> cppValue(impl->mediaStream());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "mediaStream"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void mediaStreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    MediaStreamAudioSourceNodeV8Internal::mediaStreamAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace MediaStreamAudioSourceNodeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8MediaStreamAudioSourceNodeAccessors[] = {
    {"mediaStream", MediaStreamAudioSourceNodeV8Internal::mediaStreamAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8MediaStreamAudioSourceNodeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "MediaStreamAudioSourceNode", V8AudioSourceNode::domTemplate(isolate), V8MediaStreamAudioSourceNode::internalFieldCount,
        0, 0,
        V8MediaStreamAudioSourceNodeAccessors, WTF_ARRAY_LENGTH(V8MediaStreamAudioSourceNodeAccessors),
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8MediaStreamAudioSourceNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaStreamAudioSourceNodeTemplate);
}

bool V8MediaStreamAudioSourceNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaStreamAudioSourceNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaStreamAudioSourceNode* V8MediaStreamAudioSourceNode::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8MediaStreamAudioSourceNode::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8MediaStreamAudioSourceNode::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
#endif // ENABLE(WEB_AUDIO)
