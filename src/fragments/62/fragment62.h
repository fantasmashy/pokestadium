#ifndef _FRAGMENT62_H_
#define _FRAGMENT62_H_

#include "global.h"
#include "src/29BA0.h"
#include "src/3D140.h"
#include "src/6BC0.h"
#include "src/stage_loader.h"
#include "src/fragments/17/fragment17.h"
#include "src/fragments/34/fragment34.h"

typedef s32 (*func_D_84390300)(void);
typedef void (*func_D_84390320)(void);

typedef struct unk_D_84390010_654_09C {
    /* 0x00 */ char unk00[0x10];
} unk_D_84390010_654_09C; // size = 0x10

typedef struct unk_D_84390010_654_0AC {
    /* 0x00 */ char unk00[0x10];
} unk_D_84390010_654_0AC; // size = 0x10

typedef struct unk_D_84390010_168 {
    /* 0x000 */ unk_D_86002F58_004_000 unk_000;
    /* 0x168 */ char unk168[0x1];
    /* 0x169 */ u8 unk_169;
    /* 0x16A */ s16 unk_16A;
    /* 0x16C */ s16 unk_16C;
    /* 0x16E */ char unk16E[0x2];
} unk_D_84390010_168; // size = 0x170

typedef struct unk_D_84390010_654 {
    /* 0x00 */ char unk00[0x4];
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1C */ u8 unk_1C;
    /* 0x1E */ u16 unk_1E;
    /* 0x20 */ char unk20[0x8];
    /* 0x28 */ u16 unk_28;
    /* 0x2A */ u8 unk_2A;
    /* 0x2B */ u8 unk_2B;
    /* 0x2C */ u8 unk_2C;
    /* 0x2D */ u8 unk_2D;
    /* 0x2E */ u8 unk_2E;
    /* 0x2F */ u8 unk_2F;
    /* 0x30 */ u16 unk_30;
    /* 0x32 */ char unk32[0x2];
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u16 unk_36;
    /* 0x38 */ unk_D_800FCB18 unk_38;
    /* 0x9C */ unk_D_84390010_654_09C unk_9C;
    /* 0xAC */ unk_D_84390010_654_0AC unk_AC;
    /* 0xBC */ s16 unk_BC;
    /* 0xBE */ s16 unk_BE;
    /* 0xC0 */ char unkC0[1];
    /* 0xC1 */ u8 unk_C1[4];
    /* 0xC8 */ Controller* unk_C8;
} unk_D_84390010_654; // size = 0xCC

typedef struct unk_D_84390010_728_0168 {
    /* 0x00 */ unk_D_86002F58_004_000_000 unk_00;
    /* 0x18 */ char unk18[0x4];
    /* 0x1C */ s16 unk_1C;
    /* 0x1E */ s16 unk_1E;
    /* 0x20 */ s16 unk_20;
    /* 0x22 */ char unk22[0xA];
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ char unk30[0x4];
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ f32 unk_38;
    /* 0x3C */ char unk3C[0x6C];
    /* 0xA8 */ Vec3f unk_A8;
    /* 0xB4 */ Vec3f unk_B4;
} unk_D_84390010_728_0168; // size >= 0xC0

typedef struct unk_D_84390010_728 {
    /* 0x000 */ unk_D_86002F58_004_000 unk_000;
    /* 0x168 */ unk_D_84390010_728_0168* unk_168;
    /* 0x16C */ s32 unk_16C;
    /* 0x170 */ s32 unk_170;
    /* 0x174 */ char unk174[0x4];
    /* 0x178 */ s32 unk_178;
    /* 0x17C */ s32 unk_17C;
    /* 0x180 */ s32 unk_180;
    /* 0x184 */ s16 unk_184;
    /* 0x186 */ s16 unk_186;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ s32 unk_18C;
    /* 0x190 */ f32 unk_190;
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ char unk198[0x4];
} unk_D_84390010_728; // size = 0x19C

typedef struct unk_D_84390010_8C4 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s8 unk_08[4];
    /* 0x0C */ char unk0C[0x3C];
    /* 0x48 */ s8 unk_48[4];
    /* 0x4C */ char unk4C[0x3C];
} unk_D_84390010_8C4; // size = 0x88

typedef struct unk_D_84390010_94C {
    /* 0x00 */ u8 unk_00[10];
    /* 0x0A */ u8 unk_0A[4];
    /* 0x0E */ char unk0E[0x12];
} unk_D_84390010_94C; // size = 0x20

typedef struct unk_D_84390048 {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1A */ u8 unk_1A;
    /* 0x1B */ u8 unk_1B;
    /* 0x1C */ char unk1C[4];
} unk_D_84390048; // size = 0x20

typedef struct unk_D_84390010_448 {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ unk_D_84390048 unk_24;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ char unk48[0x4];
    /* 0x4C */ f32 unk_4C;
} unk_D_84390010_448; // size >= 0x50

typedef struct unk_D_84390010 {
    /* 0x000 */ unk_D_86002F58_004_000 unk_000;
    /* 0x168 */ unk_D_84390010_168 unk_168[2];
    /* 0x448 */ unk_D_84390010_448 unk_448;
    /* 0x498 */ f32 unk_498;
    /* 0x49C */ f32 unk_49C;
    /* 0x4A0 */ f32 unk_4A0;
    /* 0x4A4 */ s16 unk_4A4;
    /* 0x4A6 */ s16 unk_4A6;
    /* 0x4A8 */ s16 unk_4A8;
    /* 0x4AC */ s32 unk_4AC;
    /* 0x4B0 */ s32 unk_4B0;
    /* 0x4B4 */ s32 unk_4B4;
    /* 0x4B8 */ s32 unk_4B8;
    /* 0x4BC */ char unk4BC[0x4];
    /* 0x4C0 */ s32 unk_4C0;
    /* 0x4C4 */ s32 unk_4C4;
    /* 0x4C8 */ s32 unk_4C8;
    /* 0x4CC */ Vec3f unk_4CC;
    /* 0x4D8 */ Vec3f unk_4D8;
    /* 0x4E4 */ f32 unk_4E4;
    /* 0x4E8 */ u8 unk_4E8;
    /* 0x4E9 */ u8 unk_4E9;
    /* 0x4EC */ unk_D_86002F58_004_000 unk_4EC;
    /* 0x654 */ unk_D_84390010_654 unk_654;
    /* 0x720 */ unk_D_800AE540_1194* unk_720;
    /* 0x724 */ unk_D_800AE540_0004* unk_724;
    /* 0x728 */ unk_D_84390010_728 unk_728;
    /* 0x8C4 */ unk_D_84390010_8C4 unk_8C4;
    /* 0x94C */ unk_D_84390010_94C unk_94C;
    /* 0x96C */ unk_D_84390010_94C unk_96C;
    /* 0x98C */ unk_D_84390010_94C unk_98C;
    /* 0x9AC */ unk_D_84390010_94C unk_9AC;
    /* 0x9CC */ unk_D_84390010_94C unk_9CC;
    /* 0x9EC */ unk_D_84390010_94C unk_9EC;
} unk_D_84390010; // size = 0xA0C

typedef struct unk_D_8438E7B0_A50 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0A */ u8 unk_0A;
    /* 0x0B */ u8 unk_0B;
    /* 0x0C */ u8 unk_0C;
    /* 0x0D */ u8 unk_0D;
    /* 0x0E */ u8 unk_0E;
    /* 0x0F */ u8 unk_0F;
} unk_D_8438E7B0_A50; // size = 0x10

typedef struct unk_D_8438E7B0 {
    /* 0x000 */ unk_D_8438E7B0_A50 unk_000[165];
    /* 0xA50 */ unk_D_8438E7B0_A50 unk_A50;
    /* 0xA60 */ char unkA60[0x10];
    /* 0xA70 */ unk_D_8438E7B0_A50 unk_A70;
    /* 0xA80 */ unk_D_8438E7B0_A50 unk_A80;
    /* 0xA90 */ char unkA90[0x60];
    /* 0xAF0 */ unk_D_8438E7B0_A50 unk_AF0;
    /* 0xB00 */ unk_D_8438E7B0_A50 unk_B00;
    /* 0xB10 */ unk_D_8438E7B0_A50 unk_B10;
    /* 0xB20 */ unk_D_8438E7B0_A50 unk_B20;
    /* 0xB30 */ char unkB30[0x51];
    /* 0xB81 */ u8 unk_B81;
    /* 0xB82 */ char unkB82[0x5E];
} unk_D_8438E7B0; // size = 0xBE0

typedef struct unk_D_84390240_000 {
    /* 0x00 */ char unk00[0x8];
    /* 0x08 */ s8 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u16 unk_18;
    /* 0x1A */ u8 unk_1A;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ char unk28[0x2];
    /* 0x2A */ u16 unk_2A;
    /* 0x2C */ u16 unk_2C;
    /* 0x2E */ u16 unk_2E;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3C */ s32 unk_3C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 unk_4C;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x56 */ s16 unk_56;
    /* 0x58 */ s16 unk_58;
    /* 0x5A */ char unk5A[0x2];
    /* 0x5C */ f32 unk_5C;
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ char unk64[0x4];
    /* 0x68 */ f32 unk_68;
    /* 0x6C */ f32 unk_6C;
    /* 0x70 */ f32 unk_70;
    /* 0x74 */ f32 unk_74;
    /* 0x78 */ u8 unk_78;
    /* 0x7A */ s16 unk_7A;
    /* 0x7C */ char unk7C[0x8];
    /* 0x84 */ f32 unk_84;
    /* 0x88 */ char unk88[0xC];
    /* 0x94 */ Vec3f unk_94;
    /* 0xA0 */ Vec3f unk_A0;
    /* 0xAC */ char unkAC[0xC];
    /* 0xB8 */ Vec3f unk_B8;
    /* 0xC4 */ Vec3f unk_C4;
    /* 0xD0 */ Vec3f unk_D0;
    /* 0xDC */ unk_D_86002F34_00C* unk_DC;
} unk_D_84390240_000; // size = 0xE0

typedef struct unk_D_84390240 {
    /* 0x00 */ unk_D_84390240_000* unk_00;
    /* 0x04 */ char unk04[0x3C];
} unk_D_84390240; // size = 0x40

typedef void (*unk_D_84385384_func)(unk_D_84390010*);

typedef struct unk_D_84385384 {
    /* 0x00 */ s16 unk_00;
    /* 0x04 */ unk_D_84385384_func unk_04[7];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
} unk_D_84385384; // size = 0x2C

typedef struct unk_D_843C4E44 {
    /* 0x000 */ u8 unk_000;
    /* 0x001 */ u8 unk_001;
    /* 0x3F2 */ char unk02[0x3F2];
} unk_D_843C4E44; // size >= 0x3F4

typedef struct unk_D_843C4DEC {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk04[0x54];
} unk_D_843C4DEC; // size = 0x58

typedef struct unk_D_84390068 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ unk_D_84385384_func unk_04;
} unk_D_84390068; // size = 0x8

typedef struct unk_D_84384588 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ char unk02[0xE];
} unk_D_84384588; // size = 0x10

typedef struct unk_D_84390178 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk04[0x14];
} unk_D_84390178; // size >= 0x18

typedef struct unk_D_8438FF70 {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ s16 unk_0C;
    /* 0x0E */ s16 unk_0E;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ u16 unk_12;
    /* 0x14 */ char unk14[0xC];
} unk_D_8438FF70; // size = 0x20

typedef struct unk_D_84390028 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
} unk_D_84390028; // size = 0x10

typedef struct unk_D_84384608 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
} unk_D_84384608; // size = 0x8

typedef struct unk_D_843847BC {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ s16 unk_14;
} unk_D_843847BC; // size = 0x18

typedef struct unk_D_843901B0 {
    /* 0x00 */Vec3f unk_00;
    /* 0x0C */s16 unk_0C;
    /* 0x0E */s16 unk_0E;
    /* 0x10 */char unk10[0x2];
    /* 0x12 */s16 unk_12;
    /* 0x14 */s16 unk_14;
    /* 0x18 */f32 unk_18;
    /* 0x1C */f32 unk_1C;
    /* 0x20 */s16 unk_20;
    /* 0x22 */s16 unk_22;
    /* 0x24 */char unk24[0x2];
    /* 0x26 */s16 unk_26;
    /* 0x28 */s16 unk_28;
    /* 0x2C */f32 unk_2C;
    /* 0x30 */f32 unk_30;
    /* 0x34 */f32 unk_34;
    /* 0x38 */f32 unk_38;
    /* 0x3C */f32 unk_3C;
} unk_D_843901B0; // size >= 0x40

typedef struct unk_D_843901A0_4C8 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Vec3f unk_14;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ s16 unk_28;
    /* 0x2A */ s16 unk_2A;
} unk_D_843901A0_4C8; // size = 0x2C

typedef struct unk_D_843901A0 {
    /* 0x000 */ u8 unk_000;
    /* 0x004 */ s32 unk_004;
    /* 0x008 */ u8 unk_008[4];
    /* 0x00C */ char unk00C[0x3C];
    /* 0x048 */ u8 unk_048[64];
    /* 0x088 */ s8 unk_088[64];
    /* 0x0C8 */ s8 unk_0C8[64];
    /* 0x148 */ s8 unk_108[64];
    /* 0x148 */ s8 unk_148[64];
    /* 0x188 */ s8 unk_188[64];
    /* 0x1C8 */ s8 unk_1C8[64];
    /* 0x208 */ s8 unk_208[64];
    /* 0x248 */ s8 unk_248[64];
    /* 0x288 */ s8 unk_288[64];
    /* 0x2C8 */ s8 unk_2C8[64];
    /* 0x2C8 */ s8 unk_308[64];
    /* 0x348 */ s8 unk_348[64];
    /* 0x388 */ s8 unk_388[64];
    /* 0x3C8 */ s8 unk_3C8[64];
    /* 0x408 */ s8 unk_408[64];
    /* 0x448 */ s8 unk_448[2][64];
    /* 0x4C8 */ unk_D_843901A0_4C8 unk_4C8;
} unk_D_843901A0; // size = 0x4F4

typedef struct unk_D_84385790 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Color_RGBA8 unk_04;
} unk_D_84385790; // size = 0x8

typedef struct arg1_func_84344CE8 {
    /* 0x00 */ char unk00[0x14];
    /* 0x14 */ u8* unk_14;
    /* 0x18 */ Gfx* unk_18;
} arg1_func_84344CE8; // size >= 0x1C

typedef struct arg1_func_8434E21C {
    /* 0x00 */ u8* unk_00;
    /* 0x04 */ u8* unk_04;
    /* 0x08 */ char unk08[0x2];
    /* 0x0A */ s16 unk_0A;
} arg1_func_8434E21C; // size >= 0xC

typedef struct unk_D_843925E0_430 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ s16 unk_0C;
    /* 0x0E */ s16 unk_0E;
    /* 0x10 */ Color_RGBA8 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
} unk_D_843925E0_430; // size = 0x1C

typedef struct unk_D_843925E0 {
    /* 0x000 */ s32 unk_000;
    /* 0x004 */ f32 unk_004;
    /* 0x008 */ f32 unk_008;
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ s16 unk_018;
    /* 0x01A */ s16 unk_01A;
    /* 0x01C */ s16 unk_01C;
    /* 0x01E */ s16 unk_01E;
    /* 0x020 */ f32 unk_020;
    /* 0x024 */ s32 unk_024;
    /* 0x028 */ s32 unk_028;
    /* 0x02C */ s32 unk_02C;
    /* 0x030 */ s32 unk_030;
    /* 0x034 */ s32 unk_034;
    /* 0x038 */ s32 unk_038;
    /* 0x03C */ s32 unk_03C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ s32 unk_044;
    /* 0x048 */ char unk048[0x8];
    /* 0x050 */ Vtx unk_050[31 * 2];
    /* 0x430 */ unk_D_843925E0_430 unk_430[31 * 2];
} unk_D_843925E0; // size = 0xAF8

typedef struct unk_D_843975E8 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ char unk24[0x4];
} unk_D_843975E8; // size = 0x28

typedef struct unk_D_84398F50_048 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ Vec3f unk_10;
    /* 0x1C */ Vec3f unk_1C;
    /* 0x28 */ char unk28[0x20];
} unk_D_84398F50_048; // size = 0x48

typedef struct unk_D_84398F50 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ s16 unk_008;
    /* 0x00A */ Color_RGBA8 unk_00A;
    /* 0x00E */ Color_RGB8 unk_00E;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ f32 unk_018;
    /* 0x01C */ Vtx* unk_01C;
    /* 0x020 */ char unk020[0x18];
    /* 0x038 */ s32 unk_038[3];
    /* 0x044 */ char unk044[0x4];
    /* 0x048 */ unk_D_84398F50_048 unk_048[20];
} unk_D_84398F50; // size = 0x5E8

typedef struct unk_D_8439CA60_0014 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ s16 unk_18;
    /* 0x1A */ s16 unk_1A;
} unk_D_8439CA60_0014; // size = 0x1C

typedef struct unk_D_8439CA60 {
    /* 0x0000 */ s16 unk_0000;
    /* 0x0002 */ s16 unk_0002;
    /* 0x0004 */ s16 unk_0004;
    /* 0x0008 */ f32 unk_0008;
    /* 0x000C */ Vtx* unk_000C;
    /* 0x0010 */ Mtx* unk_0010;
    /* 0x0014 */ unk_D_8439CA60_0014 unk_0014[16][16];
} unk_D_8439CA60; // size >= 0x1C14

