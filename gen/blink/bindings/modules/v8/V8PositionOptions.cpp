// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PositionOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8PositionOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PositionOptions& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> enableHighAccuracyValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "enableHighAccuracy")).ToLocal(&enableHighAccuracyValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (enableHighAccuracyValue.IsEmpty() || enableHighAccuracyValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool enableHighAccuracy = toBoolean(isolate, enableHighAccuracyValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setEnableHighAccuracy(enableHighAccuracy);
        }
    }

    {
        v8::Local<v8::Value> maximumAgeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "maximumAge")).ToLocal(&maximumAgeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (maximumAgeValue.IsEmpty() || maximumAgeValue->IsUndefined()) {
            // Do nothing.
        } else {
            unsigned maximumAge = toUInt32(isolate, maximumAgeValue, Clamp, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setMaximumAge(maximumAge);
        }
    }

    {
        v8::Local<v8::Value> timeoutValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "timeout")).ToLocal(&timeoutValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (timeoutValue.IsEmpty() || timeoutValue->IsUndefined()) {
            // Do nothing.
        } else {
            unsigned timeout = toUInt32(isolate, timeoutValue, Clamp, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setTimeout(timeout);
        }
    }

}

v8::Local<v8::Value> toV8(const PositionOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8PositionOptions(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PositionOptions(const PositionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasEnableHighAccuracy()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "enableHighAccuracy"), v8Boolean(impl.enableHighAccuracy(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "enableHighAccuracy"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasMaximumAge()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "maximumAge"), v8::Integer::NewFromUnsigned(isolate, impl.maximumAge()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "maximumAge"), v8::Integer::NewFromUnsigned(isolate, 0u))))
            return false;
    }

    if (impl.hasTimeout()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timeout"), v8::Integer::NewFromUnsigned(isolate, impl.timeout()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timeout"), v8::Integer::NewFromUnsigned(isolate, 4294967295u))))
            return false;
    }

    return true;
}

PositionOptions NativeValueTraits<PositionOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PositionOptions impl;
    V8PositionOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
