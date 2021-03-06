

/*
 *
 * Stencil12
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Stencil12.h
 * Date                : 11.03.2018
 * Font size in bytes  : 15276
 * Font width          : 10
 * Font height         : 18
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

#ifndef STENCIL12_H
#define STENCIL12_H

#define STENCIL12_WIDTH 10
#define STENCIL12_HEIGHT 18

const static uint8_t Stencil12[] PROGMEM = {
    0x3B, 0xAC, // size
    0x0A, // width
    0x12, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x04, 0x06, 0x0A, 0x09, 0x0D, 0x0C, 0x02, 0x04, 0x05, 
    0x07, 0x09, 0x04, 0x05, 0x03, 0x06, 0x0A, 0x05, 0x08, 0x08, 
    0x0A, 0x08, 0x09, 0x08, 0x09, 0x0A, 0x03, 0x04, 0x08, 0x09, 
    0x08, 0x06, 0x0C, 0x0B, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x0B, 
    0x0C, 0x06, 0x09, 0x0C, 0x09, 0x0C, 0x0B, 0x0B, 0x0A, 0x0B, 
    0x0B, 0x09, 0x0A, 0x0B, 0x0B, 0x0F, 0x0B, 0x0B, 0x09, 0x05, 
    0x06, 0x05, 0x0A, 0x09, 0x04, 0x0B, 0x0A, 0x0A, 0x0A, 0x09, 
    0x09, 0x0B, 0x0C, 0x06, 0x09, 0x0C, 0x09, 0x0C, 0x0B, 0x0B, 
    0x0A, 0x0B, 0x0B, 0x09, 0x0A, 0x0B, 0x0B, 0x0F, 0x0B, 0x0B, 
    0x09, 0x07, 0x02, 0x07, 0x07, 0x05, 
    
    // font data
    0x70, 0xF8, 0xF8, 0x70, 0x70, 0x73, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x40, 0x40, 0xE0, 0x78, 0x40, 0x00, 0xF0, 0x78, 0x40, 0x08, 0x48, 0x7E, 0x0F, 0x08, 0x60, 0x7F, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x00, 0xE0, 0xF0, 0xC8, 0xBC, 0x88, 0x78, 0x70, 0x00, 0x38, 0x39, 0x5B, 0x4B, 0xF7, 0x47, 0x4F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x70, 0xF8, 0x88, 0x00, 0xF8, 0x70, 0x00, 0xC0, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x0C, 0x03, 0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF8, 0xF8, 0x80, 0x48, 0x30, 0x80, 0x80, 0x1C, 0x3E, 0x7F, 0x7E, 0x73, 0x67, 0x5F, 0x7F, 0x7E, 0x7C, 0x76, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, // 39
    0x80, 0xE0, 0xF0, 0x18, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x40, 0xC0, // 40
    0x08, 0x70, 0xE0, 0xC0, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x1F, 0x80, 0x40, 0x00, 0x00, 0x00, // 41
    0x30, 0xB0, 0xB8, 0xD8, 0xA0, 0xB0, 0x30, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x1F, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x60, 0x70, 0xF0, 0xE0, 0x80, 0xC0, 0x40, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x80, 0xF0, 0xF8, 0x18, 0xE0, 0xFC, 0x3F, 0x07, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x00, // 47
    0xC0, 0xE0, 0xF0, 0xF8, 0x08, 0x00, 0xF8, 0xF8, 0xF0, 0xC0, 0x0F, 0x1F, 0x3F, 0x7F, 0x40, 0x00, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x08, 0xF8, 0xF8, 0xF8, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x70, 0x78, 0x68, 0x00, 0xF8, 0xF8, 0xF0, 0xE0, 0x68, 0x78, 0x74, 0x76, 0x73, 0x73, 0x71, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x70, 0x78, 0x68, 0x08, 0xF8, 0xF8, 0xF0, 0x60, 0x38, 0x78, 0x59, 0x41, 0x7F, 0x7F, 0x3E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0xC0, 0x00, 0xF0, 0xF8, 0xF8, 0x00, 0x00, 0x0C, 0x0A, 0x09, 0x08, 0x40, 0x7F, 0x7F, 0x7F, 0x48, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0xC0, 0x38, 0xB8, 0x38, 0xB8, 0xB8, 0x18, 0x08, 0x39, 0x79, 0x59, 0x40, 0x7F, 0x7F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0xC0, 0xF0, 0xF8, 0xF8, 0x00, 0x78, 0x78, 0x70, 0x00, 0x0F, 0x3F, 0x7F, 0x7F, 0x01, 0x7F, 0x7F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x68, 0x30, 0x38, 0x38, 0x38, 0xB8, 0x78, 0x18, 0x00, 0x00, 0x38, 0x7E, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x70, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0x00, 0x3C, 0x7E, 0x7F, 0x7F, 0x41, 0x7F, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xE0, 0xF0, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF0, 0xE0, 0xC0, 0x01, 0x03, 0x3B, 0x7B, 0x7B, 0x40, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0xC0, 0xC0, 0xC0, 0x71, 0x71, 0x71, 0x00, 0x00, 0x00, // 58
    0xC0, 0xC0, 0xC0, 0x00, 0x61, 0x71, 0xF1, 0xE0, 0x80, 0xC0, 0x40, 0x00, // 59
    0x00, 0x80, 0x80, 0xC0, 0x40, 0x20, 0x30, 0x18, 0x01, 0x01, 0x03, 0x03, 0x07, 0x0E, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x78, 0xF0, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x30, 0x18, 0x08, 0x05, 0x07, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x30, 0xB8, 0xB8, 0xF8, 0xF8, 0xF0, 0x70, 0x77, 0x73, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x80, 0x60, 0x30, 0x10, 0x88, 0xC8, 0x48, 0xC8, 0xC8, 0x50, 0x20, 0xC0, 0x07, 0x18, 0x20, 0x27, 0x4F, 0x4B, 0x4E, 0x4F, 0x49, 0x48, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0xC0, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x00, 0x00, 0x40, 0x70, 0x4E, 0x51, 0x08, 0x0B, 0x7F, 0x7F, 0x7F, 0x78, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0x70, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x7F, 0x7F, 0x3E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0x80, 0xE0, 0xF0, 0xF0, 0x08, 0x08, 0x08, 0x10, 0x30, 0xF8, 0x0F, 0x1F, 0x3F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xC8, 0x18, 0x78, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x43, 0x67, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xC8, 0x18, 0x78, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x43, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xC0, 0xE0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0x08, 0x18, 0x78, 0x00, 0x0F, 0x1F, 0x3F, 0x7F, 0x40, 0x00, 0x42, 0x7E, 0x7E, 0x3E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x41, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x38, 0x7C, 0x7C, 0x58, 0x7F, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x80, 0xC8, 0xB8, 0x18, 0x08, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x47, 0x5F, 0x7F, 0x7F, 0x7C, 0x70, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x40, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0x88, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x80, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x41, 0x0F, 0x7F, 0x1F, 0x43, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0x08, 0x18, 0xF8, 0xF8, 0xF8, 0xF8, 0xE0, 0x80, 0x08, 0xF8, 0x08, 0x00, 0x40, 0x7F, 0x40, 0x03, 0x0F, 0x1F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0xC0, 0xF0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x0F, 0x3F, 0x3F, 0x7F, 0x40, 0x00, 0x40, 0x7F, 0x3F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0xE0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x42, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xC0, 0xF0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x0F, 0x3F, 0x3F, 0x7F, 0x40, 0x10, 0x70, 0x7F, 0xFF, 0xBF, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0xF0, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x42, 0x3F, 0x7F, 0x7F, 0x7C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0xE0, 0xF0, 0xF8, 0xC8, 0x88, 0x88, 0xB8, 0x78, 0x00, 0x7D, 0x33, 0x63, 0x47, 0x07, 0x4F, 0x7F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x78, 0x18, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x18, 0x78, 0x00, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x08, 0xF8, 0x08, 0x00, 0x3F, 0x3F, 0x7F, 0x7F, 0x40, 0x00, 0x40, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x08, 0x78, 0xF8, 0xF8, 0xF8, 0xC8, 0x00, 0x08, 0xE8, 0x18, 0x08, 0x00, 0x00, 0x03, 0x1F, 0x7F, 0x7F, 0x7E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x08, 0x78, 0xF8, 0xF8, 0xF8, 0xC8, 0x00, 0xF0, 0xF8, 0xF8, 0x80, 0x08, 0xE8, 0x18, 0x08, 0x00, 0x00, 0x03, 0x3F, 0x7F, 0x7F, 0x0C, 0x03, 0x3F, 0x7F, 0x7F, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x08, 0x18, 0x78, 0xF8, 0xF8, 0xE8, 0x80, 0x78, 0x18, 0x08, 0x00, 0x40, 0x60, 0x70, 0x49, 0x07, 0x5F, 0x7F, 0x7E, 0x78, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x08, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x00, 0xC8, 0x78, 0x18, 0x08, 0x00, 0x00, 0x41, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x78, 0x18, 0xC8, 0xF8, 0xF8, 0xF8, 0x78, 0x18, 0x60, 0x78, 0x7E, 0x7F, 0x3F, 0x4F, 0x41, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xF8, 0xF8, 0xF8, 0x08, 0x08, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, // 91
    0x18, 0xF8, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x40, 0xC0, // 92
    0x08, 0x08, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, // 93
    0x00, 0x00, 0xC0, 0x30, 0x7C, 0xF8, 0xE0, 0xC0, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x01, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x00, 0x00, 0x00, 0xC0, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x00, 0x00, 0x40, 0x70, 0x4E, 0x51, 0x08, 0x0B, 0x7F, 0x7F, 0x7F, 0x78, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0x70, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x7F, 0x7F, 0x3E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x80, 0xE0, 0xF0, 0xF0, 0x08, 0x08, 0x08, 0x10, 0x30, 0xF8, 0x0F, 0x1F, 0x3F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xC8, 0x18, 0x78, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x43, 0x67, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xC8, 0x18, 0x78, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x43, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0xC0, 0xE0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0x08, 0x18, 0x78, 0x00, 0x0F, 0x1F, 0x3F, 0x7F, 0x40, 0x00, 0x42, 0x7E, 0x7E, 0x3E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 103
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x41, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x38, 0x7C, 0x7C, 0x58, 0x7F, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 106
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x80, 0xC8, 0xB8, 0x18, 0x08, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x47, 0x5F, 0x7F, 0x7F, 0x7C, 0x70, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x40, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 108
    0x88, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x80, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x40, 0x7F, 0x41, 0x0F, 0x7F, 0x1F, 0x43, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x08, 0x18, 0xF8, 0xF8, 0xF8, 0xF8, 0xE0, 0x80, 0x08, 0xF8, 0x08, 0x00, 0x40, 0x7F, 0x40, 0x03, 0x0F, 0x1F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0xC0, 0xF0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x0F, 0x3F, 0x3F, 0x7F, 0x40, 0x00, 0x40, 0x7F, 0x3F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0xE0, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x42, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0xC0, 0xF0, 0xF0, 0xF8, 0x08, 0x00, 0x08, 0xF8, 0xF0, 0xF0, 0xC0, 0x0F, 0x3F, 0x3F, 0x7F, 0x40, 0x10, 0x70, 0x7F, 0xFF, 0xBF, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 113
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0xF0, 0xF0, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x42, 0x3F, 0x7F, 0x7F, 0x7C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0xE0, 0xF0, 0xF8, 0xC8, 0x88, 0x88, 0xB8, 0x78, 0x00, 0x7D, 0x33, 0x63, 0x47, 0x07, 0x4F, 0x7F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x78, 0x18, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x18, 0x78, 0x00, 0x00, 0x40, 0x7F, 0x7F, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0x08, 0xF8, 0xF8, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x08, 0xF8, 0x08, 0x00, 0x3F, 0x3F, 0x7F, 0x7F, 0x40, 0x00, 0x40, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x08, 0x78, 0xF8, 0xF8, 0xF8, 0xC8, 0x00, 0x08, 0xE8, 0x18, 0x08, 0x00, 0x00, 0x03, 0x1F, 0x7F, 0x7F, 0x7E, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x08, 0x78, 0xF8, 0xF8, 0xF8, 0xC8, 0x00, 0xF0, 0xF8, 0xF8, 0x80, 0x08, 0xE8, 0x18, 0x08, 0x00, 0x00, 0x03, 0x3F, 0x7F, 0x7F, 0x0C, 0x03, 0x3F, 0x7F, 0x7F, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x08, 0x18, 0x78, 0xF8, 0xF8, 0xE8, 0x80, 0x78, 0x18, 0x08, 0x00, 0x40, 0x60, 0x70, 0x49, 0x07, 0x5F, 0x7F, 0x7E, 0x78, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x08, 0x38, 0xF8, 0xF8, 0xF8, 0xC0, 0x00, 0xC8, 0x78, 0x18, 0x08, 0x00, 0x00, 0x41, 0x7F, 0x7F, 0x7F, 0x7F, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x00, 0x78, 0x18, 0xC8, 0xF8, 0xF8, 0xF8, 0x78, 0x18, 0x60, 0x78, 0x7E, 0x7F, 0x3F, 0x4F, 0x41, 0x60, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0xF0, 0xF8, 0xF8, 0x08, 0x08, 0x04, 0x06, 0xFF, 0xFF, 0xFB, 0x00, 0x00, 0x00, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0x80, // 123
    0xF8, 0xF8, 0xFF, 0xFF, 0xC0, 0xC0, // 124
    0x08, 0x08, 0xF8, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xFF, 0xFF, 0x06, 0x04, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0x00, 0x00, // 125
    0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFC, 0x04, 0x04, 0x04, 0xFC, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
