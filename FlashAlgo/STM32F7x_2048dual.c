/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x8F4FF3BF, 0x46014770, 0x0E000300, 0xD3022820, 0x1D000940, 0x2810E005, 0x0900D302, 0xE0001CC0,
    0x02C90880, 0x2110D501, 0x47704308, 0x49464847, 0x49476041, 0x21006041, 0x68C16001, 0x431122F0,
    0x694060C1, 0xD4060680, 0x49424843, 0x21066001, 0x49426041, 0x20006081, 0x483C4770, 0x05426901,
    0x61014311, 0x47702000, 0x4838B510, 0x24046901, 0x61014321, 0x03626901, 0x61014311, 0x00526901,
    0x61014311, 0x4A344936, 0x6011E000, 0x03DB68C3, 0x6901D4FB, 0x610143A1, 0xBD102000, 0xF7FFB530,
    0x492AFFB2, 0x23F068CA, 0x60CA431A, 0x610C2402, 0x06C0690A, 0x43020E00, 0x6908610A, 0x431003E2,
    0x48276108, 0xE0004A24, 0x68CD6010, 0xD4FB03ED, 0x43A06908, 0x68C86108, 0x0F000600, 0x68C8D003,
    0x60C84318, 0xBD302001, 0x4D18B5F0, 0x08891CC9, 0x008968EB, 0x433B27F0, 0x230060EB, 0x4C18612B,
    0x692BE01D, 0x43334E17, 0x6813612B, 0xF3BF6003, 0x4B118F4F, 0x601CE000, 0x03F668EE, 0x692BD4FB,
    0x005B085B, 0x68EB612B, 0x0F1B061B, 0x68E8D004, 0x60E84338, 0xBDF02001, 0x1F091D00, 0x29001D12,
    0x2000D1DF, 0x0000BDF0, 0x45670123, 0x40023C00, 0xCDEF89AB, 0x00005555, 0x40003000, 0x00000FFF,
    0x0000AAAA, 0x00000201, 0x00000000
};

const program_target_t flash_algo = {
    0x2000004D,  // Init
    0x2000007B,  // UnInit
    0x20000089,  // EraseChip
    0x200000BD,  // EraseSector
    0x20000109,  // ProgramPage

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
    0x00000200,  // ram_to_flash_bytes_to_be_written
};
