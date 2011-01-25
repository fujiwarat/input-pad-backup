/* vim:set et sts=4: */
/* input-pad - The input pad
 * Copyright (C) 2010-2011 Takao Fujiwara <takao.fujiwara1@gmail.com>
 * Copyright (C) 2010-2011 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA
 */
/* This file is generated by unicode_block.sh */

#ifndef __INPUT_PAD_UNICODE_BLOCK_H__
#define __INPUT_PAD_UNICODE_BLOCK_H__

#include "i18n.h"

typedef struct _InputPadUnicodeBlockTable InputPadUnicodeBlockTable;

struct _InputPadUnicodeBlockTable {
    unsigned int        start;
    unsigned int        end;
    const char         *label;
};

static const InputPadUnicodeBlockTable input_pad_unicode_block_table[] = {
    {0x0000, 0x007F, N_("Basic Latin")},
    {0x0080, 0x00FF, N_("Latin-1 Supplement")},
    {0x0100, 0x017F, N_("Latin Extended-A")},
    {0x0180, 0x024F, N_("Latin Extended-B")},
    {0x0250, 0x02AF, N_("IPA Extensions")},
    {0x02B0, 0x02FF, N_("Spacing Modifier Letters")},
    {0x0300, 0x036F, N_("Combining Diacritical Marks")},
    {0x0370, 0x03FF, N_("Greek and Coptic")},
    {0x0400, 0x04FF, N_("Cyrillic")},
    {0x0500, 0x052F, N_("Cyrillic Supplement")},
    {0x0530, 0x058F, N_("Armenian")},
    {0x0590, 0x05FF, N_("Hebrew")},
    {0x0600, 0x06FF, N_("Arabic")},
    {0x0700, 0x074F, N_("Syriac")},
    {0x0750, 0x077F, N_("Arabic Supplement")},
    {0x0780, 0x07BF, N_("Thaana")},
    {0x07C0, 0x07FF, N_("NKo")},
    {0x0800, 0x083F, N_("Samaritan")},
    {0x0900, 0x097F, N_("Devanagari")},
    {0x0980, 0x09FF, N_("Bengali")},
    {0x0A00, 0x0A7F, N_("Gurmukhi")},
    {0x0A80, 0x0AFF, N_("Gujarati")},
    {0x0B00, 0x0B7F, N_("Oriya")},
    {0x0B80, 0x0BFF, N_("Tamil")},
    {0x0C00, 0x0C7F, N_("Telugu")},
    {0x0C80, 0x0CFF, N_("Kannada")},
    {0x0D00, 0x0D7F, N_("Malayalam")},
    {0x0D80, 0x0DFF, N_("Sinhala")},
    {0x0E00, 0x0E7F, N_("Thai")},
    {0x0E80, 0x0EFF, N_("Lao")},
    {0x0F00, 0x0FFF, N_("Tibetan")},
    {0x1000, 0x109F, N_("Myanmar")},
    {0x10A0, 0x10FF, N_("Georgian")},
    {0x1100, 0x11FF, N_("Hangul Jamo")},
    {0x1200, 0x137F, N_("Ethiopic")},
    {0x1380, 0x139F, N_("Ethiopic Supplement")},
    {0x13A0, 0x13FF, N_("Cherokee")},
    {0x1400, 0x167F, N_("Unified Canadian Aboriginal Syllabics")},
    {0x1680, 0x169F, N_("Ogham")},
    {0x16A0, 0x16FF, N_("Runic")},
    {0x1700, 0x171F, N_("Tagalog")},
    {0x1720, 0x173F, N_("Hanunoo")},
    {0x1740, 0x175F, N_("Buhid")},
    {0x1760, 0x177F, N_("Tagbanwa")},
    {0x1780, 0x17FF, N_("Khmer")},
    {0x1800, 0x18AF, N_("Mongolian")},
    {0x18B0, 0x18FF, N_("Unified Canadian Aboriginal Syllabics Extended")},
    {0x1900, 0x194F, N_("Limbu")},
    {0x1950, 0x197F, N_("Tai Le")},
    {0x1980, 0x19DF, N_("New Tai Lue")},
    {0x19E0, 0x19FF, N_("Khmer Symbols")},
    {0x1A00, 0x1A1F, N_("Buginese")},
    {0x1A20, 0x1AAF, N_("Tai Tham")},
    {0x1B00, 0x1B7F, N_("Balinese")},
    {0x1B80, 0x1BBF, N_("Sundanese")},
    {0x1C00, 0x1C4F, N_("Lepcha")},
    {0x1C50, 0x1C7F, N_("Ol Chiki")},
    {0x1CD0, 0x1CFF, N_("Vedic Extensions")},
    {0x1D00, 0x1D7F, N_("Phonetic Extensions")},
    {0x1D80, 0x1DBF, N_("Phonetic Extensions Supplement")},
    {0x1DC0, 0x1DFF, N_("Combining Diacritical Marks Supplement")},
    {0x1E00, 0x1EFF, N_("Latin Extended Additional")},
    {0x1F00, 0x1FFF, N_("Greek Extended")},
    {0x2000, 0x206F, N_("General Punctuation")},
    {0x2070, 0x209F, N_("Superscripts and Subscripts")},
    {0x20A0, 0x20CF, N_("Currency Symbols")},
    {0x20D0, 0x20FF, N_("Combining Diacritical Marks for Symbols")},
    {0x2100, 0x214F, N_("Letterlike Symbols")},
    {0x2150, 0x218F, N_("Number Forms")},
    {0x2190, 0x21FF, N_("Arrows")},
    {0x2200, 0x22FF, N_("Mathematical Operators")},
    {0x2300, 0x23FF, N_("Miscellaneous Technical")},
    {0x2400, 0x243F, N_("Control Pictures")},
    {0x2440, 0x245F, N_("Optical Character Recognition")},
    {0x2460, 0x24FF, N_("Enclosed Alphanumerics")},
    {0x2500, 0x257F, N_("Box Drawing")},
    {0x2580, 0x259F, N_("Block Elements")},
    {0x25A0, 0x25FF, N_("Geometric Shapes")},
    {0x2600, 0x26FF, N_("Miscellaneous Symbols")},
    {0x2700, 0x27BF, N_("Dingbats")},
    {0x27C0, 0x27EF, N_("Miscellaneous Mathematical Symbols-A")},
    {0x27F0, 0x27FF, N_("Supplemental Arrows-A")},
    {0x2800, 0x28FF, N_("Braille Patterns")},
    {0x2900, 0x297F, N_("Supplemental Arrows-B")},
    {0x2980, 0x29FF, N_("Miscellaneous Mathematical Symbols-B")},
    {0x2A00, 0x2AFF, N_("Supplemental Mathematical Operators")},
    {0x2B00, 0x2BFF, N_("Miscellaneous Symbols and Arrows")},
    {0x2C00, 0x2C5F, N_("Glagolitic")},
    {0x2C60, 0x2C7F, N_("Latin Extended-C")},
    {0x2C80, 0x2CFF, N_("Coptic")},
    {0x2D00, 0x2D2F, N_("Georgian Supplement")},
    {0x2D30, 0x2D7F, N_("Tifinagh")},
    {0x2D80, 0x2DDF, N_("Ethiopic Extended")},
    {0x2DE0, 0x2DFF, N_("Cyrillic Extended-A")},
    {0x2E00, 0x2E7F, N_("Supplemental Punctuation")},
    {0x2E80, 0x2EFF, N_("CJK Radicals Supplement")},
    {0x2F00, 0x2FDF, N_("Kangxi Radicals")},
    {0x2FF0, 0x2FFF, N_("Ideographic Description Characters")},
    {0x3000, 0x303F, N_("CJK Symbols and Punctuation")},
    {0x3040, 0x309F, N_("Hiragana")},
    {0x30A0, 0x30FF, N_("Katakana")},
    {0x3100, 0x312F, N_("Bopomofo")},
    {0x3130, 0x318F, N_("Hangul Compatibility Jamo")},
    {0x3190, 0x319F, N_("Kanbun")},
    {0x31A0, 0x31BF, N_("Bopomofo Extended")},
    {0x31C0, 0x31EF, N_("CJK Strokes")},
    {0x31F0, 0x31FF, N_("Katakana Phonetic Extensions")},
    {0x3200, 0x32FF, N_("Enclosed CJK Letters and Months")},
    {0x3300, 0x33FF, N_("CJK Compatibility")},
    {0x3400, 0x4DBF, N_("CJK Unified Ideographs Extension A")},
    {0x4DC0, 0x4DFF, N_("Yijing Hexagram Symbols")},
    {0x4E00, 0x9FFF, N_("CJK Unified Ideographs")},
    {0xA000, 0xA48F, N_("Yi Syllables")},
    {0xA490, 0xA4CF, N_("Yi Radicals")},
    {0xA4D0, 0xA4FF, N_("Lisu")},
    {0xA500, 0xA63F, N_("Vai")},
    {0xA640, 0xA69F, N_("Cyrillic Extended-B")},
    {0xA6A0, 0xA6FF, N_("Bamum")},
    {0xA700, 0xA71F, N_("Modifier Tone Letters")},
    {0xA720, 0xA7FF, N_("Latin Extended-D")},
    {0xA800, 0xA82F, N_("Syloti Nagri")},
    {0xA830, 0xA83F, N_("Common Indic Number Forms")},
    {0xA840, 0xA87F, N_("Phags-pa")},
    {0xA880, 0xA8DF, N_("Saurashtra")},
    {0xA8E0, 0xA8FF, N_("Devanagari Extended")},
    {0xA900, 0xA92F, N_("Kayah Li")},
    {0xA930, 0xA95F, N_("Rejang")},
    {0xA960, 0xA97F, N_("Hangul Jamo Extended-A")},
    {0xA980, 0xA9DF, N_("Javanese")},
    {0xAA00, 0xAA5F, N_("Cham")},
    {0xAA60, 0xAA7F, N_("Myanmar Extended-A")},
    {0xAA80, 0xAADF, N_("Tai Viet")},
    {0xABC0, 0xABFF, N_("Meetei Mayek")},
    {0xAC00, 0xD7AF, N_("Hangul Syllables")},
    {0xD7B0, 0xD7FF, N_("Hangul Jamo Extended-B")},
    {0xD800, 0xDB7F, N_("High Surrogates")},
    {0xDB80, 0xDBFF, N_("High Private Use Surrogates")},
    {0xDC00, 0xDFFF, N_("Low Surrogates")},
    {0xE000, 0xF8FF, N_("Private Use Area")},
    {0xF900, 0xFAFF, N_("CJK Compatibility Ideographs")},
    {0xFB00, 0xFB4F, N_("Alphabetic Presentation Forms")},
    {0xFB50, 0xFDFF, N_("Arabic Presentation Forms-A")},
    {0xFE00, 0xFE0F, N_("Variation Selectors")},
    {0xFE10, 0xFE1F, N_("Vertical Forms")},
    {0xFE20, 0xFE2F, N_("Combining Half Marks")},
    {0xFE30, 0xFE4F, N_("CJK Compatibility Forms")},
    {0xFE50, 0xFE6F, N_("Small Form Variants")},
    {0xFE70, 0xFEFF, N_("Arabic Presentation Forms-B")},
    {0xFF00, 0xFFEF, N_("Halfwidth and Fullwidth Forms")},
    {0xFFF0, 0xFFFF, N_("Specials")},
    {0x10000, 0x1007F, N_("Linear B Syllabary")},
    {0x10080, 0x100FF, N_("Linear B Ideograms")},
    {0x10100, 0x1013F, N_("Aegean Numbers")},
    {0x10140, 0x1018F, N_("Ancient Greek Numbers")},
    {0x10190, 0x101CF, N_("Ancient Symbols")},
    {0x101D0, 0x101FF, N_("Phaistos Disc")},
    {0x10280, 0x1029F, N_("Lycian")},
    {0x102A0, 0x102DF, N_("Carian")},
    {0x10300, 0x1032F, N_("Old Italic")},
    {0x10330, 0x1034F, N_("Gothic")},
    {0x10380, 0x1039F, N_("Ugaritic")},
    {0x103A0, 0x103DF, N_("Old Persian")},
    {0x10400, 0x1044F, N_("Deseret")},
    {0x10450, 0x1047F, N_("Shavian")},
    {0x10480, 0x104AF, N_("Osmanya")},
    {0x10800, 0x1083F, N_("Cypriot Syllabary")},
    {0x10840, 0x1085F, N_("Imperial Aramaic")},
    {0x10900, 0x1091F, N_("Phoenician")},
    {0x10920, 0x1093F, N_("Lydian")},
    {0x10A00, 0x10A5F, N_("Kharoshthi")},
    {0x10A60, 0x10A7F, N_("Old South Arabian")},
    {0x10B00, 0x10B3F, N_("Avestan")},
    {0x10B40, 0x10B5F, N_("Inscriptional Parthian")},
    {0x10B60, 0x10B7F, N_("Inscriptional Pahlavi")},
    {0x10C00, 0x10C4F, N_("Old Turkic")},
    {0x10E60, 0x10E7F, N_("Rumi Numeral Symbols")},
    {0x11080, 0x110CF, N_("Kaithi")},
    {0x12000, 0x123FF, N_("Cuneiform")},
    {0x12400, 0x1247F, N_("Cuneiform Numbers and Punctuation")},
    {0x13000, 0x1342F, N_("Egyptian Hieroglyphs")},
    {0x1D000, 0x1D0FF, N_("Byzantine Musical Symbols")},
    {0x1D100, 0x1D1FF, N_("Musical Symbols")},
    {0x1D200, 0x1D24F, N_("Ancient Greek Musical Notation")},
    {0x1D300, 0x1D35F, N_("Tai Xuan Jing Symbols")},
    {0x1D360, 0x1D37F, N_("Counting Rod Numerals")},
    {0x1D400, 0x1D7FF, N_("Mathematical Alphanumeric Symbols")},
    {0x1F000, 0x1F02F, N_("Mahjong Tiles")},
    {0x1F030, 0x1F09F, N_("Domino Tiles")},
    {0x1F100, 0x1F1FF, N_("Enclosed Alphanumeric Supplement")},
    {0x1F200, 0x1F2FF, N_("Enclosed Ideographic Supplement")},
    {0x20000, 0x2A6DF, N_("CJK Unified Ideographs Extension B")},
    {0x2A700, 0x2B73F, N_("CJK Unified Ideographs Extension C")},
    {0x2F800, 0x2FA1F, N_("CJK Compatibility Ideographs Supplement")},
    {0xE0000, 0xE007F, N_("Tags")},
    {0xE0100, 0xE01EF, N_("Variation Selectors Supplement")},
    {0xF0000, 0xFFFFF, N_("Supplementary Private Use Area-A")},
    {0x100000, 0x10FFFF, N_("Supplementary Private Use Area-B")},
    { 0, 0, NULL}
};

#endif

