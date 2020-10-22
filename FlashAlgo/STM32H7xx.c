/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4770BA40, 0x4770BAC0, 0x4603B510, 0x7080F44F, 0x60204CDA, 0x680048DA, 0x0007F040, 0x60204CD8,
    0x616048D8, 0x48D6BF00, 0xF0006900, 0x28000001, 0x48D5D1F9, 0x60604CD2, 0x606048D4, 0x4CD448D1,
    0xBF006020, 0x1F0048D2, 0xF0006800, 0x28000001, 0x48CDD1F8, 0x3C104CCE, 0x48CC6020, 0xF8C44CC8,
    0x46200104, 0x200069C0, 0x4601BD10, 0x68C048C4, 0x0001F040, 0x60D04AC2, 0x380848C5, 0xF0406800,
    0xF8C20001, 0x2000010C, 0xBF004770, 0x690048BC, 0x0001F000, 0xD1F92800, 0x68C048B9, 0x0030F020,
    0x60C849B7, 0x68C04608, 0x0008F040, 0x460860C8, 0xF04068C0, 0x60C80080, 0x48B1BF00, 0xF0006900,
    0x28000001, 0x48AED1F9, 0xF02068C0, 0x49AC0008, 0xBF0060C8, 0x1F0048AE, 0xF0006800, 0x28000001,
    0x48ABD1F8, 0x68003808, 0x0030F020, 0xF8C149A4, 0x4608010C, 0x010CF8D0, 0x0008F040, 0x010CF8C1,
    0xF8D04608, 0xF040010C, 0xF8C10080, 0xBF00010C, 0x1F00489F, 0xF0006800, 0x28000001, 0x489CD1F8,
    0x68003808, 0x0008F020, 0xF8C14995, 0x2000010C, 0xB5104770, 0xF3C14601, 0xF1B14243, 0xD3366F00,
    0x6F01F1B1, 0x488ED233, 0x4B8E6940, 0x4B8C4318, 0xBF006158, 0x6900488A, 0x0001F000, 0xD1F92800,
    0x68C04887, 0x0030F020, 0x60D84B85, 0x68C04618, 0xEA432304, 0x43182302, 0x60D84B81, 0x68C04618,
    0x0080F040, 0xBF0060D8, 0x6900487D, 0x0001F000, 0xD1F92800, 0x68C0487A, 0x0004F020, 0x60D84B78,
    0x69004618, 0x0001F000, 0x2001B3F0, 0x4878BD10, 0x4B746800, 0x4B724318, 0x0114F8C3, 0x4874BF00,
    0x68001F00, 0x0001F000, 0xD1F82800, 0x38084870, 0xF0206800, 0x4B6A0030, 0x010CF8C3, 0x3808486C,
    0xF1A26800, 0x24040308, 0x2303EA44, 0x4B644318, 0x010CF8C3, 0xF8D04618, 0xF040010C, 0xF8C30080,
    0xBF00010C, 0x1F004862, 0xF0006800, 0x28000001, 0x485FD1F8, 0x68003808, 0x0004F020, 0xF8C34B58,
    0x485B010C, 0xE0001F00, 0x6800E005, 0x0001F000, 0x2001B108, 0x2000E7BA, 0xB5F0E7B8, 0x460C4603,
    0x46194616, 0x22004635, 0x6F00F1B3, 0xF1B3D30D, 0xD20A6F01, 0x484ABF00, 0xF0006900, 0x28000001,
    0x4848D1F9, 0x61784F46, 0xBF00E00A, 0x1F004848, 0xF0006800, 0x28000001, 0x4842D1F8, 0x60384F44,
    0xF1B3E078, 0xD3066F00, 0x6F01F1B3, 0x2002D203, 0x60F84F3B, 0x2002E003, 0x3F084F3D, 0x2C206038,
    0x2200D30C, 0x682FE006, 0x600F6868, 0x35086048, 0x1C523108, 0xDBF62A04, 0xE0133C20, 0xE0042200,
    0x0B01F815, 0x0B01F801, 0x42A21C52, 0x2200D3F8, 0x20FFE003, 0x0B01F801, 0xF1C41C52, 0x42900020,
    0x2400D8F7, 0x8F4FF3BF, 0x6F00F1B3, 0xF1B3D30A, 0xD2076F01, 0x4822BF00, 0xF0006900, 0x28000001,
    0xE007D1F9, 0x4822BF00, 0x68001F00, 0x0001F000, 0xD1F82800, 0x6900481A, 0xB1B02000, 0x6F00F1B3,
    0xF1B3D309, 0xD2066F01, 0x68C04815, 0x0002F020, 0x60F84F13, 0x4816E007, 0x68003808, 0x0002F020,
    0xF8C74F0F, 0x2001010C, 0xF1B3BDF0, 0xD3096F00, 0x6F01F1B3, 0x480AD206, 0xF02068C0, 0x4F080002,
    0xE00760F8, 0x3808480A, 0xF0206800, 0x4F040002, 0x010CF8C7, 0xD1842C00, 0xE7E52000, 0x58024594,
    0x52002000, 0x0FEF000E, 0x45670123, 0xCDEF89AB, 0x52002114, 0x00000000
};

const program_target_t flash_algo = {
    0x20000029,  // Init
    0x2000008B,  // UnInit
    0x200000AB,  // EraseChip
    0x20000153,  // EraseSector
    0x2000025B,  // ProgramPage

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
    0x00000400,  // ram_to_flash_bytes_to_be_written
};
