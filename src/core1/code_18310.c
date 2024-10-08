#include <ultra64.h>
#include "core1/core1.h"
#include "functions.h"
#include "variables.h"

s16 D_802765C0[] ={
    0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008,
    0x0009, 0x000A, 0x029E, 0x000C, 0x000D, 0x000E, 0x029F, 0x0010,
    0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 0x0018,
    0x0019, 0x001A, 0x001B, 0x001C, 0x001D, 0x001E, 0x001F, 0x0020,
    0x0021, 0x0022, 0x0023, 0x0291, 0x0292, 0x029B, 0x0024, 0x029D,
    0x02B2, 0x0025, 0x0026, 0x0027, 0x02B8, 0x02B9, 0x002A, 0x002B,
    0x002C, 0x002D, 0xFFFE, 0x002F, 0x0295, 0x0031, 0x0032, 0x0033,
    0x0034, 0x0035, 0x0036, 0x0037, 0x0038, 0x0039, 0x003A, 0x003B,
    0x003C, 0x003D, 0x003E, 0x003F, 0x0040, 0x0041, 0x0042, 0x0043,
    0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049, 0x004A, 0x004B,
    0x004C, 0x004D, 0x004E, 0x004F, 0x0050, 0x0051, 0x0052, 0x0053,
    0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059, 0x005A, 0x005B,
    0x005C, 0x005D, 0x005E, 0x005F, 0x0060, 0x0061, 0x0062, 0x0063,
    0x0064, 0x0065, 0x020D, 0x020E, 0x020F, 0x0210, 0x006A, 0x006B,
    0x006C, 0x006D, 0x006E, 0x006F, 0x0070, 0x0071, 0x0072, 0x0073,
    0x0074, 0x0075, 0x0076, 0x0294, 0x008F, 0x0090, 0x0293, 0x0078,
    0x0079, 0x007A, 0x007B, 0x007C, 0x007D, 0x007E, 0x007F, 0x0080,
    0x0081, 0x0082, 0x0083, 0x0084, 0x0085, 0x008F, 0x008F, 0x008F,
    0x008F, 0x008F, 0x008F, 0x008C, 0x008E, 0x008D, 0x0091, 0x0093,
    0x0098, 0x0161, 0x015E, 0x00F9, 0x010E, 0x010F, 0x015F, 0x0110,
    0x0163, 0x0160, 0x0296, 0x01B7, 0x00AE, 0x009D, 0x00AD, 0x01B8,
    0x01B9, 0x01BA, 0x013A, 0x013B, 0x0139, 0x013D, 0x013C, 0x01BB,
    0x01BC, 0x01BD, 0x01BE, 0x01BF, 0x01C0, 0xFFFE, 0x01C2, 0x01C3,
    0x01C4, 0x01C5, 0x01C6, 0x01C7, 0x01C8, 0x01C9, 0x01CA, 0x01CB,
    0x01CC, 0x01CD, 0x01CE, 0x01CF, 0x01D0, 0x01D1, 0x01D2, 0x01D3,
    0x01D4, 0x01D5, 0x02A0, 0xFFFE, 0x01F8, 0x01F9, 0x01F7, 0x01F5,
    0x01FA, 0x01FB, 0x01FC, 0x01FD, 0x01FE, 0x01FF, 0x0200, 0x0201,
    0x0202, 0x0204, 0x0205, 0x0206, 0x0207, 0x0208, 0x0209, 0x020A,
    0x020B, 0x020C, 0x01C1, 0x0297, 0x0298, 0x0299, 0x029A, 0x029C,
    0x02AE, 0x02AF, 0x02B0, 0x02B1, 0x02B3, 0x02B4, 0x02B5, 0x02B6,
    0x02B7, 0x02BA, 0x02BB, 0x02BC, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0x008F,
    0x0090, 0x0092, 0x0094, 0x0095, 0x0096, 0x0097, 0x0099, 0x009A,
    0x009B, 0x009C, 0x009D, 0x009E, 0x009F, 0x00A0, 0x00A1, 0x00A2,
    0x00A3, 0x00A4, 0x00A5, 0x00A6, 0x00A7, 0x00A8, 0x00A9, 0x00AA,
    0x00AB, 0x00AC, 0x00AD, 0x00AE, 0x00AF, 0x00B0, 0x00B1, 0x00B2,
    0x00B3, 0x00B4, 0x00B5, 0x00B6, 0x00B7, 0x00B8, 0x00B9, 0x00BA,
    0x00BB, 0x00BC, 0x00BD, 0x00BE, 0x00BF, 0x00C0, 0x00C1, 0x00C2,
    0x00C3, 0x00C4, 0x00C5, 0x00C6, 0x00C7, 0x00C8, 0x00C9, 0x00CA,
    0x00CB, 0x00CC, 0x00CD, 0x00CE, 0x00CF, 0x00D0, 0x00D1, 0x00D2,
    0x00D3, 0x00D4, 0x00D5, 0xFFFE, 0x00D7, 0x00D8, 0x00D9, 0x00DA,
    0x00DB, 0x00DC, 0x00DD, 0x00DE, 0x00DF, 0x00E0, 0x00E1, 0x00E2,
    0x00E3, 0x00E4, 0x00E5, 0x00E6, 0x00E7, 0x00E8, 0x00E9, 0x00EA,
    0x00EB, 0x00EC, 0x00ED, 0x00EE, 0x00EF, 0x00F0, 0x00F1, 0x00F2,
    0x00F3, 0x00F4, 0x00F5, 0x00F6, 0x00F7, 0x00F8, 0x00F9, 0x00FA,
    0x00FB, 0x00FC, 0x00FD, 0x00FE, 0x00FF, 0x0100, 0x0101, 0x0102,
    0x0103, 0x0104, 0x0105, 0x0106, 0x0107, 0x0108, 0x0109, 0x010A,
    0x010B, 0x010C, 0x010D, 0x010E, 0x010F, 0x0110, 0x0111, 0x0112,
    0x0113, 0x0114, 0x0115, 0x0116, 0x0117, 0x0118, 0x0119, 0x011A,
    0x011B, 0x011C, 0x011D, 0x011E, 0x011F, 0x0120, 0x0121, 0x0122,
    0x0123, 0x0124, 0x0125, 0x0126, 0x0127, 0x0128, 0x0129, 0x012A,
    0x012B, 0x012C, 0x012D, 0x012E, 0x012F, 0xFFFF
};

