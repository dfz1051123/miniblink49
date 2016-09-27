// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "NotificationOptions.h"


namespace blink {

NotificationOptions::NotificationOptions()
{
    setBody(String(""));
    setDir(String("auto"));
    setLang(String(""));
    setSilent(false);
    setTag(String(""));
}

DEFINE_TRACE(NotificationOptions)
{
    visitor->trace(m_vibrate);
}

} // namespace blink
