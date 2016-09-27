// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FontFaceSetLoadEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/core/v8/V8FontFace.h"

namespace blink {

void V8FontFaceSetLoadEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FontFaceSetLoadEventInit& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> fontfacesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "fontfaces")).ToLocal(&fontfacesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (fontfacesValue.IsEmpty() || fontfacesValue->IsUndefined()) {
            // Do nothing.
        } else {
            WillBeHeapVector<RefPtrWillBeMember<FontFace>> fontfaces = (toRefPtrWillBeMemberNativeArray<FontFace, V8FontFace>(fontfacesValue, 0, isolate, exceptionState));
            if (exceptionState.hadException())
                return;
            impl.setFontfaces(fontfaces);
        }
    }

}

v8::Local<v8::Value> toV8(const FontFaceSetLoadEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8FontFaceSetLoadEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8FontFaceSetLoadEventInit(const FontFaceSetLoadEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasFontfaces()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fontfaces"), toV8(impl.fontfaces(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fontfaces"), toV8(WillBeHeapVector<RefPtrWillBeMember<FontFace>>(), creationContext, isolate))))
            return false;
    }

    return true;
}

FontFaceSetLoadEventInit NativeValueTraits<FontFaceSetLoadEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    FontFaceSetLoadEventInit impl;
    V8FontFaceSetLoadEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
