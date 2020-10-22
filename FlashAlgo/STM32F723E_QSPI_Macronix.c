/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4770BA40, 0x4770BA40, 0x4770BA40, 0x4770BA40, 0x4770BA40, 0x4770BAC0, 0x4770BAC0, 0x4770BAC0,
    0x4770BAC0, 0x4770BAC0, 0x220049F7, 0x7008700A, 0x46024770, 0x09512000, 0xD00C2901, 0xD00D2902,
    0x317249F1, 0xF0026809, 0x2301021F, 0x420B4093, 0x2001D000, 0x49EC4770, 0xE7F31E89, 0x316E49EA,
    0xB518E7F0, 0xF44F2000, 0x900064A0, 0xF7FF2031, 0x9900FFE0, 0x91001C49, 0xD00142A1, 0xD0F52800,
    0xF7FF2031, 0x2800FFD6, 0x2001D000, 0x49DEBD18, 0x680A1E89, 0x02F8F022, 0x00C0EA42, 0x47706008,
    0x1E8949D9, 0x68082800, 0xF040D002, 0xE0010001, 0x0001F020, 0x47706008, 0x220049D3, 0x700A316E,
    0x2801700A, 0x2804D002, 0x2005D101, 0x47707008, 0x326E4ACD, 0xF0216811, 0x43010118, 0x47706011,
    0x317249C9, 0x68082800, 0xF040D002, 0xE0010001, 0x0001F020, 0x47706008, 0x1182EA41, 0xB510085A,
    0x9C024BC2, 0x4202EB03, 0x43014311, 0x6004EA41, 0x1C8949BD, 0xBD106008, 0x1E8949BB, 0x68082800,
    0xF040D002, 0xE0017080, 0x7080F020, 0x47706008, 0x4CB6B510, 0xEB040849, 0xEA414101, 0x49B21080,
    0x6002EA40, 0xEA403182, 0x60087003, 0x49AEBD10, 0x28001E89, 0xD0026808, 0x6080F040, 0xF020E001,
    0x60086080, 0xB5104770, 0x08494CA8, 0x4101EB04, 0x1080EA41, 0xEA4049A4, 0x31866002, 0x7003EA40,
    0xBD106008, 0x1E8949A0, 0x68082800, 0xF040D002, 0xE0015080, 0x5080F020, 0x47706008, 0x1E89499A,
    0x68082800, 0xF440D002, 0xE0012000, 0x2000F420, 0x47706008, 0x1D924A94, 0x43086813, 0x63ECF023,
    0x60104318, 0x4A904770, 0x68131D92, 0xF0234308, 0x43184378, 0x47706010, 0x1D924A8B, 0xF0216811,
    0x43010103, 0x47706011, 0x1D804887, 0xF0006800, 0x4770000C, 0x1D924A84, 0xF0216811, 0x430101F0,
    0x47706011, 0x1D924A80, 0xF4216811, 0x430151E0, 0x47706011, 0x1D89497C, 0xF422680A, 0xEA424260,
    0x600800C0, 0xF3C04770, 0x29032101, 0x4A76D108, 0x68111D92, 0x13F8F421, 0x40014975, 0x60114319,
    0x316E4971, 0xF3C0680A, 0x4302000B, 0x4770600A, 0x316E496D, 0x68082800, 0xF440D002, 0xE0014000,
    0x4000F420, 0x47706008, 0x316E4967, 0x68082800, 0xF440D002, 0xE0013080, 0x3080F420, 0x47706008,
    0x1D894961, 0x68082800, 0xF440D002, 0xE0010000, 0x0000F420, 0x47706008, 0x328A4A5B, 0x1E406811,
    0x011FF021, 0x60114301, 0x49574770, 0x680A318A, 0x03FFF06F, 0x52F8F422, 0x2000EB03, 0x60084310,
    0x4A514770, 0x6811328A, 0x1140F421, 0x60114301, 0x4A4D4770, 0x6811328A, 0x0140F421, 0x60114301,
    0x4A494770, 0x6811328A, 0x3140F421, 0x60114301, 0x49454770, 0x2800318A, 0xD0026808, 0x7080F040,
    0xF020E001, 0x60087080, 0x4A3F4770, 0x2900322E, 0xD0016811, 0xE0004301, 0x60114381, 0x4A3A4770,
    0x29003232, 0xD0016811, 0xE0004301, 0x60114381, 0x4A354770, 0x29003236, 0xD0016811, 0xE0004301,
    0x60114381, 0x4A304770, 0x2900323E, 0xD0016811, 0xE0004301, 0x60114381, 0x4A2B4770, 0x29003242,
    0xD0016811, 0xE0004301, 0x60114381, 0x4A264770, 0x2900320E, 0xD0016811, 0xE0004301, 0x60114381,
    0x4A214770, 0x29003212, 0xD0016811, 0xE0004301, 0x60114381, 0x4A1C4770, 0x29003216, 0xD0016811,
    0xE0004301, 0x60114381, 0x4A174770, 0x2900321E, 0xD0016811, 0xE0004301, 0x60114381, 0x4A124770,
    0x29003222, 0xD0016811, 0xE0004301, 0x60114381, 0x4A0D4770, 0x2900324E, 0xD0016811, 0xE0004301,
    0x60114381, 0x4A084770, 0x29003252, 0xD0016811, 0xE0004301, 0x60114381, 0x4A034770, 0x29003256,
    0xD0076811, 0xE0064301, 0x40023802, 0xFFFF0000, 0x0FFFFCFF, 0x60114381, 0x4A4B4770, 0x68112900,
    0x4301D001, 0x4381E000, 0x47706011, 0x1D124A46, 0x68112900, 0x4301D001, 0x4381E000, 0x47706011,
    0x3A534A41, 0x78112900, 0x4301D001, 0x4381E000, 0x47707011, 0x3014483C, 0xF0416801, 0x60017180,
    0x46014770, 0x20004A38, 0x68123A54, 0xD000420A, 0x47702001, 0x39524934, 0x47707008, 0x32304A32,
    0x0F036811, 0xD0062B01, 0xD0072B02, 0xD0082B03, 0xD10B2B04, 0xF421E008, 0xE0073140, 0x2140F421,
    0xF421E004, 0xE0011140, 0x0140F421, 0x007FF400, 0x60104308, 0x4B244770, 0x3330B510, 0x0F026819,
    0xD21D2A09, 0xF002E8DF, 0x0B08051C, 0x1714110E, 0xF021001A, 0xE0130103, 0x010CF021, 0xF021E010,
    0xE00D0130, 0x01C0F021, 0xF421E00A, 0xE0077140, 0x6140F421, 0xF421E004, 0xE0015140, 0x4140F421,
    0x4308B280, 0xBD106018, 0x32304A0F, 0xF0216811, 0x43017140, 0x47706011, 0x32304A0B, 0xF0216811,
    0x43016180, 0x47706011, 0x32304A07, 0xF0216811, 0x43016100, 0x47706011, 0x32304A03, 0xF0216811,
    0x43015180, 0x47706011, 0x40023860, 0x2101B510, 0xF7FF2002, 0x2100FF20, 0x4010E8BD, 0xF7FF2002,
    0x2100BF1A, 0x60416001, 0x60C16081, 0x61416101, 0x47706181, 0x60412100, 0x60C16081, 0x61016001,
    0x61816141, 0x620161C1, 0x62816241, 0x477062C1, 0x4B7FB530, 0x4A7F6819, 0x40116944, 0x79056802,
    0x69844322, 0x6405EA44, 0x430A4322, 0x6859601A, 0x40114A79, 0x4202E9D0, 0x43228A00, 0x4000EA41,
    0x605A4302, 0xB530BD30, 0x69514A71, 0x40194B73, 0x3400E9D0, 0xE9D04323, 0x432C4502, 0x69044323,
    0x69844323, 0x69C44323, 0x6A044323, 0x6A444323, 0x6A844323, 0x6AC44323, 0x43238A80, 0x4080EA43,
    0x61504308, 0x4962BD30, 0x68082800, 0xF040D002, 0xE0010001, 0x0001F020, 0x47706008, 0xB5104B5C,
    0x06A4689C, 0x6298D409, 0x68186259, 0xF440B112, 0xE0010000, 0x0000F420, 0xBD106018, 0x688A4954,
    0xD4040692, 0xF36F6ACA, 0x4302020F, 0x477062CA, 0x688A494F, 0xD4040692, 0xF36F6B0A, 0x4302020F,
    0x4770630A, 0x688A494A, 0xD4000692, 0x47706188, 0x688A4947, 0xD4000692, 0x477061C8, 0x680A4944,
    0x6270F422, 0x2000EA42, 0x47706008, 0x688A4940, 0xD4000692, 0x47706108, 0x688A493D, 0xD4080692,
    0x68082800, 0xF040D002, 0xE0010008, 0x0008F020, 0x47706008, 0x688A4936, 0xD4080692, 0x68082800,
    0xF440D002, 0xE0010080, 0x0080F420, 0x47706008, 0x6801482F, 0x0102F041, 0x47706001, 0x3120492C,
    0x47707008, 0x3120492A, 0x47708008, 0x62084928, 0x48274770, 0x78003020, 0x48254770, 0x88003020,
    0x48234770, 0x47706A00, 0x28004921, 0xD0026808, 0x0004F040, 0xF020E001, 0x60080004, 0x4B1C4770,
    0xB109681A, 0xE0004302, 0x601A4382, 0x48184770, 0xF3C06880, 0x47702004, 0x69404815, 0x6040F000,
    0x4A134770, 0x20004601, 0x420A6892, 0x2001D000, 0x490F4770, 0x477060C8, 0x20004A0D, 0x231F6811,
    0xEA036892, 0xF0024111, 0x4211021F, 0x2001D000, 0x49074770, 0x60C80C00, 0x49054770, 0x68082800,
    0xF040D002, 0xE0010040, 0x0040F020, 0x47706008, 0xA0001000, 0x00FFFFCF, 0xFFE0F7FE, 0x90800000,
    0x47FCE92D, 0xF7FF2000, 0x489BFD25, 0x4448211C, 0xFD40F000, 0x21304898, 0x301C4448, 0xFD3AF000,
    0x68014896, 0x0102F041, 0x21016001, 0xF7FF203F, 0x2101FD9C, 0xF7FF0388, 0x2502FDC0, 0x5004F88D,
    0xF88D2400, 0xF88D4006, 0x20034007, 0xA230F8DF, 0x0005F88D, 0x46292209, 0xF0004650, 0x2604FA04,
    0x46504669, 0xF0009600, 0x4F86F975, 0x46112209, 0xF0004638, 0x0228F9F8, 0x46699000, 0xF0004638,
    0x2209F969, 0x4638210A, 0xF9EDF000, 0x6880F44F, 0x46384669, 0x8000F8CD, 0xF95CF000, 0x22094F7A,
    0x46382102, 0xF9DFF000, 0x46384669, 0xF0009600, 0x4E76F951, 0x210D2209, 0xF0004630, 0x0328F9D4,
    0x46699000, 0xF0004630, 0x220AF945, 0x46502106, 0xF9C9F000, 0x90002040, 0xF88D2001, 0x46690007,
    0xF0004650, 0x2000F937, 0xFCB4F7FF, 0xFE5EF7FF, 0x211A4861, 0xE9C04448, 0x60844500, 0x4103E9C0,
    0x61846144, 0xFE74F7FF, 0xF44F4D5B, 0x444D5640, 0x15BF351C, 0x60EC602C, 0x61AC616C, 0xE9C5612C,
    0x62AF6408, 0x61EC2001, 0xFE9DF7FF, 0xF7FF2000, 0x2000FED5, 0xFEDAF7FF, 0x68814855, 0xD4FC0689,
    0x1166F242, 0x61846141, 0x610461C4, 0x8F4FF3BF, 0x06896881, 0xF242D4FC, 0x61411199, 0x61C46184,
    0xF3BF6104, 0x68818F4F, 0xD4FC0689, 0x2166F242, 0x61846141, 0x610461C4, 0x8F4FF3BF, 0x06896881,
    0xF242D4FC, 0x61412199, 0x61C46184, 0xF3BF6104, 0x68818F4F, 0xD4FC0689, 0x3166F242, 0x61846141,
    0x610461C4, 0x8F4FF3BF, 0x06896881, 0xF242D4FC, 0x61413199, 0x61C46184, 0xF3BF6104, 0x20018F4F,
    0xFB6CF000, 0x61682008, 0x6040F04F, 0x10806028, 0x206B6128, 0x700AE9C5, 0xE9C54827, 0x44486808,
    0xF7FF301C, 0x2000FE20, 0x87FCE8BD, 0xF020B510, 0xF0004070, 0x2000F9C9, 0xB510BD10, 0xFDD6F7FF,
    0xBD102000, 0xF000B510, 0x2000FA0D, 0xB508BD10, 0x91004613, 0x4170F020, 0x4618466A, 0xFAD7F000,
    0xBD082000, 0x4B14B570, 0x444B4606, 0x2008331C, 0xF04F6158, 0x60186040, 0x6080F44F, 0xF44F6258,
    0x62185040, 0x61180300, 0x7080F44F, 0x206B6298, 0x461562D8, 0x4618460C, 0xFDE5F7FF, 0xBF00E006,
    0x0B01F816, 0x1B01F815, 0xD1014288, 0xD2F71E64, 0xBD704630, 0x47702001, 0x00000008, 0x40023838,
    0x40020400, 0x40020800, 0x40021000, 0x40020C00, 0xA0001000, 0xB510497C, 0xD1064288, 0x46082101,
    0xFC95F7FF, 0x20012100, 0x4978E04F, 0xD1064288, 0x20022101, 0xFC8BF7FF, 0x20022100, 0x4974E045,
    0xD1064288, 0x20042101, 0xFC81F7FF, 0x20042100, 0x4970E03B, 0xD1064288, 0x20082101, 0xFC77F7FF,
    0x20082100, 0x496CE031, 0xD1064288, 0x20102101, 0xFC6DF7FF, 0x20102100, 0x4968E027, 0xD1064288,
    0x20202101, 0xFC63F7FF, 0x20202100, 0x4964E01D, 0xD1064288, 0x20402101, 0xFC59F7FF, 0x20402100,
    0x4960E013, 0xD1064288, 0x20802101, 0xFC4FF7FF, 0x20802100, 0x495CE009, 0xD10A4288, 0x21011584,
    0xF7FF4620, 0x2100FC44, 0xE8BD4620, 0xF7FF4010, 0xBD10BC3E, 0x2300B5F0, 0x27032401, 0xFA04680D,
    0x4015F203, 0xD1424295, 0xC000F8D0, 0xFA07005E, 0xEA2CF506, 0xF8C00C05, 0xF891C000, 0xF8D0C004,
    0xFA0CE000, 0xEA4CFC06, 0xF8C00C0E, 0xF891C000, 0xF1BCC004, 0xD0020F01, 0x0F02F1BC, 0xF8D0D11F,
    0xEA2CC008, 0xF8C00C05, 0xF891C008, 0xF8D0C005, 0xFA0CE008, 0xEA4CFC06, 0xF8C00C0E, 0xF8D0C008,
    0xEA2CC004, 0xF8C00C02, 0x6842C004, 0xC006F891, 0xFC03FA0C, 0xFC8CFA1F, 0x020CEA42, 0x68C26042,
    0x60C243AA, 0x68C579CA, 0x432A40B2, 0x1C5B60C2, 0xD3B32B10, 0xF64FBDF0, 0x600171FF, 0x71012100,
    0x71817141, 0x477071C1, 0xF441B508, 0x92003280, 0x61C161C2, 0x61C19900, 0x69C069C1, 0xBD089000,
    0x20004602, 0x420A6912, 0x2001D000, 0x69004770, 0x4770B280, 0x20004602, 0x420A6952, 0x2001D000,
    0x69404770, 0x4770B280, 0x47708301, 0x47708341, 0x8301B10A, 0x83414770, 0x61414770, 0x69424770,
    0x6142404A, 0x074B4770, 0x409A0EDB, 0xB51008C9, 0x0081EB00, 0x240F6A01, 0x43A1409C, 0x6A016201,
    0x62014311, 0x0000BD10, 0x40020000, 0x40020400, 0x40020800, 0x40020C00, 0x40021000, 0x40021400,
    0x40021800, 0x40021C00, 0x40022000, 0x4CFAB570, 0x444C2500, 0x5040F44F, 0x60E56025, 0x61A56165,
    0xE9C46125, 0xF44F0508, 0x61E57080, 0x462862A0, 0xFD04F7FF, 0xF7FF2000, 0x2006FD09, 0x462062E0,
    0xFCA1F7FF, 0xF7FF2020, 0x2801FD5C, 0x2102D0FA, 0x46082200, 0xFCC2F7FF, 0xF7FF2001, 0x2000FD0B,
    0xFCF4F7FF, 0x6000F04F, 0x60206265, 0x612010C0, 0x62E02005, 0x444848E0, 0xFC85F7FF, 0xF7FF2008,
    0x2800FD40, 0x2008D0FA, 0xFD43F7FF, 0xF7FF2002, 0x2020FD40, 0xFD35F7FF, 0xD0FA2801, 0xB510BD70,
    0x4604B08C, 0xFFB2F7FF, 0x91012100, 0x91039105, 0xF44F9100, 0x91065040, 0x1007E9CD, 0x7080F44F,
    0xE9CD9104, 0x46081009, 0xFCB8F7FF, 0xF7FF2000, 0x4668FCBD, 0xF7FF940B, 0x2020FC56, 0xFD11F7FF,
    0xD0FA2801, 0xBD10B00C, 0x4606B570, 0xFF8EF7FF, 0xF7FF2000, 0x48C0FCAB, 0xF7FF4448, 0x4CBEFC1B,
    0x7080F44F, 0x2500444C, 0x008062A0, 0xF44F6260, 0x62205040, 0x6080F04F, 0x60206125, 0x62E020D8,
    0xF7FF4620, 0x4630FC30, 0xFC7CF7FF, 0xFF6EF7FF, 0xF7FF2000, 0x2200FC8B, 0x46102101, 0xFC4EF7FF,
    0xF7FF2001, 0x2000FC97, 0xFC80F7FF, 0xF7FF2008, 0xF04FFCE0, 0x62656000, 0x10C06020, 0x20056120,
    0x462062E0, 0xFC0FF7FF, 0xF7FF2008, 0x2800FCCA, 0x2008D0FA, 0xFCCDF7FF, 0xF7FF2020, 0x2801FCC2,
    0xBD70D0FA, 0xF7FFB570, 0x2000FF41, 0xFC5EF7FF, 0x44484899, 0xFBCEF7FF, 0xF44F4C97, 0x444C7080,
    0xE9C42500, 0xF44F5009, 0x62205040, 0x6080F04F, 0x60206125, 0x62E020C7, 0xF7FF4620, 0xF7FFFBE4,
    0x2000FF25, 0xFC42F7FF, 0x21012200, 0xF7FF4610, 0x2001FC05, 0xFC4EF7FF, 0xF7FF2000, 0x2008FC37,
    0xFC97F7FF, 0x6000F04F, 0x60206265, 0x612010C0, 0x62E02005, 0xF7FF4620, 0x2008FBC6, 0xFC81F7FF,
    0xD0FA2800, 0xF7FF2008, 0x2020FC84, 0xFC79F7FF, 0xD0FA2801, 0xB510BD70, 0xFEF8F7FF, 0xF7FF2000,
    0x4875FC15, 0xF7FF4448, 0x4873FB85, 0x7180F44F, 0xF44F4448, 0x62815240, 0xE9C02100, 0xF04F2108,
    0x60026280, 0x21986101, 0xE8BD62C1, 0xF7FF4010, 0xE92DBB9A, 0x460641F0, 0x46156810, 0x2800460C,
    0xF7FFD063, 0x6828FED3, 0xF7FF1E40, 0x4620FBEF, 0xFBD8F7FF, 0x44484860, 0xFB5CF7FF, 0x27004C5E,
    0xF44F444C, 0x60277080, 0x008062A0, 0xF44F6260, 0x62205040, 0x61200300, 0x62E02032, 0xF7FF4620,
    0xE008FB72, 0xF7FF2004, 0x2800FC2C, 0xF816D0FA, 0xF7FF0B01, 0x6828FBF3, 0x60281E40, 0xD1F11C40,
    0x2020602F, 0xFC1DF7FF, 0xD0FA2801, 0xF7FF2002, 0x2800FC18, 0x2002D0FA, 0xFC1BF7FF, 0xF7FF2000,
    0x2200FBB5, 0x46102101, 0xFB78F7FF, 0xF7FF2001, 0x2000FBC1, 0xFBAAF7FF, 0x6000F04F, 0x60206267,
    0x612010C0, 0x62E02005, 0x4448483B, 0xFB3BF7FF, 0xF7FF2008, 0x2800FBF6, 0x2008D0FA, 0xFBF9F7FF,
    0xF7FF2020, 0x2801FBEE, 0xE8BDD0FA, 0xE92D81F0, 0x46074FF8, 0x90002000, 0x460E6810, 0x01FFF011,
    0xF5C1B2C3, 0xEA4F7480, 0x46982510, 0x7B80F44F, 0xB2F1D014, 0x7180F5C1, 0x0A01EB06, 0x1B00B335,
    0x0A056010, 0x08FFF000, 0x4631466A, 0x94004638, 0xFF6FF7FF, 0x4656443C, 0xE031465F, 0x465CB325,
    0xD30A1E6D, 0x4631466A, 0x94004638, 0xFF61F7FF, 0x7680F506, 0x7780F507, 0xF8CDE7F2, 0x466A8000,
    0x46384631, 0xFF55F7FF, 0x8FF8E8BD, 0xD90B45A0, 0x466A1B1D, 0x46384631, 0xF7FF9400, 0x4651FF4A,
    0x466A1938, 0xE7ED9500, 0xE7E89000, 0x4631466A, 0x97004620, 0xFF3DF7FF, 0x7480F504, 0x7680F506,
    0xD2F31E6D, 0x0F00F1B8, 0x466AD0DE, 0x46204631, 0x8000F8CD, 0x0000E7D6, 0x00000024, 0x4605B570,
    0xFE04F7FF, 0x21004C79, 0xF44F444C, 0x60215040, 0x612161A1, 0x0108E9C4, 0xF7FF4608, 0x2000FB0F,
    0xFB14F7FF, 0x20B7B10D, 0x20E9E000, 0x486F62E0, 0xF7FF4448, 0x2020FAA8, 0xFB63F7FF, 0xD0FA2801,
    0xB570BD70, 0x46144605, 0x2001460E, 0xFFD6F7FF, 0x44484866, 0xFA6EF7FF, 0x210A4864, 0x61414448,
    0x7180F44F, 0x04896281, 0xF44F6001, 0x62416140, 0x62010089, 0x61010309, 0x62C121EB, 0xFA83F7FF,
    0x1E406820, 0xFAE2F7FF, 0xF7FF4630, 0xE00AFACB, 0xF7FF2004, 0xB118FB36, 0xFB0BF7FF, 0x0B01F805,
    0x1E406820, 0x20206020, 0xFB2BF7FF, 0xD1EF2800, 0xF7FF2020, 0x2801FB26, 0x2002D0FA, 0xFB21F7FF,
    0xD0FA2800, 0xF7FF2002, 0xE8BDFB24, 0x20004070, 0xB510E794, 0x20004C45, 0xF44F444C, 0x60205140,
    0x616060E0, 0x612061A0, 0x1008E9C4, 0xF44F61E0, 0x62A07080, 0xF7FF2000, 0x2000FAA1, 0xFAA6F7FF,
    0x62E02006, 0xF7FF4620, 0x2020FA3E, 0xFAF9F7FF, 0xD0FA2801, 0x30FFF04F, 0xFA98F7FF, 0x6080F04F,
    0x10806020, 0x20056120, 0x483062E0, 0xF7FF4448, 0x4C2FFA2A, 0xE006444C, 0xF7FF2004, 0xB110FAE2,
    0xFAB7F7FF, 0x78207020, 0xD5F50780, 0xFAA0F7FF, 0xF7FF2020, 0x2801FAD6, 0xBD10D0FA, 0xF7FFB570,
    0x4C22FD55, 0x444C2500, 0x7680F04F, 0x61266025, 0x5040F44F, 0x622061A5, 0xF7FF4628, 0x2000FA5F,
    0xFA64F7FF, 0x62E02081, 0xF7FF4620, 0x20F3F9FC, 0xFA84F7FF, 0xF7FF2020, 0x2801FAB4, 0x2000D0FA,
    0xFA54F7FF, 0x21082200, 0xF7FF4610, 0x2001FA17, 0xFA60F7FF, 0xF7FF2000, 0x6126FA49, 0x6000F04F,
    0x60206265, 0x62E02085, 0x44484808, 0xF9DBF7FF, 0xF7FF2008, 0x2800FA96, 0x2008D0FA, 0xFA99F7FF,
    0xF7FF2020, 0x2801FA8E, 0xBD70D0FA, 0x00000024, 0x00000004, 0x0200F04F, 0x4613B500, 0x46964694,
    0xBF223920, 0x500CE8A0, 0x500CE8A0, 0x0120F1B1, 0xAFF7F4BF, 0xBF280709, 0x500CE8A0, 0xC00CBF48,
    0xEB04F85D, 0xBF280089, 0x2B04F840, 0x4770BF08, 0xF820BF48, 0xF0112B02, 0xBF184F80, 0x2B01F800,
    0x00004770, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

const program_target_t flash_algo = {
    0x200007C1,  // Init
    0x200009BB,  // UnInit
    0x200009C5,  // EraseChip
    0x200009AD,  // EraseSector
    0x200009CF,  // ProgramPage

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
    0x00000100,  // ram_to_flash_bytes_to_be_written
};
