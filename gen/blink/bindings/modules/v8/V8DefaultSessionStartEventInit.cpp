// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8DefaultSessionStartEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/modules/v8/V8PresentationSession.h"

namespace blink {

void V8DefaultSessionStartEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DefaultSessionStartEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> sessionValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "session")).ToLocal(&sessionValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (sessionValue.IsEmpty() || sessionValue->IsUndefined()) {
            // Do nothing.
        } else {
            PresentationSession* session = V8PresentationSession::toImplWithTypeCheck(isolate, sessionValue);
            if (!session && !sessionValue->IsNull()) {
                exceptionState.throwTypeError("member session is not of type PresentationSession.");
                return;
            }
            impl.setSession(session);
        }
    }

}

v8::Local<v8::Value> toV8(const DefaultSessionStartEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8DefaultSessionStartEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8DefaultSessionStartEventInit(const DefaultSessionStartEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasSession()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "session"), toV8(impl.session(), creationContext, isolate))))
            return false;
    }

    return true;
}

DefaultSessionStartEventInit NativeValueTraits<DefaultSessionStartEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DefaultSessionStartEventInit impl;
    V8DefaultSessionStartEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
