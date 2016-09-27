// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8AudioBufferCallback_h
#define V8AudioBufferCallback_h

#if ENABLE(WEB_AUDIO)
#include "bindings/core/v8/ActiveDOMCallback.h"
#include "bindings/core/v8/DOMWrapperWorld.h"
#include "bindings/core/v8/ScopedPersistent.h"
#include "modules/ModulesExport.h"
#include "modules/webaudio/AudioBufferCallback.h"

namespace blink {

class V8AudioBufferCallback final : public AudioBufferCallback, public ActiveDOMCallback {
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(V8AudioBufferCallback);
public:
    static V8AudioBufferCallback* create(v8::Local<v8::Function> callback, ScriptState* scriptState)
    {
        return new V8AudioBufferCallback(callback, scriptState);
    }

    ~V8AudioBufferCallback() override;

    DECLARE_VIRTUAL_TRACE();

    void handleEvent(AudioBuffer* audioBuffer) override;
private:
    MODULES_EXPORT V8AudioBufferCallback(v8::Local<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};

}
#endif // ENABLE(WEB_AUDIO)
#endif // V8AudioBufferCallback_h
