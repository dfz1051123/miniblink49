// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef FilePropertyBag_h
#define FilePropertyBag_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT FilePropertyBag {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    FilePropertyBag();

    bool hasEndings() const { return !m_endings.isNull(); }
    String endings() const { return m_endings; }
    void setEndings(String value) { m_endings = value; }

    bool hasLastModified() const { return !m_lastModified.isNull(); }
    long long lastModified() const { return m_lastModified.get(); }
    void setLastModified(long long value) { m_lastModified = value; }

    bool hasType() const { return !m_type.isNull(); }
    String type() const { return m_type; }
    void setType(String value) { m_type = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_endings;
    Nullable<long long> m_lastModified;
    String m_type;

    friend class V8FilePropertyBag;
};

} // namespace blink

#endif // FilePropertyBag_h
