// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef TextDecoderOptions_h
#define TextDecoderOptions_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT TextDecoderOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    TextDecoderOptions();

    bool hasFatal() const { return !m_fatal.isNull(); }
    bool fatal() const { return m_fatal.get(); }
    void setFatal(bool value) { m_fatal = value; }

    bool hasIgnoreBOM() const { return !m_ignoreBOM.isNull(); }
    bool ignoreBOM() const { return m_ignoreBOM.get(); }
    void setIgnoreBOM(bool value) { m_ignoreBOM = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_fatal;
    Nullable<bool> m_ignoreBOM;

    friend class V8TextDecoderOptions;
};

} // namespace blink

#endif // TextDecoderOptions_h
