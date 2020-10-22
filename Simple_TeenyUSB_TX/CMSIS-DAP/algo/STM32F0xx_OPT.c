/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code_F0[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4A524853, 0x49536042, 0x60826041, 0x21006081, 0x68C16001, 0x43112214, 0x69C060C1, 0xD4060740,
    0x494D484E, 0x21066001, 0x494D6041, 0x20006081, 0x48474770, 0x22806901, 0x61014311, 0x15826901,
    0x61014391, 0x47702000, 0x4841B570, 0x231468C1, 0x60C14319, 0x24206901, 0x61014321, 0x22406901,
    0x61014311, 0x4A3D493F, 0x6011E000, 0x07ED68C5, 0x6905D1FB, 0x610543A5, 0x24106905, 0x61054325,
    0x4E394D35, 0x80353555, 0x6011E000, 0x07ED68C5, 0x6901D1FB, 0x610143A1, 0x421968C1, 0x68C1D004,
    0x60C14319, 0xBD702001, 0xBD702000, 0x4828B530, 0x241468C1, 0x60C14321, 0x25206901, 0x61014329,
    0x22406901, 0x61014311, 0x4A244926, 0x6011E000, 0x07DB68C3, 0x6901D1FB, 0x610143A9, 0x422168C1,
    0x68C1D004, 0x60C14321, 0xBD302001, 0xBD302000, 0x47702001, 0x4D16B5F0, 0x08491C49, 0x004968EB,
    0x43232404, 0x261060EB, 0xE01A4B16, 0x4334692C, 0x8814612C, 0x4C118004, 0x6023E000, 0x07FF68EF,
    0x692CD1FB, 0x612C43B4, 0x271468EC, 0xD005423C, 0x211468E8, 0x60E84308, 0xBDF02001, 0x1C921C80,
    0x29001E89, 0x2000D1E2, 0x0000BDF0, 0x45670123, 0x40022000, 0xCDEF89AB, 0x00005555, 0x40003000,
    0x00000FFF, 0x0000AAAA, 0x1FFFF800, 0x00000000
};

const program_target_t flash_algo_F0 = {
    0x20000021,  // Init
    0x20000053,  // UnInit
    0x20000069,  // EraseChip
    0x200000CD,  // EraseSector
    0x20000115,  // ProgramPage

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
    sizeof(flash_code_F0),  // prog_blob size
    flash_code_F0,  // address of prog_blob
    0x00000010,  // ram_to_flash_bytes_to_be_written
};
