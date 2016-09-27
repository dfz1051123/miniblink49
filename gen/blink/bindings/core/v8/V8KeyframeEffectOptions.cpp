// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8KeyframeEffectOptions.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"

namespace blink {

void V8KeyframeEffectOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, KeyframeEffectOptions& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> delayValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "delay")).ToLocal(&delayValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (delayValue.IsEmpty() || delayValue->IsUndefined()) {
            // Do nothing.
        } else {
            double delay = toRestrictedDouble(isolate, delayValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDelay(delay);
        }
    }

    {
        v8::Local<v8::Value> directionValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "direction")).ToLocal(&directionValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (directionValue.IsEmpty() || directionValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> direction = directionValue;
            if (!direction.prepare(exceptionState))
                return;
            impl.setDirection(direction);
        }
    }

    {
        v8::Local<v8::Value> durationValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "duration")).ToLocal(&durationValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (durationValue.IsEmpty() || durationValue->IsUndefined()) {
            // Do nothing.
        } else {
            UnrestrictedDoubleOrString duration;
            V8UnrestrictedDoubleOrString::toImpl(isolate, durationValue, duration, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setDuration(duration);
        }
    }

    {
        v8::Local<v8::Value> easingValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "easing")).ToLocal(&easingValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (easingValue.IsEmpty() || easingValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> easing = easingValue;
            if (!easing.prepare(exceptionState))
                return;
            impl.setEasing(easing);
        }
    }

    {
        v8::Local<v8::Value> endDelayValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "endDelay")).ToLocal(&endDelayValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (endDelayValue.IsEmpty() || endDelayValue->IsUndefined()) {
            // Do nothing.
        } else {
            double endDelay = toRestrictedDouble(isolate, endDelayValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setEndDelay(endDelay);
        }
    }

    {
        v8::Local<v8::Value> fillValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "fill")).ToLocal(&fillValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (fillValue.IsEmpty() || fillValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> fill = fillValue;
            if (!fill.prepare(exceptionState))
                return;
            impl.setFill(fill);
        }
    }

    {
        v8::Local<v8::Value> iterationStartValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "iterationStart")).ToLocal(&iterationStartValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (iterationStartValue.IsEmpty() || iterationStartValue->IsUndefined()) {
            // Do nothing.
        } else {
            double iterationStart = toRestrictedDouble(isolate, iterationStartValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setIterationStart(iterationStart);
        }
    }

    {
        v8::Local<v8::Value> iterationsValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "iterations")).ToLocal(&iterationsValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (iterationsValue.IsEmpty() || iterationsValue->IsUndefined()) {
            // Do nothing.
        } else {
            double iterations = toDouble(isolate, iterationsValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setIterations(iterations);
        }
    }

    {
        v8::Local<v8::Value> playbackRateValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "playbackRate")).ToLocal(&playbackRateValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (playbackRateValue.IsEmpty() || playbackRateValue->IsUndefined()) {
            // Do nothing.
        } else {
            double playbackRate = toRestrictedDouble(isolate, playbackRateValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setPlaybackRate(playbackRate);
        }
    }

}

v8::Local<v8::Value> toV8(const KeyframeEffectOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8KeyframeEffectOptions(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8KeyframeEffectOptions(const KeyframeEffectOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasDelay()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "delay"), v8::Number::New(isolate, impl.delay()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "delay"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasDirection()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "direction"), v8String(isolate, impl.direction()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "direction"), v8String(isolate, String("normal")))))
            return false;
    }

    if (impl.hasDuration()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "duration"), toV8(impl.duration(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "duration"), toV8(UnrestrictedDoubleOrString::fromString(String("auto")), creationContext, isolate))))
            return false;
    }

    if (impl.hasEasing()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "easing"), v8String(isolate, impl.easing()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "easing"), v8String(isolate, String("linear")))))
            return false;
    }

    if (impl.hasEndDelay()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "endDelay"), v8::Number::New(isolate, impl.endDelay()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "endDelay"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasFill()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fill"), v8String(isolate, impl.fill()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fill"), v8String(isolate, String("auto")))))
            return false;
    }

    if (impl.hasIterationStart()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "iterationStart"), v8::Number::New(isolate, impl.iterationStart()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "iterationStart"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasIterations()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "iterations"), v8::Number::New(isolate, impl.iterations()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "iterations"), v8::Number::New(isolate, 1))))
            return false;
    }

    if (impl.hasPlaybackRate()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "playbackRate"), v8::Number::New(isolate, impl.playbackRate()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "playbackRate"), v8::Number::New(isolate, 1))))
            return false;
    }

    return true;
}

KeyframeEffectOptions NativeValueTraits<KeyframeEffectOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    KeyframeEffectOptions impl;
    V8KeyframeEffectOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
