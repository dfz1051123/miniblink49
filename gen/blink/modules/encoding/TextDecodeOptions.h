// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef TextDecodeOptions_h
#define TextDecodeOptions_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT TextDecodeOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    TextDecodeOptions();

    bool hasStream() const { return !m_stream.isNull(); }
    bool stream() const { return m_stream.get(); }
    void setStream(bool value) { m_stream = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_stream;

    friend class V8TextDecodeOptions;
};

} // namespace blink

#endif // TextDecodeOptions_h
