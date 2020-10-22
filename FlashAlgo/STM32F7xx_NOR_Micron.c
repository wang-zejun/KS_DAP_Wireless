/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x8801B510, 0xF3C14C86, 0x444C1380, 0x88016021, 0xF3C16021, 0x429A1280, 0x4613D00C, 0xD5F60689,
    0x60218801, 0x1280F3C1, 0x60218801, 0x1180F3C1, 0xD1014291, 0xBD102000, 0x800121F0, 0xBD102001,
    0xB5084977, 0x60484449, 0x68014876, 0x0178F041, 0x68006001, 0x48744975, 0x1D086008, 0x32CCF04F,
    0x49726002, 0x39204872, 0x49706008, 0x00F0F06F, 0x60083918, 0x2100486D, 0x6001381C, 0x486D4B6B,
    0x60183B14, 0x0213486C, 0x62426203, 0x32964A68, 0xF06F6002, 0x6082020F, 0x4A666041, 0x60C2324B,
    0x0A184A66, 0x4B656010, 0x1D1B0402, 0x4B63601A, 0x3B204A63, 0x4B61601A, 0x3B184A62, 0x1F1A601A,
    0x1D1B6011, 0x601A4A60, 0x60104A60, 0xF6404A5F, 0x3A2020AA, 0x4A5D6010, 0x70FFF640, 0x60103A18,
    0x60011F10, 0xF2401D11, 0x60085055, 0x3008484D, 0xF0416801, 0x60010101, 0xF04F6800, 0x49544020,
    0x49546001, 0xF06F6041, 0xF8C04170, 0x68011104, 0x0101F041, 0x68006001, 0x20009000, 0x2000BD08,
    0x483F4770, 0x4448B410, 0x684122AA, 0x2AAAF8A1, 0x8F4FF3BF, 0x21556843, 0x1554F8A3, 0x8F4FF3BF,
    0x23806844, 0x3AAAF8A4, 0x8F4FF3BF, 0xF8A36843, 0xF3BF2AAA, 0x68428F4F, 0x1554F8A2, 0x8F4FF3BF,
    0x21106842, 0x1AAAF8A2, 0x8F4FF3BF, 0xBC106840, 0x492BE746, 0x4449B430, 0x684A23AA, 0x3AAAF8A2,
    0x8F4FF3BF, 0x2255684C, 0x2554F8A4, 0x8F4FF3BF, 0x2480684D, 0x4AAAF8A5, 0x8F4FF3BF, 0xF8A4684C,
    0xF3BF3AAA, 0x68498F4F, 0x2554F8A1, 0x8F4FF3BF, 0x80012130, 0x8F4FF3BF, 0xE721BC30, 0x4DF0E92D,
    0x46154F17, 0x24004606, 0x08AAF04F, 0xF04F444F, 0xF04F0A55, 0xF1010BA0, 0xE01C0C01, 0xF8A16879,
    0xF3BF8AAA, 0x68798F4F, 0xA554F8A1, 0x8F4FF3BF, 0xF8A16879, 0xF3BFBAAA, 0x88288F4F, 0xF3BF8030,
    0x46308F4F, 0xFEFCF7FF, 0x2001B110, 0x8DF0E8BD, 0x1CAD1C64, 0xEBB41CB6, 0xD3DF0F5C, 0xE7F52000,
    0x00000004, 0x40023830, 0xCCCC00CC, 0x40020C20, 0xAAAAAA0A, 0x55555505, 0x40021000, 0x40021420,
    0xAA000AAA, 0xFF000FFF, 0x55000555, 0x40021820, 0x0010B0D8, 0x00110834, 0x00000000, 0x00000000,
    0x00000000
};

const program_target_t flash_algo = {
    0x20000061,  // Init
    0x2000013F,  // UnInit
    0x20000143,  // EraseChip
    0x20000193,  // EraseSector
    0x200001DD,  // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : address to access global/static data
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000C00,
        0x20001000
    },

    0x20000400,  // mem buffer location
    0x20000000,  // location to write prog_blob in target RAM
    sizeof(flash_code),  // prog_blob size
    flash_code,  // address of prog_blob
    0x00001000,  // ram_to_flash_bytes_to_be_written
};
