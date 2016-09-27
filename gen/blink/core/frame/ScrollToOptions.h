// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ScrollToOptions_h
#define ScrollToOptions_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/frame/ScrollOptions.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT ScrollToOptions : public ScrollOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ScrollToOptions();

    bool hasLeft() const { return !m_left.isNull(); }
    double left() const { return m_left.get(); }
    void setLeft(double value) { m_left = value; }

    bool hasTop() const { return !m_top.isNull(); }
    double top() const { return m_top.get(); }
    void setTop(double value) { m_top = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_left;
    Nullable<double> m_top;

    friend class V8ScrollToOptions;
};

} // namespace blink

#endif // ScrollToOptions_h
