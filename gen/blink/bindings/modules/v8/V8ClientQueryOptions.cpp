// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ClientQueryOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8ClientQueryOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ClientQueryOptions& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block;
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> includeUncontrolledValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "includeUncontrolled")).ToLocal(&includeUncontrolledValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (includeUncontrolledValue.IsEmpty() || includeUncontrolledValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool includeUncontrolled = toBoolean(isolate, includeUncontrolledValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setIncludeUncontrolled(includeUncontrolled);
        }
    }

    {
        v8::Local<v8::Value> typeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "type")).ToLocal(&typeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> type = typeValue;
            if (!type.prepare(exceptionState))
                return;
            static const char* validValues[] = {
                "window",
                "worker",
                "sharedworker",
                "all",
            };
            if (!isValidEnum(type, validValues, WTF_ARRAY_LENGTH(validValues), "ClientType", exceptionState))
                return;
            impl.setType(type);
        }
    }

}

v8::Local<v8::Value> toV8(const ClientQueryOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ClientQueryOptions(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8ClientQueryOptions(const ClientQueryOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasIncludeUncontrolled()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "includeUncontrolled"), v8Boolean(impl.includeUncontrolled(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "includeUncontrolled"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasType()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "type"), v8String(isolate, impl.type()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "type"), v8String(isolate, String("window")))))
            return false;
    }

    return true;
}

ClientQueryOptions NativeValueTraits<ClientQueryOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ClientQueryOptions impl;
    V8ClientQueryOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
