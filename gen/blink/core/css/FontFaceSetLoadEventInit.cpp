// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "FontFaceSetLoadEventInit.h"


namespace blink {

FontFaceSetLoadEventInit::FontFaceSetLoadEventInit()
{
    setFontfaces(WillBeHeapVector<RefPtrWillBeMember<FontFace>>());
}

DEFINE_TRACE(FontFaceSetLoadEventInit)
{
    visitor->trace(m_fontfaces);
    EventInit::trace(visitor);
}

} // namespace blink