s16 D_802769AC[] = {
                                                    0x0000, 0x0001,
    0x0002, 0x0003, 0x018F, 0x0005, 0x008C, 0x0007, 0x0008, 0xFFFE,
    0x000A, 0x000B, 0x000C, 0x000D, 0x000E, 0x000F, 0x0010, 0x0063,
    0x0064, 0x03F0, 0x0011, 0x0012, 0x0013, 0x0027, 0x0014, 0x0015,
    0x0016, 0x0017, 0x0018, 0x0019, 0x001A, 0x001B, 0x0066, 0x001D,
    0x001E, 0x001F, 0x0152, 0x0021, 0x0022, 0x0023, 0x0024, 0xFFFE,
    0x0026, 0x03E9, 0x0028, 0xFFFE, 0xFFFE, 0x002B, 0x002C, 0x002D,
    0x002E, 0x002F, 0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035,
    0x0036, 0x0037, 0x0038, 0x0039, 0x003A, 0x003B, 0x003C, 0x003D,
    0x003E, 0x003F, 0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045,
    0x0046, 0x0047, 0x0048, 0x0049, 0xFFFE, 0x004B, 0x004C, 0x004D,
    0x004E, 0x004F, 0x0050, 0x03EE, 0x0052, 0x0053, 0x0054, 0x0055,
    0x0056, 0x0057, 0x0058, 0x0059, 0x005A, 0x005B, 0x005C, 0x005D,
    0x005E, 0x005F, 0x0060, 0x0061, 0x0062, 0x03E9, 0x03EA, 0x03EB,
    0x03EC, 0x03ED, 0x03EF, 0xFFFE, 0xFFFE, 0x0069, 0x006A, 0x006B,
    0x006C, 0x006D, 0x00D0, 0x00C1, 0x03FA, 0x0066, 0x03FC, 0x03F2,
    0x00C9, 0x00EA, 0x00EB, 0x00EC, 0x00ED, 0x0128, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0x03F9, 0x0405, 0x0190, 0xFFFE, 0x0131,
    0x0133, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0x03F6, 0x007F, 0x006E, 0x006F,
    0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077,
    0x0078, 0x0079, 0x0419, 0xFFFE, 0x007C, 0x007D, 0x007E, 0x007F,
    0x0080, 0x0081, 0x0082, 0x0083, 0x0084, 0x0085, 0x0086, 0x0087,
    0x0088, 0x0089, 0x008A, 0x008B, 0x008C, 0x008D, 0x008E, 0x008F,
    0x0090, 0xFFFE, 0xFFFE, 0x0093, 0x0094, 0xFFFE, 0xFFFE, 0x0097,
    0x0098, 0x0099, 0x009A, 0x009B, 0x009C, 0x009D, 0x009E, 0x009F,
    0x00A0, 0x00A1, 0x00A2, 0x00A3, 0x00A4, 0x00A5, 0xFFFE, 0x00A7,
    0x00A8, 0x00A9, 0xFFFF, 0x0000
};

s16 D_80276B98[] = {
                                    0x002F, 0x0030, 0x0099, 0x005F,
    0x0002, 0x0003, 0xFFFE, 0x0005, 0x0006, 0xFFFE, 0x0008, 0x0009,
    0x000A, 0x000B, 0x000C, 0x000D, 0xFFFE, 0x000F, 0x0010, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015,
    0x0016, 0x0017, 0x0018, 0x0019, 0x001A, 0x001B, 0x001C, 0x001D,
    0xFFFE, 0x001F, 0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025,
    0x0026, 0x0027, 0x0028, 0xFFFE, 0x0029, 0x002A, 0x0030, 0x0031,
    0x0032, 0xFFFE, 0xFFFE, 0x002B, 0x002C, 0x003F, 0x0040, 0x0043,
    0x000E, 0x0091, 0x00AB, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE, 0xFFFE,
    0xFFFE, 0xFFFE, 0xFFFE, 0x0044, 0xFFFF, 0x0000, 0x0000, 0x0000,
};

s32 func_80255D30(s32 arg0){
    return D_80276B98[arg0];
}

s32 func_80255D44(s32 arg0){
    return D_802769AC[arg0];
}

s32 func_80255D58(s32 arg0){
    return D_802765C0[arg0];
}
