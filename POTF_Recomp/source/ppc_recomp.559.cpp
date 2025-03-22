#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83200CD0"))) PPC_WEAK_FUNC(sub_83200CD0);
PPC_FUNC_IMPL(__imp__sub_83200CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83200CD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83200de8
	if (ctx.cr6.eq) goto loc_83200DE8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ori r24,r3,2
	ctx.r24.u64 = ctx.r3.u64 | 2;
	// bne cr6,0x83200d10
	if (!ctx.cr6.eq) goto loc_83200D10;
	// ori r24,r3,1
	ctx.r24.u64 = ctx.r3.u64 | 1;
loc_83200D10:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-20316
	ctx.r29.s64 = ctx.r11.s64 + -20316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200D24;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,23280
	ctx.r28.s64 = ctx.r11.s64 + 23280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200D38;
	sub_831FF560(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83200d74
	if (!ctx.cr6.eq) goto loc_83200D74;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x83200d7c
	goto loc_83200D7C;
loc_83200D74:
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_83200D7C:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r10,-2096
	ctx.r6.s64 = ctx.r10.s64 + -2096;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r9,-10000
	ctx.r9.s64 = ctx.r9.s64 + -10000;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8335dd98
	ctx.lr = 0x83200DC0;
	sub_8335DD98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200DD0;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200DDC;
	sub_831FF560(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x83200dec
	if (ctx.cr6.lt) goto loc_83200DEC;
loc_83200DE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200DEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200DF4"))) PPC_WEAK_FUNC(sub_83200DF4);
PPC_FUNC_IMPL(__imp__sub_83200DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200DF8"))) PPC_WEAK_FUNC(sub_83200DF8);
PPC_FUNC_IMPL(__imp__sub_83200DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83200E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20252
	ctx.r4.s64 = ctx.r11.s64 + -20252;
	// bl 0x831ff560
	ctx.lr = 0x83200E1C;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-20316
	ctx.r29.s64 = ctx.r11.s64 + -20316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200E30;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,23280
	ctx.r28.s64 = ctx.r11.s64 + 23280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200E44;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-20272
	ctx.r4.s64 = ctx.r11.s64 + -20272;
	// bl 0x831ff560
	ctx.lr = 0x83200E58;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200E64;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200E70;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20284
	ctx.r4.s64 = ctx.r11.s64 + -20284;
	// bl 0x831ff560
	ctx.lr = 0x83200E80;
	sub_831FF560(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83200E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83200eb0
	if (!ctx.cr0.lt) goto loc_83200EB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83200eb0
	if (ctx.cr6.lt) goto loc_83200EB0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_83200EB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21488
	ctx.r4.s64 = ctx.r11.s64 + 21488;
	// bl 0x831ff560
	ctx.lr = 0x83200EC0;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200ECC;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200ED8;
	sub_831FF560(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200EE4"))) PPC_WEAK_FUNC(sub_83200EE4);
PPC_FUNC_IMPL(__imp__sub_83200EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200EE8"))) PPC_WEAK_FUNC(sub_83200EE8);
PPC_FUNC_IMPL(__imp__sub_83200EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x83200EF0;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83200cd0
	ctx.lr = 0x83200F24;
	sub_83200CD0(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt 0x8320115c
	if (ctx.cr0.lt) goto loc_8320115C;
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320115c
	if (ctx.cr0.eq) goto loc_8320115C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-20316
	ctx.r29.s64 = ctx.r11.s64 + -20316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200F48;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,23280
	ctx.r28.s64 = ctx.r11.s64 + 23280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200F5C;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x832000a8
	ctx.lr = 0x83200F6C;
	sub_832000A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// addi r4,r11,-20072
	ctx.r4.s64 = ctx.r11.s64 + -20072;
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// bl 0x831ff560
	ctx.lr = 0x83200F84;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200F90;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200F9C;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20124
	ctx.r4.s64 = ctx.r11.s64 + -20124;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// bl 0x831ff560
	ctx.lr = 0x83200FBC;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83200FC8;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83200FD4;
	sub_831FF560(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r17,r11,27,27,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x8320114c
	if (ctx.cr0.eq) goto loc_8320114C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20152
	ctx.r4.s64 = ctx.r11.s64 + -20152;
	// bl 0x831ff560
	ctx.lr = 0x83200FF4;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201000;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320100C;
	sub_831FF560(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83201134
	if (ctx.cr6.eq) goto loc_83201134;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r9,-20204
	ctx.r23.s64 = ctx.r9.s64 + -20204;
	// addi r26,r8,-20232
	ctx.r26.s64 = ctx.r8.s64 + -20232;
	// addi r25,r7,-12000
	ctx.r25.s64 = ctx.r7.s64 + -12000;
	// addi r22,r6,24368
	ctx.r22.s64 = ctx.r6.s64 + 24368;
	// addi r21,r5,24372
	ctx.r21.s64 = ctx.r5.s64 + 24372;
	// addi r20,r4,24376
	ctx.r20.s64 = ctx.r4.s64 + 24376;
	// addi r24,r10,21574
	ctx.r24.s64 = ctx.r10.s64 + 21574;
	// addi r19,r11,-9992
	ctx.r19.s64 = ctx.r11.s64 + -9992;
loc_8320105C:
	// lwz r30,0(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// rlwinm. r11,r30,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r30,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xF;
	// clrlwi r7,r30,28
	ctx.r7.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r9,r30,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// bne 0x8320107c
	if (!ctx.cr0.eq) goto loc_8320107C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_8320107C:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x8320108c
	if (!ctx.cr0.eq) goto loc_8320108C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8320108C:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bne 0x8320109c
	if (!ctx.cr0.eq) goto loc_8320109C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8320109C:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bne 0x832010ac
	if (!ctx.cr0.eq) goto loc_832010AC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_832010AC:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r30,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// bl 0x831ff560
	ctx.lr = 0x832010D0;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832010DC;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832010E8;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83201120
	if (ctx.cr6.eq) goto loc_83201120;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83201120
	if (ctx.cr6.lt) goto loc_83201120;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201108;
	sub_831FF560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201114;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201120;
	sub_831FF560(ctx, base);
loc_83201120:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// clrlwi r16,r30,24
	ctx.r16.u64 = ctx.r30.u32 & 0xFF;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x8320105c
	if (ctx.cr6.lt) goto loc_8320105C;
loc_83201134:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201140;
	sub_832000A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320114C;
	sub_831FF560(ctx, base);
loc_8320114C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x832000a8
	ctx.lr = 0x8320115C;
	sub_832000A8(ctx, base);
loc_8320115C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201168"))) PPC_WEAK_FUNC(sub_83201168);
PPC_FUNC_IMPL(__imp__sub_83201168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83201170;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83200cd0
	ctx.lr = 0x832011A4;
	sub_83200CD0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83201584
	if (ctx.cr0.lt) goto loc_83201584;
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83201584
	if (ctx.cr0.eq) goto loc_83201584;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r28,24(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r15,r11,-20300
	ctx.r15.s64 = ctx.r11.s64 + -20300;
	// addi r16,r7,-12000
	ctx.r16.s64 = ctx.r7.s64 + -12000;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// addi r22,r10,-20292
	ctx.r22.s64 = ctx.r10.s64 + -20292;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r27,r9,23280
	ctx.r27.s64 = ctx.r9.s64 + 23280;
	// addi r26,r8,-20316
	ctx.r26.s64 = ctx.r8.s64 + -20316;
	// beq cr6,0x8320130c
	if (ctx.cr6.eq) goto loc_8320130C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201208;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201214;
	sub_831FF560(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201220;
	sub_832000A8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-19812
	ctx.r4.s64 = ctx.r10.s64 + -19812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201238;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201244;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201250;
	sub_831FF560(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83201300
	if (ctx.cr6.eq) goto loc_83201300;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// addi r19,r8,-19816
	ctx.r19.s64 = ctx.r8.s64 + -19816;
	// addi r18,r9,-11136
	ctx.r18.s64 = ctx.r9.s64 + -11136;
	// addi r17,r10,-19840
	ctx.r17.s64 = ctx.r10.s64 + -19840;
	// addi r20,r11,-19868
	ctx.r20.s64 = ctx.r11.s64 + -19868;
loc_83201280:
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r29,22,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3C;
	// clrlwi r8,r29,20
	ctx.r8.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r7,r29,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x831ff560
	ctx.lr = 0x832012A8;
	sub_831FF560(ctx, base);
	// rlwinm. r11,r29,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832012bc
	if (ctx.cr0.eq) goto loc_832012BC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832012BC;
	sub_831FF560(ctx, base);
loc_832012BC:
	// rlwinm. r11,r29,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832012d8
	if (ctx.cr0.eq) goto loc_832012D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x831ff560
	ctx.lr = 0x832012D8;
	sub_831FF560(ctx, base);
loc_832012D8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832012E4;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832012F0;
	sub_831FF560(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83201280
	if (ctx.cr6.lt) goto loc_83201280;
loc_83201300:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320130C;
	sub_832000A8(ctx, base);
loc_8320130C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm. r21,r11,27,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x83201584
	if (ctx.cr0.eq) goto loc_83201584;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201324;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201330;
	sub_831FF560(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320133C;
	sub_832000A8(ctx, base);
	// add r11,r21,r30
	ctx.r11.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r9,-19900
	ctx.r4.s64 = ctx.r9.s64 + -19900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r22,r10,r23
	ctx.r22.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r14,32(r24)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// bl 0x831ff560
	ctx.lr = 0x83201374;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201380;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320138C;
	sub_831FF560(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x83201578
	if (ctx.cr6.eq) goto loc_83201578;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r20,r3,-19960
	ctx.r20.s64 = ctx.r3.s64 + -19960;
	// addi r23,r4,-19976
	ctx.r23.s64 = ctx.r4.s64 + -19976;
	// addi r19,r5,-20204
	ctx.r19.s64 = ctx.r5.s64 + -20204;
	// addi r25,r6,-20004
	ctx.r25.s64 = ctx.r6.s64 + -20004;
	// addi r18,r7,24368
	ctx.r18.s64 = ctx.r7.s64 + 24368;
	// addi r17,r8,24372
	ctx.r17.s64 = ctx.r8.s64 + 24372;
	// addi r16,r9,24376
	ctx.r16.s64 = ctx.r9.s64 + 24376;
	// addi r24,r10,21574
	ctx.r24.s64 = ctx.r10.s64 + 21574;
	// addi r15,r11,-9992
	ctx.r15.s64 = ctx.r11.s64 + -9992;
	// b 0x832013ec
	goto loc_832013EC;
loc_832013E8:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_832013EC:
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// rlwinm. r11,r29,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r5,r29,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF;
	// clrlwi r7,r29,28
	ctx.r7.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r9,r29,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// rlwinm r8,r29,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF;
	// bne 0x83201410
	if (!ctx.cr0.eq) goto loc_83201410;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_83201410:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne 0x83201420
	if (!ctx.cr0.eq) goto loc_83201420;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83201420:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne 0x83201430
	if (!ctx.cr0.eq) goto loc_83201430;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_83201430:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bne 0x83201440
	if (!ctx.cr0.eq) goto loc_83201440;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_83201440:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201464;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201470;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320147C;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832014b4
	if (ctx.cr6.eq) goto loc_832014B4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832014b4
	if (ctx.cr6.lt) goto loc_832014B4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320149C;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832014A8;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832014B4;
	sub_831FF560(ctx, base);
loc_832014B4:
	// rlwinm r30,r29,16,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x83201528
	if (!ctx.cr6.lt) goto loc_83201528;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832014D4:
	// lwz r14,0(r29)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r6,r14,20
	ctx.r6.u64 = ctx.r14.u32 & 0xFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832014EC;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832014F8;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201504;
	sub_831FF560(ctx, base);
	// rlwinm. r11,r14,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne 0x83201520
	if (!ctx.cr0.eq) goto loc_83201520;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x832014d4
	if (ctx.cr6.lt) goto loc_832014D4;
loc_83201520:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8320154c
	if (ctx.cr6.lt) goto loc_8320154C;
loc_83201528:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201534;
	sub_831FF560(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201540;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320154C;
	sub_831FF560(ctx, base);
loc_8320154C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201558;
	sub_832000A8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201564;
	sub_831FF560(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x832013e8
	if (ctx.cr6.lt) goto loc_832013E8;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83201578:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201584;
	sub_832000A8(ctx, base);
loc_83201584:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201590"))) PPC_WEAK_FUNC(sub_83201590);
PPC_FUNC_IMPL(__imp__sub_83201590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x832015c0
	if (!ctx.cr6.lt) goto loc_832015C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_832015C0:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83201624
	if (ctx.cr6.eq) goto loc_83201624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x83201624
	if (ctx.cr6.lt) goto loc_83201624;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83201610
	if (ctx.cr6.lt) goto loc_83201610;
	// beq cr6,0x832015f8
	if (ctx.cr6.eq) goto loc_832015F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83201624
	goto loc_83201624;
loc_832015F8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83201168
	ctx.lr = 0x8320160C;
	sub_83201168(ctx, base);
	// b 0x83201624
	goto loc_83201624;
loc_83201610:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83200ee8
	ctx.lr = 0x83201624;
	sub_83200EE8(ctx, base);
loc_83201624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201640"))) PPC_WEAK_FUNC(sub_83201640);
PPC_FUNC_IMPL(__imp__sub_83201640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83201648;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83201674
	if (!ctx.cr6.eq) goto loc_83201674;
loc_83201668:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83201728
	goto loc_83201728;
loc_83201674:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x83201668
	if (ctx.cr6.lt) goto loc_83201668;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83201668
	if (ctx.cr6.eq) goto loc_83201668;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83201668
	if (ctx.cr6.eq) goto loc_83201668;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83200c30
	ctx.lr = 0x832016B0;
	sub_83200C30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bge 0x832016e8
	if (!ctx.cr0.lt) goto loc_832016E8;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832016e8
	if (!ctx.cr6.eq) goto loc_832016E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-19640
	ctx.r6.s64 = ctx.r11.s64 + -19640;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832016E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832016E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83201724
	goto loc_83201724;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r6,r11,-19696
	ctx.r6.s64 = ctx.r11.s64 + -19696;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83201718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_83201724:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83201728:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201730"))) PPC_WEAK_FUNC(sub_83201730);
PPC_FUNC_IMPL(__imp__sub_83201730) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320173C"))) PPC_WEAK_FUNC(sub_8320173C);
PPC_FUNC_IMPL(__imp__sub_8320173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201740"))) PPC_WEAK_FUNC(sub_83201740);
PPC_FUNC_IMPL(__imp__sub_83201740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83201748;
	__savegprlr_23(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82299698
	ctx.lr = 0x83201778;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8320178c
	if (!ctx.cr0.eq) goto loc_8320178C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832018f8
	goto loc_832018F8;
loc_8320178C:
	// lwz r3,804(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83201640
	ctx.lr = 0x832017C0;
	sub_83201640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x832017d8
	if (ctx.cr0.lt) goto loc_832017D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6d558
	ctx.lr = 0x832017D8;
	sub_82E6D558(ctx, base);
loc_832017D8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x832017E4;
	sub_822996C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x832018f4
	if (ctx.cr6.lt) goto loc_832018F4;
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832018f4
	if (!ctx.cr0.eq) goto loc_832018F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// rlwinm r27,r11,10,15,21
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FC00;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,-9880
	ctx.r7.s64 = ctx.r10.s64 + -9880;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x83201824;
	sub_831FC6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83201838
	if (ctx.cr0.lt) goto loc_83201838;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832018f4
	if (ctx.cr6.eq) goto loc_832018F4;
loc_83201838:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bge cr6,0x83201878
	if (!ctx.cr6.lt) goto loc_83201878;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,10000
	ctx.r6.s64 = ctx.r10.s64 + 10000;
	// b 0x83201880
	goto loc_83201880;
loc_83201878:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,9948
	ctx.r6.s64 = ctx.r10.s64 + 9948;
loc_83201880:
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83201888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,-2728
	ctx.r7.s64 = ctx.r11.s64 + -2728;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x832018A8;
	sub_831FC6C0(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832018bc
	if (ctx.cr0.eq) goto loc_832018BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ff470
	ctx.lr = 0x832018BC;
	sub_831FF470(ctx, base);
loc_832018BC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,-2728
	ctx.r6.s64 = ctx.r11.s64 + -2728;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832031c0
	ctx.lr = 0x832018E0;
	sub_832031C0(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832018f4
	if (ctx.cr0.eq) goto loc_832018F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ff470
	ctx.lr = 0x832018F4;
	sub_831FF470(ctx, base);
loc_832018F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832018F8:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201900"))) PPC_WEAK_FUNC(sub_83201900);
PPC_FUNC_IMPL(__imp__sub_83201900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83201740
	ctx.lr = 0x83201930;
	sub_83201740(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201948"))) PPC_WEAK_FUNC(sub_83201948);
PPC_FUNC_IMPL(__imp__sub_83201948) {
	PPC_FUNC_PROLOGUE();
	// b 0x831ffff0
	sub_831FFFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320194C"))) PPC_WEAK_FUNC(sub_8320194C);
PPC_FUNC_IMPL(__imp__sub_8320194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201950"))) PPC_WEAK_FUNC(sub_83201950);
PPC_FUNC_IMPL(__imp__sub_83201950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83201958;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83201988;
	sub_82CB16F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321c358
	ctx.lr = 0x83201998;
	sub_8321C358(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x83201fcc
	if (!ctx.cr6.eq) goto loc_83201FCC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x832019c4
	if (ctx.cr6.eq) goto loc_832019C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3976
	ctx.r5.s64 = ctx.r11.s64 + 3976;
	// b 0x832019cc
	goto loc_832019CC;
loc_832019C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3968
	ctx.r5.s64 = ctx.r11.s64 + 3968;
loc_832019CC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18164
	ctx.r4.s64 = ctx.r11.s64 + -18164;
	// bl 0x831ff560
	ctx.lr = 0x832019DC;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20316
	ctx.r30.s64 = ctx.r11.s64 + -20316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832000a8
	ctx.lr = 0x832019F0;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,23280
	ctx.r29.s64 = ctx.r11.s64 + 23280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201A04;
	sub_831FF560(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,14460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14460);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x83201a48
	if (!ctx.cr6.eq) goto loc_83201A48;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-18200
	ctx.r4.s64 = ctx.r10.s64 + -18200;
	// bl 0x831ff560
	ctx.lr = 0x83201A44;
	sub_831FF560(ctx, base);
	// b 0x83201a80
	goto loc_83201A80;
loc_83201A48:
	// fmr f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f12.f64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-18248
	ctx.r4.s64 = ctx.r10.s64 + -18248;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x831ff560
	ctx.lr = 0x83201A80;
	sub_831FF560(ctx, base);
loc_83201A80:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x83201ab0
	if (!ctx.cr6.eq) goto loc_83201AB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-18264
	ctx.r4.s64 = ctx.r11.s64 + -18264;
	// bl 0x831ff560
	ctx.lr = 0x83201AAC;
	sub_831FF560(ctx, base);
	// b 0x83201ad0
	goto loc_83201AD0;
loc_83201AB0:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ff560
	ctx.lr = 0x83201AD0;
	sub_831FF560(ctx, base);
loc_83201AD0:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x83201b00
	if (!ctx.cr6.eq) goto loc_83201B00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-18296
	ctx.r4.s64 = ctx.r11.s64 + -18296;
	// bl 0x831ff560
	ctx.lr = 0x83201AFC;
	sub_831FF560(ctx, base);
	// b 0x83201b20
	goto loc_83201B20;
loc_83201B00:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-18316
	ctx.r4.s64 = ctx.r11.s64 + -18316;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ff560
	ctx.lr = 0x83201B20;
	sub_831FF560(ctx, base);
loc_83201B20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201B2C;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201B38;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18320
	ctx.r4.s64 = ctx.r11.s64 + -18320;
	// bl 0x831ff560
	ctx.lr = 0x83201B48;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r4,r11,-18340
	ctx.r4.s64 = ctx.r11.s64 + -18340;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ff560
	ctx.lr = 0x83201B68;
	sub_831FF560(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r11,21574
	ctx.r28.s64 = ctx.r11.s64 + 21574;
	// addi r27,r10,7868
	ctx.r27.s64 = ctx.r10.s64 + 7868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83201bc8
	if (!ctx.cr6.eq) goto loc_83201BC8;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r11,-18364
	ctx.r4.s64 = ctx.r11.s64 + -18364;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ff560
	ctx.lr = 0x83201BA0;
	sub_831FF560(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x83201bfc
	if (!ctx.cr6.gt) goto loc_83201BFC;
	// li r26,63
	ctx.r26.s64 = 63;
	// b 0x83201c0c
	goto loc_83201C0C;
loc_83201BC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x831ff560
	ctx.lr = 0x83201BD4;
	sub_831FF560(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x83201bfc
	if (!ctx.cr6.gt) goto loc_83201BFC;
	// li r26,31
	ctx.r26.s64 = 31;
	// b 0x83201c0c
	goto loc_83201C0C;
loc_83201BFC:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// beq cr6,0x83201c10
	if (ctx.cr6.eq) goto loc_83201C10;
loc_83201C0C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_83201C10:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x83201c20
	if (!ctx.cr6.eq) goto loc_83201C20;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_83201C20:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r4,r11,-18388
	ctx.r4.s64 = ctx.r11.s64 + -18388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201C34;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201C40;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201C4C;
	sub_831FF560(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x83201c7c
	if (!ctx.cr6.eq) goto loc_83201C7C;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-18448
	ctx.r4.s64 = ctx.r11.s64 + -18448;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ff560
	ctx.lr = 0x83201C78;
	sub_831FF560(ctx, base);
	// b 0x83201c9c
	goto loc_83201C9C;
loc_83201C7C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-18512
	ctx.r4.s64 = ctx.r11.s64 + -18512;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831ff560
	ctx.lr = 0x83201C9C;
	sub_831FF560(ctx, base);
loc_83201C9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201CA8;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201CB4;
	sub_831FF560(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201d10
	if (ctx.cr6.eq) goto loc_83201D10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18592
	ctx.r4.s64 = ctx.r11.s64 + -18592;
	// bl 0x831ff560
	ctx.lr = 0x83201CD0;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201CDC;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201CE8;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18616
	ctx.r4.s64 = ctx.r11.s64 + -18616;
	// bl 0x831ff560
	ctx.lr = 0x83201CF8;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201D04;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201D10;
	sub_831FF560(ctx, base);
loc_83201D10:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201d6c
	if (ctx.cr6.eq) goto loc_83201D6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18696
	ctx.r4.s64 = ctx.r11.s64 + -18696;
	// bl 0x831ff560
	ctx.lr = 0x83201D2C;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201D38;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201D44;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18768
	ctx.r4.s64 = ctx.r11.s64 + -18768;
	// bl 0x831ff560
	ctx.lr = 0x83201D54;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201D60;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201D6C;
	sub_831FF560(ctx, base);
loc_83201D6C:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201da0
	if (ctx.cr6.eq) goto loc_83201DA0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18856
	ctx.r4.s64 = ctx.r11.s64 + -18856;
	// bl 0x831ff560
	ctx.lr = 0x83201D88;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201D94;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201DA0;
	sub_831FF560(ctx, base);
loc_83201DA0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201dd4
	if (ctx.cr6.eq) goto loc_83201DD4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18928
	ctx.r4.s64 = ctx.r11.s64 + -18928;
	// bl 0x831ff560
	ctx.lr = 0x83201DBC;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201DC8;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201DD4;
	sub_831FF560(ctx, base);
loc_83201DD4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201e30
	if (ctx.cr6.eq) goto loc_83201E30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19008
	ctx.r4.s64 = ctx.r11.s64 + -19008;
	// bl 0x831ff560
	ctx.lr = 0x83201DF0;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201DFC;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201E08;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19048
	ctx.r4.s64 = ctx.r11.s64 + -19048;
	// bl 0x831ff560
	ctx.lr = 0x83201E18;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201E24;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201E30;
	sub_831FF560(ctx, base);
loc_83201E30:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201e8c
	if (ctx.cr6.eq) goto loc_83201E8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19128
	ctx.r4.s64 = ctx.r11.s64 + -19128;
	// bl 0x831ff560
	ctx.lr = 0x83201E4C;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201E58;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201E64;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19176
	ctx.r4.s64 = ctx.r11.s64 + -19176;
	// bl 0x831ff560
	ctx.lr = 0x83201E74;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201E80;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201E8C;
	sub_831FF560(ctx, base);
loc_83201E8C:
	// cmplwi cr6,r26,9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 9, ctx.xer);
	// beq cr6,0x83201e9c
	if (ctx.cr6.eq) goto loc_83201E9C;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// bne cr6,0x83201ec4
	if (!ctx.cr6.eq) goto loc_83201EC4;
loc_83201E9C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19256
	ctx.r4.s64 = ctx.r11.s64 + -19256;
	// bl 0x831ff560
	ctx.lr = 0x83201EAC;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201EB8;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201EC4;
	sub_831FF560(ctx, base);
loc_83201EC4:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x83201fb4
	if (!ctx.cr6.eq) goto loc_83201FB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// bl 0x831ff560
	ctx.lr = 0x83201EDC;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201EE8;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201EF4;
	sub_831FF560(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// ble cr6,0x83201f14
	if (!ctx.cr6.gt) goto loc_83201F14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-19400
	ctx.r4.s64 = ctx.r11.s64 + -19400;
	// b 0x83201f1c
	goto loc_83201F1C;
loc_83201F14:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-19456
	ctx.r4.s64 = ctx.r11.s64 + -19456;
loc_83201F1C:
	// bl 0x831ff560
	ctx.lr = 0x83201F20;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201F2C;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201F38;
	sub_831FF560(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x83201f4c
	if (ctx.cr6.eq) goto loc_83201F4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,-19476
	ctx.r5.s64 = ctx.r11.s64 + -19476;
	// b 0x83201f54
	goto loc_83201F54;
loc_83201F4C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,-19496
	ctx.r5.s64 = ctx.r11.s64 + -19496;
loc_83201F54:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19544
	ctx.r4.s64 = ctx.r11.s64 + -19544;
	// bl 0x831ff560
	ctx.lr = 0x83201F64;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201F70;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201F7C;
	sub_831FF560(ctx, base);
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,-19580
	ctx.r4.s64 = ctx.r10.s64 + -19580;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// bl 0x831ff560
	ctx.lr = 0x83201F9C;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201FA8;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201FB4;
	sub_831FF560(ctx, base);
loc_83201FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83201FC0;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83201FCC;
	sub_831FF560(ctx, base);
loc_83201FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201FD8"))) PPC_WEAK_FUNC(sub_83201FD8);
PPC_FUNC_IMPL(__imp__sub_83201FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-20308
	ctx.r4.s64 = ctx.r11.s64 + -20308;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202000;
	sub_832000A8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202014;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x832000a8
	ctx.lr = 0x83202024;
	sub_832000A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320203C"))) PPC_WEAK_FUNC(sub_8320203C);
PPC_FUNC_IMPL(__imp__sub_8320203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202040"))) PPC_WEAK_FUNC(sub_83202040);
PPC_FUNC_IMPL(__imp__sub_83202040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83202048;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// addi r8,r11,-11120
	ctx.r8.s64 = ctx.r11.s64 + -11120;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,18
	ctx.r7.s64 = 18;
	// addi r11,r11,-11872
	ctx.r11.s64 = ctx.r11.s64 + -11872;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r14,r11,20
	ctx.r14.s64 = ctx.r11.s64 + 20;
	// lis r30,-31907
	ctx.r30.s64 = -2091057152;
	// lis r29,-32226
	ctx.r29.s64 = -2111963136;
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r30,-11408
	ctx.r25.s64 = ctx.r30.s64 + -11408;
	// addi r23,r29,23280
	ctx.r23.s64 = ctx.r29.s64 + 23280;
	// addi r22,r31,-20316
	ctx.r22.s64 = ctx.r31.s64 + -20316;
	// addi r18,r3,-20300
	ctx.r18.s64 = ctx.r3.s64 + -20300;
	// addi r21,r4,-20292
	ctx.r21.s64 = ctx.r4.s64 + -20292;
	// addi r20,r5,24704
	ctx.r20.s64 = ctx.r5.s64 + 24704;
	// addi r17,r6,-12392
	ctx.r17.s64 = ctx.r6.s64 + -12392;
	// addi r16,r7,-12384
	ctx.r16.s64 = ctx.r7.s64 + -12384;
	// addi r27,r8,-18112
	ctx.r27.s64 = ctx.r8.s64 + -18112;
	// addi r24,r9,-18112
	ctx.r24.s64 = ctx.r9.s64 + -18112;
	// addi r19,r10,-18320
	ctx.r19.s64 = ctx.r10.s64 + -18320;
	// addi r15,r11,-9668
	ctx.r15.s64 = ctx.r11.s64 + -9668;
loc_832020F8:
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x83202110
	if (ctx.cr6.eq) goto loc_83202110;
	// lwz r11,-4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83202378
	if (ctx.cr6.eq) goto loc_83202378;
loc_83202110:
	// lbz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// bgt cr6,0x832021fc
	if (ctx.cr6.gt) goto loc_832021FC;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-20592
	ctx.r12.s64 = ctx.r12.s64 + -20592;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-31968
	ctx.r12.s64 = -2095054848;
	// addi r12,r12,8524
	ctx.r12.s64 = ctx.r12.s64 + 8524;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8320214C;
	case 1:
		goto loc_83202154;
	case 2:
		goto loc_8320215C;
	case 3:
		goto loc_83202164;
	case 4:
		goto loc_8320216C;
	case 5:
		goto loc_83202174;
	case 6:
		goto loc_83202180;
	case 7:
		goto loc_83202188;
	case 8:
		goto loc_83202190;
	case 9:
		goto loc_83202198;
	case 10:
		goto loc_832021A0;
	case 11:
		goto loc_832021A8;
	case 12:
		goto loc_832021B4;
	case 13:
		goto loc_832021C4;
	case 14:
		goto loc_832021D0;
	case 15:
		goto loc_832021DC;
	case 16:
		goto loc_832021E8;
	case 17:
		goto loc_832021F4;
	default:
		__builtin_unreachable();
	}
loc_8320214C:
	// clrlwi r31,r26,26
	ctx.r31.u64 = ctx.r26.u32 & 0x3F;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202154:
	// rlwinm r31,r26,24,26,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0x3F;
	// b 0x832021fc
	goto loc_832021FC;
loc_8320215C:
	// rlwinm r31,r26,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202164:
	// rlwinm r31,r26,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 15) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_8320216C:
	// rlwinm r31,r26,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202174:
	// rlwinm r31,r26,13,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 13) & 0x1;
loc_83202178:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202180:
	// rlwinm r31,r26,12,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xF;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202188:
	// rlwinm r31,r26,8,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0x7;
	// b 0x832021fc
	goto loc_832021FC;
loc_83202190:
	// rlwinm r31,r26,5,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0x1;
	// b 0x83202178
	goto loc_83202178;
loc_83202198:
	// rlwinm r31,r26,4,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0x7;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021A0:
	// rlwinm r31,r26,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// b 0x83202178
	goto loc_83202178;
loc_832021A8:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021B4:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r31,r11,31,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021C4:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,30,30,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021D0:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021DC:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021E8:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x832021fc
	goto loc_832021FC;
loc_832021F4:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_832021FC:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83202210
	if (!ctx.cr6.eq) goto loc_83202210;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83202214
	if (ctx.cr6.eq) goto loc_83202214;
loc_83202210:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83202214:
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83202280
	if (ctx.cr6.eq) goto loc_83202280;
	// lwz r11,-12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12);
loc_83202228:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83202288
	if (!ctx.cr6.eq) goto loc_83202288;
loc_83202230:
	// lwz r6,-8(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83202248
	if (ctx.cr6.eq) goto loc_83202248;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8320224c
	if (!ctx.cr0.eq) goto loc_8320224C;
loc_83202248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320224C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8320225c
	if (ctx.cr6.eq) goto loc_8320225C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8320225C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83202294
	if (ctx.cr6.eq) goto loc_83202294;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x83202294
	if (!ctx.cr6.eq) goto loc_83202294;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202290
	if (ctx.cr0.eq) goto loc_83202290;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83202294
	goto loc_83202294;
loc_83202280:
	// lwz r11,-16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -16);
	// b 0x83202228
	goto loc_83202228;
loc_83202288:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83202230
	goto loc_83202230;
loc_83202290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202294:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83202378
	if (ctx.cr0.eq) goto loc_83202378;
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x832022bc
	if (ctx.cr0.eq) goto loc_832022BC;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x83201fd8
	ctx.lr = 0x832022B8;
	sub_83201FD8(ctx, base);
	// b 0x832022d0
	goto loc_832022D0;
loc_832022BC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x832000a8
	ctx.lr = 0x832022C4;
	sub_832000A8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x832022D0;
	sub_831FF560(ctx, base);
loc_832022D0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,-20(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831ff560
	ctx.lr = 0x832022E4;
	sub_831FF560(ctx, base);
	// lbz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83202304
	if (!ctx.cr6.eq) goto loc_83202304;
	// addi r11,r25,-32
	ctx.r11.s64 = ctx.r25.s64 + -32;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83202344
	goto loc_83202344;
loc_83202304:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8320231c
	if (!ctx.cr6.eq) goto loc_8320231C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// b 0x83202344
	goto loc_83202344;
loc_8320231C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320233c
	if (ctx.cr0.eq) goto loc_8320233C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bne cr6,0x83202334
	if (!ctx.cr6.eq) goto loc_83202334;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_83202334:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x83202344
	goto loc_83202344;
loc_8320233C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_83202344:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320234C;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83202360
	if (!ctx.cr6.eq) goto loc_83202360;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202360;
	sub_832000A8(ctx, base);
loc_83202360:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320236C;
	sub_832000A8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202378;
	sub_831FF560(ctx, base);
loc_83202378:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r14,24
	ctx.r14.s64 = ctx.r14.s64 + 24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x832020f8
	if (!ctx.cr0.eq) goto loc_832020F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832023A0"))) PPC_WEAK_FUNC(sub_832023A0);
PPC_FUNC_IMPL(__imp__sub_832023A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832023A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x832023cc
	if (!ctx.cr6.lt) goto loc_832023CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8320247c
	goto loc_8320247C;
loc_832023CC:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11112
	ctx.r11.s64 = ctx.r11.s64 + -11112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83201fd8
	ctx.lr = 0x832023E4;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20316
	ctx.r30.s64 = ctx.r11.s64 + -20316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832000a8
	ctx.lr = 0x832023F8;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,23280
	ctx.r29.s64 = ctx.r11.s64 + 23280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320240C;
	sub_831FF560(ctx, base);
	// rlwinm. r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x83202424
	if (!ctx.cr0.eq) goto loc_83202424;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202478
	if (ctx.cr0.eq) goto loc_83202478;
loc_83202424:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9668
	ctx.r4.s64 = ctx.r11.s64 + -9668;
	// bl 0x83201fd8
	ctx.lr = 0x83202434;
	sub_83201FD8(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202448
	if (ctx.cr0.eq) goto loc_83202448;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12384
	ctx.r5.s64 = ctx.r11.s64 + -12384;
	// b 0x83202450
	goto loc_83202450;
loc_83202448:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
loc_83202450:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18104
	ctx.r4.s64 = ctx.r11.s64 + -18104;
	// bl 0x831ff560
	ctx.lr = 0x83202460;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320246C;
	sub_832000A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202478;
	sub_831FF560(ctx, base);
loc_83202478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320247C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202484"))) PPC_WEAK_FUNC(sub_83202484);
PPC_FUNC_IMPL(__imp__sub_83202484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202488"))) PPC_WEAK_FUNC(sub_83202488);
PPC_FUNC_IMPL(__imp__sub_83202488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83202490;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x832024b4
	if (!ctx.cr6.lt) goto loc_832024B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83202b54
	goto loc_83202B54;
loc_832024B4:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83202b50
	if (ctx.cr6.eq) goto loc_83202B50;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// add r25,r11,r19
	ctx.r25.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-17696
	ctx.r9.s64 = ctx.r9.s64 + -17696;
	// clrlwi. r20,r10,24
	ctx.r20.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r17,20(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r26,8(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r16,r11,r25
	ctx.r16.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r24,12(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r17,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 15) & 0x1;
	// bne 0x83202504
	if (!ctx.cr0.eq) goto loc_83202504;
	// rlwinm r10,r17,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0x1;
loc_83202504:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-9668
	ctx.r30.s64 = ctx.r11.s64 + -9668;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r27,25,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x1;
	// bl 0x83201fd8
	ctx.lr = 0x83202520;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17720
	ctx.r4.s64 = ctx.r11.s64 + -17720;
	// bl 0x831ff560
	ctx.lr = 0x83202530;
	sub_831FF560(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r14,r11,-20316
	ctx.r14.s64 = ctx.r11.s64 + -20316;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x832000a8
	ctx.lr = 0x83202548;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r11,23280
	ctx.r22.s64 = ctx.r11.s64 + 23280;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x831ff560
	ctx.lr = 0x83202560;
	sub_831FF560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201fd8
	ctx.lr = 0x8320256C;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17740
	ctx.r4.s64 = ctx.r11.s64 + -17740;
	// bl 0x831ff560
	ctx.lr = 0x8320257C;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202588;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202594;
	sub_831FF560(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r23,r11,-12392
	ctx.r23.s64 = ctx.r11.s64 + -12392;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r21,r10,-12384
	ctx.r21.s64 = ctx.r10.s64 + -12384;
	// bne 0x832025bc
	if (!ctx.cr0.eq) goto loc_832025BC;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202604
	if (ctx.cr0.eq) goto loc_83202604;
loc_832025BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201fd8
	ctx.lr = 0x832025C8;
	sub_83201FD8(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bne 0x832025d8
	if (!ctx.cr0.eq) goto loc_832025D8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_832025D8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17768
	ctx.r4.s64 = ctx.r11.s64 + -17768;
	// bl 0x831ff560
	ctx.lr = 0x832025E8;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832025F4;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202600;
	sub_831FF560(ctx, base);
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
loc_83202604:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202040
	ctx.lr = 0x83202624;
	sub_83202040(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83202648
	if (ctx.cr0.eq) goto loc_83202648;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320263C;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202648;
	sub_831FF560(ctx, base);
loc_83202648:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r18,r11,-20300
	ctx.r18.s64 = ctx.r11.s64 + -20300;
	// rlwinm. r9,r27,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r27,r10,-20292
	ctx.r27.s64 = ctx.r10.s64 + -20292;
	// beq 0x832027e0
	if (ctx.cr0.eq) goto loc_832027E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202670;
	sub_832000A8(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83202684
	if (!ctx.cr6.eq) goto loc_83202684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832026b4
	if (ctx.cr6.eq) goto loc_832026B4;
loc_83202684:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r6,r11,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// addi r4,r10,-17828
	ctx.r4.s64 = ctx.r10.s64 + -17828;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x8320269C;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832026A8;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832026B4;
	sub_831FF560(ctx, base);
loc_832026B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832026c4
	if (!ctx.cr6.eq) goto loc_832026C4;
	// clrlwi. r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832026fc
	if (ctx.cr0.eq) goto loc_832026FC;
loc_832026C4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// clrlwi r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	// rlwinm r7,r17,22,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// addi r4,r11,-17884
	ctx.r4.s64 = ctx.r11.s64 + -17884;
	// rlwinm r6,r17,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832026E4;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832026F0;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832026FC;
	sub_831FF560(ctx, base);
loc_832026FC:
	// rlwinm r29,r17,27,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x83202730
	if (!ctx.cr6.gt) goto loc_83202730;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17924
	ctx.r4.s64 = ctx.r11.s64 + -17924;
	// bl 0x831ff560
	ctx.lr = 0x83202718;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202724;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202730;
	sub_831FF560(ctx, base);
loc_83202730:
	// rlwinm r28,r17,22,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83202764
	if (!ctx.cr6.lt) goto loc_83202764;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17964
	ctx.r4.s64 = ctx.r11.s64 + -17964;
	// bl 0x831ff560
	ctx.lr = 0x8320274C;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202758;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202764;
	sub_831FF560(ctx, base);
loc_83202764:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83202798
	if (!ctx.cr6.gt) goto loc_83202798;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18008
	ctx.r4.s64 = ctx.r11.s64 + -18008;
	// bl 0x831ff560
	ctx.lr = 0x83202780;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320278C;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202798;
	sub_831FF560(ctx, base);
loc_83202798:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832027ac
	if (!ctx.cr0.eq) goto loc_832027AC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_832027AC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18032
	ctx.r4.s64 = ctx.r11.s64 + -18032;
	// bl 0x831ff560
	ctx.lr = 0x832027BC;
	sub_831FF560(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832027C8;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832027D4;
	sub_831FF560(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832027E0;
	sub_832000A8(ctx, base);
loc_832027E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832027EC;
	sub_832000A8(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83202958
	if (ctx.cr6.eq) goto loc_83202958;
	// lhz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 24);
	// rlwinm. r15,r17,27,27,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// lhz r10,26(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 26);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// not r17,r11
	ctx.r17.u64 = ~ctx.r11.u64;
	// not r16,r10
	ctx.r16.u64 = ~ctx.r10.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x83202b24
	if (ctx.cr0.eq) goto loc_83202B24;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r25,r10,-20308
	ctx.r25.s64 = ctx.r10.s64 + -20308;
	// addi r21,r9,-18036
	ctx.r21.s64 = ctx.r9.s64 + -18036;
	// addi r22,r8,-18044
	ctx.r22.s64 = ctx.r8.s64 + -18044;
	// addi r19,r7,-18064
	ctx.r19.s64 = ctx.r7.s64 + -18064;
	// addi r18,r6,-18076
	ctx.r18.s64 = ctx.r6.s64 + -18076;
	// addi r20,r5,24704
	ctx.r20.s64 = ctx.r5.s64 + 24704;
	// addi r24,r4,-18084
	ctx.r24.s64 = ctx.r4.s64 + -18084;
	// addi r28,r11,-12000
	ctx.r28.s64 = ctx.r11.s64 + -12000;
loc_83202860:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r14,3(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r14,28
	ctx.r30.u64 = ctx.r14.u32 & 0xF;
	// and r27,r11,r17
	ctx.r27.u64 = ctx.r11.u64 & ctx.r17.u64;
	// and r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 & ctx.r16.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202884;
	sub_832000A8(ctx, base);
	// rlwinm r11,r14,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x831ff560
	ctx.lr = 0x83202898;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832028b0
	if (ctx.cr6.eq) goto loc_832028B0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832028B0;
	sub_831FF560(ctx, base);
loc_832028B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x832028c0
	if (ctx.cr6.eq) goto loc_832028C0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x832028cc
	goto loc_832028CC;
loc_832028C0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832028d4
	if (ctx.cr6.eq) goto loc_832028D4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_832028CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832028D4;
	sub_831FF560(ctx, base);
loc_832028D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x832000a8
	ctx.lr = 0x832028E0;
	sub_832000A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x831ff560
	ctx.lr = 0x832028F4;
	sub_831FF560(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8320291c
	if (ctx.cr6.eq) goto loc_8320291C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,64
	ctx.r10.s64 = ctx.r28.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831ff560
	ctx.lr = 0x8320291C;
	sub_831FF560(ctx, base);
loc_8320291C:
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x832000a8
	ctx.lr = 0x8320292C;
	sub_832000A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ff560
	ctx.lr = 0x83202938;
	sub_831FF560(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x83202860
	if (ctx.cr6.lt) goto loc_83202860;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x83202b24
	goto loc_83202B24;
loc_83202958:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r6,-20308
	ctx.r24.s64 = ctx.r6.s64 + -20308;
	// addi r21,r7,-18036
	ctx.r21.s64 = ctx.r7.s64 + -18036;
	// addi r20,r8,24704
	ctx.r20.s64 = ctx.r8.s64 + 24704;
	// addi r23,r9,-18084
	ctx.r23.s64 = ctx.r9.s64 + -18084;
	// addi r26,r10,-12000
	ctx.r26.s64 = ctx.r10.s64 + -12000;
	// beq cr6,0x83202a4c
	if (ctx.cr6.eq) goto loc_83202A4C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r27,r11,-18044
	ctx.r27.s64 = ctx.r11.s64 + -18044;
loc_832029A0:
	// lbz r15,3(r30)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r15,28
	ctx.r29.u64 = ctx.r15.u32 & 0xF;
	// bl 0x832000a8
	ctx.lr = 0x832029B4;
	sub_832000A8(ctx, base);
	// rlwinm r11,r15,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x831ff560
	ctx.lr = 0x832029C8;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832029e0
	if (ctx.cr6.eq) goto loc_832029E0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x832029E0;
	sub_831FF560(ctx, base);
loc_832029E0:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x832029EC;
	sub_832000A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x831ff560
	ctx.lr = 0x83202A00;
	sub_831FF560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x83202a28
	if (ctx.cr6.eq) goto loc_83202A28;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831ff560
	ctx.lr = 0x83202A28;
	sub_831FF560(ctx, base);
loc_83202A28:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202A34;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202A40;
	sub_831FF560(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832029a0
	if (!ctx.cr0.eq) goto loc_832029A0;
loc_83202A4C:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// rlwinm. r11,r17,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r16
	ctx.r30.u64 = ctx.r10.u64 + ctx.r16.u64;
	// beq 0x83202b24
	if (ctx.cr0.eq) goto loc_83202B24;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r27,r11,-18092
	ctx.r27.s64 = ctx.r11.s64 + -18092;
loc_83202A78:
	// lbz r25,3(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r25,28
	ctx.r29.u64 = ctx.r25.u32 & 0xF;
	// bl 0x832000a8
	ctx.lr = 0x83202A8C;
	sub_832000A8(ctx, base);
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x831ff560
	ctx.lr = 0x83202AA0;
	sub_831FF560(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83202ab8
	if (ctx.cr6.eq) goto loc_83202AB8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202AB8;
	sub_831FF560(ctx, base);
loc_83202AB8:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202AC4;
	sub_832000A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x831ff560
	ctx.lr = 0x83202AD8;
	sub_831FF560(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x83202b00
	if (ctx.cr6.eq) goto loc_83202B00;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x831ff560
	ctx.lr = 0x83202B00;
	sub_831FF560(ctx, base);
loc_83202B00:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202B0C;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202B18;
	sub_831FF560(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83202a78
	if (!ctx.cr0.eq) goto loc_83202A78;
loc_83202B24:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202B30;
	sub_832000A8(ctx, base);
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202b50
	if (ctx.cr0.eq) goto loc_83202B50;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a8
	ctx.lr = 0x83202B44;
	sub_832000A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202B50;
	sub_831FF560(ctx, base);
loc_83202B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83202B54:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202B5C"))) PPC_WEAK_FUNC(sub_83202B5C);
PPC_FUNC_IMPL(__imp__sub_83202B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202B60"))) PPC_WEAK_FUNC(sub_83202B60);
PPC_FUNC_IMPL(__imp__sub_83202B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83202B68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83202c8c
	if (!ctx.cr6.eq) goto loc_83202C8C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x83202c38
	if (ctx.cr6.lt) goto loc_83202C38;
	// beq cr6,0x83202be0
	if (ctx.cr6.eq) goto loc_83202BE0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x83202ba8
	if (ctx.cr6.lt) goto loc_83202BA8;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x83202c7c
	goto loc_83202C7C;
loc_83202BA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// bl 0x83201fd8
	ctx.lr = 0x83202BB8;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,-17668
	ctx.r4.s64 = ctx.r11.s64 + -17668;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831ff560
	ctx.lr = 0x83202BDC;
	sub_831FF560(ctx, base);
	// b 0x83202c7c
	goto loc_83202C7C;
loc_83202BE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6008
	ctx.r4.s64 = ctx.r11.s64 + 6008;
	// bl 0x83201fd8
	ctx.lr = 0x83202BF0;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-17676
	ctx.r4.s64 = ctx.r11.s64 + -17676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202C04;
	sub_831FF560(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,32256
	ctx.r28.s64 = ctx.r11.s64 + 32256;
loc_83202C10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202C1C;
	sub_831FF560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ff890
	ctx.lr = 0x83202C28;
	sub_831FF890(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83202c10
	if (!ctx.cr0.eq) goto loc_83202C10;
	// b 0x83202c7c
	goto loc_83202C7C;
loc_83202C38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8072
	ctx.r4.s64 = ctx.r11.s64 + 8072;
	// bl 0x83201fd8
	ctx.lr = 0x83202C48;
	sub_83201FD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83202c60
	if (ctx.cr6.eq) goto loc_83202C60;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r11,-12384
	ctx.r6.s64 = ctx.r11.s64 + -12384;
	// b 0x83202c68
	goto loc_83202C68;
loc_83202C60:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r11,-12392
	ctx.r6.s64 = ctx.r11.s64 + -12392;
loc_83202C68:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-17688
	ctx.r4.s64 = ctx.r11.s64 + -17688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff560
	ctx.lr = 0x83202C7C;
	sub_831FF560(ctx, base);
loc_83202C7C:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x831ff560
	ctx.lr = 0x83202C8C;
	sub_831FF560(ctx, base);
loc_83202C8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202C98"))) PPC_WEAK_FUNC(sub_83202C98);
PPC_FUNC_IMPL(__imp__sub_83202C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83202d1c
	if (ctx.cr6.eq) goto loc_83202D1C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-31968
	ctx.r6.s64 = -2095054848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,11104
	ctx.r5.s64 = ctx.r6.s64 + 11104;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82e6ef90
	ctx.lr = 0x83202CF4;
	sub_82E6EF90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83202d20
	if (ctx.cr0.lt) goto loc_83202D20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x832000a8
	ctx.lr = 0x83202D0C;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x831ff560
	ctx.lr = 0x83202D1C;
	sub_831FF560(ctx, base);
loc_83202D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83202D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83202D34"))) PPC_WEAK_FUNC(sub_83202D34);
PPC_FUNC_IMPL(__imp__sub_83202D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202D38"))) PPC_WEAK_FUNC(sub_83202D38);
PPC_FUNC_IMPL(__imp__sub_83202D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83202d70
	if (!ctx.cr6.eq) goto loc_83202D70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83202dcc
	goto loc_83202DCC;
loc_83202D70:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,11104
	ctx.r5.s64 = ctx.r9.s64 + 11104;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82e6ef90
	ctx.lr = 0x83202DA0;
	sub_82E6EF90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83202dcc
	if (ctx.cr0.lt) goto loc_83202DCC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x832000a8
	ctx.lr = 0x83202DB8;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x831ff560
	ctx.lr = 0x83202DC8;
	sub_831FF560(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83202DCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83202DE4"))) PPC_WEAK_FUNC(sub_83202DE4);
PPC_FUNC_IMPL(__imp__sub_83202DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202DE8"))) PPC_WEAK_FUNC(sub_83202DE8);
PPC_FUNC_IMPL(__imp__sub_83202DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83202DF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83202488
	ctx.lr = 0x83202E2C;
	sub_83202488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83202e80
	if (ctx.cr0.lt) goto loc_83202E80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202d38
	ctx.lr = 0x83202E50;
	sub_83202D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83202e80
	if (ctx.cr0.lt) goto loc_83202E80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201590
	ctx.lr = 0x83202E80;
	sub_83201590(ctx, base);
loc_83202E80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202E88"))) PPC_WEAK_FUNC(sub_83202E88);
PPC_FUNC_IMPL(__imp__sub_83202E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83202E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832031b0
	if (ctx.cr6.eq) goto loc_832031B0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x832031b0
	if (ctx.cr6.lt) goto loc_832031B0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x832031b0
	if (ctx.cr6.eq) goto loc_832031B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi. r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x832031b0
	if (!ctx.cr0.eq) goto loc_832031B0;
	// rlwinm r11,r28,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-17424
	ctx.r4.s64 = ctx.r10.s64 + -17424;
	// bl 0x832000a8
	ctx.lr = 0x83202EF0;
	sub_832000A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17552
	ctx.r4.s64 = ctx.r11.s64 + -17552;
	// bl 0x832000a8
	ctx.lr = 0x83202F00;
	sub_832000A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17608
	ctx.r4.s64 = ctx.r11.s64 + -17608;
	// bl 0x832000a8
	ctx.lr = 0x83202F10;
	sub_832000A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-11088(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11088);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x832000a8
	ctx.lr = 0x83202F34;
	sub_832000A8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17628
	ctx.r4.s64 = ctx.r11.s64 + -17628;
	// bl 0x831ff560
	ctx.lr = 0x83202F44;
	sub_831FF560(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x83202f6c
	if (ctx.cr6.gt) goto loc_83202F6C;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11096
	ctx.r11.s64 = ctx.r11.s64 + -11096;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,6792
	ctx.r4.s64 = ctx.r9.s64 + 6792;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83202f78
	goto loc_83202F78;
loc_83202F6C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-17644
	ctx.r4.s64 = ctx.r11.s64 + -17644;
loc_83202F78:
	// bl 0x831ff560
	ctx.lr = 0x83202F7C;
	sub_831FF560(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11748
	ctx.r4.s64 = ctx.r11.s64 + -11748;
	// bl 0x831ff560
	ctx.lr = 0x83202F8C;
	sub_831FF560(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-11100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11100);
	// bl 0x832000a8
	ctx.lr = 0x83202F9C;
	sub_832000A8(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-11104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11104);
	// bl 0x832000a8
	ctx.lr = 0x83202FAC;
	sub_832000A8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832023a0
	ctx.lr = 0x83202FC4;
	sub_832023A0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ffff0
	ctx.lr = 0x83202FD8;
	sub_831FFFF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83202488
	ctx.lr = 0x83202FFC;
	sub_83202488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83203050
	if (ctx.cr0.lt) goto loc_83203050;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83202d38
	ctx.lr = 0x83203020;
	sub_83202D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83203050
	if (ctx.cr0.lt) goto loc_83203050;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83201590
	ctx.lr = 0x83203050;
	sub_83201590(ctx, base);
loc_83203050:
	// rlwinm. r27,r28,0,20,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x83203078
	if (ctx.cr0.eq) goto loc_83203078;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201950
	ctx.lr = 0x8320306C;
	sub_83201950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83203080
	if (!ctx.cr0.lt) goto loc_83203080;
	// b 0x832031b8
	goto loc_832031B8;
loc_83203078:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832031b8
	if (ctx.cr6.lt) goto loc_832031B8;
loc_83203080:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203158
	if (ctx.cr0.eq) goto loc_83203158;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9676
	ctx.r4.s64 = ctx.r11.s64 + -9676;
	// bl 0x83201fd8
	ctx.lr = 0x8320309C;
	sub_83201FD8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x832000a8
	ctx.lr = 0x832030AC;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x831ff560
	ctx.lr = 0x832030BC;
	sub_831FF560(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83202488
	ctx.lr = 0x832030D8;
	sub_83202488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83202d38
	ctx.lr = 0x832030FC;
	sub_83202D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83201590
	ctx.lr = 0x8320312C;
	sub_83201590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83203158
	if (ctx.cr6.eq) goto loc_83203158;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201950
	ctx.lr = 0x83203150;
	sub_83201950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
loc_83203158:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83203198
	if (ctx.cr6.eq) goto loc_83203198;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x832000a8
	ctx.lr = 0x83203174;
	sub_832000A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x83200df8
	ctx.lr = 0x83203180;
	sub_83200DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832031b8
	if (ctx.cr0.lt) goto loc_832031B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x832000a8
	ctx.lr = 0x83203198;
	sub_832000A8(ctx, base);
loc_83203198:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7164
	ctx.r4.s64 = ctx.r11.s64 + 7164;
	// bl 0x832000a8
	ctx.lr = 0x832031A8;
	sub_832000A8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x832031b8
	goto loc_832031B8;
loc_832031B0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_832031B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832031C0"))) PPC_WEAK_FUNC(sub_832031C0);
PPC_FUNC_IMPL(__imp__sub_832031C0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x83202e88
	sub_83202E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832031C8"))) PPC_WEAK_FUNC(sub_832031C8);
PPC_FUNC_IMPL(__imp__sub_832031C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832031DC"))) PPC_WEAK_FUNC(sub_832031DC);
PPC_FUNC_IMPL(__imp__sub_832031DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832031E0"))) PPC_WEAK_FUNC(sub_832031E0);
PPC_FUNC_IMPL(__imp__sub_832031E0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832031F4"))) PPC_WEAK_FUNC(sub_832031F4);
PPC_FUNC_IMPL(__imp__sub_832031F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832031F8"))) PPC_WEAK_FUNC(sub_832031F8);
PPC_FUNC_IMPL(__imp__sub_832031F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x83203238
	if (ctx.cr6.lt) goto loc_83203238;
	// beq cr6,0x8320322c
	if (ctx.cr6.eq) goto loc_8320322C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x83203224
	if (ctx.cr6.lt) goto loc_83203224;
	// beq cr6,0x83203218
	if (ctx.cr6.eq) goto loc_83203218;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83203218:
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_83203224:
	// lis r3,4
	ctx.r3.s64 = 262144;
	// b 0x83203230
	goto loc_83203230;
loc_8320322C:
	// lis r3,2
	ctx.r3.s64 = 131072;
loc_83203230:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_83203238:
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203240"))) PPC_WEAK_FUNC(sub_83203240);
PPC_FUNC_IMPL(__imp__sub_83203240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8839
	ctx.r11.u64 = ctx.r11.u64 | 8839;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832033f8
	if (ctx.cr6.gt) goto loc_832033F8;
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8867
	ctx.r11.u64 = ctx.r11.u64 | 8867;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8320333c
	if (ctx.cr6.gt) goto loc_8320333C;
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8538
	ctx.r11.u64 = ctx.r11.u64 | 8538;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832032d4
	if (ctx.cr6.gt) goto loc_832032D4;
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// ori r11,r11,10374
	ctx.r11.u64 = ctx.r11.u64 | 10374;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8282
	ctx.r11.u64 = ctx.r11.u64 | 8282;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8325
	ctx.r11.u64 = ctx.r11.u64 | 8325;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8327
	ctx.r11.u64 = ctx.r11.u64 | 8327;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8355
	ctx.r11.u64 = ctx.r11.u64 | 8355;
loc_832032C4:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83203514
	if (!ctx.cr6.eq) goto loc_83203514;
loc_832032CC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_832032D4:
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8582
	ctx.r11.u64 = ctx.r11.u64 | 8582;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83203514
	if (ctx.cr6.lt) goto loc_83203514;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8583
	ctx.r11.u64 = ctx.r11.u64 | 8583;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8611
	ctx.r11.u64 = ctx.r11.u64 | 8611;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8794
	ctx.r11.u64 = ctx.r11.u64 | 8794;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8837
	ctx.r11.u64 = ctx.r11.u64 | 8837;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,8839
	ctx.r11.u64 = ctx.r11.u64 | 8839;
loc_8320332C:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83203514
	if (ctx.cr6.gt) goto loc_83203514;
loc_83203334:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8320333C:
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9126
	ctx.r11.u64 = ctx.r11.u64 | 9126;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8320339c
	if (ctx.cr6.gt) goto loc_8320339C;
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9050
	ctx.r11.u64 = ctx.r11.u64 | 9050;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9056
	ctx.r11.u64 = ctx.r11.u64 | 9056;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832032cc
	if (ctx.cr6.eq) goto loc_832032CC;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9093
	ctx.r11.u64 = ctx.r11.u64 | 9093;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9095
	ctx.r11.u64 = ctx.r11.u64 | 9095;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r11,r11,9123
	ctx.r11.u64 = ctx.r11.u64 | 9123;
	// b 0x832032c4
	goto loc_832032C4;
loc_8320339C:
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8327
	ctx.r11.u64 = ctx.r11.u64 | 8327;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8335
	ctx.r11.u64 = ctx.r11.u64 | 8335;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8337
	ctx.r11.u64 = ctx.r11.u64 | 8337;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8583
	ctx.r11.u64 = ctx.r11.u64 | 8583;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8591
	ctx.r11.u64 = ctx.r11.u64 | 8591;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8593
	ctx.r11.u64 = ctx.r11.u64 | 8593;
	// b 0x8320332c
	goto loc_8320332C;
loc_832033F8:
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// ori r11,r11,8866
	ctx.r11.u64 = ctx.r11.u64 | 8866;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832034b0
	if (ctx.cr6.gt) goto loc_832034B0;
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// ori r11,r11,8281
	ctx.r11.u64 = ctx.r11.u64 | 8281;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83203488
	if (ctx.cr6.gt) goto loc_83203488;
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8848
	ctx.r11.u64 = ctx.r11.u64 | 8848;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83203514
	if (ctx.cr6.lt) goto loc_83203514;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,8849
	ctx.r11.u64 = ctx.r11.u64 | 8849;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,9095
	ctx.r11.u64 = ctx.r11.u64 | 9095;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,9103
	ctx.r11.u64 = ctx.r11.u64 | 9103;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203514
	if (!ctx.cr6.gt) goto loc_83203514;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,9105
	ctx.r11.u64 = ctx.r11.u64 | 9105;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83203334
	if (!ctx.cr6.gt) goto loc_83203334;
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// ori r11,r11,9145
	ctx.r11.u64 = ctx.r11.u64 | 9145;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83203514
	if (!ctx.cr6.eq) goto loc_83203514;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83203488:
	// addis r11,r3,-44
	ctx.r11.s64 = ctx.r3.s64 + -2883584;
	// addic. r11,r11,-8354
	ctx.xer.ca = ctx.r11.u32 > 8353;
	ctx.r11.s64 = ctx.r11.s64 + -8354;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832034e8
	if (ctx.cr0.eq) goto loc_832034E8;
	// cmplwi cr6,r11,183
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 183, ctx.xer);
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// cmplwi cr6,r11,439
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 439, ctx.xer);
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// b 0x83203514
	goto loc_83203514;
loc_832034B0:
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// ori r11,r11,32929
	ctx.r11.u64 = ctx.r11.u64 | 32929;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832034f0
	if (ctx.cr6.gt) goto loc_832034F0;
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// addis r11,r3,-44
	ctx.r11.s64 = ctx.r3.s64 + -2883584;
	// addic. r11,r11,-9049
	ctx.xer.ca = ctx.r11.u32 > 9048;
	ctx.r11.s64 = ctx.r11.s64 + -9049;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832034e8
	if (ctx.cr0.eq) goto loc_832034E8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// beq cr6,0x832034e8
	if (ctx.cr6.eq) goto loc_832034E8;
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// bne cr6,0x83203514
	if (!ctx.cr6.eq) goto loc_83203514;
loc_832034E8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_832034F0:
	// addis r11,r3,-45
	ctx.r11.s64 = ctx.r3.s64 + -2949120;
	// addic. r11,r11,32351
	ctx.xer.ca = ctx.r11.u32 > 4294934944;
	ctx.r11.s64 = ctx.r11.s64 + 32351;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203334
	if (ctx.cr0.eq) goto loc_83203334;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
	// cmplwi cr6,r11,515
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 515, ctx.xer);
	// beq cr6,0x83203334
	if (ctx.cr6.eq) goto loc_83203334;
loc_83203514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320351C"))) PPC_WEAK_FUNC(sub_8320351C);
PPC_FUNC_IMPL(__imp__sub_8320351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203520"))) PPC_WEAK_FUNC(sub_83203520);
PPC_FUNC_IMPL(__imp__sub_83203520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83203578
	if (ctx.cr6.lt) goto loc_83203578;
	// beq cr6,0x8320356c
	if (ctx.cr6.eq) goto loc_8320356C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83203564
	if (ctx.cr6.lt) goto loc_83203564;
	// beq cr6,0x83203558
	if (ctx.cr6.eq) goto loc_83203558;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8320357c
	goto loc_8320357C;
loc_83203558:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8320357c
	goto loc_8320357C;
loc_83203564:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x83203570
	goto loc_83203570;
loc_8320356C:
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_83203570:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8320357c
	goto loc_8320357C;
loc_83203578:
	// lis r11,4
	ctx.r11.s64 = 262144;
loc_8320357C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x83203240
	ctx.lr = 0x83203588;
	sub_83203240(ctx, base);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320359C"))) PPC_WEAK_FUNC(sub_8320359C);
PPC_FUNC_IMPL(__imp__sub_8320359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832035A0"))) PPC_WEAK_FUNC(sub_832035A0);
PPC_FUNC_IMPL(__imp__sub_832035A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832035A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832035c8
	if (!ctx.cr6.eq) goto loc_832035C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwbrx r11,0,r3
	PPC_STORE_U32(ctx.r3.u32, __builtin_bswap32(ctx.r11.u32));
	// b 0x832036f0
	goto loc_832036F0;
loc_832035C8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832035e4
	if (!ctx.cr6.eq) goto loc_832035E4;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sthbrx r11,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x832036f0
	goto loc_832036F0;
loc_832035E4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83203614
	if (!ctx.cr6.eq) goto loc_83203614;
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sthbrx r9,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r9.u16));
	// sthbrx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x832036f0
	goto loc_832036F0;
loc_83203614:
	// clrlwi. r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// beq 0x832036e4
	if (ctx.cr0.eq) goto loc_832036E4;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x832036e4
	if (ctx.cr6.eq) goto loc_832036E4;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// beq cr6,0x83203684
	if (ctx.cr6.eq) goto loc_83203684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832036f0
	if (ctx.cr6.eq) goto loc_832036F0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// neg r27,r31
	ctx.r27.s64 = -ctx.r31.s64;
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83203660:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x83203670;
	sub_82CB1160(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x83203660
	if (!ctx.cr0.eq) goto loc_83203660;
	// b 0x832036f0
	goto loc_832036F0;
loc_83203684:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm. r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x832036f0
	if (ctx.cr0.eq) goto loc_832036F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r6,r31
	ctx.r6.s64 = -ctx.r31.s64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_832036A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832036d0
	if (ctx.cr6.eq) goto loc_832036D0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_832036B4:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbx r5,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u8);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x832036b4
	if (!ctx.cr0.eq) goto loc_832036B4;
loc_832036D0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bne 0x832036a0
	if (!ctx.cr0.eq) goto loc_832036A0;
	// b 0x832036f0
	goto loc_832036F0;
loc_832036E4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832036f0
	if (ctx.cr6.eq) goto loc_832036F0;
	// bl 0x82cb1160
	ctx.lr = 0x832036F0;
	sub_82CB1160(ctx, base);
loc_832036F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832036F8"))) PPC_WEAK_FUNC(sub_832036F8);
PPC_FUNC_IMPL(__imp__sub_832036F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83203700;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r28,r29,16,16,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// lis r8,1029
	ctx.r8.s64 = 67436544;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// lis r6,3085
	ctx.r6.s64 = 202178560;
	// sraw. r30,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r30.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ori r9,r9,515
	ctx.r9.u64 = ctx.r9.u64 | 515;
	// ori r8,r8,1543
	ctx.r8.u64 = ctx.r8.u64 | 1543;
	// ori r7,r7,2571
	ctx.r7.u64 = ctx.r7.u64 | 2571;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r11,r6,3599
	ctx.r11.u64 = ctx.r6.u64 | 3599;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq 0x83203774
	if (ctx.cr0.eq) goto loc_83203774;
loc_83203758:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203768;
	sub_832035A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x83203758
	if (!ctx.cr0.eq) goto loc_83203758;
loc_83203774:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203784"))) PPC_WEAK_FUNC(sub_83203784);
PPC_FUNC_IMPL(__imp__sub_83203784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203788"))) PPC_WEAK_FUNC(sub_83203788);
PPC_FUNC_IMPL(__imp__sub_83203788) {
	PPC_FUNC_PROLOGUE();
	// b 0x832035a0
	sub_832035A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320378C"))) PPC_WEAK_FUNC(sub_8320378C);
PPC_FUNC_IMPL(__imp__sub_8320378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203790"))) PPC_WEAK_FUNC(sub_83203790);
PPC_FUNC_IMPL(__imp__sub_83203790) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203798"))) PPC_WEAK_FUNC(sub_83203798);
PPC_FUNC_IMPL(__imp__sub_83203798) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832037A0"))) PPC_WEAK_FUNC(sub_832037A0);
PPC_FUNC_IMPL(__imp__sub_832037A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832037A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832037d4
	if (ctx.cr0.eq) goto loc_832037D4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// b 0x832037e8
	goto loc_832037E8;
loc_832037D4:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// neg r26,r7
	ctx.r26.s64 = -ctx.r7.s64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r27,r11,r4
	ctx.r27.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_832037E8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8320383c
	if (ctx.cr6.eq) goto loc_8320383C;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_832037F4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8320382c
	if (ctx.cr6.eq) goto loc_8320382C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83203808:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203818;
	sub_832035A0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x83203808
	if (!ctx.cr0.eq) goto loc_83203808;
loc_8320382C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bne 0x832037f4
	if (!ctx.cr0.eq) goto loc_832037F4;
loc_8320383C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203844"))) PPC_WEAK_FUNC(sub_83203844);
PPC_FUNC_IMPL(__imp__sub_83203844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203848"))) PPC_WEAK_FUNC(sub_83203848);
PPC_FUNC_IMPL(__imp__sub_83203848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83203850;
	__savegprlr_24(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x83203920
	if (ctx.cr6.eq) goto loc_83203920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r3,-12
	ctx.r9.s64 = ctx.r3.s64 + -12;
loc_8320388C:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83203908
	if (!ctx.cr6.eq) goto loc_83203908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832038dc
	if (ctx.cr6.eq) goto loc_832038DC;
	// lhz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_832038A8:
	// lhz r25,2(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832038dc
	if (!ctx.cr6.lt) goto loc_832038DC;
	// lwz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r24,r10,12
	ctx.r24.s64 = ctx.r10.s64 + 12;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r25,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r25.u32);
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r25,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r25.u32);
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r25,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r25.u32);
	// bne 0x832038a8
	if (!ctx.cr0.eq) goto loc_832038A8;
loc_832038DC:
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_83203908:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8320388c
	if (!ctx.cr6.eq) goto loc_8320388C;
loc_83203920:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83203a00
	if (ctx.cr6.eq) goto loc_83203A00;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
loc_8320392C:
	// lhz r11,-2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + -2);
	// subf. r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203950
	if (ctx.cr0.eq) goto loc_83203950;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
loc_83203950:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8320399c
	if (ctx.cr6.lt) goto loc_8320399C;
	// beq cr6,0x83203990
	if (ctx.cr6.eq) goto loc_83203990;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83203988
	if (ctx.cr6.lt) goto loc_83203988;
	// beq cr6,0x8320397c
	if (ctx.cr6.eq) goto loc_8320397C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x832039a0
	goto loc_832039A0;
loc_8320397C:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// b 0x832039a0
	goto loc_832039A0;
loc_83203988:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// b 0x83203994
	goto loc_83203994;
loc_83203990:
	// lis r9,2
	ctx.r9.s64 = 131072;
loc_83203994:
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// b 0x832039a0
	goto loc_832039A0;
loc_8320399C:
	// lis r9,4
	ctx.r9.s64 = 262144;
loc_832039A0:
	// bl 0x83203240
	ctx.lr = 0x832039A4;
	sub_83203240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832039d4
	if (ctx.cr0.eq) goto loc_832039D4;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x832039d0
	if (ctx.cr0.eq) goto loc_832039D0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_832039C4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832039c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832039C4;
loc_832039D0:
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
loc_832039D4:
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// bne 0x8320392c
	if (!ctx.cr0.eq) goto loc_8320392C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83203a00
	if (ctx.cr6.eq) goto loc_83203A00;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832037a0
	ctx.lr = 0x83203A00;
	sub_832037A0(ctx, base);
loc_83203A00:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203A08"))) PPC_WEAK_FUNC(sub_83203A08);
PPC_FUNC_IMPL(__imp__sub_83203A08) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v1
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203A18"))) PPC_WEAK_FUNC(sub_83203A18);
PPC_FUNC_IMPL(__imp__sub_83203A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83203A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r31,r22,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF;
	// ori r10,r10,515
	ctx.r10.u64 = ctx.r10.u64 | 515;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// li r26,16
	ctx.r26.s64 = 16;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// ori r9,r9,1543
	ctx.r9.u64 = ctx.r9.u64 | 1543;
	// ori r8,r8,2571
	ctx.r8.u64 = ctx.r8.u64 | 2571;
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// sraw. r11,r26,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r11.s64 = ctx.r26.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// beq 0x83203aa8
	if (ctx.cr0.eq) goto loc_83203AA8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_83203A8C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203A9C;
	sub_832035A0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x83203a8c
	if (!ctx.cr0.eq) goto loc_83203A8C;
loc_83203AA8:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r21,r8,r11
	ctx.r21.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x83203ae4
	if (!ctx.cr6.lt) goto loc_83203AE4;
	// li r24,-16
	ctx.r24.s64 = -16;
	// li r27,-128
	ctx.r27.s64 = -128;
	// neg r28,r23
	ctx.r28.s64 = -ctx.r23.s64;
	// b 0x83203af4
	goto loc_83203AF4;
loc_83203AE4:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// li r27,128
	ctx.r27.s64 = 128;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_83203AF4:
	// slw r31,r25,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r11,8
	ctx.r11.s64 = 8;
loc_83203B04:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83203b04
	if (!ctx.cr0.eq) goto loc_83203B04;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203b5c
	if (ctx.cr0.eq) goto loc_83203B5C;
loc_83203B24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83203b5c
	if (ctx.cr6.eq) goto loc_83203B5C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203B3C;
	sub_832035A0(ctx, base);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r31,r21,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r21.s64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x83203b24
	if (!ctx.cr0.eq) goto loc_83203B24;
loc_83203B5C:
	// subf r11,r26,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r26.s64;
	// subf r10,r26,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r26.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrlwi. r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83203bac
	if (ctx.cr0.eq) goto loc_83203BAC;
loc_83203B78:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x83203bac
	if (ctx.cr6.lt) goto loc_83203BAC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// clrlwi. r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// vperm128 v63,v63,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x83203b78
	if (!ctx.cr0.eq) goto loc_83203B78;
loc_83203BAC:
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x83203c54
	if (ctx.cr6.lt) goto loc_83203C54;
loc_83203BB4:
	// dcbz r0,r11
	memset(base + ((ctx.r11.u32) & ~31), 0, 32);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// addi r31,r31,-128
	ctx.r31.s64 = ctx.r31.s64 + -128;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v63,r9,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lvx128 v62,r8,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r7,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r6,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stvx128 v63,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r4,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r30,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r5,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// vperm128 v61,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bge cr6,0x83203bb4
	if (!ctx.cr6.lt) goto loc_83203BB4;
loc_83203C54:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x83203c80
	if (ctx.cr6.lt) goto loc_83203C80;
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
loc_83203C60:
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x83203c60
	if (!ctx.cr0.eq) goto loc_83203C60;
loc_83203C80:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83203cb8
	if (ctx.cr6.eq) goto loc_83203CB8;
loc_83203C98:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203CA8;
	sub_832035A0(ctx, base);
	// subf. r31,r21,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r21.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// bne 0x83203c98
	if (!ctx.cr0.eq) goto loc_83203C98;
loc_83203CB8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203CC0"))) PPC_WEAK_FUNC(sub_83203CC0);
PPC_FUNC_IMPL(__imp__sub_83203CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x83203CC8;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r30,r21,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r8,1029
	ctx.r8.s64 = 67436544;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// lis r6,3085
	ctx.r6.s64 = 202178560;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r9,515
	ctx.r9.u64 = ctx.r9.u64 | 515;
	// ori r8,r8,1543
	ctx.r8.u64 = ctx.r8.u64 | 1543;
	// ori r7,r7,2571
	ctx.r7.u64 = ctx.r7.u64 | 2571;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r10,r6,3599
	ctx.r10.u64 = ctx.r6.u64 | 3599;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// beq 0x83203d4c
	if (ctx.cr0.eq) goto loc_83203D4C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83203D30:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203D40;
	sub_832035A0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bne 0x83203d30
	if (!ctx.cr0.eq) goto loc_83203D30;
loc_83203D4C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r20,r10,r11
	ctx.r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r30,r27,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x83203d7c
	if (!ctx.cr6.lt) goto loc_83203D7C;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
loc_83203D7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_83203D84:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x83203d84
	if (ctx.cr6.lt) goto loc_83203D84;
	// add r11,r31,r22
	ctx.r11.u64 = ctx.r31.u64 + ctx.r22.u64;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203dd4
	if (ctx.cr0.eq) goto loc_83203DD4;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// b 0x83203dd4
	goto loc_83203DD4;
loc_83203DB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83203ddc
	if (ctx.cr6.eq) goto loc_83203DDC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203DCC;
	sub_832035A0(ctx, base);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// subf r30,r20,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r20.s64;
loc_83203DD4:
	// clrlwi. r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83203db4
	if (!ctx.cr0.eq) goto loc_83203DB4;
loc_83203DDC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi. r10,r31,25
	ctx.r10.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq 0x83203e10
	if (ctx.cr0.eq) goto loc_83203E10;
loc_83203DEC:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x83203e10
	if (ctx.cr6.lt) goto loc_83203E10;
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// clrlwi. r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83203dec
	if (!ctx.cr0.eq) goto loc_83203DEC;
loc_83203E10:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x83203efc
	if (!ctx.cr6.gt) goto loc_83203EFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r30,-129
	ctx.r11.s64 = ctx.r30.s64 + -129;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r29,r10,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r28,r10,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r27,r10,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r26,r10,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r25,r10,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r24,r10,r7
	ctx.r24.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r23,r10,r6
	ctx.r23.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
loc_83203E64:
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r31
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r5,r25,r11
	ctx.r5.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r4,r24,r11
	ctx.r4.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lvx128 v62,r0,r9
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r3,r23,r11
	ctx.r3.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lvx128 v61,r0,r8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r6,r26,r11
	ctx.r6.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x83203e64
	if (!ctx.cr0.eq) goto loc_83203E64;
loc_83203EFC:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x83203f24
	if (ctx.cr6.lt) goto loc_83203F24;
	// rlwinm r11,r30,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
loc_83203F08:
	// lvx128 v63,r0,r31
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x83203f08
	if (!ctx.cr0.eq) goto loc_83203F08;
loc_83203F24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83203f48
	if (ctx.cr6.eq) goto loc_83203F48;
loc_83203F2C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832035a0
	ctx.lr = 0x83203F3C;
	sub_832035A0(ctx, base);
	// subf. r30,r20,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r20.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// bne 0x83203f2c
	if (!ctx.cr0.eq) goto loc_83203F2C;
loc_83203F48:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203F50"))) PPC_WEAK_FUNC(sub_83203F50);
PPC_FUNC_IMPL(__imp__sub_83203F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83203F58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r25,r23,16,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// neg r24,r6
	ctx.r24.s64 = -ctx.r6.s64;
	// blt cr6,0x83203f80
	if (ctx.cr6.lt) goto loc_83203F80;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_83203F80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832040d4
	if (ctx.cr6.eq) goto loc_832040D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83203f98
	if (!ctx.cr6.eq) goto loc_83203F98;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832040d4
	if (ctx.cr6.eq) goto loc_832040D4;
loc_83203F98:
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83203fb8
	if (ctx.cr0.eq) goto loc_83203FB8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x83203fcc
	goto loc_83203FCC;
loc_83203FB8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// neg r26,r6
	ctx.r26.s64 = -ctx.r6.s64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_83203FCC:
	// bl 0x82bea250
	ctx.lr = 0x83203FD0;
	sub_82BEA250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83203fe4
	if (ctx.cr0.eq) goto loc_83203FE4;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x83203fe8
	if (ctx.cr0.eq) goto loc_83203FE8;
loc_83203FE4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83203FE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bea250
	ctx.lr = 0x83203FF0;
	sub_82BEA250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83204004
	if (ctx.cr0.eq) goto loc_83204004;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x83204008
	if (ctx.cr0.eq) goto loc_83204008;
loc_83204004:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83204008:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x832040ac
	if (ctx.cr6.eq) goto loc_832040AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832040ac
	if (ctx.cr6.eq) goto loc_832040AC;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// bgt cr6,0x832040ac
	if (ctx.cr6.gt) goto loc_832040AC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832040ac
	if (ctx.cr6.eq) goto loc_832040AC;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832040ac
	if (!ctx.cr0.eq) goto loc_832040AC;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x832040ac
	if (!ctx.cr6.eq) goto loc_832040AC;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832040ac
	if (!ctx.cr0.eq) goto loc_832040AC;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832040ac
	if (!ctx.cr0.eq) goto loc_832040AC;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83204070
	if (!ctx.cr6.eq) goto loc_83204070;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83203cc0
	ctx.lr = 0x8320406C;
	sub_83203CC0(ctx, base);
	// b 0x832040d4
	goto loc_832040D4;
loc_83204070:
	// subf. r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8320407c
	if (!ctx.cr0.lt) goto loc_8320407C;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_8320407C:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x832040ac
	if (ctx.cr6.lt) goto loc_832040AC;
	// xor r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832040ac
	if (!ctx.cr0.eq) goto loc_832040AC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83203a18
	ctx.lr = 0x832040A8;
	sub_83203A18(ctx, base);
	// b 0x832040d4
	goto loc_832040D4;
loc_832040AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832040d4
	if (ctx.cr6.eq) goto loc_832040D4;
loc_832040B4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832035a0
	ctx.lr = 0x832040C4;
	sub_832035A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// bne 0x832040b4
	if (!ctx.cr0.eq) goto loc_832040B4;
loc_832040D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832040DC"))) PPC_WEAK_FUNC(sub_832040DC);
PPC_FUNC_IMPL(__imp__sub_832040DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832040E0"))) PPC_WEAK_FUNC(sub_832040E0);
PPC_FUNC_IMPL(__imp__sub_832040E0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x832040fc
	if (!ctx.cr6.eq) goto loc_832040FC;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x83203f50
	sub_83203F50(ctx, base);
	return;
loc_832040FC:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x83203f50
	sub_83203F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320410C"))) PPC_WEAK_FUNC(sub_8320410C);
PPC_FUNC_IMPL(__imp__sub_8320410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204110"))) PPC_WEAK_FUNC(sub_83204110);
PPC_FUNC_IMPL(__imp__sub_83204110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83204118;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// clrlwi r31,r28,26
	ctx.r31.u64 = ctx.r28.u32 & 0x3F;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// rlwinm. r8,r28,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83204180
	if (ctx.cr0.eq) goto loc_83204180;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82e84050
	ctx.lr = 0x83204178;
	sub_82E84050(ctx, base);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_83204180:
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,49
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 49, ctx.xer);
	// bgt cr6,0x832041c8
	if (ctx.cr6.gt) goto loc_832041C8;
	// beq cr6,0x832041e8
	if (ctx.cr6.eq) goto loc_832041E8;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x832041fc
	if (ctx.cr6.lt) goto loc_832041FC;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// ble cr6,0x832041b8
	if (!ctx.cr6.gt) goto loc_832041B8;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x832041fc
	if (!ctx.cr6.gt) goto loc_832041FC;
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// ble cr6,0x832041e8
	if (!ctx.cr6.gt) goto loc_832041E8;
	// b 0x832041fc
	goto loc_832041FC;
loc_832041B8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832041fc
	goto loc_832041FC;
loc_832041C8:
	// cmplwi cr6,r31,51
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 51, ctx.xer);
	// blt cr6,0x832041fc
	if (ctx.cr6.lt) goto loc_832041FC;
	// cmplwi cr6,r31,53
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 53, ctx.xer);
	// ble cr6,0x832041e8
	if (!ctx.cr6.gt) goto loc_832041E8;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 57, ctx.xer);
	// ble cr6,0x832041fc
	if (!ctx.cr6.gt) goto loc_832041FC;
	// cmplwi cr6,r31,61
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 61, ctx.xer);
	// bgt cr6,0x832041fc
	if (ctx.cr6.gt) goto loc_832041FC;
loc_832041E8:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r19,r11,30,2,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r20,r8,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_832041FC:
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83204244
	if (ctx.cr6.lt) goto loc_83204244;
	// beq cr6,0x83204238
	if (ctx.cr6.eq) goto loc_83204238;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83204230
	if (ctx.cr6.lt) goto loc_83204230;
	// beq cr6,0x83204224
	if (ctx.cr6.eq) goto loc_83204224;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x83204248
	goto loc_83204248;
loc_83204224:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// b 0x83204248
	goto loc_83204248;
loc_83204230:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// b 0x8320423c
	goto loc_8320423C;
loc_83204238:
	// lis r23,2
	ctx.r23.s64 = 131072;
loc_8320423C:
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// b 0x83204248
	goto loc_83204248;
loc_83204244:
	// rlwinm r23,r30,13,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFFF0000;
loc_83204248:
	// rlwinm r24,r23,16,16,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r24,-1
	ctx.r8.s64 = ctx.r24.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r21,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r6,r8,35
	ctx.xer.ca = ctx.r8.u32 <= 35;
	ctx.r6.s64 = 35 - ctx.r8.s64;
	// and. r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// divwu r8,r7,r30
	ctx.r8.u32 = ctx.r7.u32 / ctx.r30.u32;
	// twllei r30,0
	// srw r22,r30,r6
	ctx.r22.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// bne 0x8320431c
	if (!ctx.cr0.eq) goto loc_8320431C;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8320431c
	if (!ctx.cr6.eq) goto loc_8320431C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x8320431c
	if (!ctx.cr6.gt) goto loc_8320431C;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x8320431c
	if (!ctx.cr6.gt) goto loc_8320431C;
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x832042d0
	if (!ctx.cr6.gt) goto loc_832042D0;
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832042d0
	if (!ctx.cr0.eq) goto loc_832042D0;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x832042d0
	if (!ctx.cr6.eq) goto loc_832042D0;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83203f50
	ctx.lr = 0x832042CC;
	sub_83203F50(ctx, base);
	// b 0x83204388
	goto loc_83204388;
loc_832042D0:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83204388
	if (ctx.cr6.eq) goto loc_83204388;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r11,r20
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
loc_832042E8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83203f50
	ctx.lr = 0x83204300;
	sub_83203F50(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 + ctx.r17.u64;
	// add r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 + ctx.r16.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832042e8
	if (ctx.cr6.lt) goto loc_832042E8;
	// b 0x83204388
	goto loc_83204388;
loc_8320431C:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83204388
	if (ctx.cr6.eq) goto loc_83204388;
loc_83204330:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83204370
	if (ctx.cr6.eq) goto loc_83204370;
	// mullw r28,r22,r19
	ctx.r28.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_83204348:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83203f50
	ctx.lr = 0x83204360;
	sub_83203F50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// bne 0x83204348
	if (!ctx.cr0.eq) goto loc_83204348;
loc_83204370:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r27,r27,r17
	ctx.r27.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r26,r26,r16
	ctx.r26.u64 = ctx.r26.u64 + ctx.r16.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83204330
	if (ctx.cr6.lt) goto loc_83204330;
loc_83204388:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204390"))) PPC_WEAK_FUNC(sub_83204390);
PPC_FUNC_IMPL(__imp__sub_83204390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mullw r5,r4,r10
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83204110
	ctx.lr = 0x832043D0;
	sub_83204110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832043E4"))) PPC_WEAK_FUNC(sub_832043E4);
PPC_FUNC_IMPL(__imp__sub_832043E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832043E8"))) PPC_WEAK_FUNC(sub_832043E8);
PPC_FUNC_IMPL(__imp__sub_832043E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83204110
	ctx.lr = 0x83204418;
	sub_83204110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204430"))) PPC_WEAK_FUNC(sub_83204430);
PPC_FUNC_IMPL(__imp__sub_83204430) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x83203f50
	sub_83203F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204444"))) PPC_WEAK_FUNC(sub_83204444);
PPC_FUNC_IMPL(__imp__sub_83204444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204448"))) PPC_WEAK_FUNC(sub_83204448);
PPC_FUNC_IMPL(__imp__sub_83204448) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204450"))) PPC_WEAK_FUNC(sub_83204450);
PPC_FUNC_IMPL(__imp__sub_83204450) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320445C"))) PPC_WEAK_FUNC(sub_8320445C);
PPC_FUNC_IMPL(__imp__sub_8320445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204460"))) PPC_WEAK_FUNC(sub_83204460);
PPC_FUNC_IMPL(__imp__sub_83204460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204478"))) PPC_WEAK_FUNC(sub_83204478);
PPC_FUNC_IMPL(__imp__sub_83204478) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204480"))) PPC_WEAK_FUNC(sub_83204480);
PPC_FUNC_IMPL(__imp__sub_83204480) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204488"))) PPC_WEAK_FUNC(sub_83204488);
PPC_FUNC_IMPL(__imp__sub_83204488) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204490"))) PPC_WEAK_FUNC(sub_83204490);
PPC_FUNC_IMPL(__imp__sub_83204490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832044B0"))) PPC_WEAK_FUNC(sub_832044B0);
PPC_FUNC_IMPL(__imp__sub_832044B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832044CC"))) PPC_WEAK_FUNC(sub_832044CC);
PPC_FUNC_IMPL(__imp__sub_832044CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832044D0"))) PPC_WEAK_FUNC(sub_832044D0);
PPC_FUNC_IMPL(__imp__sub_832044D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832044e8
	if (ctx.cr0.eq) goto loc_832044E8;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x832044ec
	if (ctx.cr0.eq) goto loc_832044EC;
loc_832044E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832044EC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832044F4"))) PPC_WEAK_FUNC(sub_832044F4);
PPC_FUNC_IMPL(__imp__sub_832044F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832044F8"))) PPC_WEAK_FUNC(sub_832044F8);
PPC_FUNC_IMPL(__imp__sub_832044F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204500"))) PPC_WEAK_FUNC(sub_83204500);
PPC_FUNC_IMPL(__imp__sub_83204500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204504"))) PPC_WEAK_FUNC(sub_83204504);
PPC_FUNC_IMPL(__imp__sub_83204504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204508"))) PPC_WEAK_FUNC(sub_83204508);
PPC_FUNC_IMPL(__imp__sub_83204508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320450C"))) PPC_WEAK_FUNC(sub_8320450C);
PPC_FUNC_IMPL(__imp__sub_8320450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204510"))) PPC_WEAK_FUNC(sub_83204510);
PPC_FUNC_IMPL(__imp__sub_83204510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204514"))) PPC_WEAK_FUNC(sub_83204514);
PPC_FUNC_IMPL(__imp__sub_83204514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204518"))) PPC_WEAK_FUNC(sub_83204518);
PPC_FUNC_IMPL(__imp__sub_83204518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320451C"))) PPC_WEAK_FUNC(sub_8320451C);
PPC_FUNC_IMPL(__imp__sub_8320451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204520"))) PPC_WEAK_FUNC(sub_83204520);
PPC_FUNC_IMPL(__imp__sub_83204520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204524"))) PPC_WEAK_FUNC(sub_83204524);
PPC_FUNC_IMPL(__imp__sub_83204524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204528"))) PPC_WEAK_FUNC(sub_83204528);
PPC_FUNC_IMPL(__imp__sub_83204528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320452C"))) PPC_WEAK_FUNC(sub_8320452C);
PPC_FUNC_IMPL(__imp__sub_8320452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204530"))) PPC_WEAK_FUNC(sub_83204530);
PPC_FUNC_IMPL(__imp__sub_83204530) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// rlwinm r3,r10,20,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204548"))) PPC_WEAK_FUNC(sub_83204548);
PPC_FUNC_IMPL(__imp__sub_83204548) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r11.u32);
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// stw r11,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// stw r11,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r11.u32);
	// stw r11,692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 692, ctx.r11.u32);
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204568"))) PPC_WEAK_FUNC(sub_83204568);
PPC_FUNC_IMPL(__imp__sub_83204568) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204574"))) PPC_WEAK_FUNC(sub_83204574);
PPC_FUNC_IMPL(__imp__sub_83204574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204578"))) PPC_WEAK_FUNC(sub_83204578);
PPC_FUNC_IMPL(__imp__sub_83204578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x83204590
	if (!ctx.cr6.eq) goto loc_83204590;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83204590:
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832045A4"))) PPC_WEAK_FUNC(sub_832045A4);
PPC_FUNC_IMPL(__imp__sub_832045A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832045A8"))) PPC_WEAK_FUNC(sub_832045A8);
PPC_FUNC_IMPL(__imp__sub_832045A8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832045E4"))) PPC_WEAK_FUNC(sub_832045E4);
PPC_FUNC_IMPL(__imp__sub_832045E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832045E8"))) PPC_WEAK_FUNC(sub_832045E8);
PPC_FUNC_IMPL(__imp__sub_832045E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r3,2480
	ctx.r3.s64 = 2480;
	// bl 0x82ea2990
	ctx.lr = 0x83204608;
	sub_82EA2990(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83204624
	if (!ctx.cr6.eq) goto loc_83204624;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// b 0x8320465c
	goto loc_8320465C;
loc_83204624:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r5,2480
	ctx.r5.s64 = 2480;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb16f0
	ctx.lr = 0x83204640;
	sub_82CB16F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,2472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2472, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,2476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2476, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320465C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320466C"))) PPC_WEAK_FUNC(sub_8320466C);
PPC_FUNC_IMPL(__imp__sub_8320466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204670"))) PPC_WEAK_FUNC(sub_83204670);
PPC_FUNC_IMPL(__imp__sub_83204670) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320469c
	if (ctx.cr6.eq) goto loc_8320469C;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8320469C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16387
	ctx.r3.u64 = ctx.r11.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832046A8"))) PPC_WEAK_FUNC(sub_832046A8);
PPC_FUNC_IMPL(__imp__sub_832046A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832046F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204704"))) PPC_WEAK_FUNC(sub_83204704);
PPC_FUNC_IMPL(__imp__sub_83204704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204708"))) PPC_WEAK_FUNC(sub_83204708);
PPC_FUNC_IMPL(__imp__sub_83204708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11080
	ctx.r9.s64 = ctx.r10.s64 + -11080;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83204718:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8320473c
	if (ctx.cr6.eq) goto loc_8320473C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,162
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 162, ctx.xer);
	// blt cr6,0x83204718
	if (ctx.cr6.lt) goto loc_83204718;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8320473C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320474C"))) PPC_WEAK_FUNC(sub_8320474C);
PPC_FUNC_IMPL(__imp__sub_8320474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204750"))) PPC_WEAK_FUNC(sub_83204750);
PPC_FUNC_IMPL(__imp__sub_83204750) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204758"))) PPC_WEAK_FUNC(sub_83204758);
PPC_FUNC_IMPL(__imp__sub_83204758) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204760"))) PPC_WEAK_FUNC(sub_83204760);
PPC_FUNC_IMPL(__imp__sub_83204760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83204708
	ctx.lr = 0x83204780;
	sub_83204708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83204798
	if (ctx.cr0.eq) goto loc_83204798;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82cb2578
	ctx.lr = 0x83204794;
	sub_82CB2578(ctx, base);
	// b 0x832047a8
	goto loc_832047A8;
loc_83204798:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,-17212
	ctx.r4.s64 = ctx.r11.s64 + -17212;
	// bl 0x82cb1160
	ctx.lr = 0x832047A8;
	sub_82CB1160(ctx, base);
loc_832047A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832047BC"))) PPC_WEAK_FUNC(sub_832047BC);
PPC_FUNC_IMPL(__imp__sub_832047BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832047C0"))) PPC_WEAK_FUNC(sub_832047C0);
PPC_FUNC_IMPL(__imp__sub_832047C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832047D8"))) PPC_WEAK_FUNC(sub_832047D8);
PPC_FUNC_IMPL(__imp__sub_832047D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82ff1e60
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	return;
}

__attribute__((alias("__imp__sub_832047F4"))) PPC_WEAK_FUNC(sub_832047F4);
PPC_FUNC_IMPL(__imp__sub_832047F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832047F8"))) PPC_WEAK_FUNC(sub_832047F8);
PPC_FUNC_IMPL(__imp__sub_832047F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f1b948
	sub_82F1B948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832047FC"))) PPC_WEAK_FUNC(sub_832047FC);
PPC_FUNC_IMPL(__imp__sub_832047FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204800"))) PPC_WEAK_FUNC(sub_83204800);
PPC_FUNC_IMPL(__imp__sub_83204800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83204808;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83204830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83204934
	if (ctx.cr0.eq) goto loc_83204934;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83204934
	if (!ctx.cr0.eq) goto loc_83204934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83204884
	if (ctx.cr6.eq) goto loc_83204884;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r4,-9776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9776);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8320485C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8320485c
	if (!ctx.cr6.eq) goto loc_8320485C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83204884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83204884:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r27,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832048AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x832048C8;
	sub_831FC6C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8320493c
	if (ctx.cr6.eq) goto loc_8320493C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832048fc
	if (ctx.cr6.lt) goto loc_832048FC;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r4,-9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9780);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_832048E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832048e8
	if (!ctx.cr6.eq) goto loc_832048E8;
	// b 0x83204918
	goto loc_83204918;
loc_832048FC:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r4,-9784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9784);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83204908:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83204908
	if (!ctx.cr6.eq) goto loc_83204908;
loc_83204918:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83204930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8320493c
	goto loc_8320493C;
loc_83204934:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_8320493C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204948"))) PPC_WEAK_FUNC(sub_83204948);
PPC_FUNC_IMPL(__imp__sub_83204948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320494C"))) PPC_WEAK_FUNC(sub_8320494C);
PPC_FUNC_IMPL(__imp__sub_8320494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204950"))) PPC_WEAK_FUNC(sub_83204950);
PPC_FUNC_IMPL(__imp__sub_83204950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204954"))) PPC_WEAK_FUNC(sub_83204954);
PPC_FUNC_IMPL(__imp__sub_83204954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204958"))) PPC_WEAK_FUNC(sub_83204958);
PPC_FUNC_IMPL(__imp__sub_83204958) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204960"))) PPC_WEAK_FUNC(sub_83204960);
PPC_FUNC_IMPL(__imp__sub_83204960) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320496C"))) PPC_WEAK_FUNC(sub_8320496C);
PPC_FUNC_IMPL(__imp__sub_8320496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204970"))) PPC_WEAK_FUNC(sub_83204970);
PPC_FUNC_IMPL(__imp__sub_83204970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204974"))) PPC_WEAK_FUNC(sub_83204974);
PPC_FUNC_IMPL(__imp__sub_83204974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204978"))) PPC_WEAK_FUNC(sub_83204978);
PPC_FUNC_IMPL(__imp__sub_83204978) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049A0"))) PPC_WEAK_FUNC(sub_832049A0);
PPC_FUNC_IMPL(__imp__sub_832049A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049A8"))) PPC_WEAK_FUNC(sub_832049A8);
PPC_FUNC_IMPL(__imp__sub_832049A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049B4"))) PPC_WEAK_FUNC(sub_832049B4);
PPC_FUNC_IMPL(__imp__sub_832049B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832049B8"))) PPC_WEAK_FUNC(sub_832049B8);
PPC_FUNC_IMPL(__imp__sub_832049B8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049C0"))) PPC_WEAK_FUNC(sub_832049C0);
PPC_FUNC_IMPL(__imp__sub_832049C0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049C8"))) PPC_WEAK_FUNC(sub_832049C8);
PPC_FUNC_IMPL(__imp__sub_832049C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049D4"))) PPC_WEAK_FUNC(sub_832049D4);
PPC_FUNC_IMPL(__imp__sub_832049D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832049D8"))) PPC_WEAK_FUNC(sub_832049D8);
PPC_FUNC_IMPL(__imp__sub_832049D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049DC"))) PPC_WEAK_FUNC(sub_832049DC);
PPC_FUNC_IMPL(__imp__sub_832049DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832049E0"))) PPC_WEAK_FUNC(sub_832049E0);
PPC_FUNC_IMPL(__imp__sub_832049E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049E8"))) PPC_WEAK_FUNC(sub_832049E8);
PPC_FUNC_IMPL(__imp__sub_832049E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049F0"))) PPC_WEAK_FUNC(sub_832049F0);
PPC_FUNC_IMPL(__imp__sub_832049F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832049F4"))) PPC_WEAK_FUNC(sub_832049F4);
PPC_FUNC_IMPL(__imp__sub_832049F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832049F8"))) PPC_WEAK_FUNC(sub_832049F8);
PPC_FUNC_IMPL(__imp__sub_832049F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A04"))) PPC_WEAK_FUNC(sub_83204A04);
PPC_FUNC_IMPL(__imp__sub_83204A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204A08"))) PPC_WEAK_FUNC(sub_83204A08);
PPC_FUNC_IMPL(__imp__sub_83204A08) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A10"))) PPC_WEAK_FUNC(sub_83204A10);
PPC_FUNC_IMPL(__imp__sub_83204A10) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A18"))) PPC_WEAK_FUNC(sub_83204A18);
PPC_FUNC_IMPL(__imp__sub_83204A18) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A20"))) PPC_WEAK_FUNC(sub_83204A20);
PPC_FUNC_IMPL(__imp__sub_83204A20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A2C"))) PPC_WEAK_FUNC(sub_83204A2C);
PPC_FUNC_IMPL(__imp__sub_83204A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204A30"))) PPC_WEAK_FUNC(sub_83204A30);
PPC_FUNC_IMPL(__imp__sub_83204A30) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A38"))) PPC_WEAK_FUNC(sub_83204A38);
PPC_FUNC_IMPL(__imp__sub_83204A38) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A40"))) PPC_WEAK_FUNC(sub_83204A40);
PPC_FUNC_IMPL(__imp__sub_83204A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A48"))) PPC_WEAK_FUNC(sub_83204A48);
PPC_FUNC_IMPL(__imp__sub_83204A48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204A50"))) PPC_WEAK_FUNC(sub_83204A50);
PPC_FUNC_IMPL(__imp__sub_83204A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83204760
	ctx.lr = 0x83204A80;
	sub_83204760(ctx, base);
	// lwz r11,2476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83204ab0
	if (ctx.cr6.eq) goto loc_83204AB0;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x83204ab0
	if (ctx.cr6.eq) goto loc_83204AB0;
	// lwz r3,2472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83204AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83204AB0:
	// cmpwi cr6,r30,3517
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3517, ctx.xer);
	// beq cr6,0x83204aec
	if (ctx.cr6.eq) goto loc_83204AEC;
	// cmpwi cr6,r30,3525
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3525, ctx.xer);
	// beq cr6,0x83204af8
	if (ctx.cr6.eq) goto loc_83204AF8;
	// cmpwi cr6,r30,3527
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3527, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x83204ae4
	if (ctx.cr6.eq) goto loc_83204AE4;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x83204adc
	if (ctx.cr6.eq) goto loc_83204ADC;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x83204af4
	goto loc_83204AF4;
loc_83204ADC:
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// b 0x83204af4
	goto loc_83204AF4;
loc_83204AE4:
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// b 0x83204af4
	goto loc_83204AF4;
loc_83204AEC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_83204AF4:
	// stw r11,2464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2464, ctx.r11.u32);
loc_83204AF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// bl 0x82ff1e60
	ctx.lr = 0x83204B04;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_83204B04"))) PPC_WEAK_FUNC(sub_83204B04);
PPC_FUNC_IMPL(__imp__sub_83204B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204B08"))) PPC_WEAK_FUNC(sub_83204B08);
PPC_FUNC_IMPL(__imp__sub_83204B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83204760
	ctx.lr = 0x83204B5C;
	sub_83204760(ctx, base);
	// lwz r11,2476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83204b84
	if (ctx.cr6.eq) goto loc_83204B84;
	// lwz r3,2472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83204B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83204B84:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204B9C"))) PPC_WEAK_FUNC(sub_83204B9C);
PPC_FUNC_IMPL(__imp__sub_83204B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204BA0"))) PPC_WEAK_FUNC(sub_83204BA0);
PPC_FUNC_IMPL(__imp__sub_83204BA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204BC8"))) PPC_WEAK_FUNC(sub_83204BC8);
PPC_FUNC_IMPL(__imp__sub_83204BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204BDC"))) PPC_WEAK_FUNC(sub_83204BDC);
PPC_FUNC_IMPL(__imp__sub_83204BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204BE0"))) PPC_WEAK_FUNC(sub_83204BE0);
PPC_FUNC_IMPL(__imp__sub_83204BE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204BF8"))) PPC_WEAK_FUNC(sub_83204BF8);
PPC_FUNC_IMPL(__imp__sub_83204BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C0C"))) PPC_WEAK_FUNC(sub_83204C0C);
PPC_FUNC_IMPL(__imp__sub_83204C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204C10"))) PPC_WEAK_FUNC(sub_83204C10);
PPC_FUNC_IMPL(__imp__sub_83204C10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C28"))) PPC_WEAK_FUNC(sub_83204C28);
PPC_FUNC_IMPL(__imp__sub_83204C28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C34"))) PPC_WEAK_FUNC(sub_83204C34);
PPC_FUNC_IMPL(__imp__sub_83204C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204C38"))) PPC_WEAK_FUNC(sub_83204C38);
PPC_FUNC_IMPL(__imp__sub_83204C38) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C40"))) PPC_WEAK_FUNC(sub_83204C40);
PPC_FUNC_IMPL(__imp__sub_83204C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C4C"))) PPC_WEAK_FUNC(sub_83204C4C);
PPC_FUNC_IMPL(__imp__sub_83204C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204C50"))) PPC_WEAK_FUNC(sub_83204C50);
PPC_FUNC_IMPL(__imp__sub_83204C50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C5C"))) PPC_WEAK_FUNC(sub_83204C5C);
PPC_FUNC_IMPL(__imp__sub_83204C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204C60"))) PPC_WEAK_FUNC(sub_83204C60);
PPC_FUNC_IMPL(__imp__sub_83204C60) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C6C"))) PPC_WEAK_FUNC(sub_83204C6C);
PPC_FUNC_IMPL(__imp__sub_83204C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204C70"))) PPC_WEAK_FUNC(sub_83204C70);
PPC_FUNC_IMPL(__imp__sub_83204C70) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204C78"))) PPC_WEAK_FUNC(sub_83204C78);
PPC_FUNC_IMPL(__imp__sub_83204C78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204CA8"))) PPC_WEAK_FUNC(sub_83204CA8);
PPC_FUNC_IMPL(__imp__sub_83204CA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// ble cr6,0x83204ce0
	if (!ctx.cr6.gt) goto loc_83204CE0;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
loc_83204CE0:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204CFC"))) PPC_WEAK_FUNC(sub_83204CFC);
PPC_FUNC_IMPL(__imp__sub_83204CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204D00"))) PPC_WEAK_FUNC(sub_83204D00);
PPC_FUNC_IMPL(__imp__sub_83204D00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x83204d40
	if (!ctx.cr6.gt) goto loc_83204D40;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
loc_83204D40:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204D5C"))) PPC_WEAK_FUNC(sub_83204D5C);
PPC_FUNC_IMPL(__imp__sub_83204D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204D60"))) PPC_WEAK_FUNC(sub_83204D60);
PPC_FUNC_IMPL(__imp__sub_83204D60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204D78"))) PPC_WEAK_FUNC(sub_83204D78);
PPC_FUNC_IMPL(__imp__sub_83204D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83204a50
	ctx.lr = 0x83204DB0;
	sub_83204A50(ctx, base);
}

__attribute__((alias("__imp__sub_83204DB0"))) PPC_WEAK_FUNC(sub_83204DB0);
PPC_FUNC_IMPL(__imp__sub_83204DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82cb2578
	ctx.lr = 0x83204DFC;
	sub_82CB2578(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x83204E0C;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83204E0C"))) PPC_WEAK_FUNC(sub_83204E0C);
PPC_FUNC_IMPL(__imp__sub_83204E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204E10"))) PPC_WEAK_FUNC(sub_83204E10);
PPC_FUNC_IMPL(__imp__sub_83204E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f1b948
	ctx.lr = 0x83204E30;
	sub_82F1B948(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83204e4c
	if (ctx.cr0.eq) goto loc_83204E4C;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_83204E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204E68"))) PPC_WEAK_FUNC(sub_83204E68);
PPC_FUNC_IMPL(__imp__sub_83204E68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204E80"))) PPC_WEAK_FUNC(sub_83204E80);
PPC_FUNC_IMPL(__imp__sub_83204E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204E94"))) PPC_WEAK_FUNC(sub_83204E94);
PPC_FUNC_IMPL(__imp__sub_83204E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204E98"))) PPC_WEAK_FUNC(sub_83204E98);
PPC_FUNC_IMPL(__imp__sub_83204E98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83204eb0
	if (ctx.cr0.eq) goto loc_83204EB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83204EB0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204EBC"))) PPC_WEAK_FUNC(sub_83204EBC);
PPC_FUNC_IMPL(__imp__sub_83204EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204EC0"))) PPC_WEAK_FUNC(sub_83204EC0);
PPC_FUNC_IMPL(__imp__sub_83204EC0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204ED8"))) PPC_WEAK_FUNC(sub_83204ED8);
PPC_FUNC_IMPL(__imp__sub_83204ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
loc_83204EEC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83204f30
	if (!ctx.cr0.eq) goto loc_83204F30;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83204f30
	if (ctx.cr0.eq) goto loc_83204F30;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822996c0
	ctx.lr = 0x83204F2C;
	sub_822996C0(ctx, base);
	// b 0x83204eec
	goto loc_83204EEC;
loc_83204F30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204F44"))) PPC_WEAK_FUNC(sub_83204F44);
PPC_FUNC_IMPL(__imp__sub_83204F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204F48"))) PPC_WEAK_FUNC(sub_83204F48);
PPC_FUNC_IMPL(__imp__sub_83204F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83204F70;
	sub_82CB16F0(ctx, base);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204FA4"))) PPC_WEAK_FUNC(sub_83204FA4);
PPC_FUNC_IMPL(__imp__sub_83204FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204FA8"))) PPC_WEAK_FUNC(sub_83204FA8);
PPC_FUNC_IMPL(__imp__sub_83204FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83204fe4
	if (ctx.cr6.eq) goto loc_83204FE4;
loc_83204FCC:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x83204FD8;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83204fcc
	if (!ctx.cr6.eq) goto loc_83204FCC;
loc_83204FE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83204ed8
	ctx.lr = 0x83204FEC;
	sub_83204ED8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205004"))) PPC_WEAK_FUNC(sub_83205004);
PPC_FUNC_IMPL(__imp__sub_83205004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205008"))) PPC_WEAK_FUNC(sub_83205008);
PPC_FUNC_IMPL(__imp__sub_83205008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x83205038
	goto loc_83205038;
loc_83205028:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82cb16f0
	ctx.lr = 0x83205034;
	sub_82CB16F0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83205038:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x83205028
	if (!ctx.cr6.eq) goto loc_83205028;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x83205060;
	sub_82CB16F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204ed8
	ctx.lr = 0x83205068;
	sub_83204ED8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205080"))) PPC_WEAK_FUNC(sub_83205080);
PPC_FUNC_IMPL(__imp__sub_83205080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82299698
	ctx.lr = 0x832050A0;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832050b4
	if (!ctx.cr0.eq) goto loc_832050B4;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x83204d78
	ctx.lr = 0x832050B4;
	sub_83204D78(ctx, base);
loc_832050B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832050D4"))) PPC_WEAK_FUNC(sub_832050D4);
PPC_FUNC_IMPL(__imp__sub_832050D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832050D8"))) PPC_WEAK_FUNC(sub_832050D8);
PPC_FUNC_IMPL(__imp__sub_832050D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83205268
	if (ctx.cr6.eq) goto loc_83205268;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// beq cr6,0x83205268
	if (ctx.cr6.eq) goto loc_83205268;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8320512c
	if (ctx.cr6.eq) goto loc_8320512C;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320526c
	if (!ctx.cr0.eq) goto loc_8320526C;
loc_8320512C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83205130:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320519c
	if (!ctx.cr0.eq) goto loc_8320519C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320519c
	if (ctx.cr0.eq) goto loc_8320519C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x83205130
	if (ctx.cr6.eq) goto loc_83205130;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83205130
	if (ctx.cr6.eq) goto loc_83205130;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x8320519c
	if (ctx.cr6.eq) goto loc_8320519C;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320526c
	if (!ctx.cr0.eq) goto loc_8320526C;
loc_8320519C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_832051A0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83205208
	if (!ctx.cr0.eq) goto loc_83205208;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205208
	if (ctx.cr6.eq) goto loc_83205208;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x832051a0
	if (ctx.cr6.eq) goto loc_832051A0;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832051a0
	if (ctx.cr6.eq) goto loc_832051A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x83205208
	if (ctx.cr6.eq) goto loc_83205208;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320526c
	if (!ctx.cr0.eq) goto loc_8320526C;
loc_83205208:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205268
	if (ctx.cr0.eq) goto loc_83205268;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83205224
	if (ctx.cr0.eq) goto loc_83205224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83205224:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832050d8
	ctx.lr = 0x83205234;
	sub_832050D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320526c
	if (!ctx.cr0.eq) goto loc_8320526C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83205250
	if (ctx.cr0.eq) goto loc_83205250;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83205250:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832050d8
	ctx.lr = 0x83205260;
	sub_832050D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320526c
	if (!ctx.cr0.eq) goto loc_8320526C;
loc_83205268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320526C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205284"))) PPC_WEAK_FUNC(sub_83205284);
PPC_FUNC_IMPL(__imp__sub_83205284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205290"))) PPC_WEAK_FUNC(sub_83205290);
PPC_FUNC_IMPL(__imp__sub_83205290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832052d8
	if (ctx.cr6.eq) goto loc_832052D8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83204e10
	ctx.lr = 0x832052D0;
	sub_83204E10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 760, ctx.r11.u32);
loc_832052D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x832052ec
	goto loc_832052EC;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_832052EC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83205314
	if (ctx.cr6.eq) goto loc_83205314;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x82e73580
	ctx.lr = 0x8320530C;
	sub_82E73580(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 756, ctx.r11.u32);
loc_83205314:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83205328
	goto loc_83205328;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_83205328:
	// addi r3,r30,788
	ctx.r3.s64 = ctx.r30.s64 + 788;
	// bl 0x83204fa8
	ctx.lr = 0x83205330;
	sub_83204FA8(ctx, base);
	// addi r3,r30,948
	ctx.r3.s64 = ctx.r30.s64 + 948;
	// bl 0x83204fa8
	ctx.lr = 0x83205338;
	sub_83204FA8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205350"))) PPC_WEAK_FUNC(sub_83205350);
PPC_FUNC_IMPL(__imp__sub_83205350) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320535C"))) PPC_WEAK_FUNC(sub_8320535C);
PPC_FUNC_IMPL(__imp__sub_8320535C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205368"))) PPC_WEAK_FUNC(sub_83205368);
PPC_FUNC_IMPL(__imp__sub_83205368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83205370;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// andis. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 327680;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8320539c
	if (ctx.cr0.eq) goto loc_8320539C;
	// bl 0x83282f58
	ctx.lr = 0x8320539C;
	sub_83282F58(ctx, base);
loc_8320539C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a4f10
	ctx.lr = 0x832053A4;
	sub_832A4F10(ctx, base);
	// addi r30,r31,948
	ctx.r30.s64 = ctx.r31.s64 + 948;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x832053B0;
	sub_83205008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327b250
	ctx.lr = 0x832053B8;
	sub_8327B250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x832053C0;
	sub_83205008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270da0
	ctx.lr = 0x832053C8;
	sub_83270DA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x832053D0;
	sub_83205008(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832053f8
	if (ctx.cr6.eq) goto loc_832053F8;
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// stw r28,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r28.u32);
	// stw r28,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
loc_832053F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83253d30
	ctx.lr = 0x83205400;
	sub_83253D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x83205408;
	sub_83205008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83251e50
	ctx.lr = 0x83205410;
	sub_83251E50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x83205418;
	sub_83205008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324a8a8
	ctx.lr = 0x83205420;
	sub_8324A8A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x83205428;
	sub_83205008(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320543c
	if (ctx.cr6.eq) goto loc_8320543C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83246888
	ctx.lr = 0x8320543C;
	sub_83246888(ctx, base);
loc_8320543C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205450
	if (ctx.cr0.eq) goto loc_83205450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237998
	ctx.lr = 0x83205450;
	sub_83237998(ctx, base);
loc_83205450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83231890
	ctx.lr = 0x83205458;
	sub_83231890(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205468
	if (ctx.cr0.eq) goto loc_83205468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230600
	ctx.lr = 0x83205468;
	sub_83230600(ctx, base);
loc_83205468:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq 0x8320549c
	if (ctx.cr0.eq) goto loc_8320549C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205494
	if (ctx.cr6.eq) goto loc_83205494;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_83205494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321e240
	ctx.lr = 0x8320549C;
	sub_8321E240(ctx, base);
loc_8320549C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832054b4
	if (ctx.cr0.eq) goto loc_832054B4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x832054b8
	if (ctx.cr0.eq) goto loc_832054B8;
loc_832054B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_832054B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832054c8
	if (ctx.cr0.eq) goto loc_832054C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832297a8
	ctx.lr = 0x832054C8;
	sub_832297A8(ctx, base);
loc_832054C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229060
	ctx.lr = 0x832054D0;
	sub_83229060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83226508
	ctx.lr = 0x832054D8;
	sub_83226508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205008
	ctx.lr = 0x832054E0;
	sub_83205008(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205504
	if (ctx.cr6.eq) goto loc_83205504;
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// stw r28,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r28.u32);
	// stw r28,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
loc_83205504:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221088
	ctx.lr = 0x8320551C;
	sub_83221088(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320561c
	if (!ctx.cr0.eq) goto loc_8320561C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205574
	if (ctx.cr0.eq) goto loc_83205574;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x83205564
	if (ctx.cr6.eq) goto loc_83205564;
	// bctrl 
	ctx.lr = 0x8320555C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83225850
	ctx.lr = 0x83205560;
	sub_83225850(ctx, base);
	// b 0x8320556c
	goto loc_8320556C;
loc_83205564:
	// bctrl 
	ctx.lr = 0x83205568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83225858
	ctx.lr = 0x8320556C;
	sub_83225858(ctx, base);
loc_8320556C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8320561c
	if (!ctx.cr6.eq) goto loc_8320561C;
loc_83205574:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r10,10,15,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// beq 0x8320558c
	if (ctx.cr0.eq) goto loc_8320558C;
	// oris r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 262144;
loc_8320558C:
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r26,r11,-12352
	ctx.r26.s64 = ctx.r11.s64 + -12352;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832055AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832055C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x832055DC;
	sub_831FC6C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8320561c
	if (!ctx.cr0.lt) goto loc_8320561C;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-12352
	ctx.r5.s64 = ctx.r11.s64 + -12352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83204800
	ctx.lr = 0x832055FC;
	sub_83204800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8320561c
	if (!ctx.cr0.lt) goto loc_8320561C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205624
	if (ctx.cr0.eq) goto loc_83205624;
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204b08
	ctx.lr = 0x8320561C;
	sub_83204B08(ctx, base);
loc_8320561C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_83205624:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83205638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// beq cr6,0x83205664
	if (ctx.cr6.eq) goto loc_83205664;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83205664
	if (ctx.cr6.eq) goto loc_83205664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83205660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_83205664:
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x83205670;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83205670"))) PPC_WEAK_FUNC(sub_83205670);
PPC_FUNC_IMPL(__imp__sub_83205670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83205080
	ctx.lr = 0x83205688;
	sub_83205080(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832056B0"))) PPC_WEAK_FUNC(sub_832056B0);
PPC_FUNC_IMPL(__imp__sub_832056B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205750
	if (ctx.cr0.eq) goto loc_83205750;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83205708
	if (!ctx.cr6.eq) goto loc_83205708;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2464, ctx.r10.u32);
	// b 0x83205750
	goto loc_83205750;
loc_83205708:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,16389
	ctx.r4.u64 = ctx.r11.u64 | 16389;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83205290
	ctx.lr = 0x83205728;
	sub_83205290(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea2998
	ctx.lr = 0x83205730;
	sub_82EA2998(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83205778
	goto loc_83205778;
loc_83205750:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,2464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2464);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83205774
	if (ctx.cr6.lt) goto loc_83205774;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_83205774:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83205778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205790"))) PPC_WEAK_FUNC(sub_83205790);
PPC_FUNC_IMPL(__imp__sub_83205790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832057e0
	if (ctx.cr0.eq) goto loc_832057E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83205290
	ctx.lr = 0x832057D4;
	sub_83205290(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_832057E0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832057fc
	if (ctx.cr6.eq) goto loc_832057FC;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ea2998
	ctx.lr = 0x832057FC;
	sub_82EA2998(ctx, base);
loc_832057FC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205814"))) PPC_WEAK_FUNC(sub_83205814);
PPC_FUNC_IMPL(__imp__sub_83205814) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205820"))) PPC_WEAK_FUNC(sub_83205820);
PPC_FUNC_IMPL(__imp__sub_83205820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83205828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832a5110
	ctx.lr = 0x83205834;
	sub_832A5110(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r30,r31,788
	ctx.r30.s64 = ctx.r31.s64 + 788;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x8320585C;
	sub_82CB16F0(ctx, base);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// addi r29,r31,948
	ctx.r29.s64 = ctx.r31.s64 + 948;
	// stw r31,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x8320588C;
	sub_82CB16F0(ctx, base);
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// stw r31,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// stw r10,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r10.u32);
	// bl 0x83205080
	ctx.lr = 0x832058B0;
	sub_83205080(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// bl 0x83205080
	ctx.lr = 0x832058D0;
	sub_83205080(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r3.u32);
	// stw r3,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r3.u32);
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832058FC"))) PPC_WEAK_FUNC(sub_832058FC);
PPC_FUNC_IMPL(__imp__sub_832058FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205900"))) PPC_WEAK_FUNC(sub_83205900);
PPC_FUNC_IMPL(__imp__sub_83205900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83205908;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8320593c
	if (ctx.cr6.eq) goto loc_8320593C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8320593C:
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// beq cr6,0x832059f0
	if (ctx.cr6.eq) goto loc_832059F0;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// stw r6,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r6.u32);
	// ble cr6,0x83205978
	if (!ctx.cr6.gt) goto loc_83205978;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x83205978;
	sub_83204D78(ctx, base);
loc_83205978:
	// rlwinm r11,r28,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8320599c
	if (!ctx.cr6.eq) goto loc_8320599C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x832059b0
	goto loc_832059B0;
loc_8320599C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_832059B0:
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832059cc
	if (ctx.cr0.eq) goto loc_832059CC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_832059CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832059f0
	if (ctx.cr6.eq) goto loc_832059F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832059f0
	if (ctx.cr0.eq) goto loc_832059F0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831fc510
	ctx.lr = 0x832059F0;
	sub_831FC510(ctx, base);
loc_832059F0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x83205a2c
	if (ctx.cr6.eq) goto loc_83205A2C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205a18
	if (ctx.cr6.eq) goto loc_83205A18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205a24
	if (ctx.cr0.eq) goto loc_83205A24;
loc_83205A18:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83205A24:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83205a50
	if (!ctx.cr6.eq) goto loc_83205A50;
loc_83205A2C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205a50
	if (ctx.cr6.eq) goto loc_83205A50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83205a50
	if (ctx.cr0.eq) goto loc_83205A50;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83205A50:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c83e0
	ctx.lr = 0x83205A60;
	sub_832C83E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x83205a78
	if (!ctx.cr0.eq) goto loc_83205A78;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x83204d78
	ctx.lr = 0x83205A78;
	sub_83204D78(ctx, base);
loc_83205A78:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x832c5490
	ctx.lr = 0x83205A80;
	sub_832C5490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a85e8
	ctx.lr = 0x83205A88;
	sub_832A85E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83205a98
	if (ctx.cr0.eq) goto loc_83205A98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83205A98:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83205ab8
	if (!ctx.cr0.eq) goto loc_83205AB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205ab8
	if (ctx.cr6.eq) goto loc_83205AB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a67a0
	ctx.lr = 0x83205AB8;
	sub_832A67A0(ctx, base);
loc_83205AB8:
	// addi r3,r31,948
	ctx.r3.s64 = ctx.r31.s64 + 948;
	// bl 0x83205008
	ctx.lr = 0x83205AC0;
	sub_83205008(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83205368
	ctx.lr = 0x83205ADC;
	sub_83205368(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83205AE4"))) PPC_WEAK_FUNC(sub_83205AE4);
PPC_FUNC_IMPL(__imp__sub_83205AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205AE8"))) PPC_WEAK_FUNC(sub_83205AE8);
PPC_FUNC_IMPL(__imp__sub_83205AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83205AF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x832c9018
	ctx.lr = 0x83205B18;
	sub_832C9018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a85e8
	ctx.lr = 0x83205B20;
	sub_832A85E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83205b30
	if (ctx.cr0.eq) goto loc_83205B30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83205B30:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83205b50
	if (!ctx.cr0.eq) goto loc_83205B50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83205b50
	if (ctx.cr6.eq) goto loc_83205B50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a67a0
	ctx.lr = 0x83205B50;
	sub_832A67A0(ctx, base);
loc_83205B50:
	// addi r3,r31,948
	ctx.r3.s64 = ctx.r31.s64 + 948;
	// bl 0x83205008
	ctx.lr = 0x83205B58;
	sub_83205008(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83205B68:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83205b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83205B68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83205b9c
	if (ctx.cr6.eq) goto loc_83205B9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_83205B9C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83205bb4
	if (ctx.cr6.eq) goto loc_83205BB4;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_83205BB4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83205368
	ctx.lr = 0x83205BCC;
	sub_83205368(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83205bdc
	if (ctx.cr6.eq) goto loc_83205BDC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_83205BDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83205BE4"))) PPC_WEAK_FUNC(sub_83205BE4);
PPC_FUNC_IMPL(__imp__sub_83205BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205BF0"))) PPC_WEAK_FUNC(sub_83205BF0);
PPC_FUNC_IMPL(__imp__sub_83205BF0) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x832045a8
	ctx.lr = 0x83205C38;
	sub_832045A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83205C40:
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x832045e8
	ctx.lr = 0x83205C50;
	sub_832045E8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83205cec
	if (!ctx.cr6.eq) goto loc_83205CEC;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// bl 0x82ff2180
	ctx.lr = 0x83205C6C;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83205c94
	if (ctx.cr6.eq) goto loc_83205C94;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x832056b0
	ctx.lr = 0x83205C8C;
	sub_832056B0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x83205cec
	goto loc_83205CEC;
loc_83205C94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83205820
	ctx.lr = 0x83205CAC;
	sub_83205820(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83205900
	ctx.lr = 0x83205CE8;
	sub_83205900(ctx, base);
	// b 0x83205cf8
	goto loc_83205CF8;
loc_83205CEC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83205c40
	if (ctx.cr6.eq) goto loc_83205C40;
loc_83205CF8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83205d18
	goto loc_83205D18;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x83204670
	ctx.lr = 0x83205D14;
	sub_83204670(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_83205D18:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x83205790
	ctx.lr = 0x83205D24;
	sub_83205790(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205D38"))) PPC_WEAK_FUNC(sub_83205D38);
PPC_FUNC_IMPL(__imp__sub_83205D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205D44"))) PPC_WEAK_FUNC(sub_83205D44);
PPC_FUNC_IMPL(__imp__sub_83205D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205D50"))) PPC_WEAK_FUNC(sub_83205D50);
PPC_FUNC_IMPL(__imp__sub_83205D50) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,18088
	ctx.r11.s64 = ctx.r11.s64 + 18088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x832045a8
	ctx.lr = 0x83205DB8;
	sub_832045A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83205DC0:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832045e8
	ctx.lr = 0x83205DD0;
	sub_832045E8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83205e4c
	if (!ctx.cr6.eq) goto loc_83205E4C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// bl 0x82ff2180
	ctx.lr = 0x83205DEC;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83205e14
	if (ctx.cr6.eq) goto loc_83205E14;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832056b0
	ctx.lr = 0x83205E0C;
	sub_832056B0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// b 0x83205e4c
	goto loc_83205E4C;
loc_83205E14:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83205820
	ctx.lr = 0x83205E2C;
	sub_83205820(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83205ae8
	ctx.lr = 0x83205E48;
	sub_83205AE8(ctx, base);
	// b 0x83205e58
	goto loc_83205E58;
loc_83205E4C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83205dc0
	if (ctx.cr6.eq) goto loc_83205DC0;
loc_83205E58:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83205e78
	goto loc_83205E78;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x83204670
	ctx.lr = 0x83205E74;
	sub_83204670(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_83205E78:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x83205790
	ctx.lr = 0x83205E84;
	sub_83205790(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205E98"))) PPC_WEAK_FUNC(sub_83205E98);
PPC_FUNC_IMPL(__imp__sub_83205E98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205EA4"))) PPC_WEAK_FUNC(sub_83205EA4);
PPC_FUNC_IMPL(__imp__sub_83205EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205EA8"))) PPC_WEAK_FUNC(sub_83205EA8);
PPC_FUNC_IMPL(__imp__sub_83205EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83205EB0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r25,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r25.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r26,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r26.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r19,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r19.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r24,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r24.u32);
	// stw r22,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r22.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// bl 0x832ca4f0
	ctx.lr = 0x83205EF8;
	sub_832CA4F0(ctx, base);
	// lwz r18,652(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x83205f24
	if (!ctx.cr6.eq) goto loc_83205F24;
	// stw r19,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r19.u32);
	// addi r18,r1,256
	ctx.r18.s64 = ctx.r1.s64 + 256;
	// stw r24,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r24.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
loc_83205F24:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r8,12(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bne cr6,0x83205f50
	if (!ctx.cr6.eq) goto loc_83205F50;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
loc_83205F50:
	// lwz r23,660(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// rlwinm. r10,r23,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83205f68
	if (!ctx.cr0.eq) goto loc_83205F68;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_83205F68:
	// lwz r16,644(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// clrlwi r14,r22,26
	ctx.r14.u64 = ctx.r22.u32 & 0x3F;
	// clrlwi r27,r16,26
	ctx.r27.u64 = ctx.r16.u32 & 0x3F;
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// beq cr6,0x83206414
	if (ctx.cr6.eq) goto loc_83206414;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// beq cr6,0x83206414
	if (ctx.cr6.eq) goto loc_83206414;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82e5fe30
	ctx.lr = 0x83205F94;
	sub_82E5FE30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r20,1
	ctx.r20.s64 = 1;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r20,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r20.u32);
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r20.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// beq cr6,0x832060b0
	if (ctx.cr6.eq) goto loc_832060B0;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x832060b0
	if (ctx.cr6.eq) goto loc_832060B0;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x832060a4
	if (ctx.cr6.eq) goto loc_832060A4;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x832060a4
	if (ctx.cr6.eq) goto loc_832060A4;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x83206098
	if (ctx.cr6.eq) goto loc_83206098;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x83206098
	if (ctx.cr6.eq) goto loc_83206098;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// bne cr6,0x8320603c
	if (!ctx.cr6.eq) goto loc_8320603C;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// b 0x832060b8
	goto loc_832060B8;
loc_8320603C:
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// bne cr6,0x83206050
	if (!ctx.cr6.eq) goto loc_83206050;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,123
	ctx.r11.u64 = ctx.r11.u64 | 123;
	// b 0x832060b8
	goto loc_832060B8;
loc_83206050:
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// bne cr6,0x83206074
	if (!ctx.cr6.eq) goto loc_83206074;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320606c
	if (ctx.cr0.eq) goto loc_8320606C;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_83206064:
	// ori r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 75;
	// b 0x832060b8
	goto loc_832060B8;
loc_8320606C:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x83206064
	goto loc_83206064;
loc_83206074:
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x832060bc
	if (!ctx.cr6.eq) goto loc_832060BC;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83206090
	if (ctx.cr0.eq) goto loc_83206090;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_83206088:
	// ori r11,r11,76
	ctx.r11.u64 = ctx.r11.u64 | 76;
	// b 0x832060b8
	goto loc_832060B8;
loc_83206090:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x83206088
	goto loc_83206088;
loc_83206098:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,84
	ctx.r11.u64 = ctx.r11.u64 | 84;
	// b 0x832060b8
	goto loc_832060B8;
loc_832060A4:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// b 0x832060b8
	goto loc_832060B8;
loc_832060B0:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,82
	ctx.r11.u64 = ctx.r11.u64 | 82;
loc_832060B8:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_832060BC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r7,12(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r15,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r15.u32);
	// stw r17,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r17.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stw r20,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r20.u32);
	// bl 0x82cb1160
	ctx.lr = 0x83206104;
	sub_82CB1160(ctx, base);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r30.u32);
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// bne cr6,0x83206124
	if (!ctx.cr6.eq) goto loc_83206124;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x8320612c
	goto loc_8320612C;
loc_83206124:
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43686
	ctx.r11.u64 = ctx.r11.u64 | 43686;
loc_8320612C:
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// rlwinm r11,r16,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 26) & 0x3;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r16,0,26,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x83206178
	if (ctx.cr6.eq) goto loc_83206178;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83206158
	if (!ctx.cr6.eq) goto loc_83206158;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83206168
	goto loc_83206168;
loc_83206158:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x83206168
	if (ctx.cr6.eq) goto loc_83206168;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83206168:
	// rlwinm r10,r29,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83206178:
	// rlwinm r11,r16,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r16,14,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 14) & 0xFFF;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bne cr6,0x832061b4
	if (!ctx.cr6.eq) goto loc_832061B4;
	// cmplwi cr6,r10,1546
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1546, ctx.xer);
	// beq cr6,0x832061ec
	if (ctx.cr6.eq) goto loc_832061EC;
	// rlwinm r10,r16,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 11) & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// rlwinm r8,r16,8,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0x7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x832061e0
	goto loc_832061E0;
loc_832061B4:
	// cmplwi cr6,r10,1672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1672, ctx.xer);
	// beq cr6,0x832061ec
	if (ctx.cr6.eq) goto loc_832061EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r8,r16,11,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 11) & 0x7;
	// rlwinm r7,r16,8,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0x7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_832061E0:
	// rlwinm r11,r16,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 5) & 0x7;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_832061EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x832061fc
	if (!ctx.cr6.eq) goto loc_832061FC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8320631c
	if (ctx.cr6.eq) goto loc_8320631C;
loc_832061FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r22,r11,29,3,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r26,r22,r19
	ctx.r26.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// rlwinm r25,r22,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r30,r26,r24
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// bl 0x82bf2178
	ctx.lr = 0x8320621C;
	sub_82BF2178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82befff0
	ctx.lr = 0x83206228;
	sub_82BEFFF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83206510
	if (ctx.cr0.eq) goto loc_83206510;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83204390
	ctx.lr = 0x83206250;
	sub_83204390(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x83206300
	if (ctx.cr6.eq) goto loc_83206300;
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83206300
	if (ctx.cr6.eq) goto loc_83206300;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8320626C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x832062f4
	if (ctx.cr6.eq) goto loc_832062F4;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_8320627C:
	// addi r31,r1,384
	ctx.r31.s64 = ctx.r1.s64 + 384;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83206288:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x832062a8
	if (!ctx.cr6.eq) goto loc_832062A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x832062A4;
	sub_82CB16F0(ctx, base);
	// b 0x832062c8
	goto loc_832062C8;
loc_832062A8:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x832062b8
	if (!ctx.cr6.eq) goto loc_832062B8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// b 0x832062c4
	goto loc_832062C4;
loc_832062B8:
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_832062C4:
	// bl 0x82cb1160
	ctx.lr = 0x832062C8;
	sub_82CB1160(ctx, base);
loc_832062C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bne 0x83206288
	if (!ctx.cr0.eq) goto loc_83206288;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832062E8;
	sub_82CB1160(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// bne 0x8320627c
	if (!ctx.cr0.eq) goto loc_8320627C;
loc_832062F4:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r23,r23,r26
	ctx.r23.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bne 0x8320626c
	if (!ctx.cr0.eq) goto loc_8320626C;
loc_83206300:
	// stw r26,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r26.u32);
	// lwz r22,612(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r24,604(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r25,580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r26,588(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r23,660(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
loc_8320631C:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,24328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24328, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,-9772(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + -9772, temp.u32);
	// bl 0x832ce280
	ctx.lr = 0x83206344;
	sub_832CE280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83206360
	if (ctx.cr6.eq) goto loc_83206360;
	// bl 0x82bf2178
	ctx.lr = 0x83206354;
	sub_82BF2178(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bf12d8
	ctx.lr = 0x83206360;
	sub_82BF12D8(ctx, base);
loc_83206360:
	// rlwinm r11,r22,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// beq cr6,0x832063b4
	if (ctx.cr6.eq) goto loc_832063B4;
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x83206404
	if (!ctx.cr6.eq) goto loc_83206404;
loc_832063B4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83206404
	if (ctx.cr6.eq) goto loc_83206404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832063cc
	if (!ctx.cr6.eq) goto loc_832063CC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x832063dc
	goto loc_832063DC;
loc_832063CC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_832063DC:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r22,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83204390
	ctx.lr = 0x83206404;
	sub_83204390(ctx, base);
loc_83206404:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x832ca500
	ctx.lr = 0x8320640C;
	sub_832CA500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8320671c
	goto loc_8320671C;
loc_83206414:
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r11,r17
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,16080
	ctx.r8.s64 = ctx.r8.s64 + 16080;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// lbzx r4,r27,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// lbzx r8,r14,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r8.u32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rotlwi r23,r8,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r3,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 2;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r5,r23
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// subf. r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r22,r10,r15
	ctx.r22.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// add r19,r9,r25
	ctx.r19.u64 = ctx.r9.u64 + ctx.r25.u64;
	// bne 0x832064a8
	if (!ctx.cr0.eq) goto loc_832064A8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832064a8
	if (!ctx.cr0.eq) goto loc_832064A8;
	// clrlwi. r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832064a8
	if (!ctx.cr0.eq) goto loc_832064A8;
	// clrlwi. r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq 0x832064ac
	if (ctx.cr0.eq) goto loc_832064AC;
loc_832064A8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_832064AC:
	// lis r9,11554
	ctx.r9.s64 = 757202944;
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// ori r24,r9,43685
	ctx.r24.u64 = ctx.r9.u64 | 43685;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmpw cr6,r16,r24
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x832064d0
	if (!ctx.cr6.eq) goto loc_832064D0;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83206640
	if (ctx.cr0.eq) goto loc_83206640;
loc_832064D0:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r28,r11,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x83206508;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x83206524
	if (!ctx.cr0.eq) goto loc_83206524;
loc_83206510:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x832ca500
	ctx.lr = 0x83206518;
	sub_832CA500(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8320671c
	goto loc_8320671C;
loc_83206524:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// beq 0x832065dc
	if (ctx.cr0.eq) goto loc_832065DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r4,612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f5b30
	ctx.lr = 0x832065B0;
	sub_831F5B30(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832065c8
	if (!ctx.cr6.gt) goto loc_832065C8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_832065C8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x832065dc
	if (!ctx.cr6.gt) goto loc_832065DC;
	// subf r21,r10,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_832065DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f5b30
	ctx.lr = 0x83206640;
	sub_831F5B30(ctx, base);
loc_83206640:
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// twllei r23,0
	// divwu r8,r11,r23
	ctx.r8.u32 = ctx.r11.u32 / ctx.r23.u32;
	// beq cr6,0x83206680
	if (ctx.cr6.eq) goto loc_83206680;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// bne cr6,0x832066a0
	if (!ctx.cr6.eq) goto loc_832066A0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ca3e8
	ctx.lr = 0x8320667C;
	sub_832CA3E8(ctx, base);
	// b 0x832066a0
	goto loc_832066A0;
loc_83206680:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c9d38
	ctx.lr = 0x832066A0;
	sub_832C9D38(ctx, base);
loc_832066A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832066b4
	if (ctx.cr6.eq) goto loc_832066B4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x832066B4;
	sub_822996C0(ctx, base);
loc_832066B4:
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83206710
	if (ctx.cr6.eq) goto loc_83206710;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832066dc
	if (!ctx.cr6.eq) goto loc_832066DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,6,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x832066f4
	goto loc_832066F4;
loc_832066DC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x832066ec
	if (!ctx.cr6.eq) goto loc_832066EC;
	// ori r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 192;
	// b 0x832066f4
	goto loc_832066F4;
loc_832066EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,7,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
loc_832066F4:
	// lwz r6,588(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83204390
	ctx.lr = 0x83206710;
	sub_83204390(ctx, base);
loc_83206710:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x832ca500
	ctx.lr = 0x83206718;
	sub_832CA500(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320671C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206728"))) PPC_WEAK_FUNC(sub_83206728);
PPC_FUNC_IMPL(__imp__sub_83206728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83206730;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beq cr6,0x8320677c
	if (ctx.cr6.eq) goto loc_8320677C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// b 0x83206788
	goto loc_83206788;
loc_8320677C:
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_83206788:
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832067c0
	if (ctx.cr6.eq) goto loc_832067C0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// b 0x832067d8
	goto loc_832067D8;
loc_832067C0:
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_832067D8:
	// subf. r24,r11,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x83206858
	if (ctx.cr0.eq) goto loc_83206858;
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mullw r9,r7,r27
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r30,r9,r31
	ctx.r30.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832067FC:
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205ea8
	ctx.lr = 0x8320683C;
	sub_83205EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83206858
	if (ctx.cr0.lt) goto loc_83206858;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832067fc
	if (ctx.cr6.lt) goto loc_832067FC;
loc_83206858:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206864"))) PPC_WEAK_FUNC(sub_83206864);
PPC_FUNC_IMPL(__imp__sub_83206864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206868"))) PPC_WEAK_FUNC(sub_83206868);
PPC_FUNC_IMPL(__imp__sub_83206868) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320687C"))) PPC_WEAK_FUNC(sub_8320687C);
PPC_FUNC_IMPL(__imp__sub_8320687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206880"))) PPC_WEAK_FUNC(sub_83206880);
PPC_FUNC_IMPL(__imp__sub_83206880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83206894
	goto loc_83206894;
loc_8320688C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83206894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320688c
	if (!ctx.cr6.eq) goto loc_8320688C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832068A0"))) PPC_WEAK_FUNC(sub_832068A0);
PPC_FUNC_IMPL(__imp__sub_832068A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-9768
	ctx.r11.s64 = ctx.r11.s64 + -9768;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832068B0"))) PPC_WEAK_FUNC(sub_832068B0);
PPC_FUNC_IMPL(__imp__sub_832068B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r9,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r3,30
	ctx.r9.u64 = ctx.r3.u32 & 0x3;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832068D8"))) PPC_WEAK_FUNC(sub_832068D8);
PPC_FUNC_IMPL(__imp__sub_832068D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r9,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206900"))) PPC_WEAK_FUNC(sub_83206900);
PPC_FUNC_IMPL(__imp__sub_83206900) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8320696c
	if (ctx.cr6.eq) goto loc_8320696C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8320696c
	if (ctx.cr6.eq) goto loc_8320696C;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8320692c
	if (!ctx.cr6.eq) goto loc_8320692C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// b 0x83206958
	goto loc_83206958;
loc_8320692C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83206958
	if (ctx.cr6.eq) goto loc_83206958;
loc_83206934:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83206950
	if (ctx.cr6.eq) goto loc_83206950;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8320696c
	if (ctx.cr6.eq) goto loc_8320696C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x83206934
	goto loc_83206934;
loc_83206950:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83206958:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8320696C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206978"))) PPC_WEAK_FUNC(sub_83206978);
PPC_FUNC_IMPL(__imp__sub_83206978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832069AC"))) PPC_WEAK_FUNC(sub_832069AC);
PPC_FUNC_IMPL(__imp__sub_832069AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832069B0"))) PPC_WEAK_FUNC(sub_832069B0);
PPC_FUNC_IMPL(__imp__sub_832069B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r9,27,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r8,r10,25,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832069E4"))) PPC_WEAK_FUNC(sub_832069E4);
PPC_FUNC_IMPL(__imp__sub_832069E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832069E8"))) PPC_WEAK_FUNC(sub_832069E8);
PPC_FUNC_IMPL(__imp__sub_832069E8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r7,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r4,0,8,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFE0FFFFFF;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// rlwimi r7,r6,16,12,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF0FFFF);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// rlwimi r7,r5,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r10,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r31,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r31.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206A58"))) PPC_WEAK_FUNC(sub_83206A58);
PPC_FUNC_IMPL(__imp__sub_83206A58) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83206A60;
	__savegprlr_29(ctx, base);
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r7,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r4,1
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r4,0,8,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFE0FFFFFF;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// rlwimi r7,r6,16,12,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF0FFFF);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r7,r5,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r10,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r31,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r31.u8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r30,29,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 29) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r6,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r6.u8);
	// stb r4,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r4.u8);
	// stb r29,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r29.u8);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206AE0"))) PPC_WEAK_FUNC(sub_83206AE0);
PPC_FUNC_IMPL(__imp__sub_83206AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r5,r6,12,16,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0xF000) | (ctx.r5.u64 & 0xFFFFFFFFFFFF0FFF);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r4,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// stb r9,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r9.u8);
	// rlwinm r6,r5,8,8,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF00;
	// rlwinm r11,r11,0,24,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwinm r6,r6,0,18,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF03FFF;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rlwimi r10,r7,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B1C"))) PPC_WEAK_FUNC(sub_83206B1C);
PPC_FUNC_IMPL(__imp__sub_83206B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206B20"))) PPC_WEAK_FUNC(sub_83206B20);
PPC_FUNC_IMPL(__imp__sub_83206B20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B34"))) PPC_WEAK_FUNC(sub_83206B34);
PPC_FUNC_IMPL(__imp__sub_83206B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206B38"))) PPC_WEAK_FUNC(sub_83206B38);
PPC_FUNC_IMPL(__imp__sub_83206B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B40"))) PPC_WEAK_FUNC(sub_83206B40);
PPC_FUNC_IMPL(__imp__sub_83206B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B48"))) PPC_WEAK_FUNC(sub_83206B48);
PPC_FUNC_IMPL(__imp__sub_83206B48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B5C"))) PPC_WEAK_FUNC(sub_83206B5C);
PPC_FUNC_IMPL(__imp__sub_83206B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206B60"))) PPC_WEAK_FUNC(sub_83206B60);
PPC_FUNC_IMPL(__imp__sub_83206B60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B80"))) PPC_WEAK_FUNC(sub_83206B80);
PPC_FUNC_IMPL(__imp__sub_83206B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,2944
	ctx.r11.u64 = ctx.r11.u64 & 2944;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206BA4"))) PPC_WEAK_FUNC(sub_83206BA4);
PPC_FUNC_IMPL(__imp__sub_83206BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BA8"))) PPC_WEAK_FUNC(sub_83206BA8);
PPC_FUNC_IMPL(__imp__sub_83206BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206BCC"))) PPC_WEAK_FUNC(sub_83206BCC);
PPC_FUNC_IMPL(__imp__sub_83206BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BD0"))) PPC_WEAK_FUNC(sub_83206BD0);
PPC_FUNC_IMPL(__imp__sub_83206BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206BD4"))) PPC_WEAK_FUNC(sub_83206BD4);
PPC_FUNC_IMPL(__imp__sub_83206BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BD8"))) PPC_WEAK_FUNC(sub_83206BD8);
PPC_FUNC_IMPL(__imp__sub_83206BD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206BE4"))) PPC_WEAK_FUNC(sub_83206BE4);
PPC_FUNC_IMPL(__imp__sub_83206BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BE8"))) PPC_WEAK_FUNC(sub_83206BE8);
PPC_FUNC_IMPL(__imp__sub_83206BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206BF4"))) PPC_WEAK_FUNC(sub_83206BF4);
PPC_FUNC_IMPL(__imp__sub_83206BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BF8"))) PPC_WEAK_FUNC(sub_83206BF8);
PPC_FUNC_IMPL(__imp__sub_83206BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83206c2c
	if (ctx.cr6.eq) goto loc_83206C2C;
loc_83206C14:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x83206C20;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83206c14
	if (!ctx.cr6.eq) goto loc_83206C14;
loc_83206C2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206C40"))) PPC_WEAK_FUNC(sub_83206C40);
PPC_FUNC_IMPL(__imp__sub_83206C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83206C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r29,r11,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83206ca8
	if (!ctx.cr6.lt) goto loc_83206CA8;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r30,65136
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65136, ctx.xer);
	// bge cr6,0x83206c78
	if (!ctx.cr6.lt) goto loc_83206C78;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,65136
	ctx.r30.u64 = ctx.r30.u64 | 65136;
loc_83206C78:
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x83206C84;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83206cc0
	if (ctx.cr0.eq) goto loc_83206CC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r9,r30,-16
	ctx.r9.s64 = ctx.r30.s64 + -16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83206CA8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83206CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206CC8"))) PPC_WEAK_FUNC(sub_83206CC8);
PPC_FUNC_IMPL(__imp__sub_83206CC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206CE4"))) PPC_WEAK_FUNC(sub_83206CE4);
PPC_FUNC_IMPL(__imp__sub_83206CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206CE8"))) PPC_WEAK_FUNC(sub_83206CE8);
PPC_FUNC_IMPL(__imp__sub_83206CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83206bf8
	sub_83206BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206CEC"))) PPC_WEAK_FUNC(sub_83206CEC);
PPC_FUNC_IMPL(__imp__sub_83206CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206CF0"))) PPC_WEAK_FUNC(sub_83206CF0);
PPC_FUNC_IMPL(__imp__sub_83206CF0) {
	PPC_FUNC_PROLOGUE();
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x83206c40
	sub_83206C40(ctx, base);
	return;
}