typedef struct unk_D_8439E680_0014 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ s16 unk_18;
    /* 0x1A */ s16 unk_1A;
    /* 0x1C */ f32 unk_1C;
} unk_D_8439E680_0014; // size = 0x20

typedef struct unk_D_8439E680 {
    /* 0x0000 */ s16 unk_0000;
    /* 0x0002 */ s16 unk_0002;
    /* 0x0004 */ s16 unk_0004;
    /* 0x0008 */ f32 unk_0008;
    /* 0x000C */ Vtx* unk_000C;
    /* 0x0010 */ Mtx* unk_0010;
    /* 0x0014 */ unk_D_8439E680_0014 unk_0014[16][16];
} unk_D_8439E680; // size >= 0x2014

typedef struct unk_D_843A22C0_038 {
    /* 0x00 */ f32 unk_00;
    /* 0x08 */ u8 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vtx unk_30[2];
} unk_D_843A22C0_038; // size = 0x50

typedef struct unk_D_843A22C0 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ s16 unk_008;
    /* 0x00A */ Color_RGB8 unk_00A;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ Vtx* unk_018;
    /* 0x01C */ char unk01C[0x1C];
    /* 0x038 */ unk_D_843A22C0_038 unk_038[10];
} unk_D_843A22C0; // size = 0x358

typedef struct unk_D_843AA880_034 {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ Vec3f unk_38;
} unk_D_843AA880_034; // size = 0x44

typedef struct unk_D_843AA880 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ Color_RGB8 unk_008;
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ Vtx* unk_018;
    /* 0x01C */ Vec3f unk_01C;
    /* 0x028 */ char unk028[0xC];
    /* 0x034 */ unk_D_843AA880_034 unk_034[15];
} unk_D_843AA880; // size = 0x430

typedef struct unk_D_843AB940_038 {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ Vec3f unk_38;
} unk_D_843AB940_038; // size = 0x44

typedef struct unk_D_843AB940 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ Color_RGB8 unk_008;
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ Vtx* unk_018;
    /* 0x01C */ Vec3f unk_01C;
    /* 0x028 */ char unk028[0xC];
    /* 0x034 */ unk_D_8140E720* unk_034;
    /* 0x038 */ unk_D_843AB940_038 unk_038[15];
} unk_D_843AB940; // size = 0x434

typedef struct unk_D_843ACA10_01C {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ Vec3f unk_38;
} unk_D_843ACA10_01C; // size = 0x44

typedef struct unk_D_843ACA10 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ Color_RGB8 unk_008;
    /* 0x010 */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ Vtx* unk_014;
    /* 0x018 */ unk_D_8140E720* unk_018;
    /* 0x01C */ unk_D_843ACA10_01C unk_01C[15];
    /* 0x418 */ f32 unk_418;
} unk_D_843ACA10; // size = 0x41C

typedef struct unk_D_843ADA80_040 {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ Vec3f unk_38;
    /* 0x44 */ Vec3f unk_44;
} unk_D_843ADA80_040; // size = 0x50

typedef struct unk_D_843ADA80 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ s16 unk_008;
    /* 0x00A */ Color_RGB8 unk_00A;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ f32 unk_018;
    /* 0x01C */ char unk01C[0x4];
    /* 0x020 */ Vtx* unk_020;
    /* 0x024 */ Vec3f unk_024;
    /* 0x030 */ char unk030[0x10];
    /* 0x040 */ unk_D_843ADA80_040 unk_040[10];
} unk_D_843ADA80; // size = 0x360

typedef struct unk_D_843C2C00_0B0 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ Vec3f unk_10;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
} unk_D_843C2C00_0B0; // size = 0x28

typedef struct unk_D_843C2C00_064 {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ s16 unk_0A;
} unk_D_843C2C00_064; // size = 0xC

typedef struct unk_D_843C2C00_024 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
} unk_D_843C2C00_024; // size = 0x20

typedef struct unk_D_84389CE0 {
    /* 0x00 */ Color_RGBA8 unk_00;
    /* 0x04 */ u8 unk_04;
} unk_D_84389CE0; // size = 0x8

typedef struct unk_D_843C2C00 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x008 */ f32 unk_008;
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ Vtx* unk_018;
    /* 0x01C */ s32 unk_01C;
    /* 0x020 */ s32 unk_020;
    /* 0x024 */ unk_D_843C2C00_024 unk_024;
    /* 0x044 */ unk_D_843C2C00_024 unk_044;
    /* 0x064 */ unk_D_843C2C00_064 unk_064;
    /* 0x070 */ unk_D_843C2C00_064 unk_070;
    /* 0x07C */ unk_D_84389CE0 unk_07C;
    /* 0x081 */ unk_D_84389CE0 unk_081;
    /* 0x086 */ Color_RGBA8 unk_086;
    /* 0x08C */ f32 unk_08C;
    /* 0x090 */ f32 unk_090;
    /* 0x094 */ s16 unk_094;
    /* 0x096 */ char unk096[0x1A];
    /* 0x0B0 */ unk_D_843C2C00_0B0 unk_0B0[10];
} unk_D_843C2C00; // size = 0x240

typedef struct unk_D_843C49C0_004 {
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
} unk_D_843C49C0_004; // size = 0x18

typedef struct unk_D_843C49C0 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ char pad002[2];
    /* 0x004 */ unk_D_843C49C0_004 unk_004[20];
} unk_D_843C49C0; // size = 0x1E4

typedef struct unk_D_843C3508_0A4 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
} unk_D_843C3508_0A4; // size = 0x24

typedef struct unk_D_843C3508 {
    /* 0x000 */ s16 unk_000;
    /* 0x002 */ s16 unk_002;
    /* 0x004 */ s16 unk_004;
    /* 0x006 */ s16 unk_006;
    /* 0x008 */ unk_D_84389CE0 unk_008;
    /* 0x00D */ unk_D_84389CE0 unk_00D;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ f32 unk_018;
    /* 0x01C */ s16 unk_01C;
    /* 0x020 */ s32 unk_020;
    /* 0x024 */ s32 unk_024;
    /* 0x028 */ unk_D_843C2C00_024 unk_028;
    /* 0x048 */ unk_D_843C2C00_024 unk_048;
    /* 0x068 */ unk_D_843C2C00_064 unk_068;
    /* 0x074 */ unk_D_843C2C00_064 unk_074;
    /* 0x080 */ f32 unk_080;
    /* 0x084 */ f32 unk_084;
    /* 0x088 */ Vtx* unk_088;
    /* 0x08C */ char unk08C[0x18];
    /* 0x0A4 */ unk_D_843C3508_0A4 unk_0A4[20];
} unk_D_843C3508; // size = 0x374

typedef struct unk_D_8438ACB8 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
} unk_D_8438ACB8; // size = 0x2

typedef struct unk_D_8438ACF0 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
} unk_D_8438ACF0; // size = 0x3

typedef struct unk_D_843C60AC {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05[1];
    /* 0x0C */ char unk06[0xC];
    /* 0x12 */ unk_D_800FCB18 unk_12;
} unk_D_843C60AC; // size = 0x76

typedef struct unk_D_843C60A4 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01[2];
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04[2];
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07[1];
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0A */ u8 unk_0A[1];
    /* 0x0B */ char unk0B[0x5];
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ unk_D_843C60AC unk_14[1];
} unk_D_843C60A4; // size >= 0x8A

typedef struct unk_D_843C5568 {
    /* 0x000 */ u8 unk_000;
    /* 0x001 */ u8 unk_001;
    /* 0x002 */ u8 unk_002;
    /* 0x003 */ u8 unk_003;
    /* 0x004 */ u8 unk_004;
    /* 0x005 */ u8 unk_005;
    /* 0x006 */ u8 unk_006;
    /* 0x007 */ u8 unk_007;
    /* 0x008 */ u8 unk_008;
    /* 0x009 */ char unk009[0x3];
    /* 0x00C */ u8 unk_00C[1];
    /* 0x00D */ char unk00D[0x5];
    /* 0x012 */ u8 unk_012;
    /* 0x013 */ char unk013[0x3];
    /* 0x016 */ unk_D_843C60AC unk_016[1];
    /* 0x08C */ char unk08C[0x510];
} unk_D_843C5568; // size = 0x59C

typedef struct unk_func_843794CC {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x0A */ s16 unk_0A;
    /* 0x0C */ s16 unk_0C;
    /* 0x0E */ s16 unk_0E;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s16 unk_14;
    /* 0x16 */ s16 unk_16;
    /* 0x18 */ s16 unk_18;
    /* 0x1A */ s16 unk_1A;
    /* 0x1C */ s16 unk_1C;
    /* 0x1E */ s16 unk_1E;
    /* 0x20 */ s16 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
} unk_func_843794CC; // size = 0x2C

typedef struct unk_D_843C5310 {
    /* 0x00 */ u8 unk_00[1];
    /* 0x01 */ char unk01[9];
    /* 0x0A */ u8 unk_0A[1];
    /* 0x0B */ char unk0B[0x15];
} unk_D_843C5310; // size = 0x20

typedef struct unk_D_843C60C0 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x04 */ s32 unk_04[1];
    /* 0x08 */ char unk08[0xC];
} unk_D_843C60C0; // size = 0x14

typedef struct unk_D_843C60F0_00C {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0A */ u8 unk_0A;
    /* 0x0B */ u8 unk_0B;
    /* 0x0C */ u8 unk_0C;
    /* 0x0D */ u8 unk_0D;
    /* 0x0E */ u8 unk_0E;
    /* 0x0F */ u8 unk_0F;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ char unk11[0x3];
} unk_D_843C60F0_00C; // size = 0x14

typedef struct unk_D_843C60F0 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ char unk03[0x9];
    /* 0x0C */ unk_D_843C60C0 unk_0C[3];
} unk_D_843C60F0; // size >= 0x48

typedef struct unk_D_843C6148 {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ char unk06[0x2];
} unk_D_843C6148; // size <= 0x8

typedef struct unk_func_8438220C {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ char unk01[0x3];
    /* 0x04 */ unk_func_843794CC unk_04[4];
    /* 0xB4 */ u8 unk_B4;
    /* 0xB8 */ s32 unk_B8;
} unk_func_8438220C; // size = 0xBC

typedef struct unk_func_8437F85C_arg3 {
    /* 0x00 */ u8 unk_00[3][3];
} unk_func_8437F85C_arg3; // size = 0x3

extern unk_D_8438E7B0* D_84384570[];
extern unk_D_8438FF70* D_84384578[];
extern unk_D_8438FF70* D_84384580[];
extern unk_D_84384588* D_84384588[];
extern u8 D_84384590[];
extern u8 D_843845F0;
extern u8 D_843845F4;
extern u8 D_843845F8;
extern u8 D_843845FC[];
extern s16 D_84384670[];
extern unk_D_843847BC D_843847BC[2];
extern unk_D_86B0C160 D_843847EC[3];
extern unk_D_86B0C160 D_84384888[2];
extern unk_D_86B0C160 D_843848F0;
extern unk_D_86B0C160 D_84384924;
extern unk_D_86B0C160 D_84384958;
extern unk_D_86B0C160 D_8438498C;
extern unk_D_86B0C160 D_843849C0[];
extern unk_D_86B0C160 D_84384AF8;
extern unk_D_86B0C160 D_84384B2C[];
extern Vec3f D_84384C30[];
extern unk_D_84385384_func D_84385380;
extern unk_D_84385384 D_84385384[];
extern Vec3f D_84385B90;
extern Vec3f D_84385B9C;
extern u32 D_84385BC0[];
extern Vtx D_84385C80[];
extern Vtx D_84385CC0[];
extern Vtx D_84385D00[];
extern Vtx D_84385D40[];
extern Vtx D_84385DC0[];
extern Vtx D_84385E00[];
extern unk_D_8140E728_01C D_843861D0[86];
extern func_D_84390320 D_84388280[];
extern func_D_84390320 D_843884D8[];
extern func_D_84390320 D_84388668[];
extern func_D_84390320 D_843888C0[];
extern func_D_84390320 D_84388A50[];
extern func_D_84390320 D_84388CA8[];
extern Gfx D_84389AE0[];
extern u32 D_8438A648[];
extern Gfx D_8438A980[];
extern u8 D_8438AC60[];
extern unk_D_8438ACB8 D_8438ACB8[];
extern u8 D_8438ACD4[];
extern u8 D_8438ACF0[];
extern u8* D_8438E778;
extern u8* D_8438E77C;

extern u8 D_843C4DA4;
extern u8 D_843C4DA5;
extern u8 D_843C4DA9;
extern u8 D_843C4DAA;
extern s32 D_843C4DEC;
//extern unk_D_843C4E44 D_843C4E44;
extern u8 D_843C4E44;
extern u8 D_843C4E45;
extern u16 D_843C4DC4;
extern unk_D_800FCB18* D_843C5238;
extern unk_D_800FCB18* D_843C523C;


extern unk_D_84390010* D_84390010[2];
extern unk_D_84390010* D_84390018;
extern unk_D_84390010* D_8439001C;
extern unk_D_84390028 D_84390028[2];
extern f32 D_843900A8[];
extern char** D_843900B0;
extern char** D_843900B4;
extern char** D_843900B8;
extern char** D_843900BC;
extern char** D_843900C0;
extern f32 D_84390124;
extern f32 D_84390128;
extern u8 D_84390134;
extern s32 D_84390174;
extern unk_D_84390178 D_84390178;
extern Vec3f D_84390190;
extern unk_D_843901A0* D_843901A0;
extern unk_D_843901B0 D_843901B0;
extern unk_D_84390010* D_84390200;
extern unk_D_84390010* D_84390204;
extern s32 D_8439022C;
extern s32 D_84390230;
extern s32 D_84390234;
extern unk_D_84390240 D_84390240;
extern s32 D_84390288;
extern s32 D_843902A4;
extern s32 D_843902A8;
extern s16 D_843902E2;
extern s16 D_843902E4;
extern unk_D_84390010* D_843902E8;
extern unk_D_84390010* D_843902EC;
extern unk_D_84390010* D_843902F0;
extern s32 D_843902F4;
extern s32 D_843902F8;
extern func_D_84390300 D_84390300[8];
extern func_D_84390320 D_84390320[8];
extern s32 D_84390340;
extern Vec3f D_84390348;
extern s16 D_8439037A;
extern s16 D_8439037C;
extern s16 D_8439037E;
extern s16 D_84390380;
extern s16 D_84390382;
extern s16 D_84390384;
extern s16 D_84390386;
extern s16 D_84390388;
extern s16 D_8439038A;
extern s16 D_8439038C;
extern s16 D_8439038E;
extern s16 D_84390390;
extern s16 D_84390392;
extern s16 D_84390394;
extern s16 D_84390396;
extern s16 D_84390398;
extern s16 D_8439039A;
extern s16 D_8439039C;
extern s16 D_8439039E;
extern s16 D_843903A0;
extern f32 D_84392058[26];
extern u8* D_843920C0[256];
extern s16 D_843924C0[0x10];
extern arg1_func_80019420* D_843924E0[40];



