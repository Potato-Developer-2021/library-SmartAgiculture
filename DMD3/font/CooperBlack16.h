

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : CooperBlack16.h
 * Date                : 15.03.2018
 * Font size in bytes  : 10630
 * Font width          : 10
 * Font height         : 14
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef COOPERBLACK16_H
#define COOPERBLACK16_H

#define COOPERBLACK16_WIDTH 10
#define COOPERBLACK16_HEIGHT 14

const static uint8_t CooperBlack16[] PROGMEM = {
    0x29, 0x86, // size
    0x0A, // width
    0x0E, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x03, 0x05, 0x08, 0x08, 0x0B, 0x0C, 0x02, 0x06, 0x06, 
    0x06, 0x08, 0x03, 0x03, 0x03, 0x06, 0x08, 0x07, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x03, 0x03, 0x07, 0x07, 
    0x07, 0x06, 0x0B, 0x0B, 0x0A, 0x0A, 0x0B, 0x09, 0x09, 0x0B, 
    0x0B, 0x05, 0x08, 0x0B, 0x0A, 0x0C, 0x0B, 0x0B, 0x09, 0x0B, 
    0x0B, 0x09, 0x0B, 0x0B, 0x0B, 0x0F, 0x0B, 0x0B, 0x09, 0x05, 
    0x06, 0x05, 0x07, 0x08, 0x04, 0x08, 0x08, 0x06, 0x09, 0x06, 
    0x05, 0x08, 0x0A, 0x05, 0x04, 0x0B, 0x05, 0x0E, 0x0A, 0x07, 
    0x09, 0x09, 0x07, 0x05, 0x06, 0x0A, 0x09, 0x0F, 0x09, 0x09, 
    0x06, 0x06, 0x03, 0x06, 0x07, 0x03, 
    
    // font data
    0x1E, 0x7E, 0x3E, 0x1C, 0x1C, 0x1C, // 33
    0x0E, 0x0E, 0x00, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0xA0, 0xB0, 0xFC, 0xBC, 0xB0, 0xFC, 0xBC, 0xB0, 0x04, 0x1C, 0x1C, 0x04, 0x1C, 0x1C, 0x04, 0x04, // 35
    0x70, 0xF8, 0xF8, 0xFE, 0xDE, 0xD8, 0xB8, 0xB0, 0x0C, 0x1C, 0x18, 0x78, 0x7C, 0x1C, 0x1C, 0x0C, // 36
    0x1C, 0x3E, 0x32, 0x26, 0xBE, 0xFC, 0xD0, 0x4C, 0xC2, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x0C, 0x00, 0x0C, 0x1C, 0x18, 0x10, 0x1C, 0x0C, // 37
    0x80, 0xF8, 0xFC, 0x7E, 0x66, 0x06, 0x6C, 0x20, 0xE8, 0xFC, 0xBC, 0x18, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0C, 0x04, 0x00, // 38
    0x0E, 0x0E, 0x00, 0x00, // 39
    0xF0, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x0C, 0x3C, 0x7C, 0xE0, 0xC0, 0xC0, // 40
    0x06, 0x06, 0x0E, 0xFC, 0xF8, 0xE0, 0xC0, 0xC0, 0xE0, 0x7C, 0x7C, 0x1C, // 41
    0x0C, 0x7C, 0x3E, 0x3E, 0x7C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0xC0, 0xC0, 0xC0, 0xF8, 0xF8, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x9C, 0xFC, 0x38, // 44
    0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, // 46
    0x00, 0x00, 0xE0, 0x78, 0x1E, 0x06, 0xF0, 0x3C, 0x0C, 0x00, 0x00, 0x00, // 47
    0xE0, 0xF0, 0xF8, 0x18, 0x38, 0xF8, 0xF0, 0xE0, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x1C, 0x0C, 0x04, // 48
    0x30, 0x30, 0xF8, 0xF8, 0xF8, 0x18, 0x00, 0x18, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, // 49
    0x60, 0x70, 0x38, 0x38, 0xF8, 0xF8, 0x30, 0x00, 0x10, 0x18, 0x18, 0x1C, 0x1C, 0x18, 0x3C, 0x1C, // 50
    0x10, 0x18, 0x98, 0xD8, 0xF8, 0xF8, 0xD0, 0x80, 0x20, 0x60, 0x60, 0x60, 0x70, 0x3C, 0x3C, 0x1C, // 51
    0x80, 0xC0, 0xE0, 0x70, 0xF8, 0xFC, 0xFC, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x3C, 0x3C, 0x0C, // 52
    0xC0, 0xF8, 0xF8, 0xB8, 0xB8, 0xB8, 0x38, 0x38, 0x64, 0x64, 0x64, 0x64, 0x6C, 0x7C, 0x3C, 0x1C, // 53
    0xF0, 0xFC, 0xFE, 0x3E, 0x72, 0xF0, 0xF0, 0xE0, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x1C, 0x0C, 0x04, // 54
    0x78, 0x78, 0x38, 0x38, 0x38, 0xF8, 0xF8, 0x18, 0x00, 0x00, 0x60, 0x70, 0x7C, 0x1C, 0x00, 0x00, // 55
    0xB8, 0xF8, 0xFC, 0xF4, 0xE4, 0xFC, 0xFC, 0x98, 0x0C, 0x0C, 0x1C, 0x10, 0x10, 0x1C, 0x0C, 0x0C, // 56
    0xE0, 0xF0, 0xF8, 0x18, 0x18, 0xF8, 0xF0, 0xE0, 0x00, 0x0C, 0x4C, 0x6C, 0x7C, 0x3C, 0x1C, 0x04, // 57
    0x70, 0x70, 0x70, 0x1C, 0x1C, 0x1C, // 58
    0x70, 0x70, 0x70, 0x9C, 0xFC, 0x38, // 59
    0x70, 0xF8, 0xF8, 0xDC, 0x8E, 0x8E, 0x07, 0x00, 0x00, 0x00, 0x04, 0x0C, 0x0C, 0x1C, // 60
    0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0xB0, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, // 61
    0x07, 0x8E, 0x8E, 0xDC, 0xF8, 0xF8, 0x70, 0x1C, 0x0C, 0x0C, 0x04, 0x00, 0x00, 0x00, // 62
    0x1C, 0x1E, 0x66, 0x7E, 0x3E, 0x1C, 0x00, 0x1C, 0x1C, 0x1C, 0x00, 0x00, // 63
    0xE0, 0x18, 0xEC, 0xF4, 0x9A, 0xCA, 0xEA, 0xFA, 0x9A, 0xC4, 0x78, 0x04, 0x08, 0x14, 0x14, 0x14, 0x10, 0x14, 0x14, 0x04, 0x00, 0x00, // 64
    0x00, 0x00, 0xC0, 0xF8, 0xBE, 0xBE, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x04, 0x04, 0x1C, 0x1C, 0x1C, 0x1C, 0x18, // 65
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0x66, 0x66, 0xFE, 0xFE, 0xDC, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0C, // 66
    0xF0, 0xF8, 0xFC, 0x8E, 0x06, 0x06, 0x06, 0x1E, 0x1C, 0x1C, 0x00, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x0C, 0x0C, // 67
    0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x0E, 0xFC, 0xFC, 0xF0, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0C, 0x00, // 68
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0xF6, 0xF6, 0x0E, 0x80, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, // 69
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0xF6, 0xF6, 0x0E, 0x0E, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0xF8, 0xFC, 0x8E, 0x06, 0xC6, 0xC6, 0xCE, 0xDE, 0xDC, 0xC0, 0x00, 0x04, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x04, 0x00, // 71
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0x60, 0x66, 0xFE, 0xFE, 0xFE, 0x06, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, // 72
    0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x18, 0x1C, 0x1C, 0x1C, 0x18, // 73
    0xC0, 0xC0, 0xC0, 0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x0C, 0x0C, 0x1C, 0x18, 0x1C, 0x0C, 0x0C, 0x00, // 74
    0x06, 0xFE, 0xFE, 0xFE, 0xE6, 0xF0, 0xDE, 0x8E, 0x06, 0x06, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x18, // 75
    0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x80, 0x80, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x1C, 0x0C, // 76
    0x06, 0xFE, 0xFE, 0x7E, 0xFE, 0xF0, 0xE0, 0xF8, 0xFE, 0xFE, 0xFE, 0x06, 0x18, 0x1C, 0x1C, 0x00, 0x04, 0x1C, 0x0C, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 77
    0x06, 0xFE, 0xFE, 0x3E, 0x38, 0x70, 0xE0, 0xE6, 0xFE, 0xFE, 0x06, 0x18, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x00, // 78
    0xF0, 0xFC, 0xFC, 0xC6, 0x06, 0x06, 0x0E, 0x1E, 0xFC, 0xF8, 0xF0, 0x00, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x0C, 0x04, 0x00, // 79
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0x66, 0x7E, 0x3E, 0x3C, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0xF8, 0xFC, 0xC6, 0x06, 0x06, 0x0E, 0x3E, 0xFC, 0xF8, 0xF0, 0x10, 0x14, 0x3C, 0x3C, 0x7C, 0x78, 0xF8, 0xF8, 0xCC, 0xCC, 0x40, // 81
    0x06, 0xFE, 0xFE, 0xFE, 0x66, 0xE6, 0xFE, 0xFE, 0x9C, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x0C, 0x1C, 0x1C, 0x18, 0x18, // 82
    0xB8, 0xBC, 0x7E, 0x76, 0xE6, 0xE6, 0xEE, 0xEE, 0xCC, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x04, // 83
    0x1C, 0x1E, 0x0E, 0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x0E, 0x1E, 0x1C, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, // 84
    0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0x00, 0x06, 0xFE, 0xFE, 0x06, 0x00, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x1C, 0x0C, 0x04, 0x00, // 85
    0x06, 0x0E, 0x7E, 0xFE, 0xF6, 0xC0, 0xE0, 0xFE, 0x3E, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x04, 0x1C, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x00, // 86
    0x06, 0x1E, 0x7E, 0xFE, 0xF0, 0xC6, 0xFE, 0x7E, 0xFE, 0xFE, 0xE0, 0xE6, 0xFE, 0x3E, 0x06, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x0C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x04, 0x00, 0x00, // 87
    0x06, 0x06, 0x0E, 0x9E, 0xFE, 0xFE, 0xF0, 0xDE, 0x8E, 0x06, 0x06, 0x18, 0x18, 0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x18, // 88
    0x06, 0x06, 0x0E, 0x3E, 0xFE, 0xF6, 0xF0, 0x1E, 0x0E, 0x06, 0x06, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x00, 0x00, // 89
    0x1C, 0x9E, 0xC6, 0xF6, 0xFE, 0x7E, 0x1E, 0x86, 0x80, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x18, 0x18, 0x1C, 0x0C, // 90
    0xFE, 0xFE, 0xFE, 0x02, 0x02, 0xFC, 0xFC, 0xFC, 0x80, 0x80, // 91
    0x06, 0x1E, 0x78, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x3C, 0xF0, // 92
    0x02, 0x02, 0xFE, 0xFE, 0xFE, 0x80, 0x80, 0xFC, 0xFC, 0xFC, // 93
    0x20, 0x3C, 0x3E, 0x06, 0x3E, 0x3C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 95
    0x02, 0x06, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, // 96
    0x20, 0xB0, 0x90, 0x90, 0xF0, 0xF0, 0xE0, 0x00, 0x0C, 0x1C, 0x1C, 0x18, 0x0C, 0x1C, 0x1C, 0x08, // 97
    0x04, 0xFE, 0xFE, 0xFE, 0x20, 0xF0, 0xF0, 0xE0, 0x00, 0x0C, 0x0C, 0x1C, 0x10, 0x1C, 0x0C, 0x04, // 98
    0xC0, 0xE0, 0xF0, 0x30, 0x70, 0x60, 0x04, 0x0C, 0x1C, 0x18, 0x18, 0x0C, // 99
    0xC0, 0xE0, 0xF0, 0x30, 0x34, 0xFE, 0xFE, 0xFE, 0x00, 0x04, 0x0C, 0x1C, 0x18, 0x18, 0x1C, 0x1C, 0x1C, 0x08, // 100
    0xC0, 0xE0, 0xF0, 0x90, 0xF0, 0xE0, 0x04, 0x1C, 0x1C, 0x18, 0x18, 0x08, // 101
    0x7C, 0xFE, 0xF6, 0xEE, 0x6C, 0x18, 0x1C, 0x1C, 0x1C, 0x18, // 102
    0xE0, 0xE0, 0xF0, 0x10, 0xF0, 0xF0, 0xF0, 0x30, 0x78, 0xFC, 0xBC, 0xB4, 0xB4, 0xF4, 0x70, 0x70, // 103
    0x04, 0xFE, 0xFE, 0xFE, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 104
    0x20, 0xF6, 0xF6, 0xF6, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, // 105
    0x20, 0xF6, 0xF6, 0xF6, 0x80, 0xFC, 0xFC, 0x7C, // 106
    0x04, 0xFE, 0xFE, 0xFE, 0xC0, 0xE0, 0xF0, 0xF0, 0x30, 0x30, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x1C, 0x04, 0x0C, 0x1C, 0x1C, 0x18, 0x18, // 107
    0x04, 0xFE, 0xFE, 0xFE, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, // 108
    0x20, 0xF0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x1C, 0x1C, 0x18, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 109
    0x20, 0xE0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x00, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x1C, 0x1C, 0x1C, 0x18, // 110
    0xC0, 0xE0, 0xF0, 0x30, 0xF0, 0xE0, 0xC0, 0x0C, 0x1C, 0x1C, 0x18, 0x1C, 0x0C, 0x04, // 111
    0x20, 0xF0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x60, 0xFC, 0xFC, 0xFC, 0xD8, 0x18, 0x1C, 0x0C, 0x04, // 112
    0xC0, 0xE0, 0xF0, 0x30, 0x30, 0xF0, 0xF0, 0xF0, 0x00, 0x04, 0x1C, 0x1C, 0x18, 0x58, 0xFC, 0xFC, 0xFC, 0xC0, // 113
    0x20, 0xF0, 0xF0, 0xF0, 0x20, 0x70, 0x70, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x00, 0x00, // 114
    0xE0, 0xF0, 0xF0, 0xD0, 0xB0, 0x18, 0x14, 0x1C, 0x1C, 0x0C, // 115
    0x30, 0xF8, 0xF8, 0xFC, 0x30, 0x30, 0x00, 0x0C, 0x1C, 0x1C, 0x18, 0x08, // 116
    0x20, 0xF0, 0xF0, 0xF0, 0x00, 0x20, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x18, 0x08, 0x1C, 0x1C, 0x1C, 0x08, // 117
    0x30, 0x70, 0xF0, 0xF0, 0xF0, 0x80, 0xF0, 0x70, 0x30, 0x00, 0x00, 0x04, 0x0C, 0x1C, 0x0C, 0x00, 0x00, 0x00, // 118
    0x30, 0x70, 0xF0, 0xF0, 0xF0, 0x80, 0xF0, 0xF0, 0xF0, 0xF0, 0x80, 0xB0, 0xF0, 0x70, 0x30, 0x00, 0x00, 0x00, 0x0C, 0x1C, 0x1C, 0x04, 0x00, 0x04, 0x1C, 0x1C, 0x0C, 0x00, 0x00, 0x00, // 119
    0x30, 0x30, 0xF0, 0xF0, 0xF0, 0xC0, 0xF0, 0x30, 0x30, 0x18, 0x1C, 0x1C, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x18, // 120
    0x30, 0x70, 0xF0, 0xF0, 0xB0, 0x80, 0xF0, 0x70, 0x30, 0x70, 0xF0, 0xE4, 0xDC, 0x7C, 0x3C, 0x0C, 0x00, 0x00, // 121
    0x70, 0xB0, 0xF0, 0xF0, 0xF0, 0x30, 0x18, 0x1C, 0x1C, 0x1C, 0x18, 0x0C, // 122
    0x80, 0xFE, 0xFE, 0x7E, 0x02, 0x02, 0x00, 0x7C, 0xFC, 0xFC, 0x80, 0x80, // 123
    0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xFC, // 124
    0x02, 0x02, 0x7E, 0xFE, 0xFE, 0x80, 0x80, 0x80, 0xFC, 0xFC, 0x7C, 0x00, // 125
    0x60, 0xF0, 0x70, 0xF0, 0xE0, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0xFE, 0x1C, 0x10, 0x1C // 127
    
};

#endif