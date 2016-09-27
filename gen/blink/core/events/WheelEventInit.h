// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef WheelEventInit_h
#define WheelEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/MouseEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT WheelEventInit : public MouseEventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    WheelEventInit();

    bool hasDeltaMode() const { return !m_deltaMode.isNull(); }
    unsigned deltaMode() const { return m_deltaMode.get(); }
    void setDeltaMode(unsigned value) { m_deltaMode = value; }

    bool hasDeltaX() const { return !m_deltaX.isNull(); }
    double deltaX() const { return m_deltaX.get(); }
    void setDeltaX(double value) { m_deltaX = value; }

    bool hasDeltaY() const { return !m_deltaY.isNull(); }
    double deltaY() const { return m_deltaY.get(); }
    void setDeltaY(double value) { m_deltaY = value; }

    bool hasDeltaZ() const { return !m_deltaZ.isNull(); }
    double deltaZ() const { return m_deltaZ.get(); }
    void setDeltaZ(double value) { m_deltaZ = value; }

    bool hasWheelDeltaX() const { return !m_wheelDeltaX.isNull(); }
    int wheelDeltaX() const { return m_wheelDeltaX.get(); }
    void setWheelDeltaX(int value) { m_wheelDeltaX = value; }

    bool hasWheelDeltaY() const { return !m_wheelDeltaY.isNull(); }
    int wheelDeltaY() const { return m_wheelDeltaY.get(); }
    void setWheelDeltaY(int value) { m_wheelDeltaY = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<unsigned> m_deltaMode;
    Nullable<double> m_deltaX;
    Nullable<double> m_deltaY;
    Nullable<double> m_deltaZ;
    Nullable<int> m_wheelDeltaX;
    Nullable<int> m_wheelDeltaY;

    friend class V8WheelEventInit;
};

} // namespace blink

#endif // WheelEventInit_h
