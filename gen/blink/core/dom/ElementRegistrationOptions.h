// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ElementRegistrationOptions_h
#define ElementRegistrationOptions_h

#include "bindings/core/v8/ScriptValue.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT ElementRegistrationOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ElementRegistrationOptions();

    bool hasExtends() const { return !m_extends.isNull(); }
    String extends() const { return m_extends; }
    void setExtends(String value) { m_extends = value; }
    void setExtendsToNull() { m_extends = String(); }

    bool hasPrototype() const { return !(m_prototype.isEmpty() || m_prototype.isNull() || m_prototype.isUndefined()); }
    ScriptValue prototype() const { return m_prototype; }
    void setPrototype(ScriptValue value) { m_prototype = value; }
    void setPrototypeToNull() { m_prototype = ScriptValue(); }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_extends;
    ScriptValue m_prototype;

    friend class V8ElementRegistrationOptions;
};

} // namespace blink

#endif // ElementRegistrationOptions_h
