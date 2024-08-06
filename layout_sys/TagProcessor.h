#pragma once

#include <basis/seadTypes.h>

#include <nw/font/font_TagProcessorBase.h>
#include <nw/lyt/lyt_TextBox.h>

class TagProcessor : public nw::lyt::TextBox::TagProcessor  // vtbl Address: 0x100E4580
{
public:
    TagProcessor()
        : mFontSize(1.0f)
    {
    }

    // Address: 0x0267C0C4
    virtual Operation Process(u16 code, ContextType* pContext);
    // Address: 0x0267C3FC
    virtual Operation CalcRect(nw::ut::Rect* pRect, u16 code, ContextType* pContext);

protected:
    f32 mFontSize;
};
static_assert(sizeof(TagProcessor) == 0x8);
