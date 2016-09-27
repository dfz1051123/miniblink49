// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaKeyEventInit_h
#define MediaKeyEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/dom/DOMTypedArray.h"
#include "core/events/EventInit.h"
#include "core/html/MediaKeyError.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT MediaKeyEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    MediaKeyEventInit();

    bool hasDefaultURL() const { return !m_defaultURL.isNull(); }
    String defaultURL() const { return m_defaultURL; }
    void setDefaultURL(String value) { m_defaultURL = value; }

    bool hasErrorCode() const { return m_errorCode; }
    PassRefPtrWillBeRawPtr<MediaKeyError> errorCode() const { return m_errorCode; }
    void setErrorCode(PassRefPtrWillBeRawPtr<MediaKeyError> value) { m_errorCode = value; }
    void setErrorCodeToNull() { m_errorCode = RefPtrWillBeMember<MediaKeyError>(); }

    bool hasInitData() const { return m_initData; }
    PassRefPtr<DOMUint8Array> initData() const { return m_initData; }
    void setInitData(PassRefPtr<DOMUint8Array> value) { m_initData = value; }

    bool hasKeySystem() const { return !m_keySystem.isNull(); }
    String keySystem() const { return m_keySystem; }
    void setKeySystem(String value) { m_keySystem = value; }

    bool hasMessage() const { return m_message; }
    PassRefPtr<DOMUint8Array> message() const { return m_message; }
    void setMessage(PassRefPtr<DOMUint8Array> value) { m_message = value; }

    bool hasSessionId() const { return !m_sessionId.isNull(); }
    String sessionId() const { return m_sessionId; }
    void setSessionId(String value) { m_sessionId = value; }

    bool hasSystemCode() const { return !m_systemCode.isNull(); }
    unsigned systemCode() const { return m_systemCode.get(); }
    void setSystemCode(unsigned value) { m_systemCode = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_defaultURL;
    RefPtrWillBeMember<MediaKeyError> m_errorCode;
    RefPtr<DOMUint8Array> m_initData;
    String m_keySystem;
    RefPtr<DOMUint8Array> m_message;
    String m_sessionId;
    Nullable<unsigned> m_systemCode;

    friend class V8MediaKeyEventInit;
};

} // namespace blink

#endif // MediaKeyEventInit_h