s32 func_84300020(s32 arg0, GraphNode* arg1);
s32 func_84300058(s32 arg0, unk_D_86002F34_alt18* arg1);
s32 func_843000C0(s32 arg0, unk_D_86002F34_alt18* arg1);
s32 func_8430012C(s32 arg0, unk_D_86002F58_004_000* arg1);
void func_84300184(u8 arg0, u8 arg1, u8 arg2);
void func_843001FC(f32 arg0);
u16 func_84300208(u16 arg0);
void func_84300340(void);
void func_84300750(GraphNode* arg0, unk_D_80068BB0* arg1);
void func_84300810(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_84300938(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8* arg4, s32 arg5);
void func_84300B34(GraphNode* arg0, unk_D_80068BB0* arg1);
void func_84300D44(void);
void func_84300DC0(void);
void func_84300E78(void);
void func_84300E80(void);
s32 func_84300E88(s32 arg0);
s32 func_84300FBC(s32 arg0);
void func_84301094(void);
s32 func_843010EC(s32 arg0);
void func_8430123C(u8* arg0, s32 arg1);
void func_8430128C(void);
void func_843013E4(unk_D_800AE540_1194* arg0, unk_D_86002F30* arg1);
void func_84301430(unk_func_80007444* arg0);
void func_84301A24(void);
s32 func_84301A2C(s32 arg0, unk_D_800AE540* arg1);

void func_84301B00(void);
void func_84301B48(unk_D_84390010* arg0, s32 arg1);
void func_84301B84(unk_D_84390010* arg0, s32 arg1);
void func_84301BEC(unk_D_84390010* arg0, s32 arg1);
void func_84301C54(unk_D_84390010* arg0, s32 arg1);
void func_84301CBC(unk_D_84390010* arg0);
void func_84301D08(unk_D_84390010* arg0);
void func_84301DDC(unk_D_84390010* arg0);
void func_84301EEC(unk_D_84390010* arg0);
void func_84301EF4(unk_D_84390010* arg0);
void func_84301F2C(unk_D_84390010* arg0);
void func_84301F80(unk_D_84390010* arg0);
s32 func_84301FB0(unk_D_84390010* arg0);
s32 func_84301FC0(unk_D_84390010* arg0);
s32 func_84301FF0(unk_D_84390010* arg0);
s32 func_84302000(unk_D_84390010* arg0);
void func_8430203C(unk_D_84390010* arg0);
void func_843020B0(unk_D_84390010* arg0);
void func_843020F4(unk_D_84390010* arg0);
void func_84302128(unk_D_84390010* arg0);
void func_84302148(unk_D_84390010* arg0);
s32 func_84302194(u16 arg0, u8* arg1, s32 arg2);
void func_843021E8(unk_D_84390010* arg0, u16 arg1, unk_D_84390010_94C* arg2, unk_D_84390010_94C* arg3);
void func_8430245C(unk_D_84390010* arg0);
void func_8430255C(u8 arg0, u32 arg1);
void func_843025BC(s32 arg0, unk_D_84390010_94C* arg1, unk_D_84390010_94C* arg2);
void func_84302658(unk_D_84390010* arg0, s32 arg1);
void func_843029D0(unk_D_84390010* arg0);
void func_84302A78(unk_D_84390010* arg0);
void func_84302C34(unk_D_84390010* arg0);
void func_84302EF0(unk_D_84390010* arg0);
void func_8430305C(unk_D_84390010* arg0);
void func_843031A0(unk_D_84390010* arg0);
void func_84303208(unk_D_84390010* arg0);
void func_8430334C(unk_D_84390010* arg0);
void func_843033E0(unk_D_84390010* arg0);
void func_843034D8(unk_D_84390010* arg0);
void func_84303674(unk_D_84390010* arg0);
void func_843037CC(unk_D_84390010* arg0);
void func_84303A48(unk_D_84390010* arg0);
void func_84303BB8(unk_D_84390010* arg0);
void func_84303CB4(unk_D_84390010* arg0);
s32 func_84303D50(unk_D_84390010* arg0);
s32 func_84303DEC(unk_D_84390010* arg0);
void func_84303E58(unk_D_84390010* arg0);
void func_84303ECC(unk_D_84390010* arg0);
void func_84304114(unk_D_84390010* arg0);
void func_84304210(unk_D_84390010* arg0);
void func_843043FC(unk_D_84390010* arg0);
void func_843045DC(unk_D_84390010* arg0);
void func_843046BC(unk_D_84390010* arg0);
void func_84304758(unk_D_84390010* arg0);
void func_84304800(unk_D_84390010* arg0);
void func_84304834(unk_D_84390010* arg0);
void func_843048C8(unk_D_84390010* arg0);
void func_843049FC(unk_D_84390010* arg0);
void func_84304ACC(unk_D_84390010* arg0);
void func_84304B50(unk_D_84390010* arg0);
void func_84304C20(unk_D_84390010* arg0);
void func_84304C8C(unk_D_84390010* arg0);
void func_84304D84(unk_D_84390010* arg0);
void func_84304F54(unk_D_84390010* arg0);
void func_8430506C(unk_D_84390010* arg0);
void func_843052C0(unk_D_84390010* arg0);
s32 func_84305458(unk_D_84390010* arg0);
void func_843054F0(unk_D_84390010* arg0);
void func_843055E0(unk_D_84390010* arg0);
void func_843056DC(unk_D_84390010* arg0);
void func_843056E4(unk_D_84390010* arg0, unk_D_84385384_func arg1);
void func_84305728(unk_D_84390010* arg0);
void func_84305760(unk_D_84390010* arg0, s32 arg1);
void func_84305808(void);
void func_843058A8(unk_D_84390010* arg0);
void func_843058C4(unk_D_84390010* arg0, s32 arg1);
s32 func_843059C0(unk_D_84390010* arg0, s32 arg1, s32 arg2);
void func_84305A74(unk_D_84390010* arg0, s32 arg1, s32 arg2);
s32 func_84305AFC(unk_D_84390010* arg0);
s32 func_84305B6C(unk_D_84390010* arg0, s32 arg1);
s32 func_84305BD8(unk_D_84390010* arg0, s32 arg1);
s32 func_84305CAC(unk_D_84390010* arg0, s32 arg1);
s32 func_84305E54(unk_D_84390010* arg0, s32 arg1);
s32 func_8430602C(unk_D_84390010* arg0, s32 arg1);
void func_843060EC(unk_D_84390010* arg0);
void func_843061EC(unk_D_84390010* arg0, u16 arg1);
s32 func_84306200(unk_D_84390010* arg0, u16 arg1);
void func_84306218(unk_D_84390010* arg0);
void func_843062F0(void);
void func_84306470(unk_D_84390010* arg0);
void func_84306584(unk_D_84390010* arg0);
void func_843065C4(unk_D_84390010* arg0);
void func_8430663C(unk_D_84390010* arg0);
void func_843066E0(unk_D_84390010* arg0);
void func_84306914(unk_D_84390010* arg0);
void func_84306A68(unk_D_84390010* arg0);
void func_84306AF0(unk_D_800AE540_1194* arg0, s32 arg1);
void func_84306BC4(unk_D_800AE540_1194* arg0);
void func_84306C1C(unk_D_84390010* arg0);
void func_84306C8C(unk_D_84390010* arg0);
void func_84306DA8(unk_D_84390010* arg0);
void func_84306E80(unk_D_84390010* arg0, s32* arg1);
void func_84306FB8(unk_D_84390010* arg0);
void func_84307078(unk_D_800AE540_1194* arg0);
void func_843071B8(unk_D_84390010* arg0, unk_D_84390010* arg1, s32 arg2);
void func_84307220(unk_D_800AE540_1194* arg0);
void func_8430732C(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_84307394(s32 arg0, unk_D_800AE540_1194* arg1);
void func_84307414(unk_D_84390010* arg0);
void func_8430741C(unk_D_84390010* arg0);
void func_84307424(unk_D_84390010* arg0);
void func_8430742C(unk_D_84390010* arg0);
void func_84307434(unk_D_84390010* arg0);
void func_8430743C(unk_D_84390010* arg0);
void func_84307444(unk_D_84390010* arg0);
void func_8430744C(unk_D_84390010* arg0);
void func_84307454(unk_D_84390010* arg0);
void func_8430745C(unk_D_84390010* arg0);
void func_84307464(unk_D_84390010* arg0);
void func_8430746C(unk_D_84390010* arg0);
void func_84307474(unk_D_84390010* arg0, s32 arg1);
void func_84307480(unk_D_84390010* arg0, s32 arg1);
void func_8430748C(unk_D_84390010* arg0);


void func_843074A0(unk_D_84390010* arg0);
void func_843074EC(unk_D_84390010* arg0);
void func_843074F4(unk_D_84390010* arg0);
void func_84307500(void);
void func_8430751C(void);
void func_8430753C(unk_D_84390010_728_0168* arg0);
void func_8430754C(unk_D_84390010* arg0);
void func_843075D0(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_84307630(void);
void func_84307638(unk_D_84390010* arg0);
void func_84307748(unk_D_84390010* arg0);
void func_84307768(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, unk_D_86002F34_00C* arg2, unk_D_84390010* arg3);
void func_843077B0(unk_D_84390010* arg0, s32 arg1);
void func_843078F4(unk_D_84390010* arg0, s32 arg1);
void func_843079C4(unk_D_84390010* arg0);
void func_84307A14(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_84307A50(s32 arg0, unk_D_86002F34_00C* arg1, unk_D_86002F34_00C* arg2);

s32 func_84307AE0(u8 arg0, u8* arg1, s32 arg2);
unk_func_80026268_arg0* func_84307B28(unk_D_84390010* arg0);
s32 func_84307B60(unk_D_84390010* arg0);
f32 func_84307BAC(unk_D_84390010* arg0);
f32 func_84307BD8(unk_D_84390010* arg0);
f32 func_84307C04(unk_D_84390010* arg0);
f32 func_84307C30(unk_D_84390010* arg0);
void func_84307C5C(unk_D_84390010* arg0);
f32 func_84307DE0(unk_D_84390010* arg0);
void func_84307EAC(unk_D_84390010* arg0, f32 arg1);
s32 func_84307EC4(unk_D_84390010* arg0);
s32 func_84307EE0(unk_D_84390010* arg0);
s32 func_84307F00(unk_D_84390010* arg0);
u8 func_84307F24(unk_D_84390010* arg0);
u8 func_84307F68(unk_D_84390010* arg0);
s16 func_84307FAC(unk_D_84390010* arg0);
s32 func_84307FE0(unk_D_84390010* arg0);
f32 func_84308014(unk_D_84390010* arg0);
f32 func_84308058(unk_D_84390010* arg0);
s16 func_8430808C(unk_D_84390010* arg0);
void func_84308094(unk_D_84390010* arg0, Vec3f* arg1);
void func_84308148(unk_D_84390010* arg0, Vec3s* arg1);
u16 func_84308164(unk_D_84390010* arg0);
s16 func_84308190(unk_D_84390010* arg0);
s32 func_843081A4(s32 arg0);
s32 func_843081BC(unk_D_84390010* arg0);
u8 func_843081C4(unk_D_84390010* arg0);
void func_843081D4(unk_D_84390010* arg0, Vec3f* arg1);
void func_843081F0(unk_D_84390010* arg0, Vec3f* arg1);
void func_843083A0(unk_D_84390010* arg0, Vec3f* arg1);
void func_84308520(unk_D_84390010* arg0, Vec3f* arg1);
f32 func_84308548(unk_D_84390010* arg0);
f32 func_84308598(unk_D_84390010* arg0);
unk_D_86002F58_004_000_004* func_843085C4(unk_D_84390010* arg0, s32 arg1);
s32 func_843085E0(unk_D_84390010* arg0, UNUSED s32 arg1);
char* func_843085F0(unk_D_84390010* arg0);
u8* func_8430862C(unk_D_84390010* arg0);
void func_84308654(unk_D_84390010* arg0, s32 arg1, s32 arg2);
void func_84308660(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_843087F8(unk_D_84390010* arg0);
void func_8430897C(unk_D_84390010* arg0);
void func_843089DC(unk_D_84390010* arg0, s32 arg1);
void func_843089F4(unk_D_84390010* arg0, s32 arg1);
void func_843089FC(unk_D_84390010* arg0, Controller* arg1);
void func_84308A04(unk_D_84390010* arg0, s32 arg1);
s32 func_84308A4C(unk_D_84390010* arg0);
s32 func_84308BD0(unk_D_84390010* arg0);
s32 func_84308D54(unk_D_84390010* arg0);
u8 func_84308D90(unk_D_800AE540_0004* arg0);
s32 func_84308D98(unk_D_84390010* arg0);
void func_84308DB8(unk_D_84390010* arg0, unk_D_84390010* arg1, s32 arg2, s32 arg3);
void func_84308ED4(unk_D_84390010* arg0, unk_D_84390010_728* arg1, s16 arg2);
void func_84308F94(unk_D_84390010* arg0, s16 arg1);
void func_84309110(unk_D_84390010* arg0);
void func_84309168(unk_D_84390010* arg0);
void func_8430920C(unk_D_84390010* arg0);
void func_843092B4(unk_D_84390010* arg0);
void func_84309328(unk_D_84390010* arg0);
void func_84309368(unk_D_84390010* arg0);


void func_843093F0(unk_D_84390010* arg0, f32 arg1, s16 arg2);
void func_84309448(unk_D_84390010* arg0, unk_D_84390010* arg1, f32 arg2, f32 arg3, s32 arg4);
void func_843095A4(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5);
void func_843096EC(unk_D_84390010* arg0);
void func_84309780(unk_D_84390010* arg0);
void func_84309874(unk_D_84390010* arg0);
void func_84309A24(unk_D_84390010* arg0);
s32 func_84309B0C(unk_D_84390010* arg0);
void func_84309C50(unk_D_84390010* arg0);
void func_84309D78(unk_D_84390010* arg0, s16 arg1);
void func_84309F0C(unk_D_84390010* arg0);
void func_84309F30(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_84309FD4(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A090(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A0E4(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A17C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A22C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A280(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A308(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A390(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A3E4(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A464(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A4E0(UNUSED unk_D_84390010* arg0, UNUSED unk_D_84390010* arg1);
void func_8430A4EC(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_8430A558(unk_D_84390010* arg0, s16 arg1, s16 arg2);
void func_8430A5D4(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A618(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A6AC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A7BC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A828(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A848(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430A8DC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AA18(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AA84(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AB00(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430ABF0(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AD10(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AD7C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430ADE8(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AE3C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AE90(unk_D_84390010* arg0);
void func_8430AF08(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430AF80(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B104(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B158(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B1B8(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B244(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B298(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B2AC(unk_D_84390010* arg0, UNUSED unk_D_84390010* arg1);
void func_8430B374(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B3C8(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B40C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B550(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B68C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B6F8(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B734(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B8FC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B950(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430B968(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BAB8(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BB0C(UNUSED unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BB24(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BBE4(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BC38(UNUSED unk_D_84390010* arg0, UNUSED unk_D_84390010* arg1);
void func_8430BC44(s32 arg0);
void func_8430BD9C(unk_D_84390010* arg0, u8 arg1, u8 arg2);
void func_8430BDB0(unk_D_84390010* arg0);
void func_8430BDBC(unk_D_84390010* arg0, f32 arg1, s16 arg2);
void func_8430BE08(unk_D_84390010* arg0, unk_D_84390010* arg1, f32 arg2, f32 arg3, s32 arg4);
void func_8430BEC0(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BF3C(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430BFB0(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430C004(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430C010(s32 arg0);


void func_8430C070(Vec3f* arg0, Vec3f* arg1, f32* arg2, s16* arg3, s16* arg4);
Vec3f* func_8430C120(Vec3f* arg0);
Vec3f* func_8430C138(Vec3f* arg0, Vec3f* arg1, f32 arg2, s16 arg3);
void func_8430C19C(Vec3f* arg0, f32 arg1, s16 arg2);
Vec3f* func_8430C1E4(Vec3f* arg0, Vec3f* arg1);
Vec3s* func_8430C204(Vec3s* arg0, Vec3s* arg1);
Vec3f* func_8430C224(Vec3f* arg0, f32 arg1, f32 arg2, f32 arg3);
s16 func_8430C260(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
f32 func_8430C2A4(Vec3f arg0, Vec3f arg1);
f32 func_8430C308(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
s32 func_8430C384(f32 arg0);
u16 func_8430C414(s32 arg0);
s32 func_8430C4F8(s16* arg0, s16 arg1, s16 arg2);
s32 func_8430C59C(s16* arg0, s16 arg1, f32 arg2);
void func_8430C718(f32* arg0, f32 arg1, f32 arg2);
void func_8430C780(s16* arg0, s16 arg1, s16 arg2);
void func_8430C7B4(u16* arg0, u16 arg1, s16 arg2);
void func_8430C7E4(f32* arg0, f32 arg1);
void func_8430C8A0(f32* arg0, f32 arg1);
void func_8430C97C(f32* arg0, f32 arg1);
void func_8430CA4C(f32* arg0, f32 arg1);
void func_8430CB3C(f32* arg0, f32 arg1);


void func_8430CC20(void);
void func_8430CC84(void);
s32 func_8430CCC8(void);
s32 func_8430CD0C(void);
s32 func_8430CDAC(s32 arg0, s32 arg1);
s32 func_8430CE00(void);
s32 func_8430D02C(void);
s32 func_8430D124(void);
void func_8430D268(void);
s32 func_8430D294(void);
void func_8430D30C(void);
s32 func_8430D334(unk_D_84390010* arg0);
void func_8430D364(void);
s32 func_8430D434(unk_D_84390010* arg0);
s32 func_8430D574(unk_D_84390010* arg0, s32 arg1);
void func_8430D5BC(unk_D_84390010* arg0);
void func_8430D638(unk_D_84390010* arg0);
void func_8430D6D0(unk_D_84390010* arg0);
void func_8430D710(s32 arg0);
void func_8430D814(void);
s32 func_8430D8C4(unk_D_84390010* arg0);
s32 func_8430D9EC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430DB58(unk_D_84390010* arg0, UNUSED unk_D_84390010* arg1);
void func_8430DBA0(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430DCD4(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_8430DE20(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_8430DFCC(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430E1CC(unk_D_84390010* arg0);
void func_8430E490(unk_D_84390010* arg0);
s32 func_8430E504(unk_D_84390010* arg0);
void func_8430E580(unk_D_84390010* arg0);
void func_8430E5AC(unk_D_84390010* arg0, s32 arg1);
void func_8430E72C(unk_D_84390010* arg0, Controller* arg1);
void func_8430E8E8(unk_D_84390010* arg0);
void func_8430EB1C(unk_D_84390010* arg0);
s32 func_8430EBA8(unk_D_84390010* arg0);
s32 func_8430ED88(unk_D_84390010* arg0);
void func_8430EE50(unk_D_84390010* arg0);
void func_8430EF4C(unk_D_84390010* arg0);
s32 func_8430F044(unk_D_84390010* arg0, UNUSED Controller* arg1);
void func_8430F080(unk_D_84390010* arg0);
void func_8430F0C0(unk_D_84390010* arg0);
s32 func_8430F27C(unk_D_84390010* arg0);
s32 func_8430F350(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430F458(void);
void func_8430F4AC(void);
void func_8430F500(void);
void func_8430F598(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430F5F4(void);
void func_8430F794(unk_D_84390010* arg0, unk_D_84390010* arg1);
void func_8430F8B8(void);
void func_8430FB20(void);
void func_8430FB68(void);


void func_8430FC10(void);
void func_8430FC28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8430FF8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Color_RGB8* arg4, Color_RGB8* arg5);
void func_84310334(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Color_RGB8* arg4, Color_RGB8* arg5);
void func_84310360(void);
void func_84310368(s32 arg0, s32 arg1, f32 arg2, s32 arg3);
void func_843109EC(void);
void func_843109F4(s32 arg0, s32 arg1, s32 arg2);
void func_84310B9C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_84310CE4(s16 arg0, s16 arg1, s32 arg2, char* arg3, s32 arg4);
void func_84310DC4(s16 arg0, s16 arg1, s32 arg2, u8* arg3, s32 arg4, s32 arg5);
void func_84310FA4(unk_D_84390010* arg0, unk_D_800AE540_0004* arg1, s16 arg2, s16 arg3, s32 arg4, u16 arg5, s32 arg6);
void func_84311048(unk_D_84390010* arg0, unk_func_80026268_arg0* arg1, unk_D_84385790* arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA);
s32 func_843112C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8* arg4);
void func_84311420(void);
void func_84311428(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_843116D8(s16 arg0, s16 arg1);
void func_843118A8(s16 arg0, s16 arg1);
void func_84311A38(unk_D_84390010* arg0, s16 arg1, s16 arg2);
void func_84311F30(unk_D_84390010* arg0, s16 arg1, s16 arg2, u16 arg3, s32 arg4);
void func_843128A0(unk_D_84390010* arg0, s16 arg1, s16 arg2, u16 arg3, s32 arg4);
void func_84313148(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_843133B4(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_843135B8(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_84313750(s32 arg0, s32 arg1, char* arg2);
s32 func_8431379C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_84313908(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_84313A74(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_8431493C(s16 arg0, s16 arg1, s16 arg2, s32 arg3);
void func_84314B20(s16 arg0, s16 arg1, char* arg2);
void func_84314B6C(unk_D_84390010* arg0, unk_D_800AE540_0004* arg1, unk_func_80026268_arg0* arg2, s32 arg3, s32 arg4, s32 arg5);
void func_84314F60(unk_D_84390010* arg0, unk_D_800AE540_0004* arg1, unk_func_80026268_arg0* arg2, s32 arg3, s32 arg4, s32 arg5);
void func_8431524C(unk_D_84390010* arg0, unk_D_800AE540_0004* arg1, s16 arg2, s16 arg3, s32 arg4);
void func_84315550(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_8431595C(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_84315ADC(s32 arg0, s16 arg1, s16 arg2, char* arg3);
s32 func_84315BC0(char* arg0, s16 arg1, s16 arg2);
void func_84315C28(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2, Vec3f arg3);
void func_84315D88(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2);
s32 func_84315EC0(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2);
void func_84315FAC(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2, Vec3f arg3);
void func_843160C0(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2);
s32 func_843161F8(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2);
void func_843162E4(s32 arg0, s16 arg1, s16 arg2, char* arg3);
void func_843163C8(unk_D_84390010* arg0, s16 arg1, s16 arg2, s32 arg3);
void func_84316610(void);
void func_84316640(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7);
void func_843167D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8* arg4, s32 arg5);
void func_8431694C(void);
void func_84317004(void);
void func_8431712C(void);
void func_843172A0(unk_D_84390010* arg0, unk_D_84390010_654* arg1);
void func_84317558(unk_D_84390010* arg0, unk_D_84390010_654* arg1);


void func_84317810(void);
void func_8431790C(void);
void func_84317940(s8* arg0, s8* arg1, ...);
void func_843179F4(s8* arg0, s8 arg1);
void func_84317AA8(char* arg0, s32 arg1);
void func_84317B38(void);
void func_84317B40(void);
void func_84317BDC(void);
void func_84317EDC(void);
void func_843180AC(void);
void func_843184E4(s32 arg0);
void func_843184FC(void);
void func_84318514(s8* arg0);
void func_84318640(unk_D_843901A0_4C8* arg0, s16 arg1, s16 arg2);
s32 func_84318CE4(unk_D_843901A0_4C8* arg0);
void func_843190A8(s16 arg0, s16 arg1);
void func_843193F4(unk_D_84390010* arg0);
void func_84319408(unk_D_84390010* arg0, s32 arg1);
void func_843194A0(unk_D_84390010* arg0);
void func_84319564(void);
void func_8431962C(void);
void func_84319668(void);
void func_843196A4(void);


s32 func_843197A0(void);
s32 func_84319878(UNUSED unk_D_84390010* arg0, unk_D_86002F34_00C* arg1);
s32 func_843198EC(UNUSED unk_D_84390010* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_8431995C(unk_D_86002F34_00C* arg0);
void func_84319AE8(unk_D_86002F34_00C* arg0);
void func_84319C58(unk_D_86002F34_00C* arg0, s32 arg1);
void func_84319F10(unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431A024(unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431A098(unk_D_86002F34_00C* arg0);
void func_8431A130(unk_D_86002F34_00C* arg0);
void func_8431A1C8(unk_D_86002F34_00C* arg0);
void func_8431A2C8(unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431A4C4(unk_D_86002F34_00C* arg0);
void func_8431A718(unk_D_86002F34_00C* arg0);
void func_8431A780(unk_D_86002F34_00C* arg0);
void func_8431A7B8(unk_D_86002F34_00C* arg0);
void func_8431A8B0(unk_D_86002F34_00C* arg0);
void func_8431A94C(unk_D_86002F34_00C* arg0);
void func_8431A9E0(unk_D_86002F34_00C* arg0);
void func_8431AA3C(unk_D_86002F34_00C* arg0);
void func_8431AA78(unk_D_86002F34_00C* arg0);
void func_8431AAAC(unk_D_86002F34_00C* arg0);
void func_8431AAFC(unk_D_86002F34_00C* arg0);


f32 func_8431AD20(unk_D_84390010* arg0, f32 arg1, f32 arg2);
s32 func_8431AD68(s32 arg0);
s32 func_8431ADAC(s32 arg0);
s32 func_8431ADF0(s32 arg0);
s32 func_8431AE20(s32 arg0);
void func_8431AE4C(s32 arg0);
void func_8431AE5C(void);
void func_8431AE6C(void);
void func_8431AE7C(unk_D_86002F34_00C* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6);
void func_8431AED8(unk_D_84390010* arg0, Vec3f* arg1);
void func_8431AF58(unk_D_84390010* arg0, Vec3f* arg1, s32 arg2);
void func_8431AFB4(s32 arg0, s32 arg1);
void func_8431AFD0(unk_D_86002F34_00C* arg0, f32 arg1, f32 arg2);
void func_8431AFE4(s32 arg0, u16 arg1);
void func_8431B004(void);
void func_8431B078(unk_D_84390010* arg0);
void func_8431B174(unk_D_86002F34_00C* arg0);
void func_8431B290(UNUSED unk_D_84390010* arg0);
s32 func_8431B2B8(s16 arg0, s16 arg1);
s32 func_8431B34C(unk_D_86002F34_00C* arg0, s16 arg1, s16 arg2);
s32 func_8431B42C(UNUSED unk_D_86002F34_00C* arg0, s16 arg1, s16 arg2);
void func_8431B4C0(s16 arg0, s16 arg1, f32 arg2);
void func_8431B500(unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431B830(unk_D_86002F34_00C* arg0);
void func_8431B858(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1);
void func_8431BA5C(void);
void func_8431BAB4(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, Vec3f arg2, s16 arg3, s16 arg4, f32 arg5, f32 arg6);
void func_8431BB24(unk_D_86002F34_00C* arg0, Vec3f arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5);
void func_8431BB80(unk_D_86002F34_00C* arg0, Vec3f arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5);
void func_8431BBDC(unk_D_86002F34_00C* arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4);
void func_8431BC38(unk_D_86002F34_00C* arg0, Vec3f arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5);
void func_8431BCA4(unk_D_86002F34_00C* arg0, s16 arg1, s16 arg2, f32 arg3, f32 arg4);
void func_8431BD10(UNUSED unk_D_86002F34_00C* arg0);
void func_8431BD18(f32* arg0, f32* arg1);
void func_8431BD94(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, UNUSED f32 arg2);
void func_8431C594(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431C71C(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431C750(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431C784(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431C7A4(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
s32 func_8431C8E0(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431CB54(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431CC38(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431CCFC(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431CEF0(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, UNUSED s32 arg2);
void func_8431CFA4(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
s32 func_8431D048(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
s32 func_8431D118(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2, s32 arg3);
s32 func_8431D318(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431D5C8(UNUSED unk_D_86002F34_00C* arg0);
void func_8431D5D0(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431D704(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_8431D750(f32 arg0, f32 arg1);
void func_8431D764(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void func_8431D7B0(f32 arg0, f32 arg1);
void func_8431D7C4(f32 arg0, f32 arg1);
void func_8431D7D8(unk_D_86B0C160* arg0, unk_D_86002F34_00C* arg1, unk_D_84390010* arg2);
void func_8431D968(unk_D_86B0C160* arg0, unk_D_86002F34_00C* arg1);
s32 func_8431DA38(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
s32 func_8431DBEC(UNUSED unk_D_86002F34_00C* arg0);
void func_8431DC78(unk_D_86002F34_00C* arg0, s32 arg1);
s32 func_8431DE30(unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431DF98(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431E118(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431E1DC(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431E368(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431E4DC(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431E63C(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431E7D0(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431E90C(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431EA1C(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2, s32 arg3);
void func_8431EAB8(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431EBD0(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431ECEC(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431EE08(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431EF54(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431F050(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1, s32 arg2);
void func_8431F194(unk_D_86002F34_00C* arg0, unk_D_84390010* arg1);
void func_8431F290(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, s32 arg2, s32 arg3);
void func_8431F420(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, s32 arg2);
void func_8431F500(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, s32 arg2);


void func_8431F610(unk_D_84390010* arg0);
void func_8431F680(void);
s32 func_8431F690(unk_D_84390010* arg0);
s32 func_8431F7B0(unk_D_84390010* arg0);
s32 func_8431F888(unk_D_84390010* arg0);
s32 func_8431F998(unk_D_84390010* arg0);
s32 func_8431FAB4(void);
void func_8431FC74(void);
void func_8431FCC4(void);
s32 func_8431FCCC(unk_D_84390010* arg0);
void func_8431FF18(void);
void func_8431FF28(void);
void func_8431FF3C(UNUSED unk_D_86002F34_00C* arg0, s32 arg1);
void func_8431FF5C(unk_D_86002F34_00C* arg0);
void func_8431FF70(unk_D_86002F34_00C* arg0);
s32 func_8431FF8C(unk_D_84390010* arg0);
s32 func_8431FFD0(unk_D_84390010* arg0);
s32 func_84320020(unk_D_84390010* arg0);
s32 func_84320064(unk_D_84390010* arg0);
s32 func_843200B4(unk_D_84390010* arg0);
void func_84320108(void);
void func_843202A0(void);
s32 func_84320400(void);
void func_8432056C(void);
s32 func_84320658(s32 arg0);
s32 func_843206B8(s32 arg0);
s32 func_84320710(s32 arg0);
void func_84320768(unk_D_86002F34_00C* arg0);
void func_8432079C(u8 arg0);
void func_84320864(void);
void func_843208B0(void);
s32 func_84320A8C(void);
void func_84320B48(void);
void func_84320C38(unk_D_86002F34_00C* arg0);
void func_84320CEC(unk_D_86002F34_00C* arg0);
void func_84320E54(unk_D_86002F34_00C* arg0);
s32 func_84320EA0(void);
s32 func_8432103C(void);
s32 func_843210BC(void);
void func_8432113C(void);
void func_84321184(unk_D_86002F34_00C* arg0);
void func_84321208(unk_D_86002F34_00C* arg0);
s32 func_84321594(unk_D_84390010* arg0);
void func_84321698(unk_D_86002F34_00C* arg0);
void func_84321860(unk_D_86002F34_00C* arg0);
void func_84321A40(unk_D_86002F34_00C* arg0);
void func_84321AAC(unk_D_86002F34_00C* arg0);
void func_84321B54(unk_D_86002F34_00C* arg0);
void func_84321D34(UNUSED unk_D_86002F34_00C* arg0);
void func_84321D3C(unk_D_86002F34_00C* arg0);
void func_84321F2C(UNUSED unk_D_86002F34_00C* arg0);
void func_84321F74(UNUSED unk_D_86002F34_00C* arg0);
void func_84321FB8(unk_D_86002F34_00C* arg0);
void func_843221A8(unk_D_86002F34_00C* arg0);
void func_84322284(UNUSED unk_D_86002F34_00C* arg0);
void func_84322350(unk_D_86002F34_00C* arg0);
void func_843223FC(unk_D_84390010* arg0);
void func_843224C8(unk_D_86002F34_00C* arg0);
void func_84322600(unk_D_86002F34_00C* arg0);
void func_84322640(unk_D_86002F34_00C* arg0);
void func_84322698(unk_D_84390010* arg0);
void func_843226A4(UNUSED unk_D_86002F34_00C* arg0);
void func_843226E0(unk_D_86002F34_00C* arg0);
s32 func_843229A4(unk_D_86002F34_00C* arg0);
void func_84322B04(unk_D_86002F34_00C* arg0);
void func_84322E70(unk_D_86002F34_00C* arg0);
void func_843230D8(unk_D_86002F34_00C* arg0, s32 arg1);
s32 func_843233E0(unk_D_86002F34_00C* arg0, s32 arg1);
void func_843234A0(UNUSED unk_D_86002F34_00C* arg0);
s32 func_843234FC(UNUSED unk_D_86002F34_00C* arg0);
void func_84323538(unk_D_86002F34_00C* arg0);
void func_843235F4(unk_D_86002F34_00C* arg0);
void func_84323740(unk_D_86002F34_00C* arg0);
void func_84323808(unk_D_86002F34_00C* arg0);
void func_84323928(unk_D_86002F34_00C* arg0);
void func_843239EC(unk_D_86002F34_00C* arg0);
void func_84323AFC(unk_D_84390010* arg0);
s32 func_84323B2C(unk_D_84390010* arg0);
void func_84323B50(unk_D_86002F34_00C* arg0, s32* arg1, s32* arg2);
void func_84323BCC(unk_D_86002F34_00C* arg0);
void func_84323CE4(unk_D_86002F34_00C* arg0);
void func_84323E44(unk_D_86002F34_00C* arg0);
void func_84323FA0(unk_D_86002F34_00C* arg0);
void func_84324404(void);
void func_8432440C(void);
void func_84324414(unk_D_86002F34_00C* arg0);
void func_843248B8(unk_D_86002F34_00C* arg0);
void func_84324988(unk_D_86002F34_00C* arg0);
void func_843249F8(unk_D_86002F34_00C* arg0);
s32 func_84324A68(void);
void func_84324C28(unk_D_86002F34_00C* arg0);
void func_84324F1C(unk_D_86002F34_00C* arg0);
void func_84325080(unk_D_86002F34_00C* arg0);
void func_843251D4(unk_D_86002F34_00C* arg0);
void func_843255DC(unk_D_86002F34_00C* arg0);
void func_84325724(unk_D_86002F34_00C* arg0);
void func_84325A10(unk_D_86002F34_00C* arg0);
s32 func_84325CAC(unk_D_84390010* arg0);
void func_84325CDC(unk_D_86002F34_00C* arg0);
void func_84325E94(unk_D_86002F34_00C* arg0);
void func_843261CC(unk_D_86002F34_00C* arg0);
void func_84326460(unk_D_86002F34_00C* arg0);
void func_84326570(unk_D_86002F34_00C* arg0);
void func_843266D4(unk_D_86002F34_00C* arg0);
void func_8432691C(unk_D_86002F34_00C* arg0);
void func_84326A70(void);
void func_84326A78(UNUSED unk_D_86002F34_00C* arg0);
void func_84326AC4(unk_D_86002F34_00C* arg0);
void func_84326CB4(unk_D_86002F34_00C* arg0);
void func_84326E84(unk_D_86002F34_00C* arg0);
void func_8432734C(unk_D_86002F34_00C* arg0);
void func_843275F8(unk_D_86002F34_00C* arg0);
void func_84327720(unk_D_86002F34_00C* arg0);
void func_84327B90(unk_D_86002F34_00C* arg0);
void func_84327D98(unk_D_84390010* arg0);
void func_84327DC0(unk_D_86002F34_00C* arg0);
void func_84328250(unk_D_86002F34_00C* arg0);
void func_84328734(unk_D_86002F34_00C* arg0);


void func_84328990(unk_D_86002F34_00C* arg0);
void func_84328A70(UNUSED unk_D_86002F34_00C* arg0);
void func_84328B30(UNUSED unk_D_86002F34_00C* arg0);
void func_84328BF0(unk_D_86002F34_00C* arg0);
void func_84328D70(unk_D_86002F34_00C* arg0);
void func_84328EC0(UNUSED unk_D_86002F34_00C* arg0);
void func_84328F2C(unk_D_86002F34_00C* arg0);
void func_843290A0(unk_D_86002F34_00C* arg0);
void func_84329164(unk_D_86002F34_00C* arg0);
void func_843292D8(unk_D_86002F34_00C* arg0);
void func_843293A8(UNUSED unk_D_86002F34_00C* arg0);
void func_843293B0(void);
void func_843293B8(unk_D_86002F34_00C* arg0);


void func_843294A0(unk_D_86002F34_00C* arg0);
void func_843295D0(unk_D_86002F34_00C* arg0);
void func_843296B8(unk_D_86002F34_00C* arg0, UNUSED unk_D_84390010* arg1, UNUSED unk_D_84390010* arg2);
void func_843297AC(void);
void func_843297E8(UNUSED unk_D_86002F34_00C* arg0);
void func_843297F0(UNUSED unk_D_86002F34_00C* arg0);
void func_843297F8(unk_D_86002F34_00C* arg0);
void func_84329858(unk_D_86002F34_00C* arg0);
void func_84329B04(unk_D_86002F34_00C* arg0);
void func_84329DB8(unk_D_86002F34_00C* arg0);
u16 func_84329DFC(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, unk_D_84390010* a2, s16 arg3, f32 arg4);
u16 func_8432A024(unk_D_84390010* arg0, unk_D_86002F34_00C* arg1, unk_D_84390010* a2, s16 arg3, f32 arg4);
void func_8432A2D4(unk_D_86002F34_00C* arg0);
void func_8432A398(unk_D_86002F34_00C* arg0);
void func_8432A414(void);
void func_8432A41C(void);
void func_8432A448(void);
void func_8432A4B0(void);
void func_8432A510(void);
void func_8432A578(unk_D_86002F34_00C* arg0);
void func_8432ABBC(unk_D_86002F34_00C* arg0);
void func_8432ADD8(unk_D_86002F34_00C* arg0);
s32 func_8432AEE4(s32 arg0, unk_D_86002F34_00C* arg1);


void func_8432AF70(unk_D_84390010* arg0);
void func_8432B0A4(unk_D_84390010* arg0);
void func_8432B0E4(unk_D_84390010* arg0);
void func_8432B13C(unk_D_84390010* arg0);
void func_8432B1BC(unk_D_84390010* arg0);
void func_8432B228(unk_D_84390010* arg0);
void func_8432B38C(unk_D_84390010* arg0);
void func_8432B448(unk_D_84390010* arg0);


void func_8432B490(void);
void func_8432B4B0(void);
void func_8432B4D0(void);
void func_8432B4F0(void);
void func_8432B510(unk_D_84390010* arg0, s16 arg1);
void func_8432B554(unk_D_84390010* arg0);
void func_8432B588(unk_D_84390010* arg0);
void func_8432B5B8(unk_D_84390010* arg0, unk_D_800FCB18* arg1, s32 arg2);
void func_8432B604(void);
void func_8432B704(void);
void func_8432B808(void);
void func_8432BBC0(void);
void func_8432BF88(unk_D_84390010* arg0, s32 arg1);
void func_8432C0D0(s16 arg0);
void func_8432C14C(s16 arg0);
void func_8432C194(func_D_84390300 arg0, func_D_84390320 arg1);
void func_8432C1E0(s32 arg0, s32 arg1, s32 arg2);
void func_8432C3F8(void);
void func_8432C4CC(UNUSED unk_D_86002F34_00C* arg0);
void func_8432C504(u8 arg0);
u8 func_8432C518(void);
void func_8432C524(u8 arg0);
u8 func_8432C538(void);
s16 func_8432C544(void);
void func_8432C550(s32 arg0, unk_D_84390010* arg1, unk_D_84390010* arg2, s16 arg3, s16 arg4);
void func_8432C5D4(s32 arg0, unk_D_84390010* arg1, unk_D_84390010* arg2, s16 arg3, s16 arg4);
void func_8432C604(s32 arg0, unk_D_84390010* arg1, unk_D_84390010* arg2, s16 arg3, s16 arg4);
void func_8432C654(s32 arg0, unk_D_84390010* arg1, unk_D_84390010* arg2, s16 arg3, s16 arg4);
void func_8432C68C(s32 arg0, unk_D_84390010* arg1, unk_D_84390010* arg2, s16 arg3, s16 arg4);
void func_8432C6C4(s32 arg0, unk_D_84390010* arg1);
void func_8432C714(s32 arg0, unk_D_84390010* arg1);
void func_8432C748(s32 arg0, unk_D_84390010* arg1);
void func_8432C768(s32 arg0);
void func_8432C7A0(u8 arg0, unk_D_84390010* arg1);
void func_8432C80C(u8 arg0, unk_D_84390010* arg1);
void func_8432C830(arg1_func_80019420* arg0);
void func_8432C86C(void);
void func_8432C8BC(s16 arg0);
void func_8432C958(unk_D_800AE540_1194* arg0, s16 arg1);
void func_8432C9C0(unk_D_800AE540_1194* arg0, s16 arg1);
void func_8432CA48(void);
void func_8432CAA8(unk_D_800AE540_1194* arg0);
void func_8432CAD0(void);
unk_D_8140E720* func_8432CB60(unk_D_86002F58_004_000* arg0);
unk_D_86002F58_004_000* func_8432CB68(unk_D_8140E720* arg0);
void func_8432CBF8(unk_D_86002F58_004_000* arg0);
unk_D_86002F58_004_000* func_8432CC54(unk_D_8140E720* arg0);
void func_8432CD14(unk_D_86002F58_004_000* arg0);
void func_8432CD70(unk_D_86002F58_004_000* arg0, s16 arg1, s16 arg2);
void func_8432CDD8(unk_D_86002F58_004_000* arg0, s16 arg1);
void func_8432CE00(unk_D_86002F58_004_000* arg0, s16 arg1);
void func_8432CE3C(unk_D_86002F58_004_000* arg0, s16 arg1);
void func_8432CE78(unk_D_86002F58_004_000* arg0, s16 arg1);
s32 func_8432CED4(unk_D_86002F58_004_000* arg0);
void func_8432CEF0(UNUSED unk_D_86002F34_00C* arg0);
void func_8432CF74(UNUSED unk_D_86002F34_00C* arg0);
void func_8432CFCC(unk_D_86002F34_00C* arg0);
s32 func_8432D0D8(s32 arg0, unk_D_86002F34_00C* arg1);
void func_8432D150(void);
void func_8432D178(void);
void func_8432D340(Vec3f* arg0, f32 arg1);
void func_8432D398(s16* arg0, s16* arg1);
void func_8432D424(s16* arg0);
void func_8432D468(s16* arg0, s16* arg1);
void func_8432D4F4(s16* arg0);
void func_8432D538(s16* arg0, s16* arg1);
void func_8432D55C(s16* arg0);
void func_8432D570(s16* arg0, s16* arg1);
void func_8432D594(s16* arg0);


void func_8432D5B0(void);
unk_D_8140E724* func_8432D61C(void);
void func_8432D6B0(unk_D_8140E724* arg0);
void func_8432D6C8(unk_D_8140E720* arg0, Vec3f arg1, Vec3s arg2, s32 arg3, s32 arg4);
void func_8432D76C(unk_D_8140E720* arg0, unk_D_8140E720* arg1, func_unk_D_8140E724_008 arg2, unk_D_8140E728_01C* arg3, s32 arg4);
void func_8432D844(unk_D_8140E720* arg0, func_unk_D_8140E724_008 arg1, unk_D_8140E728_01C* arg2, s16 arg3);
void func_8432D8E8(unk_D_8140E720* arg0, func_unk_D_8140E724_008 arg1, unk_D_8140E728_01C* arg2, s16 arg3, s16 arg4, s16 arg5);
unk_D_8140E720* func_8432D9BC(s16 arg0, s16 arg1, s32 arg2, f32 arg3);
void func_8432DA64(unk_D_8140E720* arg0);
void func_8432DAB8(unk_D_8140E720* arg0);
void func_8432DAEC(unk_D_8140E720* arg0);
void func_8432DE0C(unk_D_8140E720* arg0);
void func_8432E0A4(unk_D_8140E720* arg0);
void func_8432E144(unk_D_8140E720* arg0);
void func_8432E184(void);
void func_8432E200(unk_D_8140E720* arg0, unk_D_84390010* arg1, unk_D_8140E724* arg2, s16 arg3);
void func_8432E30C(unk_D_8140E724* arg0, s32 arg1);
void func_8432E434(unk_D_8140E724* arg0);
void func_8432E454(unk_D_8140E724* arg0);
void func_8432E474(unk_D_8140E724* arg0);
void func_8432E4B0(unk_D_8140E724* arg0);
void func_8432E5A4(void);
void func_8432E68C(void);
void func_8432E6B4(void);
void func_8432E784(void);
s32 func_8432E8B0(void);
void func_8432E8BC(void);
void func_8432E8EC(void);
s32 func_8432E97C(void);
void func_8432E99C(void);
void func_8432E9AC(void);
void func_8432E9B8(void);
void func_8432E9D8(s32 arg0);
void func_8432EA60(u8 arg0, unk_D_84390010* arg1);
void func_8432EB14(void);
void func_8432EB20(s32 arg0);
void func_8432EB2C(s32 arg0);
void func_8432EB44(void);
unk_D_8140E724* func_8432EB64(s32 arg0, s32 arg1, s8 arg2, func_unk_D_8140E724 arg3, unk_D_8140E728_01C* arg4, unk_D_84390010* arg5, s16 arg6, s16 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB);
unk_D_8140E724* func_8432EC28(s32 arg0, func_unk_D_8140E724 arg1, unk_D_8140E728_01C* arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8);
unk_D_8140E724* func_8432ECA0(s32 arg0, s32 arg1, s8 arg2, func_unk_D_8140E724 arg3, unk_D_8140E728_01C* arg4, s16 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA);
unk_D_8140E724* func_8432ED0C(s32 arg0, s16 arg1, u8 arg2);
unk_D_8140E724* func_8432ED74(s32 arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4);
unk_D_8140E724* func_8432EDE8(s32 arg0, s16 arg1, s16 arg2, u8 arg3);
unk_D_8140E724* func_8432EE5C(s32 arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4);
unk_D_8140E724* func_8432EED0(s32 arg0, s32 arg1, s8 arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6);
unk_D_8140E724* func_8432EF40(s32 arg0, s16 arg1, s16 arg2, u8 arg3);
unk_D_8140E724* func_8432EFB4(s32 arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4);
unk_D_8140E724* func_8432F028(s32 arg0, s32 arg1, s8 arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6);
unk_D_8140E724* func_8432F098(s32 arg0, s16 arg1, u8 arg2);
unk_D_8140E724* func_8432F104(s32 arg0, s16 arg1, u8 arg2, u8 arg3);
unk_D_8140E724* func_8432F174(s32 arg0, s32 arg1, s8 arg2, s16 arg3, u8 arg4, u8 arg5);
unk_D_8140E724* func_8432F1E0(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F254(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F2C8(s32 arg0, u8 arg1, s16 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F344(s32 arg0, s16 arg1, u8 arg2, s16 arg3, s16 arg4, s16 arg5);
unk_D_8140E724* func_8432F3C4(s32 arg0, s16 arg1, u8 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F440(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F4BC(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
unk_D_8140E724* func_8432F538(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5);
unk_D_8140E724* func_8432F5B8(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5);
unk_D_8140E724* func_8432F638(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5);
unk_D_8140E724* func_8432F6B8(s32 arg0, s16 arg1, u8 arg2);
unk_D_8140E724* func_8432F728(s32 arg0, s16 arg1, s16 arg2, u8 arg3);
unk_D_8140E724* func_8432F7A0(s32 arg0, s16 arg1, s16 arg2, s16 arg3);
unk_D_8140E724* func_8432F818(s32 arg0);
unk_D_8140E724* func_8432F884(s32 arg0);
unk_D_8140E724* func_8432F8E8(s32 arg0, u8 arg1);
unk_D_8140E724* func_8432F93C(s32 arg0, u8 arg1);
void func_8432F998(void);
void func_8432F9A0(void);
void func_8432F9A8(s32 arg0);
void func_8432F9B4(void);
s32 func_8432F9C0(void);
s32 func_8432F9CC(s32 arg0);
s32 func_8432FA0C(void);
s32 func_8432FA30(void);
void func_8432FA54(unk_D_84390010* arg0, s16 arg1, Vec3f* arg2);
void func_8432FB38(Vec3f* arg0);
void func_8432FB64(Vec3f* arg0);
void func_8432FB90(Vec3f* arg0);
void func_8432FBBC(Vec3f* arg0);
void func_8432FC14(Vec3f* arg0);
void func_8432FC40(unk_D_84390010* arg0, Vec3f* arg1);
f32 func_8432FC60(unk_D_84390010* arg0);
f32 func_8432FC94(unk_D_84390010* arg0);
void func_8432FCB4(unk_D_84390010* arg0);
f32 func_8432FCD4(void);
void func_8432FCF8(void);
f32 func_8432FD1C(void);
void func_8432FD40(void);
unk_D_86002F34_00C* func_8432FD64(void);
unk_D_8140E720* func_8432FD70(Vec3f arg0, u8 arg1);
void func_8432FDF0(unk_D_8140E720* arg0, Vec3f arg1);
void func_8432FE24(unk_D_8140E720* arg0);
s16 func_8432FE44(unk_D_8140E720* arg0);
void func_8432FEC4(unk_D_8140E720* arg0);
void func_8432FEEC(unk_D_8140E720* arg0);


void func_8432FF20(unk_D_8140E720* arg0);
void func_8432FF8C(unk_D_8140E720* arg0);
void func_84330048(unk_D_8140E720* arg0);
void func_843300B4(unk_D_8140E720* arg0);
void func_8433010C(unk_D_8140E720* arg0, u8 arg1);


s32 func_84330170(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_84330218(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_84330300(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_84330344(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_84330388(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
s32 func_843304AC(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330574(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330688(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_8433079C(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330934(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330A18(unk_D_8140E720* arg0, u8* arg1);
void func_84330AF0(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330B18(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330B40(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330C70(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330D64(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330E58(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84330F4C(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331094(UNUSED unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_843310A0(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_843311D8(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331314(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331450(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_8433157C(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_843316A8(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_843317D4(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_843318F8(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331A1C(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331B58(unk_D_8140E720* arg0, unk_D_86002F34_00C* arg1);
void func_84331C34(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);
void func_84331D60(unk_D_8140E720* arg0, UNUSED unk_D_86002F34_00C* arg1);


void func_84331DA0(unk_D_8140E720* arg0);
void func_84331DC8(unk_D_8140E720* arg0);
void func_84331E64(unk_D_8140E720* arg0);
void func_84331EAC(unk_D_8140E720* arg0);
void func_84331F64(unk_D_8140E720* arg0);
void func_84331FAC(unk_D_8140E720* arg0);
void func_8433209C(void);
void func_843320A4(unk_D_8140E720* arg0);
void func_84332174(unk_D_8140E720* arg0);
void func_843321BC(unk_D_8140E720* arg0);
void func_8433227C(unk_D_8140E720* arg0);
void func_843322C4(unk_D_8140E720* arg0);
void func_8433237C(unk_D_8140E720* arg0);
void func_843323BC(unk_D_8140E720* arg0);
void func_843324A4(unk_D_8140E720* arg0);
void func_843324EC(unk_D_8140E720* arg0);
void func_843325C4(unk_D_8140E720* arg0);
void func_84332604(unk_D_8140E720* arg0);
void func_843326EC(unk_D_8140E720* arg0);
void func_843327B8(unk_D_8140E720* arg0);
void func_843328A8(unk_D_8140E720* arg0);
void func_84332964(unk_D_8140E720* arg0);
void func_84332AD8(unk_D_8140E720* arg0);
void func_84332AFC(unk_D_8140E720* arg0);
void func_84332BA4(unk_D_8140E720* arg0);
void func_84332BE4(unk_D_8140E720* arg0);
void func_84332C90(unk_D_8140E720* arg0);
void func_84332CD0(unk_D_8140E720* arg0);
void func_84332D68(unk_D_8140E720* arg0);
void func_84332DB0(unk_D_8140E720* arg0);
void func_84332E2C(unk_D_8140E720* arg0);
void func_84332E6C(unk_D_8140E720* arg0);
void func_84332EE8(unk_D_8140E720* arg0);
void func_84332F30(unk_D_8140E720* arg0);
void func_84332F90(unk_D_8140E720* arg0);
void func_84332FD0(unk_D_8140E720* arg0);
void func_84333060(unk_D_8140E720* arg0);
void func_843330A0(unk_D_8140E720* arg0);


void func_84333130(unk_D_8140E720* arg0, s16 arg1);
void func_84333210(unk_D_8140E720* arg0);
void func_843332B4(unk_D_8140E720* arg0);
void func_843334DC(unk_D_8140E720* arg0);
void func_84333570(unk_D_8140E720* arg0);
void func_84333600(unk_D_8140E720* arg0);
void func_8433378C(unk_D_8140E720* arg0);
void func_84333884(unk_D_8140E720* arg0);
void func_84333928(unk_D_8140E720* arg0);
void func_84333A20(unk_D_8140E720* arg0, s16 arg1);
void func_84333B04(unk_D_8140E720* arg0);
void func_84333BA8(unk_D_8140E720* arg0);
void func_84333DC4(unk_D_8140E720* arg0);
void func_84333E28(unk_D_8140E720* arg0);
void func_84333EE8(unk_D_8140E720* arg0);
void func_84333FBC(unk_D_8140E720* arg0);
void func_843340B8(unk_D_8140E720* arg0);
void func_84334154(unk_D_8140E720* arg0);
void func_84334294(unk_D_8140E720* arg0);
void func_84334350(unk_D_8140E720* arg0);
void func_843343F8(unk_D_8140E720* arg0);
void func_843344A0(unk_D_8140E720* arg0);
void func_84334558(unk_D_8140E720* arg0);
void func_843345A0(unk_D_8140E720* arg0);
void func_84334654(unk_D_8140E720* arg0);
void func_843346BC(unk_D_8140E720* arg0);
void func_843347A4(unk_D_8140E720* arg0);
void func_84334808(unk_D_8140E720* arg0);
void func_843348DC(unk_D_8140E720* arg0);
void func_84334994(unk_D_8140E720* arg0);
void func_84334A78(unk_D_8140E720* arg0, u8 arg1);
void func_84334B04(void);
void func_84334B0C(unk_D_8140E720* arg0);
void func_84334BAC(unk_D_8140E720* arg0);
void func_84334D7C(unk_D_8140E720* arg0);
void func_84334E4C(unk_D_8140E720* arg0);
void func_84334F84(unk_D_8140E720* arg0);
void func_8433507C(unk_D_8140E720* arg0);
void func_843351C8(unk_D_8140E720* arg0);
void func_843352AC(unk_D_8140E720* arg0);
void func_843353C4(unk_D_8140E720* arg0);
void func_843354E0(unk_D_8140E720* arg0);
void func_84335668(unk_D_8140E720* arg0);
void func_8433574C(unk_D_8140E720* arg0);
void func_84335848(unk_D_8140E720* arg0);
void func_8433595C(unk_D_8140E720* arg0);
void func_84335A84(unk_D_8140E720* arg0);
void func_84335BA0(unk_D_8140E720* arg0);
void func_84335D10(unk_D_8140E720* arg0);
void func_84335DEC(unk_D_8140E720* arg0);
void func_84335EF8(unk_D_8140E720* arg0);
void func_84336014(unk_D_8140E720* arg0, s16 arg1, s16 arg2);
void func_8433617C(unk_D_8140E720* arg0, s32 arg1);
void func_84336320(unk_D_8140E720* arg0);
void func_84336340(unk_D_8140E720* arg0);
void func_84336360(unk_D_8140E720* arg0);
void func_84336480(unk_D_8140E720* arg0);
void func_84336520(unk_D_8140E720* arg0);
void func_8433661C(unk_D_8140E720* arg0);
void func_8433679C(unk_D_8140E720* arg0);
void func_84336830(unk_D_8140E720* arg0);
void func_843369AC(unk_D_8140E720* arg0);
void func_84336A58(unk_D_8140E720* arg0);
void func_84336B8C(void);
void func_84336C80(void);
void func_84336DD8(void);
void func_84336EE8(void);
void func_84337000(void);
void func_843371C0(void);
void func_843372D8(void);
void func_843374A4(void);
void func_843375B0(void);
void func_8433765C(void);
void func_84337664(void);
void func_8433766C(void);
void func_843378CC(void);
void func_843378D4(void);


void func_84337AF0(unk_D_8140E720* arg0);
void func_84337C6C(unk_D_8140E720* arg0);
void func_84337D70(unk_D_8140E720* arg0, s16 arg1);
void func_84337E64(unk_D_8140E720* arg0);
void func_84337F6C(unk_D_8140E720* arg0);
void func_843380B0(unk_D_8140E720* arg0);
void func_843380F0(unk_D_8140E720* arg0);
void func_84338204(unk_D_8140E720* arg0);
void func_8433837C(unk_D_8140E720* arg0);
void func_84338468(unk_D_8140E720* arg0);
void func_84338620(unk_D_8140E720* arg0);
void func_843386B0(unk_D_8140E720* arg0);
void func_84338778(unk_D_8140E720* arg0);
void func_843388A8(unk_D_8140E720* arg0);
void func_84338978(unk_D_8140E720* arg0);
void func_84338A2C(unk_D_8140E720* arg0);
void func_84338AC4(unk_D_8140E720* arg0);
void func_84338B44(unk_D_8140E720* arg0);
void func_84338C0C(unk_D_8140E720* arg0);
void func_84338C84(unk_D_8140E720* arg0);
void func_84338D28(unk_D_8140E720* arg0);
void func_84338D84(unk_D_8140E720* arg0);
void func_84338E6C(unk_D_8140E720* arg0);
void func_84338EF0(unk_D_8140E720* arg0);
void func_84338FA4(unk_D_8140E720* arg0);
void func_8433903C(unk_D_8140E720* arg0);
void func_843390E0(unk_D_8140E720* arg0);
void func_8433913C(unk_D_8140E720* arg0);
void func_84339248(unk_D_8140E720* arg0);
void func_84339398(unk_D_8140E720* arg0);
void func_843393E8(unk_D_8140E720* arg0);
void func_843394D4(unk_D_8140E720* arg0);
void func_8433958C(unk_D_8140E720* arg0);
void func_84339628(unk_D_8140E720* arg0);
void func_84339688(unk_D_8140E720* arg0);
void func_84339710(unk_D_8140E720* arg0);
void func_843397A0(unk_D_8140E720* arg0);
void func_84339874(unk_D_8140E720* arg0);
void func_843398F8(unk_D_8140E720* arg0);
void func_84339994(unk_D_8140E720* arg0);
void func_84339A30(unk_D_8140E720* arg0);
void func_84339B20(unk_D_8140E720* arg0);
void func_84339C0C(unk_D_8140E720* arg0);
void func_84339CDC(unk_D_8140E720* arg0);
void func_84339D74(unk_D_8140E720* arg0);
void func_84339E38(unk_D_8140E720* arg0);
void func_84339ECC(unk_D_8140E720* arg0);
void func_84339F8C(unk_D_8140E720* arg0);
void func_8433A024(unk_D_8140E720* arg0);
void func_8433A0E8(unk_D_8140E720* arg0);
void func_8433A208(unk_D_8140E720* arg0);
void func_8433A378(unk_D_8140E720* arg0);
void func_8433A4D8(unk_D_8140E720* arg0);
void func_8433A5C4(unk_D_8140E720* arg0);
void func_8433A698(unk_D_8140E720* arg0);
void func_8433A790(unk_D_8140E720* arg0);
void func_8433A858(unk_D_8140E720* arg0);
void func_8433A954(unk_D_8140E720* arg0);
void func_8433AA28(unk_D_8140E720* arg0);
void func_8433AB08(unk_D_8140E720* arg0);
void func_8433AC00(unk_D_8140E720* arg0);
void func_8433AD70(unk_D_8140E720* arg0);
void func_8433ADE0(unk_D_8140E720* arg0);
void func_8433AF20(unk_D_8140E720* arg0);
void func_8433B014(unk_D_8140E720* arg0);
void func_8433B120(unk_D_8140E720* arg0);
void func_8433B1B8(unk_D_8140E720* arg0);
void func_8433B290(void);
void func_8433B2E8(void);
void func_8433B374(void);
void func_8433B3D8(void);
void func_8433B4AC(void);
void func_8433B58C(void);
void func_8433B6FC(void);
void func_8433B7E4(void);
void func_8433B988(void);
void func_8433BAA8(void);
void func_8433BB78(void);
void func_8433BC38(void);
void func_8433BD08(void);
void func_8433BDFC(void);
void func_8433BECC(void);
void func_8433BF54(void);
void func_8433C06C(void);
void func_8433C284(void);
void func_8433C3A0(void);
void func_8433C4EC(void);
void func_8433C604(void);
void func_8433C784(void);
void func_8433C940(void);
void func_8433CAFC(void);


void func_8433CC10(unk_D_8140E720* arg0);
void func_8433CCFC(unk_D_8140E720* arg0);
void func_8433CDAC(unk_D_8140E720* arg0);
void func_8433CEA4(unk_D_8140E720* arg0);
void func_8433CEFC(unk_D_8140E720* arg0);
void func_8433CFA8(unk_D_8140E720* arg0);
void func_8433D070(unk_D_8140E720* arg0);
void func_8433D154(unk_D_8140E720* arg0);
void func_8433D224(unk_D_8140E720* arg0);
void func_8433D308(unk_D_8140E720* arg0);
void func_8433D3B0(unk_D_8140E720* arg0);
void func_8433D460(unk_D_8140E720* arg0);
void func_8433D560(unk_D_8140E720* arg0);
void func_8433D604(unk_D_8140E720* arg0);
void func_8433D6EC(unk_D_8140E720* arg0);
void func_8433D790(unk_D_8140E720* arg0);
void func_8433D868(unk_D_8140E720* arg0);
void func_8433D90C(unk_D_8140E720* arg0);
void func_8433DA54(unk_D_8140E720* arg0);
void func_8433DAF8(unk_D_8140E720* arg0);
void func_8433DBDC(unk_D_8140E720* arg0);
void func_8433DC80(void);
void func_8433DECC(void);
void func_8433DFF4(void);
void func_8433E124(void);
void func_8433E33C(void);
void func_8433E46C(void);
void func_8433E524(void);


void func_8433E650(unk_D_8140E720* arg0);
void func_8433E758(unk_D_8140E720* arg0);
void func_8433E840(unk_D_8140E720* arg0);
void func_8433E8A8(unk_D_8140E720* arg0);
void func_8433E950(unk_D_8140E720* arg0);
void func_8433EA04(unk_D_8140E720* arg0);
void func_8433EB0C(unk_D_8140E720* arg0);
void func_8433EB9C(unk_D_8140E720* arg0);
void func_8433EC40(unk_D_8140E720* arg0);
void func_8433ED3C(unk_D_8140E720* arg0);
void func_8433EE10(unk_D_8140E720* arg0);
void func_8433F06C(unk_D_8140E720* arg0);
void func_8433F208(unk_D_8140E720* arg0);
void func_8433F270(unk_D_8140E720* arg0);
s16 func_8433F3B4(void);
void func_8433F414(void);
void func_8433F4CC(void);
void func_8433F4EC(void);
void func_8433F5B4(void);
void func_8433F5D4(void);
void func_8433F758(void);
void func_8433F974(void);
void func_8433FAF8(void);
void func_8433FD30(void);


void func_8433FD80(unk_D_8140E720* arg0);
void func_8433FDC0(unk_D_8140E720* arg0);
void func_8433FE80(unk_D_8140E720* arg0);
void func_8433FF44(unk_D_8140E720* arg0);
void func_843400BC(unk_D_8140E720* arg0);
void func_8434016C(unk_D_8140E720* arg0);
void func_84340230(unk_D_8140E720* arg0);
void func_843403D8(unk_D_8140E720* arg0);
void func_84340690(unk_D_8140E720* arg0);
void func_84340940(unk_D_8140E720* arg0);
void func_84340AC4(void);
void func_84340ACC(void);
void func_84340CB0(void);
void func_84340D14(void);


void func_84342808(void);
void func_84342908(void);
void func_84342CF0(void);
void func_84343288(void);
void func_843432E4(unk_D_8140E720*);
void func_84343988(void);
void func_84344094(void);
void func_84344248(void);
void func_843443E0(void);
void func_84344474(void);
void func_84344508(void);
void func_84344A4C(void);
void func_84344B04(void);
void func_84344BDC(void);
void func_84345038(void);
void func_843450B4(void);
void func_8434575C(void);
void func_84345B28(void);
void func_84345B84(void);
void func_84345D74(void);
void func_84345EC0(void);
void func_84346B58(void);
void func_84346BE0(void);
void func_84346DC4(void);
void func_84346E50(void);
void func_84346EEC(void);
void func_84346F40(void);
void func_843473BC(void);
void func_8434749C(unk_D_8140E720*);
void func_84347448(void);


void func_84340DC0(void);
void func_84340E40(unk_D_8140E720* arg0, s32 arg1);
void func_843416B0(unk_D_8140E720* arg0);
void func_8434171C(unk_D_8140E720* arg0);
void func_8434174C(unk_D_8140E720* arg0);
void func_843417AC(unk_D_8140E720* arg0);
void func_84341830(unk_D_8140E720* arg0);
void func_84341860(unk_D_8140E720* arg0);
Gfx* func_843418C0(Gfx* arg0, u8* arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9, s16 argA, s16 argB);
Gfx* func_84341B84(Gfx* arg0, arg1_func_8434E21C* arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7, s16 arg8, s16 arg9, s16 argA, s16 argB);
void func_84341E50(Gfx* arg0);
void func_84341F08(s32 arg0, arg1_func_84344CE8* arg1);
void func_84341F44(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_84342304(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434234C(unk_D_8140E720* arg0);
void func_843423C8(unk_D_8140E720* arg0);
void func_84342478(unk_D_8140E720* arg0);
void func_8434261C(unk_D_8140E720* arg0);
void func_84342758(unk_D_8140E720* arg0);
void func_84342808(void);
void func_84342908(void);
void func_84342980(unk_D_8140E720* arg0);
void func_84342C54(unk_D_8140E720* arg0);
void func_84342C7C(unk_D_8140E720* arg0);
void func_84342CF0(void);
void func_84342D48(unk_D_8140E720* arg0);
void func_84343064(unk_D_8140E720* arg0, s16 arg1);
void func_843431B0(unk_D_8140E720* arg0);
void func_84343288(void);
void func_843432E4(unk_D_8140E720* arg0);
void func_84343988(void);
void func_84343B9C(Gfx* arg0, s32 arg1, u16 arg2);
void func_84343D24(s32 arg0, arg1_func_84344CE8* arg1);
void func_84343D6C(unk_D_8140E720* arg0);
void func_84343E44(unk_D_8140E720* arg0, UNUSED s16 arg1);
void func_84343EB4(unk_D_8140E720* arg0);
void func_84343FA4(Gfx* arg0, u16 arg1);
void func_84344050(s32 arg0, arg1_func_84344CE8* arg1);
void func_84344094(void);
void func_8434411C(unk_D_8140E720* arg0);
void func_843441F8(unk_D_8140E720* arg0);
void func_84344248(void);
void func_84344318(unk_D_8140E720* arg0);
void func_84344390(unk_D_8140E720* arg0);
void func_843443E0(void);
void func_84344474(void);
void func_84344508(void);
void func_8434459C(unk_D_8140E720* arg0);
void func_843445E4(unk_D_8140E720* arg0);
void func_84344698(unk_D_8140E720* arg0);
void func_84344734(unk_D_8140E720* arg0);
void func_84344888(unk_D_8140E720* arg0);
void func_843448D8(unk_D_8140E720* arg0);
void func_8434495C(unk_D_8140E720* arg0);
void func_84344A4C(void);
void func_84344B04(void);
void func_84344BDC(void);
void func_84344C7C(Gfx* arg0, u8* arg1);
void func_84344CE8(s32 arg0, arg1_func_84344CE8* arg1);
void func_84344D28(unk_D_8140E720* arg0);
void func_84344DA4(unk_D_8140E720* arg0);
void func_84344E20(unk_D_8140E720* arg0);
void func_84344F58(unk_D_8140E720* arg0);
void func_84345038(void);
void func_843450B4(void);
void func_8434523C(Gfx* arg0, s32 arg1, u16 arg2);
void func_843452F0(s32 arg0, arg1_func_84344CE8* arg1);
void func_84345338(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434539C(s32 arg0, arg1_func_84344CE8* arg1);
void func_843453E4(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_84345448(s32 arg0, arg1_func_84344CE8* arg1);
void func_84345490(void);
void func_84345498(unk_D_8140E720* arg0);
void func_84345618(unk_D_8140E720* arg0);
void func_843456DC(unk_D_8140E720* arg0);
void func_8434575C(void);
void func_84345838(unk_D_8140E720* arg0);
void func_84345920(unk_D_8140E720* arg0);
void func_843459A0(unk_D_8140E720* arg0);
void func_84345A20(Gfx* arg0, UNUSED s32 arg1, UNUSED u16 arg2);
void func_84345AE0(s32 arg0, arg1_func_84344CE8* arg1);
void func_84345B28(void);
void func_84345B84(void);
void func_84345C78(unk_D_8140E720* arg0);
void func_84345CF0(unk_D_8140E720* arg0);
void func_84345D74(void);
void func_84345DC4(unk_D_8140E720* arg0);
void func_84345E3C(unk_D_8140E720* arg0);
void func_84345EC0(void);
void func_84345F38(Gfx* arg0, s32 arg1, u16 arg2);
void func_84346014(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434605C(Gfx* arg0, UNUSED s32 arg1, UNUSED u16 arg2);
void func_843460EC(s32 arg0, arg1_func_84344CE8* arg1);
void func_84346134(unk_D_8140E720* arg0);
void func_843461D0(unk_D_8140E720* arg0);
void func_84346250(unk_D_8140E720* arg0);
void func_843463C8(unk_D_8140E720* arg0);
void func_84346488(unk_D_8140E720* arg0);
void func_84346634(unk_D_8140E720* arg0);
void func_8434669C(unk_D_8140E720* arg0);
void func_843466EC(Gfx* arg0, s32 arg1, u16 arg2);
void func_843467B0(s32 arg0, arg1_func_84344CE8* arg1);
void func_843467F8(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_84346960(s32 arg0, arg1_func_84344CE8* arg1);
void func_843469A8(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_84346B10(s32 arg0, arg1_func_84344CE8* arg1);
void func_84346B58(void);
void func_84346BE0(void);
void func_84346DC4(void);
void func_84346E50(void);
void func_84346EEC(void);
void func_84346F40(void);
void func_84347080(unk_D_8140E720* arg0);
void func_84347108(unk_D_8140E720* arg0);
void func_8434719C(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_84347254(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434729C(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_84347374(s32 arg0, arg1_func_84344CE8* arg1);
void func_843473BC(void);
void func_84347448(void);
void func_8434749C(unk_D_8140E720* arg0);
void func_84347670(unk_D_8140E720* arg0);
void func_843476D8(unk_D_8140E720* arg0);
void func_8434775C(unk_D_8140E720* arg0);
void func_843477F8(unk_D_8140E720* arg0);
void func_84347904(unk_D_8140E720* arg0);
void func_84347A20(unk_D_8140E720* arg0);
void func_84347AF0(unk_D_8140E720* arg0);
void func_84347BF4(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_84347D2C(s32 arg0, arg1_func_84344CE8* arg1);
void func_84347D74(unk_D_8140E720* arg0);
void func_84347E9C(unk_D_8140E720* arg0);
void func_84348058(unk_D_8140E720* arg0);
void func_84348194(unk_D_8140E720* arg0);
void func_843482D4(unk_D_8140E720* arg0);
void func_843483D4(unk_D_8140E720* arg0);
void func_84348514(unk_D_8140E720* arg0);
void func_84348630(void);
void func_843489FC(void);
void func_84348C6C(UNUSED s32 arg0, UNUSED s32 arg1);
void func_84348C78(UNUSED s32 arg0, UNUSED s32 arg1);
void func_84348C84(unk_D_8140E720* arg0);
void func_84348D4C(unk_D_8140E720* arg0);
void func_84348F24(Gfx* arg0, s32 arg1, u16 arg2);
void func_84349010(s32 arg0, arg1_func_84344CE8* arg1);
void func_84349058(void);
void func_843490A8(void);
void func_84349108(void);
void func_8434915C(void);
void func_8434917C(void);
void func_843491D4(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_84349264(s32 arg0, arg1_func_84344CE8* arg1);
void func_843492AC(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_8434933C(s32 arg0, arg1_func_84344CE8* arg1);
void func_84349384(void);
f32 func_84349424(unk_D_8140E720* arg0);
void func_843494AC(unk_D_8140E720* arg0);
void func_84349504(void);
void func_843495F0(unk_D_8140E720* arg0);
void func_84349628(void);
void func_8434967C(void);
void func_843497A8(unk_D_8140E720* arg0);
void func_84349830(void);
void func_843498D8(void);
void func_84349940(unk_D_8140E720* arg0);
void func_84349A14(void);
void func_84349A70(unk_D_8140E720* arg0);
void func_84349AE8(unk_D_8140E720* arg0);
void func_84349B50(unk_D_8140E720* arg0);
void func_84349C74(unk_D_8140E720* arg0);
void func_84349D10(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_84349F80(s32 arg0, arg1_func_84344CE8* arg1);
void func_84349FC8(Gfx* arg0, UNUSED arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434A18C(s32 arg0, arg1_func_84344CE8* arg1);
s16 func_8434A1D4(void);
s16 func_8434A244(void);
s16 func_8434A2B4(void);
void func_8434A324(void);
void func_8434A384(void);
f32 func_8434A574(unk_D_8140E720* arg0);
void func_8434A654(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434A6D8(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434A720(Gfx* arg0, UNUSED arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434A794(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434A7DC(void);
void func_8434A844(void);
void func_8434A898(void);
void func_8434A930(void);
void func_8434A9CC(void);
void func_8434A9EC(void);
void func_8434AA6C(void);
void func_8434AAEC(Gfx* arg0, u8 arg1, UNUSED u16 arg2);
void func_8434AC44(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434AC8C(void);
void func_8434ACEC(void);
void func_8434AD1C(void);
void func_8434AD70(void);
f32 func_8434AE68(unk_D_8140E720* arg0);
void func_8434B000(void);
void func_8434B064(void);
void func_8434B0D8(unk_D_8140E720* arg0);
void func_8434B14C(unk_D_8140E720* arg0);
void func_8434B21C(unk_D_8140E720* arg0);
void func_8434B2B8(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_8434BA28(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434BA70(void);
void func_8434BCD4(void);
void func_8434BF2C(void);
void func_8434C070(void);
void func_8434C0C4(void);
void func_8434C144(void);
void func_8434C214(unk_D_8140E720* arg0);
void func_8434C29C(unk_D_8140E720* arg0);
void func_8434C320(unk_D_8140E720* arg0);
void func_8434C3A8(unk_D_8140E720* arg0);
void func_8434C3F0(Gfx* arg0, u8 arg1, UNUSED u16 arg2);
void func_8434C548(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434C590(void);
void func_8434C5F0(void);
void func_8434C618(void);
void func_8434C720(void);
void func_8434C814(Gfx* arg0, u8* arg1, UNUSED u16 arg2);
void func_8434CA48(s32 arg0, arg1_func_84344CE8* arg1);
f32 func_8434CA90(unk_D_8140E720* arg0);
void func_8434CAD8(void);
void func_8434CC68(void);
void func_8434CE14(void);
void func_8434CF64(void);
void func_8434D0F8(void);
void func_8434D168(unk_D_8140E720* arg0);
void func_8434D1B0(unk_D_8140E720* arg0);
void func_8434D260(unk_D_8140E720* arg0);
void func_8434D2E0(unk_D_8140E720* arg0);
void func_8434D448(void);
void func_8434D4A0(unk_D_8140E720* arg0);
void func_8434D530(unk_D_8140E720* arg0);
void func_8434D5EC(void);
void func_8434D6C0(unk_D_8140E720* arg0);
void func_8434D72C(unk_D_8140E720* arg0);
void func_8434D77C(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434D890(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434D8D8(void);
void func_8434D938(void);
void func_8434D9F8(unk_D_8140E720* arg0);
void func_8434DA94(void);
void func_8434DB40(void);
void func_8434DBEC(void);
void func_8434DD08(void);
f32 func_8434DE24(unk_D_8140E720* arg0);
void func_8434DE6C(void);
void func_8434DFC0(void);
void func_8434E02C(void);
void func_8434E0CC(void);
void func_8434E1B8(void);
void func_8434E21C(Gfx* arg0, arg1_func_8434E21C* arg1, UNUSED u16 arg2);
void func_8434E6AC(s32 arg0, arg1_func_84344CE8* arg1);
void func_8434E6F4(void);
void func_8434E74C(void);
void func_8434E7CC(unk_D_8140E720* arg0);
void func_8434E870(void);
void func_8434E8E0(void);
void func_8434E940(void);
void func_8434E9A0(void);
void func_8434EA10(void);
void func_8434EAA8(unk_D_8140E720* arg0);
void func_8434EBA0(void);
void func_8434EC08(void);
void func_8434EC68(unk_D_8140E720* arg0);
void func_8434ECF4(void);
void func_8434ED48(void);
void func_8434ED70(unk_D_8140E720* arg0);
void func_8434EEA4(unk_D_8140E720* arg0);
void func_8434EF68(void);
void func_8434EFBC(void);
void func_8434F010(void);
void func_8434F060(void);
void func_8434F0B8(void);
void func_8434F110(unk_D_8140E720* arg0);
void func_8434F248(unk_D_8140E720* arg0);
void func_8434F350(void);
void func_8434F3E0(unk_D_8140E720* arg0);
void func_8434F554(unk_D_8140E720* arg0);
void func_8434F610(unk_D_8140E720* arg0);
void func_8434F7A4(unk_D_8140E720* arg0);
void func_8434F888(unk_D_8140E720* arg0);
void func_8434FA98(unk_D_8140E720* arg0);
void func_8434FB3C(unk_D_8140E720* arg0);
void func_8434FBE4(unk_D_8140E720* arg0);
void func_8434FCC4(unk_D_8140E720* arg0);
void func_8434FD6C(unk_D_8140E720* arg0);
void func_8434FE58(unk_D_8140E720* arg0);
void func_8434FF40(unk_D_8140E720* arg0);
void func_8435000C(unk_D_8140E720* arg0);
void func_84350100(unk_D_8140E720* arg0);
void func_843501CC(unk_D_8140E720* arg0);
void func_84350260(unk_D_8140E720* arg0);
void func_84350330(unk_D_8140E720* arg0);
void func_8435043C(unk_D_8140E720* arg0);
void func_84350520(unk_D_8140E720* arg0);
void func_84350634(unk_D_8140E720* arg0);
void func_84350728(unk_D_8140E720* arg0);
void func_84350828(unk_D_8140E720* arg0);
void func_843508F0(unk_D_8140E720* arg0);
void func_84350A04(unk_D_8140E720* arg0);
void func_84350AFC(unk_D_8140E720* arg0);
void func_84350BE4(unk_D_8140E720* arg0);
void func_84350CD8(unk_D_8140E720* arg0);
void func_84350DAC(unk_D_8140E720* arg0);
void func_84350EC8(unk_D_8140E720* arg0);
void func_84350FC0(unk_D_8140E720* arg0);
void func_84351090(unk_D_8140E720* arg0);
void func_84351144(unk_D_8140E720* arg0);
void func_84351264(unk_D_8140E720* arg0);
void func_843512AC(unk_D_8140E720* arg0);
void func_84351330(unk_D_8140E720* arg0);
void func_843513F4(unk_D_8140E720* arg0);
void func_843514B4(unk_D_8140E720* arg0);
void func_843515C8(unk_D_8140E720* arg0);
void func_843516A0(unk_D_8140E720* arg0);
void func_84351984(unk_D_8140E720* arg0);
void func_84351ADC(unk_D_8140E720* arg0);
void func_84351BCC(unk_D_8140E720* arg0);
void func_84351CE4(unk_D_8140E720* arg0);
void func_84351D20(unk_D_8140E720* arg0);
void func_84351D70(unk_D_8140E720* arg0);
void func_8435226C(unk_D_8140E720* arg0);
void func_8435235C(unk_D_8140E720* arg0);
void func_84352464(unk_D_8140E720* arg0);
void func_84352530(unk_D_8140E720* arg0);
void func_84352620(unk_D_8140E720* arg0);
void func_843526A8(unk_D_8140E720* arg0);
void func_84352754(unk_D_8140E720* arg0);
void func_843529D8(unk_D_8140E720* arg0);
void func_84352A8C(unk_D_8140E720* arg0);
void func_84352E64(unk_D_8140E720* arg0);
void func_84352F90(unk_D_8140E720* arg0);
s32 func_84353098(unk_D_8140E720* arg0);
void func_8435324C(unk_D_8140E720* arg0);
void func_843532B0(unk_D_8140E720* arg0);
void func_84353354(unk_D_8140E720* arg0);
void func_843534BC(unk_D_8140E720* arg0);
void func_843535F4(unk_D_8140E720* arg0);
void func_8435375C(unk_D_8140E720* arg0);
void func_84353894(unk_D_8140E720* arg0);
void func_84353998(unk_D_8140E720* arg0);
void func_84353AEC(unk_D_8140E720* arg0);
void func_84353BD0(unk_D_8140E720* arg0);
void func_84353C40(unk_D_8140E720* arg0);
void func_84353D30(unk_D_8140E720* arg0);
void func_84353E10(unk_D_8140E720* arg0);
void func_84353F08(unk_D_8140E720* arg0);
void func_843540FC(unk_D_8140E720* arg0);
void func_84354A10(unk_D_8140E720* arg0);
void func_84354ADC(unk_D_8140E720* arg0);
void func_84354BE4(unk_D_8140E720* arg0);
void func_84354D58(unk_D_8140E720* arg0);
void func_84354E44(unk_D_8140E720* arg0);
void func_84354F0C(unk_D_8140E720* arg0);
void func_84354FA8(unk_D_8140E720* arg0);
void func_84355040(unk_D_8140E720* arg0);
void func_84355164(unk_D_8140E720* arg0);
void func_84355240(unk_D_8140E720* arg0);
void func_84355330(unk_D_8140E720* arg0);
void func_843553B4(void);
void func_843553BC(unk_D_8140E720* arg0);
void func_84355498(unk_D_8140E720* arg0);
void func_84355500(unk_D_8140E720* arg0);
void func_84355584(unk_D_8140E720* arg0);
void func_84355670(unk_D_8140E720* arg0);
void func_84355794(unk_D_8140E720* arg0);
void func_8435581C(unk_D_8140E720* arg0);
void func_8435586C(unk_D_8140E720* arg0);
void func_8435593C(unk_D_8140E720* arg0);
void func_84355B08(unk_D_8140E720* arg0);
void func_84355B8C(unk_D_8140E720* arg0);
void func_84355C54(unk_D_8140E720* arg0);
void func_84355D70(unk_D_8140E720* arg0);
void func_84355E58(void);
void func_84355EF0(void);
void func_84355F88(void);
void func_84356020(void);
void func_843560B4(void);
void func_84356148(void);
void func_843561A0(void);
void func_843561F8(void);
void func_84356254(void);
void func_8435643C(void);
void func_843565DC(void);
void func_843566F4(void);
void func_8435674C(void);
void func_843567F4(void);
void func_843568C8(void);
void func_843569A0(void);
void func_84356A74(void);
void func_84356AC8(void);
void func_84356AF0(void);
void func_84356CA4(void);
void func_84356D04(void);
void func_84356DBC(void);
void func_84356EF4(void);
void func_84356FAC(void);
void func_84357110(void);
void func_8435727C(void);
void func_8435742C(void);
void func_843574FC(void);
void func_84357700(void);
void func_8435783C(void);
void func_843579C0(void);
void func_84357A64(void);
void func_84357AB8(void);
void func_84357AE0(void);
void func_84357B80(void);
void func_84357BA8(void);
void func_84357CC8(void);
void func_84357E60(void);
void func_84357F64(void);
void func_84358034(void);
void func_8435811C(void);
void func_843581FC(void);
void func_84358288(void);
void func_8435839C(void);
void func_843584C0(void);
void func_84358538(void);
void func_84358598(void);
void func_84358738(void);
void func_843588D8(void);
void func_84358A5C(void);
void func_84358C18(s32 arg0);
void func_84358DE4(void);
void func_84358E24(void);
void func_84358EA0(void);
void func_84358EDC(void);
void func_84358F6C(void);


void func_84358FF0(void);
void func_84358FF8(void);
void func_84359000(u8, u8, u8, u8);
void func_843590E0(unk_D_86002F34_00C*);


void func_843592E0(void);
void func_843592E8(void);
void func_843592F0(void);
void func_843592F8(void);
void func_84359300(void);
void func_84359308(void);
void func_84359310(void);
void func_84359318(void);
void func_84359320(void);
void func_84359328(void);
void func_84359330(UNUSED s32 arg0);
void func_84359338(UNUSED s32 arg0);
void func_84359340(void);
void func_84359348(void);
void func_84359380(void);
void func_843593A0(void);
void func_843593A8(void);
s32 func_843593B0(void);
s32 func_843593B8(void);
void func_843593C0(void);
void func_843593C8(void);
void func_843593D0(Vec3f* arg0);
void func_843593F0(Vec3f* arg0);
void func_84359410(Vec3f* arg0);
void func_84359430(Vec3f* arg0);
f32 func_84359450(void);
f32 func_84359470(void);
void func_84359490(f32* arg0, f32* arg1, f32* arg2, f32* arg3, f32* arg4, f32* arg5);
void func_84359564(f32* arg0, f32* arg1, f32* arg2, f32* arg3, f32* arg4, f32* arg5);
void func_84359650(void);
void func_84359684(void);
s32 func_843596DC(void);
void func_843596FC(void);
void func_84359750(void);
s32 func_843597AC(void);
void func_843597CC(void);
void func_84359820(void);
s32 func_8435989C(void);
void func_843598BC(void);
void func_84359910(void);
s32 func_8435998C(void);
void func_843599AC(void);
void func_84359A00(void);
s32 func_84359A6C(void);
void func_84359A8C(void);
void func_84359AE0(void);
s32 func_84359AE8(void);
void func_84359AF0(void);
void func_84359AF8(void);
void func_84359C84(void);
s32 func_84359CB8(void);
void func_84359D28(void);
void func_84359D7C(void);
s32 func_84359DF4(void);
void func_84359E14(void);
void func_84359E68(void);
void func_84359FE0(void);
s32 func_8435A014(void);
void func_8435A084(void);
void func_8435A0D8(void);
void func_8435A298(void);
s32 func_8435A2CC(void);
void func_8435A33C(void);
void func_8435A390(void);
s32 func_8435A40C(void);
void func_8435A42C(void);
void func_8435A480(void);
s32 func_8435A4F8(void);
void func_8435A518(void);
void func_8435A56C(void);
void func_8435A6F8(void);
s32 func_8435A72C(void);
void func_8435A79C(void);
void func_8435A7F0(void);
s32 func_8435A81C(void);
void func_8435A99C(void);
void func_8435A9F0(void);
s32 func_8435AA1C(void);
void func_8435AB9C(void);
void func_8435ABF0(void);
s32 func_8435AC20(void);
void func_8435AC40(void);
void func_8435AC94(void);
s32 func_8435ACC4(void);
void func_8435ACE4(void);
void func_8435AD38(void);
s32 func_8435AD68(void);
void func_8435AD88(void);
void func_8435ADDC(void);
s32 func_8435AE08(void);
void func_8435B048(void);
void func_8435B0B0(void);
s32 func_8435B0DC(void);
void func_8435B260(void);
void func_8435B2C8(void);
s32 func_8435B408(void);
void func_8435B454(void);
void func_8435B4A8(void);
void func_8435B580(void);
s32 func_8435B5B4(void);
void func_8435B600(void);
void func_8435B654(void);
void func_8435B8E8(void);
s32 func_8435B918(void);
void func_8435B938(void);
void func_8435B98C(void);
void func_8435BB64(void);
s32 func_8435BB98(void);
void func_8435BBEC(void);
void func_8435BC40(void);
void func_8435BED8(void);
s32 func_8435BF08(void);
void func_8435BF28(void);
void func_8435BF7C(void);
void func_8435C220(void);
s32 func_8435C250(void);
void func_8435C270(void);
void func_8435C2C4(void);
void func_8435C448(void);
s32 func_8435C478(void);
void func_8435C498(void);
void func_8435C4EC(void);
void func_8435C790(void);
void func_8435C96C(void);
s32 func_8435C9AC(void);
void func_8435CA08(void);


void func_8435CA70(void);
void func_8435CAA8(unk_D_843925E0* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
void func_8435CAE8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5);
void func_8435D1E8(unk_D_843925E0* arg0);
s32 func_8435D24C(unk_D_843925E0* arg0);
s32 func_8435D8C0(void);
Gfx* func_8435D97C(Gfx* arg0, unk_D_843925E0* arg1);
Gfx* func_8435DB14(Gfx* arg0);
void func_8435DED0(unk_D_843975E8* arg0, f32 arg1);
f32 func_8435E158(f32 arg0, f32 arg1, f32* arg2);
s32 func_8435E530(void);
void func_8435EB9C(s32 arg0, s16 arg1, s16 arg2);
s32 func_8435EDF8(void);
Gfx* func_8435EE78(Gfx* arg0);


void func_8435FB90(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9);
f32 func_8435FCD0(void);
s32 func_8435FD50(void);
Gfx* func_8436032C(Gfx* arg0);
void func_843605C0(void);
void func_843606D0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, f32 argB, f32 argC, f32 argD, s16 argE);
void func_8436090C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, f32 argB, f32 argC, f32 argD, s16 argE);
void func_84360B10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, f32 argE, f32 argF, f32 arg10, s16 arg11);
void func_84360EFC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, f32 argE, f32 argF, f32 arg10, s16 arg11);
void func_843612F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, f32 argB, f32 argC, f32 argD, s16 argE);
void func_843616B0(f32 arg0, UNUSED Vec3f* arg1, Vec3f* arg2, f32 arg3, UNUSED f32 arg4, UNUSED f32 arg5, UNUSED f32 arg6);
void func_84361744(unk_D_84398F50* arg0);
s32 func_84361FB0(void);
Gfx* func_84362084(Gfx* arg0);


void func_843638E0(s16 arg0);
void func_84363A5C(s32 arg0, s32 arg1);
void func_84363FF0(unk_D_8439CA60_0014* arg0, Vtx* arg1);
s32 func_843640A4(void);
void func_84364304(void);
Gfx* func_84364428(Gfx* arg0);


void func_843648E0(s16 arg0, s16 arg1);
void func_84364A18(s16 arg0);
void func_84364C50(s32 arg0, s32 arg1);
void func_843651D4(unk_D_8439E680_0014* arg0, Vtx* arg1);
s32 func_84365288(void);
void func_84365434(void);
Gfx* func_84365558(Gfx* arg0);


void func_84365A10(s16 arg0);
void func_84365B88(s32 arg0, s32 arg1);
void func_8436611C(unk_D_8439CA60_0014* arg0, Vtx* arg1);
s32 func_843661D0(void);
void func_8436643C(void);
Gfx* func_84366560(Gfx* arg0);


void func_84366A10(void);
void func_84366B38(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, s16 argB);
void func_84366DCC(f32 arg0, Vec3f* arg1, f32 arg2);
void func_84366E54(unk_D_843A22C0* arg0);
s32 func_84367014(void);
Gfx* func_843670C8(Gfx* arg0);


Gfx* func_84367660(Gfx* arg0, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8);


void func_84367CB0(void);
void func_84367E2C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, f32 argB, f32 argC, s16 argD);
void func_84368080(f32 arg0, Vec3f* arg1, f32 arg2, f32 arg3);
void func_84368140(unk_D_843AA880* arg0);
s32 func_843684CC(void);
Gfx* func_84368560(Gfx* arg0);


void func_84368AB0(void);
void func_84368C04(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, f32 argB, f32 argC, s16 argD);
void func_84368E78(f32 arg0, Vec3f* arg1, f32 arg2);
void func_84368F08(unk_D_843AB940* arg0);
s32 func_843692E8(void);
Gfx* func_84369388(Gfx* arg0);


void func_843697F0(void);
void func_84369950(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, f32 argB, f32 argC, s16 argD);
void func_84369BF0(f32 arg0, Vec3f* arg1, f32 arg2);
void func_84369C80(unk_D_843ACA10* arg0);
s32 func_84369F0C(void);
Gfx* func_84369FA0(Gfx* arg0);


void func_8436A410(void);
void func_8436A540(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, f32 argB, f32 argC, s16 argD);
void func_8436A808(f32 arg0, Vec3f* arg1, f32 arg2);
void func_8436A890(unk_D_843ADA80* arg0);
s32 func_8436ABA8(void);
Gfx* func_8436AC44(Gfx* arg0);


void func_8436B140(void);
void func_8436B270(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, f32 argA, f32 argB, f32 argC, s16 argD);
void func_8436B538(f32 arg0, Vec3f* arg1, f32 arg2);
void func_8436B5C0(unk_D_843ADA80* arg0);
s32 func_8436B8D8(void);
Gfx* func_8436B974(Gfx* arg0);


void func_8436BE70(void);
void func_8436BFB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, s16 argB, s32 argC, s32 argD, s16 argE, s16 argF, s16 arg10, s16 arg11, s16 arg12, s16 arg13, s16 arg14, s16 arg15, unk_D_843C2C00_024* arg16, unk_D_843C2C00_024* arg17, u8 arg18, u8 arg19, u8 arg1A, u8 arg1B, u8 arg1C, u8 arg1D, u8 arg1E, u8 arg1F, u8 arg20, u8 arg21, u8 arg22, u8 arg23, u8 arg24);
void func_8436C344(f32 arg0, Vec3f* arg1, f32 arg2);
void func_8436C3CC(unk_D_843C2C00* arg0);
s32 func_8436C62C(void);
Gfx* func_8436C6A4(Gfx* arg0, unk_D_843C2C00* arg1, s16 arg2, s16 arg3);
Gfx* func_8436CB60(Gfx* arg0, unk_D_843C2C00* arg1);
Gfx* func_8436CE34(Gfx* arg0);


void func_8436D370(void);
void func_8436D4A4(s16 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, u8 arg8, u8 arg9, u8 argA, u8 argB, u8 argC, u8 argD, u8 argE, u8 argF, f32 arg10, f32 arg11, f32 arg12, s16 arg13, s32 arg14, s32 arg15, s16 arg16, s16 arg17, s16 arg18, s16 arg19, s16 arg1A, s16 arg1B, s16 arg1C, s16 arg1D, unk_D_843C2C00_024* arg1E, unk_D_843C2C00_024* arg1F);
void func_8436D920(s32 arg0, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);
void func_8436DA38(f32 arg0, Vec3f* arg1, Vec3f* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_8436DAC4(unk_D_843C3508* arg0);
s32 func_8436DE60(void);
Gfx* func_8436DFB8(Gfx* arg0, unk_D_843C3508* arg1);
Gfx* func_8436E0E8(Gfx* arg0, unk_D_843C3508* arg1);
Gfx* func_8436E3BC(Gfx* arg0);
void func_8436E920(void);
s16 func_8436E944(void);
void func_8436EA0C(s16 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, f32 arg5);
void func_8436EB54(s16 arg0);
Gfx* func_8436ECB0(Gfx* arg0, unk_D_843C49C0_004* arg1, MtxF* arg2);
Gfx* func_8436EDE8(s16 arg0, Gfx* arg1);
void func_8436EED4(void);
void func_8436EEDC(void);
s32 func_8436EEE4(s32 arg0);


void func_8436EEF0(s32 arg0, s32 arg1);
s32 func_8436EF48(void);
void func_8436EF54(void);
Gfx* func_8436EFE8(Gfx* arg0, s32 arg1);
void func_8436F664(void);


void func_8436F6C0(void);


void func_8436F6D0(void);
u8 func_8436F6D8(void);
u8 func_8436F788(void);
void func_8436F838(s32 arg0, s32 arg1);
void func_8436F9D8(s32 arg0, s32 arg1);
void func_8436FA80(unk_D_84390010* arg0);
void func_8436FC10(void);
u16 func_8436FC7C(unk_D_84390010* arg0, unk_D_84390010* arg1);
s32 func_8436FD54(u8 arg0, u8* arg1, s32 arg2);
void func_8436FD9C(void);
s32 func_8436FDBC(void);
void func_8436FDF4(s32 arg0, unk_func_80026268_arg0* arg1);
void func_84370090(unk_func_80026268_arg0* arg0);
void func_843700F0(void);
s32 func_84370260(void);
void func_843703BC(void);
void func_843706E8(s32 arg0);
void func_84370790(void);
void func_843708A0(void);
void func_843708CC(void);
void func_84370ADC(unk_D_84390010* arg0);
void func_84370B0C(unk_D_84390010* arg0);
void func_84370B44(unk_D_84390010* arg0);
void func_84370B7C(unk_D_84390010* arg0);
s32 func_84370E30(unk_D_84390010* arg0);
void func_84370E70(void);
void func_84370E78(void);
void func_84370E80(void);
void func_84370F40(void);
void func_84371010(void);
void func_84371080(void);
void func_8437114C(void);
void func_843712CC(void);
void func_843714D8(void);
s32 func_84371564(void);
void func_843715C0(void);
void func_8437166C(void);
s32 func_8437176C(void);
void func_843718DC(void);
s32 func_843718E4(void);
void func_84371974(void);
s32 func_84371B3C(void);
s32 func_84371C18(void);
s32 func_84371DCC(void);
void func_84372670(void);
void func_84372B48(unk_D_84390010* arg0);
void func_84372C40(unk_D_84390010* arg0);
void func_84372D88(unk_D_84390010* arg0);
void func_84372ED0(unk_D_84390010* arg0);
void func_84373018(unk_D_84390010* arg0);
s32 func_84373160(unk_D_84390010* arg0);
s32 func_843732B8(void);
void func_8437345C(void);
void func_84373570(unk_D_84390010* arg0);


u16 func_843736B0(u16* arg0, u16 arg1, u8 arg2);
void func_84373754(void);
void func_84373A30(void);
void func_84373D04(void);
void func_84373E24(void);
void func_84373E60(void);
void func_843741C4(void);
void func_843744F0(void);
void func_8437483C(void);
void func_84374C9C(void);
void func_84374D08(void);
void func_84374D58(void);
void func_84374E08(void);
void func_84374EE4(void);
void func_84374FD4(void);
void func_84375038(void);
void func_843751F8(void);
void func_843752C0(void);
void func_84375384(void);
void func_84375424(void);
void func_84375508(void);
void func_843755E8(void);
void func_84375700(void);
void func_84375894(void);
void func_843759C4(void);
void func_843759DC(void);
void func_843759F4(void);
void func_84375B1C(void);
void func_84375C24(void);
void func_84375C60(void);
void func_84375D78(void);
void func_84375DA4(void);
void func_84375E6C(void);
void func_8437600C(void);
void func_84376258(void);
void func_843765E8(void);
void func_8437670C(void);
void func_84376768(void);


void func_84376790(s32 arg0, u32 arg1);
void func_843767DC(void);
s32 func_843767E4(s32 arg0);
void func_843768D8(u8 arg0);
u8 func_84376920(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2);
u16 func_84376A34(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1);
void func_84376B38(void);
void func_84376B9C(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1);
void func_84376C90(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2);
void func_84376E40(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1);
u16 func_84376F68(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2, u8 arg3);
void func_84377030(unk_D_843C60AC* arg0);
s32 func_84377068(s32 arg0, s32 arg1);
void func_8437717C(unk_D_800AE540_0004* arg0);
s32 func_84377280(s32 arg0);
s32 func_843772E4(u8 arg0, u8 arg1);
u16 func_8437731C(unk_D_800FCB18* arg0);
u16 func_84377354(unk_D_800FCB18* arg0);
f32 func_8437738C(u8 arg0, unk_D_800FCB18* arg1);
s32 func_84377430(u8 arg0, unk_D_843C60A4* arg1);
s32 func_84377550(u8 arg0, u8 arg1);
s32 func_84377644(unk_D_843C60A4* arg0, u8 arg1);
u8 func_843776FC(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8 arg2);
void func_843779C0(void);
u8 func_843779C8(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8 arg2, u8* arg3);
u8 func_84377FA4(unk_D_843C60AC* arg0, unk_D_843C60A4* arg1, u8* arg2, u8 arg3, u8* arg4);
s32 func_843780FC(u8 arg0, u8 arg1);
u8 func_84378140(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1);
u8 func_8437828C(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1);
s32 func_843783CC(unk_D_843C60A4* arg0);
void func_84378474(unk_D_800AE540_0004* arg0, unk_D_800AE540_0004* arg1, unk_D_800AE540_0004* arg2, unk_D_843C5568* arg3, s32 arg4);
void func_84378578(unk_D_843C60AC* arg0, u8 arg1);
u16 func_8437865C(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2);
void func_843787F4(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u16* arg2, u8* arg3, u8 arg4, u8 arg5);
s32 func_84378B0C(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8* arg2, u8 arg3);
s32 func_843791AC(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8* arg2, u8 arg3);
s32 func_843791E4(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8* arg2, u8 arg3);
void func_8437921C(void);
u8 func_84379224(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2, u8 arg3);
void func_843793E0(u8 arg0, u8* arg1);
void func_843794CC(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, s32 arg2, u8 arg3, u8 arg4, unk_func_843794CC* arg5);
s32 func_8437AC20(unk_func_843794CC* arg0, u8 arg1, u8 arg2);
s32 func_8437ACB0(unk_func_843794CC* arg0, u8 arg1, u8 arg2, u8 arg3);
u8 func_8437AEA4(unk_func_843794CC* arg0, u8 arg1, u8 arg2, u8 arg3);
void func_8437B0CC(unk_D_843C60A4* arg0, unk_D_843C60A4* arg1, u8 arg2, unk_func_843794CC* arg3, u8 arg4);
s32 func_8437E3B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8437E448(unk_D_843C60AC* arg0, UNUSED unk_D_843C60AC* arg1, u8 arg2, unk_func_843794CC* arg3);
s32 func_8437E7A4(void);
u16 func_8437E860(u8 arg0, u8 arg1);
u8 func_8437E920(u8 arg0);
void func_8437E974(unk_D_800AE540_0004* arg0, unk_D_800AE540_0004* arg1, unk_D_843C60A4* arg2, u8 arg3);
s32 func_8437ECFC(unk_D_843C60A4* arg0, u8* arg1, u8 arg2);
s32 func_8437ED54(unk_D_843C60A4* arg0, u8* arg1, u8 arg2, u8 arg3);
s32 func_8437EDB8(unk_D_843C60A4* arg0, u8* arg1, u8 arg2, s32 arg3);
s32 func_8437EFBC(unk_D_843C60A4* arg0, u8* arg1, u8 arg2, u8 arg3);
s32 func_8437F068(unk_D_843C60A4* arg0, u8* arg1, u8 arg2);
s32 func_8437F2EC(unk_D_843C60A4* arg0, unk_D_843C60A4* arg1, u8* arg2, s32* arg3);
s32 func_8437F85C(unk_D_843C60A4* arg0, s32* arg1, s32 arg2, unk_func_8437F85C_arg3* arg3, u8* arg4, u8 arg5, u8 arg6);
void func_8437FB14(unk_D_843C60A4* arg0, u8* arg1, s32 arg2);
s32 func_8437FC10(unk_D_843C60A4* arg0);
s32 func_8437FCCC(unk_D_800FCB18* arg0);
s32 func_8437FD74(unk_D_843C60A4* arg0, s32* arg1, s32* arg2, u8 arg3);
s32 func_84380164(unk_D_843C60A4* arg0, unk_D_843C60A4* arg1, u8* arg2, u8* arg3, s32* arg4);
s32 func_843804F4(unk_D_843C60A4* arg0, unk_D_843C60A4* arg1, u8* arg2, u8* arg3, s32 arg4);
void func_84380598(void);
u8 func_84380870(unk_D_843C60A4* arg0, unk_D_843C60A4* arg1);
u8 func_84380B40(unk_D_843C60AC* arg0, s32* arg1, s32* arg2, unk_D_843C60A4* arg3, u8 arg4, s32 arg5);
s32 func_84380EB4(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, u8 arg2);
s32 func_84380F7C(unk_func_8438220C* arg0);
s32 func_843811D0(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, unk_D_843C60A4* arg2, u8* arg3, s32* arg4, s32* arg5, s32* arg6, s32* arg7, s32* arg8);
s32 func_843813D4(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, unk_D_843C60A4* arg2, u8* arg3, unk_func_8438220C* arg4);
u8 func_84381584(unk_D_843C60AC* arg0, unk_D_843C60AC* arg1, unk_D_843C60A4* arg2, unk_D_843C60A4* arg3, u8* arg4, unk_func_8438220C* arg5);
u16 func_84381BD4(u16* arg0, u16 arg1, u8 arg2);
void func_84381C78(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2, u8 arg3);
void func_84381DD4(unk_func_8438220C* arg0);
void func_84381F50(unk_func_8438220C* arg0);
u8 func_843820B8(unk_func_8438220C* arg0);
s32 func_8438220C(void);
s32 func_8438223C(s32 arg0);
s32 func_8438249C(u8 arg0, u8 arg1);
s32 func_8438255C(u8 arg0, u8 arg1);
s32 func_843825D8(u8 arg0);
s32 func_84382614(u8 arg0);
s32 func_84382668(unk_D_800FCB18* arg0, s32 arg1, u8 arg2, u8 arg3);
s32 func_84382840(unk_D_800FCB18* arg0, unk_D_800FCB18* arg1, u8 arg2);
void func_84382ACC(void);
s32 func_843831A0(unk_D_800AE540_0004* arg0, unk_D_800AE540_0004* arg1, unk_D_800AE540_0004* arg2, s32 arg3, u8* arg4, s32 arg5, s32 arg6);
void func_8438363C(UNUSED s32 arg0, UNUSED s32 arg1, s32 arg2);
s32 func_84383B5C(UNUSED s32 arg0);
void func_84384124(void);
s32 func_843841C4(s32 arg0, s32 arg1);

#endif // _FRAGMENT62_H_
