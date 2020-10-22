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
    0x41FCE92D, 0xF7FF2000, 0x489AFD25, 0x4448211C, 0xFD00F000, 0x21304897, 0x301C4448, 0xFCFAF000,
    0x68014895, 0x0102F041, 0x21016001, 0xF7FF203F, 0x2101FD9C, 0xF7FF0388, 0x2002FDC0, 0x0004F88D,
    0xF88D2400, 0xF88D4006, 0x20034007, 0x822CF8DF, 0x0005F88D, 0x21022209, 0xF0004640, 0x2004F9FE,
    0x46699000, 0xF0004640, 0x4F85F96F, 0x2108220A, 0xF0004638, 0x15BEF9F2, 0x46384669, 0xF0009600,
    0x220AF963, 0x46382109, 0xF9E7F000, 0x90000070, 0x46384669, 0xF958F000, 0x21072209, 0xF0004638,
    0x2080F9DC, 0x46699000, 0xF0004638, 0x2209F94D, 0x46382106, 0xF9D1F000, 0x46692540, 0x95004638,
    0xF942F000, 0x2106220A, 0xF0004640, 0x2001F9C6, 0x0007F88D, 0x46699500, 0xF0004640, 0x2000F935,
    0xFCB8F7FF, 0xFE62F7FF, 0x21064862, 0xE9C04448, 0x211A4100, 0xE9C06084, 0x61444103, 0xF7FF6184,
    0x4D5CFE77, 0x5740F44F, 0x351C444D, 0x602C2001, 0x616C60EC, 0x612C61AC, 0x7408E9C5, 0x61EC62AE,
    0xFEA1F7FF, 0xF7FF2000, 0x2000FED9, 0xFEDEF7FF, 0x68814854, 0xD4FC0689, 0x1166F242, 0x61846141,
    0x610461C4, 0x8F4FF3BF, 0x06896881, 0xF242D4FC, 0x61411199, 0x61C46184, 0xF3BF6104, 0x68818F4F,
    0xD4FC0689, 0x2166F242, 0x61846141, 0x610461C4, 0x8F4FF3BF, 0x06896881, 0xF242D4FC, 0x61412199,
    0x61C46184, 0xF3BF6104, 0x68818F4F, 0xD4FC0689, 0x3166F242, 0x61846141, 0x610461C4, 0x8F4FF3BF,
    0x06896881, 0xF242D4FC, 0x61413199, 0x61C46184, 0xF3BF6104, 0x20018F4F, 0xFA52F000, 0x61682008,
    0x6040F04F, 0xF44F6028, 0xE9C56080, 0xF04F7008, 0x61287040, 0xE9C5206B, 0x4826600A, 0x301C4448,
    0xFE21F7FF, 0xE8BD2000, 0xB51081FC, 0x4070F020, 0xF99FF000, 0xBD102000, 0xF7FFB510, 0x2000FDD7,
    0xB510BD10, 0xF9E3F000, 0xBD102000, 0x4613B508, 0xF0209100, 0x466A4170, 0xF0004618, 0x2000FAB0,
    0xB570BD08, 0x46064B13, 0x331C444B, 0x61582008, 0x6040F04F, 0xF44F6018, 0x62586080, 0x5040F44F,
    0x03006218, 0xF44F6118, 0x62987080, 0x62D8206B, 0x460C4615, 0xF7FF4618, 0xE005FDE6, 0x0B01F816,
    0x1B01F815, 0xD1014288, 0xD2F71E64, 0xBD704630, 0x47702001, 0x00000008, 0x40023838, 0x40020400,
    0x40021400, 0xA0001000, 0xB510497C, 0xD1064288, 0x46082101, 0xFC9BF7FF, 0x20012100, 0x4978E04F,
    0xD1064288, 0x20022101, 0xFC91F7FF, 0x20022100, 0x4974E045, 0xD1064288, 0x20042101, 0xFC87F7FF,
    0x20042100, 0x4970E03B, 0xD1064288, 0x20082101, 0xFC7DF7FF, 0x20082100, 0x496CE031, 0xD1064288,
    0x20102101, 0xFC73F7FF, 0x20102100, 0x4968E027, 0xD1064288, 0x20202101, 0xFC69F7FF, 0x20202100,
    0x4964E01D, 0xD1064288, 0x20402101, 0xFC5FF7FF, 0x20402100, 0x4960E013, 0xD1064288, 0x20802101,
    0xFC55F7FF, 0x20802100, 0x495CE009, 0xD10A4288, 0x21011584, 0xF7FF4620, 0x2100FC4A, 0xE8BD4620,
    0xF7FF4010, 0xBD10BC44, 0x2300B5F0, 0x27032401, 0xFA04680D, 0x4015F203, 0xD1424295, 0xC000F8D0,
    0xFA07005E, 0xEA2CF506, 0xF8C00C05, 0xF891C000, 0xF8D0C004, 0xFA0CE000, 0xEA4CFC06, 0xF8C00C0E,
    0xF891C000, 0xF1BCC004, 0xD0020F01, 0x0F02F1BC, 0xF8D0D11F, 0xEA2CC008, 0xF8C00C05, 0xF891C008,
    0xF8D0C005, 0xFA0CE008, 0xEA4CFC06, 0xF8C00C0E, 0xF8D0C008, 0xEA2CC004, 0xF8C00C02, 0x6842C004,
    0xC006F891, 0xFC03FA0C, 0xFC8CFA1F, 0x020CEA42, 0x68C26042, 0x60C243AA, 0x68C579CA, 0x432A40B2,
    0x1C5B60C2, 0xD3B32B10, 0xF64FBDF0, 0x600171FF, 0x71012100, 0x71817141, 0x477071C1, 0xF441B508,
    0x92003280, 0x61C161C2, 0x61C19900, 0x69C069C1, 0xBD089000, 0x20004602, 0x420A6912, 0x2001D000,
    0x69004770, 0x4770B280, 0x20004602, 0x420A6952, 0x2001D000, 0x69404770, 0x4770B280, 0x47708301,
    0x47708341, 0x8301B10A, 0x83414770, 0x61414770, 0x69424770, 0x6142404A, 0x074B4770, 0x409A0EDB,
    0xB51008C9, 0x0081EB00, 0x240F6A01, 0x43A1409C, 0x6A016201, 0x62014311, 0x0000BD10, 0x40020000,
    0x40020400, 0x40020800, 0x40020C00, 0x40021000, 0x40021400, 0x40021800, 0x40021C00, 0x40022000,
    0x4CFFB570, 0x444C2500, 0x5040F44F, 0x60E56025, 0x61A56165, 0xE9C46125, 0xF44F0508, 0x61E57080,
    0x462862A0, 0xFD0AF7FF, 0xF7FF2000, 0x2006FD0F, 0x462062E0, 0xFCA7F7FF, 0xF7FF2020, 0x2801FD62,
    0x2102D0FA, 0x46082200, 0xFCC8F7FF, 0xF7FF2001, 0x2000FD11, 0xFCFAF7FF, 0x6000F04F, 0x60206265,
    0x612010C0, 0x62E02005, 0x444848E5, 0xFC8BF7FF, 0xF7FF2008, 0x2800FD46, 0x2008D0FA, 0xFD49F7FF,
    0xF7FF2002, 0x2020FD46, 0xFD3BF7FF, 0xD0FA2801, 0xB570BD70, 0xF7FF4606, 0x2000FFB3, 0xFCD6F7FF,
    0x444848D7, 0xFC46F7FF, 0xF44F4CD5, 0x444C7080, 0x62A02500, 0x62600080, 0x5040F44F, 0xF04F6220,
    0x61256080, 0x20D86020, 0x462062E0, 0xFC5BF7FF, 0xF7FF4630, 0xF7FFFCA7, 0x2000FF93, 0xFCB6F7FF,
    0x21012200, 0xF7FF4610, 0x2001FC79, 0xFCC2F7FF, 0xF7FF2000, 0x2008FCAB, 0xFD0BF7FF, 0x6000F04F,
    0x60206265, 0x612010C0, 0x62E02005, 0xF7FF4620, 0x2008FC3A, 0xFCF5F7FF, 0xD0FA2800, 0xF7FF2008,
    0x2020FCF8, 0xFCEDF7FF, 0xD0FA2801, 0xB570BD70, 0xFF66F7FF, 0xF7FF2000, 0x48B1FC89, 0xF7FF4448,
    0x4CAFFBF9, 0x7080F44F, 0x2500444C, 0x5009E9C4, 0x5040F44F, 0xF04F6220, 0x61256080, 0x20C76020,
    0x462062E0, 0xFC0FF7FF, 0xFF4AF7FF, 0xF7FF2000, 0x2200FC6D, 0x46102101, 0xFC30F7FF, 0xF7FF2001,
    0x2000FC79, 0xFC62F7FF, 0xF7FF2008, 0xF04FFCC2, 0x62656000, 0x10C06020, 0x20056120, 0x462062E0,
    0xFBF1F7FF, 0xF7FF2008, 0x2800FCAC, 0x2008D0FA, 0xFCAFF7FF, 0xF7FF2020, 0x2801FCA4, 0xBD70D0FA,
    0x4605B570, 0xFF1CF7FF, 0x21004C8D, 0xF44F444C, 0x60215040, 0x612161A1, 0x0108E9C4, 0xF7FF4608,
    0x2000FC2D, 0xFC32F7FF, 0x20B7B10D, 0x20E9E000, 0x488362E0, 0xF7FF4448, 0x2020FBC6, 0xFC81F7FF,
    0xD0FA2801, 0xE92DBD70, 0x460641F0, 0x46156810, 0x2800460C, 0xF7FFD061, 0x6828FEF3, 0xF7FF1E40,
    0x4620FC15, 0xFBFEF7FF, 0x44484875, 0xFB82F7FF, 0x27004C73, 0xF44F444C, 0x60277080, 0x008062A0,
    0xF44F6260, 0x62205040, 0x61200300, 0x62E02032, 0xF7FF4620, 0xE006FB98, 0xF7FF2004, 0xF816FC52,
    0xF7FF0B01, 0x6828FC1B, 0x60281E40, 0xD1F31C40, 0x2020602F, 0xFC45F7FF, 0xD0FA2801, 0xF7FF2002,
    0x2800FC40, 0x2002D0FA, 0xFC43F7FF, 0xF7FF2000, 0x2200FBDD, 0x46102101, 0xFBA0F7FF, 0xF7FF2001,
    0x2000FBE9, 0xFBD2F7FF, 0x6000F04F, 0x60206267, 0x612010C0, 0x62E02005, 0x44484851, 0xFB63F7FF,
    0xF7FF2008, 0x2800FC1E, 0x2008D0FA, 0xFC21F7FF, 0xF7FF2020, 0x2801FC16, 0xE8BDD0FA, 0xE92D81F0,
    0x46804FF8, 0x90002000, 0xF0016810, 0x0A050BFF, 0x0AFFF000, 0x460F4616, 0x7480F5CB, 0xF7FF2001,
    0xF1BBFF5F, 0xD0160F00, 0xF5C0B2F8, 0xEB077080, 0xB3350B00, 0x466A6830, 0x60301B00, 0xF0000A06,
    0x46390AFF, 0x94004640, 0xFF6DF7FF, 0x4444465D, 0x7780F44F, 0xB325E032, 0x7480F44F, 0xD30A1E6D,
    0x4639466A, 0x94004640, 0xFF5DF7FF, 0x7880F508, 0x7780F507, 0xF8CDE7F2, 0x466AA000, 0x46404639,
    0x45A2E026, 0xEBAAD90D, 0x466A0504, 0x46404639, 0xF7FF9400, 0x4659FF48, 0x0004EB08, 0x9500466A,
    0x6830E016, 0xE7E89000, 0x4629466A, 0x97004620, 0xFF39F7FF, 0x7480F504, 0x7580F505, 0xD2F31E76,
    0x0F00F1BA, 0x466AD006, 0x46204629, 0xA000F8CD, 0xFF29F7FF, 0xF7FF2000, 0xE8BDFF03, 0xB5708FF8,
    0x46144605, 0x2001460E, 0xFEFAF7FF, 0x4448480C, 0xFAB0F7FF, 0x210A480A, 0x61414448, 0x7180F44F,
    0x04896281, 0xF44F6001, 0x62416140, 0x62010089, 0x61010309, 0x62C121EB, 0xFAC5F7FF, 0xE0016820,
    0x00000024, 0xF7FF1E40, 0x4630FB21, 0xFB0AF7FF, 0x2004E00A, 0xFB75F7FF, 0xF7FFB118, 0xF805FB4A,
    0x68200B01, 0x60201E40, 0xF7FF2020, 0x2800FB6A, 0x2020D1EF, 0xFB65F7FF, 0xD0FA2801, 0xF7FF2002,
    0x2800FB60, 0x2002D0FA, 0xFB63F7FF, 0x4070E8BD, 0xE6B52000, 0x4C45B510, 0x444C2000, 0x5140F44F,
    0x60E06020, 0x61A06160, 0xE9C46120, 0x61E01008, 0x7080F44F, 0x200062A0, 0xFAE0F7FF, 0xF7FF2000,
    0x2006FAE5, 0x462062E0, 0xFA7DF7FF, 0xF7FF2020, 0x2801FB38, 0xF04FD0FA, 0xF7FF30FF, 0xF04FFAD7,
    0x60206080, 0x61201080, 0x62E02005, 0x4448482F, 0xFA69F7FF, 0x444C4C2E, 0x2004E005, 0xFB21F7FF,
    0xFAF7F7FF, 0x78207020, 0xD5F60780, 0xFAE0F7FF, 0xF7FF2020, 0x2801FB16, 0xBD10D0FA, 0xF7FFB570,
    0x4C22FD8F, 0x444C2500, 0x7680F04F, 0x61266025, 0x5040F44F, 0x622061A5, 0xF7FF4628, 0x2000FA9F,
    0xFAA4F7FF, 0x62E02081, 0xF7FF4620, 0x20F3FA3C, 0xFAC4F7FF, 0xF7FF2020, 0x2801FAF4, 0x2000D0FA,
    0xFA94F7FF, 0x21082200, 0xF7FF4610, 0x2001FA57, 0xFAA0F7FF, 0xF7FF2000, 0x6126FA89, 0x6000F04F,
    0x60206265, 0x62E02085, 0x44484808, 0xFA1BF7FF, 0xF7FF2008, 0x2800FAD6, 0x2008D0FA, 0xFAD9F7FF,
    0xF7FF2020, 0x2801FACE, 0xBD70D0FA, 0x00000024, 0x00000004, 0x0200F04F, 0x4613B500, 0x46964694,
    0xBF223920, 0x500CE8A0, 0x500CE8A0, 0x0120F1B1, 0xAFF7F4BF, 0xBF280709, 0x500CE8A0, 0xC00CBF48,
    0xEB04F85D, 0xBF280089, 0x2B04F840, 0x4770BF08, 0xF820BF48, 0xF0112B02, 0xBF184F80, 0x2B01F800,
    0x00004770, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

const program_target_t flash_algo = {
    0x200007C1,  // Init
    0x200009B9,  // UnInit
    0x200009C3,  // EraseChip
    0x200009AB,  // EraseSector
    0x200009CD,  // ProgramPage

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
    0x00003000,  // ram_to_flash_bytes_to_be_written
};
