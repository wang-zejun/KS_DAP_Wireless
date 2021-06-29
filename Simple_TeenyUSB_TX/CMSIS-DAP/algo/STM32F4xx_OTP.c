/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code_F4[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x0E000300, 0xD3022820, 0x1D000940, 0x28104770, 0x0900D302, 0x47701CC0, 0x47700880, 0x49414842,
    0x49426041, 0x21006041, 0x68C16001, 0x431122F0, 0x694060C1, 0xD4060680, 0x493D483E, 0x21066001,
    0x493D6041, 0x20006081, 0x48374770, 0x05426901, 0x61014311, 0x47702000, 0x4833B510, 0x24046901,
    0x61014321, 0x03A26901, 0x61014311, 0x4A314933, 0x6011E000, 0x03DB68C3, 0x6901D4FB, 0x610143A1,
    0xBD102000, 0xF7FFB530, 0x4927FFBB, 0x23F068CA, 0x60CA431A, 0x610C2402, 0x0700690A, 0x43020E40,
    0x6908610A, 0x431003E2, 0x48246108, 0xE0004A21, 0x68CD6010, 0xD4FB03ED, 0x43A06908, 0x68C86108,
    0x0F000600, 0x68C8D003, 0x60C84318, 0xBD302001, 0x4D15B570, 0x08891CC9, 0x008968EB, 0x433326F0,
    0x230060EB, 0x4B16612B, 0x692CE017, 0x612C431C, 0x60046814, 0x03E468EC, 0x692CD4FC, 0x00640864,
    0x68EC612C, 0x0F240624, 0x68E8D004, 0x60E84330, 0xBD702001, 0x1D121D00, 0x29001F09, 0x2000D1E5,
    0x0000BD70, 0x45670123, 0x40023C00, 0xCDEF89AB, 0x00005555, 0x40003000, 0x00000FFF, 0x0000AAAA,
    0x00000201, 0x00000000
};

const program_target_t flash_algo_F4 = {
    0x2000003D,  // Init
    0x2000006B,  // UnInit
    0x20000079,  // EraseChip
    0x200000A5,  // EraseSector
    0x200000F1,  // ProgramPage

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
    sizeof(flash_code_F4),  // prog_blob size
    flash_code_F4,  // address of prog_blob
    0x00000400,  // ram_to_flash_bytes_to_be_written
};
