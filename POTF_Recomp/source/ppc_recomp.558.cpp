#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831FAFC8"))) PPC_WEAK_FUNC(sub_831FAFC8);
PPC_FUNC_IMPL(__imp__sub_831FAFC8) {
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
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x831fb020
	if (ctx.cr6.lt) goto loc_831FB020;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r10,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r6,16,12,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831fad28
	ctx.lr = 0x831FB020;
	sub_831FAD28(ctx, base);
loc_831FB020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FB030"))) PPC_WEAK_FUNC(sub_831FB030);
PPC_FUNC_IMPL(__imp__sub_831FB030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fb158
	if (ctx.cr6.lt) goto loc_831FB158;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,142(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 142);
	// mulli r10,r10,452
	ctx.r10.s64 = ctx.r10.s64 * 452;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fb0a0
	if (ctx.cr0.eq) goto loc_831FB0A0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831fb08c
	if (ctx.cr6.lt) goto loc_831FB08C;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831fb0a4
	goto loc_831FB0A4;
loc_831FB08C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x831fb158
	goto loc_831FB158;
loc_831FB0A0:
	// addi r11,r10,-452
	ctx.r11.s64 = ctx.r10.s64 + -452;
loc_831FB0A4:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x831fb130
	if (ctx.cr6.lt) goto loc_831FB130;
	// beq cr6,0x831fb0fc
	if (ctx.cr6.eq) goto loc_831FB0FC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x831fb0d0
	if (ctx.cr6.lt) goto loc_831FB0D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// bl 0x82ccb660
	ctx.lr = 0x831FB0C4;
	sub_82CCB660(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831fb158
	goto loc_831FB158;
loc_831FB0D0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// bl 0x831fa030
	ctx.lr = 0x831FB0F8;
	sub_831FA030(ctx, base);
	// b 0x831fb154
	goto loc_831FB154;
loc_831FB0FC:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x831fa0b8
	ctx.lr = 0x831FB12C;
	sub_831FA0B8(ctx, base);
	// b 0x831fb154
	goto loc_831FB154;
loc_831FB130:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x831f9fb8
	ctx.lr = 0x831FB154;
	sub_831F9FB8(ctx, base);
loc_831FB154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FB158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FB168"))) PPC_WEAK_FUNC(sub_831FB168);
PPC_FUNC_IMPL(__imp__sub_831FB168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FB170;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb1fc
	if (ctx.cr6.lt) goto loc_831FB1FC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,228(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r9,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r9,r8,31,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r27,r10,13,0,18
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFFFE000) | (ctx.r27.u64 & 0xFFFFFFFF00001FFF);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r27,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r27.u32, 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r10,r6,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,23,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF800001FF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831f9d90
	ctx.lr = 0x831FB1FC;
	sub_831F9D90(ctx, base);
loc_831FB1FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB204"))) PPC_WEAK_FUNC(sub_831FB204);
PPC_FUNC_IMPL(__imp__sub_831FB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FB208"))) PPC_WEAK_FUNC(sub_831FB208);
PPC_FUNC_IMPL(__imp__sub_831FB208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FB210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fb25c
	if (ctx.cr6.lt) goto loc_831FB25C;
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fb25c
	if (ctx.cr6.gt) goto loc_831FB25C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb254
	if (!ctx.cr6.gt) goto loc_831FB254;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f79b8
	ctx.lr = 0x831FB254;
	sub_831F79B8(ctx, base);
loc_831FB254:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_831FB25C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB264"))) PPC_WEAK_FUNC(sub_831FB264);
PPC_FUNC_IMPL(__imp__sub_831FB264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FB268"))) PPC_WEAK_FUNC(sub_831FB268);
PPC_FUNC_IMPL(__imp__sub_831FB268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FB270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fb2bc
	if (ctx.cr6.lt) goto loc_831FB2BC;
	// lwz r30,104(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fb2bc
	if (ctx.cr6.gt) goto loc_831FB2BC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb2b4
	if (!ctx.cr6.gt) goto loc_831FB2B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7928
	ctx.lr = 0x831FB2B4;
	sub_831F7928(ctx, base);
loc_831FB2B4:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_831FB2BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB2C4"))) PPC_WEAK_FUNC(sub_831FB2C4);
PPC_FUNC_IMPL(__imp__sub_831FB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FB2C8"))) PPC_WEAK_FUNC(sub_831FB2C8);
PPC_FUNC_IMPL(__imp__sub_831FB2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831FB2D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r26,r28,128
	ctx.r26.s64 = ctx.r28.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb36c
	if (ctx.cr6.lt) goto loc_831FB36C;
	// lwz r29,104(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fb338
	if (ctx.cr6.gt) goto loc_831FB338;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb328
	if (!ctx.cr6.gt) goto loc_831FB328;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f7928
	ctx.lr = 0x831FB328;
	sub_831F7928(ctx, base);
loc_831FB328:
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb36c
	if (ctx.cr6.lt) goto loc_831FB36C;
loc_831FB338:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0xFFFFFFFE) | (ctx.r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_831FB36C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB374"))) PPC_WEAK_FUNC(sub_831FB374);
PPC_FUNC_IMPL(__imp__sub_831FB374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FB378"))) PPC_WEAK_FUNC(sub_831FB378);
PPC_FUNC_IMPL(__imp__sub_831FB378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831FB380;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r26,r28,128
	ctx.r26.s64 = ctx.r28.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb418
	if (ctx.cr6.lt) goto loc_831FB418;
	// lwz r29,104(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fb3e8
	if (ctx.cr6.gt) goto loc_831FB3E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb3d8
	if (!ctx.cr6.gt) goto loc_831FB3D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f7928
	ctx.lr = 0x831FB3D8;
	sub_831F7928(ctx, base);
loc_831FB3D8:
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb418
	if (ctx.cr6.lt) goto loc_831FB418;
loc_831FB3E8:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r30,r24,1,0,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0xFFFFFFFE) | (ctx.r30.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_831FB418:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB420"))) PPC_WEAK_FUNC(sub_831FB420);
PPC_FUNC_IMPL(__imp__sub_831FB420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FB428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	ctx.r29.s64 = ctx.r11.s64 + 128;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fb474
	if (ctx.cr6.lt) goto loc_831FB474;
	// lwz r30,100(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fb474
	if (ctx.cr6.gt) goto loc_831FB474;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb46c
	if (!ctx.cr6.gt) goto loc_831FB46C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7898
	ctx.lr = 0x831FB46C;
	sub_831F7898(ctx, base);
loc_831FB46C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_831FB474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB47C"))) PPC_WEAK_FUNC(sub_831FB47C);
PPC_FUNC_IMPL(__imp__sub_831FB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FB480"))) PPC_WEAK_FUNC(sub_831FB480);
PPC_FUNC_IMPL(__imp__sub_831FB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FB488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r27,r28,128
	ctx.r27.s64 = ctx.r28.s64 + 128;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb508
	if (ctx.cr6.lt) goto loc_831FB508;
	// lwz r31,100(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x831fb4e8
	if (ctx.cr6.gt) goto loc_831FB4E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fb4d8
	if (!ctx.cr6.gt) goto loc_831FB4D8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7898
	ctx.lr = 0x831FB4D8;
	sub_831F7898(ctx, base);
loc_831FB4D8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb508
	if (ctx.cr6.lt) goto loc_831FB508;
loc_831FB4E8:
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_831FB508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB510"))) PPC_WEAK_FUNC(sub_831FB510);
PPC_FUNC_IMPL(__imp__sub_831FB510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FB518;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// beq 0x831fb654
	if (ctx.cr0.eq) goto loc_831FB654;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,21574
	ctx.r30.s64 = ctx.r11.s64 + 21574;
loc_831FB540:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fb5b0
	if (!ctx.cr6.lt) goto loc_831FB5B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 * 276;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831FB570:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_831FB578:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x831fb59c
	if (ctx.cr0.eq) goto loc_831FB59C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x831fb578
	if (ctx.cr6.eq) goto loc_831FB578;
loc_831FB59C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x831fb688
	if (ctx.cr0.eq) goto loc_831FB688;
	// addi r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 + 276;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831fb570
	if (ctx.cr6.lt) goto loc_831FB570;
loc_831FB5B0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// bl 0x82cb2ea0
	ctx.lr = 0x831FB5C8;
	sub_82CB2EA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r11,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r11.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// bne cr6,0x831fb620
	if (!ctx.cr6.eq) goto loc_831FB620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea2a0
	ctx.lr = 0x831FB5FC;
	sub_82BEA2A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x831fb620
	if (ctx.cr6.eq) goto loc_831FB620;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8335a170
	ctx.lr = 0x831FB618;
	sub_8335A170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bea4e0
	ctx.lr = 0x831FB620;
	sub_82BEA4E0(ctx, base);
loc_831FB620:
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fa140
	ctx.lr = 0x831FB634;
	sub_831FA140(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fb648
	if (ctx.cr6.lt) goto loc_831FB648;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_831FB648:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_831FB64C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_831FB654:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831FB658:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831fb658
	if (!ctx.cr6.eq) goto loc_831FB658;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// blt cr6,0x831fb540
	if (ctx.cr6.lt) goto loc_831FB540;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831fb64c
	goto loc_831FB64C;
loc_831FB688:
	// lwz r11,260(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x831fb64c
	goto loc_831FB64C;
}

__attribute__((alias("__imp__sub_831FB698"))) PPC_WEAK_FUNC(sub_831FB698);
PPC_FUNC_IMPL(__imp__sub_831FB698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x831FB6A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831FB6B4;
	sub_831F69E0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r10,-21472
	ctx.r28.s64 = ctx.r10.s64 + -21472;
	// addi r4,r11,-22264
	ctx.r4.s64 = ctx.r11.s64 + -22264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x831f6908
	ctx.lr = 0x831FB6D8;
	sub_831F6908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831FB6E0;
	sub_831F7F68(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r22,r29,16
	ctx.r22.s64 = ctx.r29.s64 + 16;
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fb9bc
	if (!ctx.cr6.lt) goto loc_831FB9BC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r23,-32247
	ctx.r23.s64 = -2113339392;
	// lis r24,-32247
	ctx.r24.s64 = -2113339392;
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r9,r9,-4976
	ctx.r9.s64 = ctx.r9.s64 + -4976;
	// addi r21,r28,-21488
	ctx.r21.s64 = ctx.r28.s64 + -21488;
	// addi r23,r23,-22420
	ctx.r23.s64 = ctx.r23.s64 + -22420;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r24,r24,-21516
	ctx.r24.s64 = ctx.r24.s64 + -21516;
	// addi r25,r25,-21524
	ctx.r25.s64 = ctx.r25.s64 + -21524;
	// addi r26,r26,-21532
	ctx.r26.s64 = ctx.r26.s64 + -21532;
	// addi r27,r27,-21544
	ctx.r27.s64 = ctx.r27.s64 + -21544;
	// addi r20,r3,-21564
	ctx.r20.s64 = ctx.r3.s64 + -21564;
	// addi r19,r4,-21572
	ctx.r19.s64 = ctx.r4.s64 + -21572;
	// addi r18,r5,-21584
	ctx.r18.s64 = ctx.r5.s64 + -21584;
	// addi r16,r6,6564
	ctx.r16.s64 = ctx.r6.s64 + 6564;
	// addi r15,r7,-21588
	ctx.r15.s64 = ctx.r7.s64 + -21588;
	// addi r14,r8,-4780
	ctx.r14.s64 = ctx.r8.s64 + -4780;
	// addi r17,r10,21864
	ctx.r17.s64 = ctx.r10.s64 + 21864;
	// addi r28,r11,-21596
	ctx.r28.s64 = ctx.r11.s64 + -21596;
loc_831FB77C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f69e0
	ctx.lr = 0x831FB784;
	sub_831F69E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f6908
	ctx.lr = 0x831FB794;
	sub_831F6908(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x82cb16f0
	ctx.lr = 0x831FB7AC;
	sub_82CB16F0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fb8a0
	if (ctx.cr6.eq) goto loc_831FB8A0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831FB7C8;
	sub_831F6C48(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831fb80c
	if (ctx.cr6.eq) goto loc_831FB80C;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831fb804
	if (ctx.cr6.eq) goto loc_831FB804;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831fb7fc
	if (ctx.cr6.eq) goto loc_831FB7FC;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// b 0x831fb810
	goto loc_831FB810;
loc_831FB7FC:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// b 0x831fb810
	goto loc_831FB810;
loc_831FB804:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831fb810
	goto loc_831FB810;
loc_831FB80C:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_831FB810:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lbz r8,259(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 259);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r7,258(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 258);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb7580
	ctx.lr = 0x831FB828;
	sub_82CB7580(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831FB838;
	sub_831F6C48(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x831fb86c
	if (ctx.cr6.eq) goto loc_831FB86C;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831FB858;
	sub_831F6C48(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6908
	ctx.lr = 0x831FB86C;
	sub_831F6908(ctx, base);
loc_831FB86C:
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x831fb8a0
	if (ctx.cr6.eq) goto loc_831FB8A0;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831f6c48
	ctx.lr = 0x831FB88C;
	sub_831F6C48(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,440(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6908
	ctx.lr = 0x831FB8A0;
	sub_831F6908(ctx, base);
loc_831FB8A0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6908
	ctx.lr = 0x831FB8B4;
	sub_831F6908(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x831f6908
	ctx.lr = 0x831FB8CC;
	sub_831F6908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831FB8D4;
	sub_831F7F68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f9120
	ctx.lr = 0x831FB8E4;
	sub_831F9120(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = ctx.r31.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8268
	ctx.lr = 0x831FB8F8;
	sub_831F8268(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = ctx.r31.s64 + 336;
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f98e0
	ctx.lr = 0x831FB90C;
	sub_831F98E0(ctx, base);
	// addi r5,r31,288
	ctx.r5.s64 = ctx.r31.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f83b8
	ctx.lr = 0x831FB920;
	sub_831F83B8(ctx, base);
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8598
	ctx.lr = 0x831FB930;
	sub_831F8598(ctx, base);
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f9ab0
	ctx.lr = 0x831FB940;
	sub_831F9AB0(ctx, base);
	// addi r5,r31,364
	ctx.r5.s64 = ctx.r31.s64 + 364;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f86a8
	ctx.lr = 0x831FB954;
	sub_831F86A8(ctx, base);
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8800
	ctx.lr = 0x831FB968;
	sub_831F8800(ctx, base);
	// addi r5,r31,312
	ctx.r5.s64 = ctx.r31.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f89d0
	ctx.lr = 0x831FB978;
	sub_831F89D0(ctx, base);
	// addi r7,r31,420
	ctx.r7.s64 = ctx.r31.s64 + 420;
	// addi r6,r31,408
	ctx.r6.s64 = ctx.r31.s64 + 408;
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8b78
	ctx.lr = 0x831FB990;
	sub_831F8B78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831FB99C;
	sub_831F6A40(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r31,r31,452
	ctx.r31.s64 = ctx.r31.s64 + 452;
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fb77c
	if (ctx.cr6.lt) goto loc_831FB77C;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831FB9BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831FB9C8;
	sub_831F6A40(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FB9D0"))) PPC_WEAK_FUNC(sub_831FB9D0);
PPC_FUNC_IMPL(__imp__sub_831FB9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x831FB9D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r26,r3,128
	ctx.r26.s64 = ctx.r3.s64 + 128;
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fba68
	if (ctx.cr6.lt) goto loc_831FBA68;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_831FB9FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831fb9fc
	if (!ctx.cr6.eq) goto loc_831FB9FC;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831fba40
	if (!ctx.cr6.gt) goto loc_831FBA40;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7da8
	ctx.lr = 0x831FBA40;
	sub_831F7DA8(ctx, base);
loc_831FBA40:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fba68
	if (ctx.cr6.lt) goto loc_831FBA68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831FBA64;
	sub_82CB1160(ctx, base);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_831FBA68:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBA74"))) PPC_WEAK_FUNC(sub_831FBA74);
PPC_FUNC_IMPL(__imp__sub_831FBA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBA78"))) PPC_WEAK_FUNC(sub_831FBA78);
PPC_FUNC_IMPL(__imp__sub_831FBA78) {
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
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82299698
	ctx.lr = 0x831FBA90;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831fbaa0
	if (ctx.cr0.eq) goto loc_831FBAA0;
	// bl 0x831fa398
	ctx.lr = 0x831FBA9C;
	sub_831FA398(ctx, base);
	// b 0x831fbaa4
	goto loc_831FBAA4;
loc_831FBAA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FBAA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FBAB4"))) PPC_WEAK_FUNC(sub_831FBAB4);
PPC_FUNC_IMPL(__imp__sub_831FBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBAB8"))) PPC_WEAK_FUNC(sub_831FBAB8);
PPC_FUNC_IMPL(__imp__sub_831FBAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fae08
	sub_831FAE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBABC"))) PPC_WEAK_FUNC(sub_831FBABC);
PPC_FUNC_IMPL(__imp__sub_831FBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBAC0"))) PPC_WEAK_FUNC(sub_831FBAC0);
PPC_FUNC_IMPL(__imp__sub_831FBAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fae80
	sub_831FAE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBAC4"))) PPC_WEAK_FUNC(sub_831FBAC4);
PPC_FUNC_IMPL(__imp__sub_831FBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBAC8"))) PPC_WEAK_FUNC(sub_831FBAC8);
PPC_FUNC_IMPL(__imp__sub_831FBAC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831faee0
	sub_831FAEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBACC"))) PPC_WEAK_FUNC(sub_831FBACC);
PPC_FUNC_IMPL(__imp__sub_831FBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBAD0"))) PPC_WEAK_FUNC(sub_831FBAD0);
PPC_FUNC_IMPL(__imp__sub_831FBAD0) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831fb168
	ctx.lr = 0x831FBAE8;
	sub_831FB168(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FBAF8"))) PPC_WEAK_FUNC(sub_831FBAF8);
PPC_FUNC_IMPL(__imp__sub_831FBAF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb208
	sub_831FB208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBAFC"))) PPC_WEAK_FUNC(sub_831FBAFC);
PPC_FUNC_IMPL(__imp__sub_831FBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB00"))) PPC_WEAK_FUNC(sub_831FBB00);
PPC_FUNC_IMPL(__imp__sub_831FBB00) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb268
	sub_831FB268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB04"))) PPC_WEAK_FUNC(sub_831FBB04);
PPC_FUNC_IMPL(__imp__sub_831FBB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB08"))) PPC_WEAK_FUNC(sub_831FBB08);
PPC_FUNC_IMPL(__imp__sub_831FBB08) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb2c8
	sub_831FB2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB0C"))) PPC_WEAK_FUNC(sub_831FBB0C);
PPC_FUNC_IMPL(__imp__sub_831FBB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB10"))) PPC_WEAK_FUNC(sub_831FBB10);
PPC_FUNC_IMPL(__imp__sub_831FBB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb378
	sub_831FB378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB14"))) PPC_WEAK_FUNC(sub_831FBB14);
PPC_FUNC_IMPL(__imp__sub_831FBB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB18"))) PPC_WEAK_FUNC(sub_831FBB18);
PPC_FUNC_IMPL(__imp__sub_831FBB18) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb420
	sub_831FB420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB1C"))) PPC_WEAK_FUNC(sub_831FBB1C);
PPC_FUNC_IMPL(__imp__sub_831FBB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB20"))) PPC_WEAK_FUNC(sub_831FBB20);
PPC_FUNC_IMPL(__imp__sub_831FBB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb480
	sub_831FB480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB24"))) PPC_WEAK_FUNC(sub_831FBB24);
PPC_FUNC_IMPL(__imp__sub_831FBB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB28"))) PPC_WEAK_FUNC(sub_831FBB28);
PPC_FUNC_IMPL(__imp__sub_831FBB28) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fb030
	sub_831FB030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBB2C"))) PPC_WEAK_FUNC(sub_831FBB2C);
PPC_FUNC_IMPL(__imp__sub_831FBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBB30"))) PPC_WEAK_FUNC(sub_831FBB30);
PPC_FUNC_IMPL(__imp__sub_831FBB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x831FBB38;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831fbb70
	if (!ctx.cr6.gt) goto loc_831FBB70;
	// addi r5,r29,128
	ctx.r5.s64 = ctx.r29.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7c88
	ctx.lr = 0x831FBB70;
	sub_831F7C88(ctx, base);
loc_831FBB70:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r21,r29,128
	ctx.r21.s64 = ctx.r29.s64 + 128;
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x831fbb8c
	if (!ctx.cr6.lt) goto loc_831FBB8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fbda4
	goto loc_831FBDA4;
loc_831FBB8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-452
	ctx.r30.s64 = ctx.r11.s64 + -452;
	// addi r28,r30,276
	ctx.r28.s64 = ctx.r30.s64 + 276;
	// stw r31,-176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -176, ctx.r31.u32);
	// addi r27,r30,288
	ctx.r27.s64 = ctx.r30.s64 + 288;
	// stw r31,-172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -172, ctx.r31.u32);
	// addi r26,r30,324
	ctx.r26.s64 = ctx.r30.s64 + 324;
	// stw r31,-168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -168, ctx.r31.u32);
	// stw r31,-164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -164, ctx.r31.u32);
	// addi r25,r30,352
	ctx.r25.s64 = ctx.r30.s64 + 352;
	// stw r31,-160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -160, ctx.r31.u32);
	// addi r24,r30,364
	ctx.r24.s64 = ctx.r30.s64 + 364;
	// stw r31,-156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -156, ctx.r31.u32);
	// stw r31,-128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -128, ctx.r31.u32);
	// addi r23,r30,376
	ctx.r23.s64 = ctx.r30.s64 + 376;
	// stw r31,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r31.u32);
	// stw r31,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r31.u32);
	// stw r31,-100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -100, ctx.r31.u32);
	// stw r31,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r31.u32);
	// stw r31,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r31.u32);
	// stw r31,-88(r11)
	PPC_STORE_U32(ctx.r11.u32 + -88, ctx.r31.u32);
	// stw r31,-84(r11)
	PPC_STORE_U32(ctx.r11.u32 + -84, ctx.r31.u32);
	// stw r31,-80(r11)
	PPC_STORE_U32(ctx.r11.u32 + -80, ctx.r31.u32);
	// stw r31,-76(r11)
	PPC_STORE_U32(ctx.r11.u32 + -76, ctx.r31.u32);
	// stw r31,-72(r11)
	PPC_STORE_U32(ctx.r11.u32 + -72, ctx.r31.u32);
	// stw r31,-68(r11)
	PPC_STORE_U32(ctx.r11.u32 + -68, ctx.r31.u32);
	// beq cr6,0x831fbc20
	if (ctx.cr6.eq) goto loc_831FBC20;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x831FBC1C;
	sub_82F1CE30(ctx, base);
	// b 0x831fbc24
	goto loc_831FBC24;
loc_831FBC20:
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
loc_831FBC24:
	// stw r31,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r31.u32);
	// stw r20,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r20.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bge cr6,0x831fbc4c
	if (!ctx.cr6.lt) goto loc_831FBC4C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f76e8
	ctx.lr = 0x831FBC4C;
	sub_831F76E8(ctx, base);
loc_831FBC4C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x831fbc6c
	if (!ctx.cr6.lt) goto loc_831FBC6C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f7778
	ctx.lr = 0x831FBC6C;
	sub_831F7778(ctx, base);
loc_831FBC6C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x831fbc8c
	if (!ctx.cr6.lt) goto loc_831FBC8C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f7808
	ctx.lr = 0x831FBC8C;
	sub_831F7808(ctx, base);
loc_831FBC8C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x831fbcac
	if (!ctx.cr6.lt) goto loc_831FBCAC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f7898
	ctx.lr = 0x831FBCAC;
	sub_831F7898(ctx, base);
loc_831FBCAC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x831fbccc
	if (!ctx.cr6.lt) goto loc_831FBCCC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831f7928
	ctx.lr = 0x831FBCCC;
	sub_831F7928(ctx, base);
loc_831FBCCC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x831fbcec
	if (!ctx.cr6.lt) goto loc_831FBCEC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831f79b8
	ctx.lr = 0x831FBCEC;
	sub_831F79B8(ctx, base);
loc_831FBCEC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r31.u32);
	// stw r11,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r11.u32);
	// stw r11,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r11.u32);
	// stw r11,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r11.u32);
	// stw r11,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r11.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x831fbd28
	if (ctx.cr6.lt) goto loc_831FBD28;
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r31.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r31.u32);
loc_831FBD28:
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fae08
	ctx.lr = 0x831FBD38;
	sub_831FAE08(ctx, base);
	// addi r31,r30,336
	ctx.r31.s64 = ctx.r30.s64 + 336;
	// lis r4,19523
	ctx.r4.s64 = 1279459328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17494
	ctx.r4.u64 = ctx.r4.u64 | 17494;
	// bl 0x82f1b6d8
	ctx.lr = 0x831FBD4C;
	sub_82F1B6D8(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fbda0
	if (ctx.cr6.lt) goto loc_831FBDA0;
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
	// stw r30,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r30.u32);
	// addi r10,r30,312
	ctx.r10.s64 = ctx.r30.s64 + 312;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// addi r9,r30,396
	ctx.r9.s64 = ctx.r30.s64 + 396;
	// stw r27,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r27.u32);
	// addi r8,r30,408
	ctx.r8.s64 = ctx.r30.s64 + 408;
	// stw r26,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r26.u32);
	// addi r7,r30,420
	ctx.r7.s64 = ctx.r30.s64 + 420;
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// stw r25,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r25.u32);
	// stw r24,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r24.u32);
	// stw r23,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r23.u32);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// stw r9,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r9.u32);
	// stw r8,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r8.u32);
	// stw r7,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r7.u32);
loc_831FBDA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831FBDA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBDAC"))) PPC_WEAK_FUNC(sub_831FBDAC);
PPC_FUNC_IMPL(__imp__sub_831FBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FBDB0"))) PPC_WEAK_FUNC(sub_831FBDB0);
PPC_FUNC_IMPL(__imp__sub_831FBDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FBDB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 140);
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831fbe28
	if (ctx.cr6.lt) goto loc_831FBE28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fbb30
	ctx.lr = 0x831FBDE0;
	sub_831FBB30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r31,-452
	ctx.r5.s64 = ctx.r31.s64 + -452;
	// bl 0x82f1ce30
	ctx.lr = 0x831FBDF0;
	sub_82F1CE30(ctx, base);
	// lwz r11,-196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lwz r5,-60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r4,-64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// bl 0x831f8078
	ctx.lr = 0x831FBE28;
	sub_831F8078(ctx, base);
loc_831FBE28:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,452
	ctx.r11.s64 = ctx.r11.s64 * 452;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lhz r11,142(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 142);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,142(r30)
	PPC_STORE_U16(ctx.r30.u32 + 142, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBE50"))) PPC_WEAK_FUNC(sub_831FBE50);
PPC_FUNC_IMPL(__imp__sub_831FBE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FBE58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x831fbeb8
	if (!ctx.cr6.eq) goto loc_831FBEB8;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831FBE80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x831fbea4
	if (ctx.cr0.eq) goto loc_831FBEA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x831fbe80
	if (ctx.cr6.eq) goto loc_831FBE80;
loc_831FBEA4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831fbeb8
	if (!ctx.cr0.eq) goto loc_831FBEB8;
	// lwz r11,256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x831fbf78
	if (ctx.cr6.eq) goto loc_831FBF78;
loc_831FBEB8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fbef8
	if (!ctx.cr6.eq) goto loc_831FBEF8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r4,r11,-21620
	ctx.r4.s64 = ctx.r11.s64 + -21620;
	// bl 0x82cb1690
	ctx.lr = 0x831FBED4;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x831fbeec
	if (ctx.cr0.eq) goto loc_831FBEEC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x831fbef4
	goto loc_831FBEF4;
loc_831FBEEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_831FBEF4:
	// bl 0x831f9368
	ctx.lr = 0x831FBEF8;
	sub_831F9368(ctx, base);
loc_831FBEF8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fbf54
	if (ctx.cr6.eq) goto loc_831FBF54;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// blt cr6,0x831fbf28
	if (ctx.cr6.lt) goto loc_831FBF28;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_831FBF28:
	// lhz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x831fbf3c
	if (!ctx.cr0.eq) goto loc_831FBF3C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_831FBF3C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r9.u16);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_831FBF54:
	// sth r9,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r9.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r9,142(r31)
	PPC_STORE_U16(ctx.r31.u32 + 142, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbb30
	ctx.lr = 0x831FBF70;
	sub_831FBB30(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_831FBF78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FBF80"))) PPC_WEAK_FUNC(sub_831FBF80);
PPC_FUNC_IMPL(__imp__sub_831FBF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x831FBF88;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fbff8
	if (ctx.cr6.lt) goto loc_831FBFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831fb510
	ctx.lr = 0x831FBFC0;
	sub_831FB510(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831fbff8
	if (ctx.cr0.lt) goto loc_831FBFF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831f9cf8
	ctx.lr = 0x831FBFF8;
	sub_831F9CF8(ctx, base);
loc_831FBFF8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC000"))) PPC_WEAK_FUNC(sub_831FC000);
PPC_FUNC_IMPL(__imp__sub_831FC000) {
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
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fc094
	if (ctx.cr6.eq) goto loc_831FC094;
	// stw r30,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x831fc03c
	if (!ctx.cr6.eq) goto loc_831FC03C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,21574
	ctx.r5.s64 = ctx.r11.s64 + 21574;
loc_831FC03C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fb9d0
	ctx.lr = 0x831FC048;
	sub_831FB9D0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r3.u32);
	// lhz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fc094
	if (ctx.cr0.eq) goto loc_831FC094;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FC060:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mulli r9,r11,452
	ctx.r9.s64 = ctx.r11.s64 * 452;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r30,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r30.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	// stw r10,-16(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16, ctx.r10.u32);
	// lhz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831fc060
	if (ctx.cr6.lt) goto loc_831FC060;
loc_831FC094:
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

__attribute__((alias("__imp__sub_831FC0AC"))) PPC_WEAK_FUNC(sub_831FC0AC);
PPC_FUNC_IMPL(__imp__sub_831FC0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC0B0"))) PPC_WEAK_FUNC(sub_831FC0B0);
PPC_FUNC_IMPL(__imp__sub_831FC0B0) {
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
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fc144
	if (ctx.cr6.eq) goto loc_831FC144;
	// stw r30,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x831fc0ec
	if (!ctx.cr6.eq) goto loc_831FC0EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,21574
	ctx.r5.s64 = ctx.r11.s64 + 21574;
loc_831FC0EC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fb9d0
	ctx.lr = 0x831FC0F8;
	sub_831FB9D0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r3.u32);
	// lhz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fc144
	if (ctx.cr0.eq) goto loc_831FC144;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FC110:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mulli r9,r11,452
	ctx.r9.s64 = ctx.r11.s64 * 452;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r30,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r30.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 444);
	// stw r10,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r10.u32);
	// lhz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831fc110
	if (ctx.cr6.lt) goto loc_831FC110;
loc_831FC144:
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

__attribute__((alias("__imp__sub_831FC15C"))) PPC_WEAK_FUNC(sub_831FC15C);
PPC_FUNC_IMPL(__imp__sub_831FC15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC160"))) PPC_WEAK_FUNC(sub_831FC160);
PPC_FUNC_IMPL(__imp__sub_831FC160) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831fb9d0
	ctx.lr = 0x831FC180;
	sub_831FB9D0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831fc194
	if (ctx.cr6.eq) goto loc_831FC194;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x831fc19c
	goto loc_831FC19C;
loc_831FC194:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
loc_831FC19C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fb9d0
	ctx.lr = 0x831FC1A4;
	sub_831FB9D0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x831fa240
	ctx.lr = 0x831FC1B8;
	sub_831FA240(ctx, base);
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

__attribute__((alias("__imp__sub_831FC1D0"))) PPC_WEAK_FUNC(sub_831FC1D0);
PPC_FUNC_IMPL(__imp__sub_831FC1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FC1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831fb510
	ctx.lr = 0x831FC1F0;
	sub_831FB510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// blt 0x831fc260
	if (ctx.cr0.lt) goto loc_831FC260;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r28,r10,276
	ctx.r28.s64 = ctx.r10.s64 * 276;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fc260
	if (!ctx.cr6.eq) goto loc_831FC260;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82299698
	ctx.lr = 0x831FC224;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831fc23c
	if (!ctx.cr0.eq) goto loc_831FC23C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// b 0x831fc260
	goto loc_831FC260;
loc_831FC23C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831FC24C;
	sub_82CB1160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r31,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r31.u32);
loc_831FC260:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC26C"))) PPC_WEAK_FUNC(sub_831FC26C);
PPC_FUNC_IMPL(__imp__sub_831FC26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC270"))) PPC_WEAK_FUNC(sub_831FC270);
PPC_FUNC_IMPL(__imp__sub_831FC270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x831FC278;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc33c
	if (ctx.cr6.lt) goto loc_831FC33C;
	// lwz r28,72(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831fc2e4
	if (ctx.cr6.gt) goto loc_831FC2E4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fc2d4
	if (!ctx.cr6.gt) goto loc_831FC2D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f7808
	ctx.lr = 0x831FC2D4;
	sub_831F7808(ctx, base);
loc_831FC2D4:
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc33c
	if (ctx.cr6.lt) goto loc_831FC33C;
loc_831FC2E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x831fc33c
	if (ctx.cr6.eq) goto loc_831FC33C;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x831fb9d0
	ctx.lr = 0x831FC314;
	sub_831FB9D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r3,r11,0,0,0
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82f40700
	ctx.lr = 0x831FC338;
	sub_82F40700(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_831FC33C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC344"))) PPC_WEAK_FUNC(sub_831FC344);
PPC_FUNC_IMPL(__imp__sub_831FC344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC348"))) PPC_WEAK_FUNC(sub_831FC348);
PPC_FUNC_IMPL(__imp__sub_831FC348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FC350;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r26,r31,128
	ctx.r26.s64 = ctx.r31.s64 + 128;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fc428
	if (ctx.cr6.lt) goto loc_831FC428;
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x831fc3b0
	if (ctx.cr6.gt) goto loc_831FC3B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fc3a0
	if (!ctx.cr6.gt) goto loc_831FC3A0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f79b8
	ctx.lr = 0x831FC3A0;
	sub_831F79B8(ctx, base);
loc_831FC3A0:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x831fc428
	if (ctx.cr6.lt) goto loc_831FC428;
loc_831FC3B0:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 * 20;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831fb9d0
	ctx.lr = 0x831FC3D0;
	sub_831FB9D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831fc424
	if (ctx.cr6.eq) goto loc_831FC424;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_831FC3F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831f9c68
	ctx.lr = 0x831FC40C;
	sub_831F9C68(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc424
	if (ctx.cr6.lt) goto loc_831FC424;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831fc3f0
	if (!ctx.cr6.eq) goto loc_831FC3F0;
loc_831FC424:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_831FC428:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC430"))) PPC_WEAK_FUNC(sub_831FC430);
PPC_FUNC_IMPL(__imp__sub_831FC430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FC438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fc454
	if (!ctx.cr6.eq) goto loc_831FC454;
	// bl 0x831fad98
	ctx.lr = 0x831FC454;
	sub_831FAD98(ctx, base);
loc_831FC454:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21436
	ctx.r4.s64 = ctx.r11.s64 + -21436;
	// bl 0x831f6908
	ctx.lr = 0x831FC464;
	sub_831F6908(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12412
	ctx.r4.s64 = ctx.r11.s64 + 12412;
	// bl 0x831f6908
	ctx.lr = 0x831FC474;
	sub_831F6908(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x831f69e0
	ctx.lr = 0x831FC484;
	sub_831F69E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,-21448
	ctx.r29.s64 = ctx.r11.s64 + -21448;
	// addi r4,r10,-22264
	ctx.r4.s64 = ctx.r10.s64 + -22264;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831FC4A0;
	sub_831F6908(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r4,r11,-21516
	ctx.r4.s64 = ctx.r11.s64 + -21516;
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x831f6908
	ctx.lr = 0x831FC4BC;
	sub_831F6908(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,6995
	ctx.r5.s64 = 6995;
	// addi r4,r11,-21464
	ctx.r4.s64 = ctx.r11.s64 + -21464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6908
	ctx.lr = 0x831FC4D0;
	sub_831F6908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7f68
	ctx.lr = 0x831FC4D8;
	sub_831F7F68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f80f8
	ctx.lr = 0x831FC4E4;
	sub_831F80F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f96a8
	ctx.lr = 0x831FC4F0;
	sub_831F96A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fb698
	ctx.lr = 0x831FC4FC;
	sub_831FB698(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6a40
	ctx.lr = 0x831FC508;
	sub_831F6A40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC510"))) PPC_WEAK_FUNC(sub_831FC510);
PPC_FUNC_IMPL(__imp__sub_831FC510) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fbe50
	sub_831FBE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC514"))) PPC_WEAK_FUNC(sub_831FC514);
PPC_FUNC_IMPL(__imp__sub_831FC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC518"))) PPC_WEAK_FUNC(sub_831FC518);
PPC_FUNC_IMPL(__imp__sub_831FC518) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fbf80
	sub_831FBF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC51C"))) PPC_WEAK_FUNC(sub_831FC51C);
PPC_FUNC_IMPL(__imp__sub_831FC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC520"))) PPC_WEAK_FUNC(sub_831FC520);
PPC_FUNC_IMPL(__imp__sub_831FC520) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc1d0
	sub_831FC1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC524"))) PPC_WEAK_FUNC(sub_831FC524);
PPC_FUNC_IMPL(__imp__sub_831FC524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC528"))) PPC_WEAK_FUNC(sub_831FC528);
PPC_FUNC_IMPL(__imp__sub_831FC528) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc160
	sub_831FC160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC52C"))) PPC_WEAK_FUNC(sub_831FC52C);
PPC_FUNC_IMPL(__imp__sub_831FC52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC530"))) PPC_WEAK_FUNC(sub_831FC530);
PPC_FUNC_IMPL(__imp__sub_831FC530) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc270
	sub_831FC270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC534"))) PPC_WEAK_FUNC(sub_831FC534);
PPC_FUNC_IMPL(__imp__sub_831FC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC538"))) PPC_WEAK_FUNC(sub_831FC538);
PPC_FUNC_IMPL(__imp__sub_831FC538) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc348
	sub_831FC348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC53C"))) PPC_WEAK_FUNC(sub_831FC53C);
PPC_FUNC_IMPL(__imp__sub_831FC53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC540"))) PPC_WEAK_FUNC(sub_831FC540);
PPC_FUNC_IMPL(__imp__sub_831FC540) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc000
	sub_831FC000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC544"))) PPC_WEAK_FUNC(sub_831FC544);
PPC_FUNC_IMPL(__imp__sub_831FC544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC548"))) PPC_WEAK_FUNC(sub_831FC548);
PPC_FUNC_IMPL(__imp__sub_831FC548) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc0b0
	sub_831FC0B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC54C"))) PPC_WEAK_FUNC(sub_831FC54C);
PPC_FUNC_IMPL(__imp__sub_831FC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC550"))) PPC_WEAK_FUNC(sub_831FC550);
PPC_FUNC_IMPL(__imp__sub_831FC550) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x831fc5cc
	if (ctx.cr6.lt) goto loc_831FC5CC;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x831fc5d4
	if (ctx.cr6.eq) goto loc_831FC5D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x831fc5d4
	if (!ctx.cr6.eq) goto loc_831FC5D4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,-22316
	ctx.r10.s64 = ctx.r10.s64 + -22316;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831fc430
	ctx.lr = 0x831FC5B8;
	sub_831FC430(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc5c8
	if (ctx.cr6.lt) goto loc_831FC5C8;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831FC5C8:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_831FC5CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831fc5d8
	goto loc_831FC5D8;
loc_831FC5D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FC5D8:
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

__attribute__((alias("__imp__sub_831FC5F0"))) PPC_WEAK_FUNC(sub_831FC5F0);
PPC_FUNC_IMPL(__imp__sub_831FC5F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc688
	if (ctx.cr6.lt) goto loc_831FC688;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fc690
	if (ctx.cr6.eq) goto loc_831FC690;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x831fc638
	if (ctx.cr6.eq) goto loc_831FC638;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x831fc684
	goto loc_831FC684;
loc_831FC638:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r10,-22304
	ctx.r10.s64 = ctx.r10.s64 + -22304;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x831fc430
	ctx.lr = 0x831FC670;
	sub_831FC430(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fc684
	if (ctx.cr6.lt) goto loc_831FC684;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_831FC684:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_831FC688:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// b 0x831fc694
	goto loc_831FC694;
loc_831FC690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FC694:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_831FC6AC"))) PPC_WEAK_FUNC(sub_831FC6AC);
PPC_FUNC_IMPL(__imp__sub_831FC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC6B0"))) PPC_WEAK_FUNC(sub_831FC6B0);
PPC_FUNC_IMPL(__imp__sub_831FC6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc550
	sub_831FC550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC6B4"))) PPC_WEAK_FUNC(sub_831FC6B4);
PPC_FUNC_IMPL(__imp__sub_831FC6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC6B8"))) PPC_WEAK_FUNC(sub_831FC6B8);
PPC_FUNC_IMPL(__imp__sub_831FC6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc5f0
	sub_831FC5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC6BC"))) PPC_WEAK_FUNC(sub_831FC6BC);
PPC_FUNC_IMPL(__imp__sub_831FC6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC6C0"))) PPC_WEAK_FUNC(sub_831FC6C0);
PPC_FUNC_IMPL(__imp__sub_831FC6C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC6C8"))) PPC_WEAK_FUNC(sub_831FC6C8);
PPC_FUNC_IMPL(__imp__sub_831FC6C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC6D0"))) PPC_WEAK_FUNC(sub_831FC6D0);
PPC_FUNC_IMPL(__imp__sub_831FC6D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC6D8"))) PPC_WEAK_FUNC(sub_831FC6D8);
PPC_FUNC_IMPL(__imp__sub_831FC6D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC6E0"))) PPC_WEAK_FUNC(sub_831FC6E0);
PPC_FUNC_IMPL(__imp__sub_831FC6E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cb92c0
	sub_82CB92C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FC6E8"))) PPC_WEAK_FUNC(sub_831FC6E8);
PPC_FUNC_IMPL(__imp__sub_831FC6E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82cb3d50
	ctx.lr = 0x831FC6FC;
	sub_82CB3D50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC710"))) PPC_WEAK_FUNC(sub_831FC710);
PPC_FUNC_IMPL(__imp__sub_831FC710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC734"))) PPC_WEAK_FUNC(sub_831FC734);
PPC_FUNC_IMPL(__imp__sub_831FC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC738"))) PPC_WEAK_FUNC(sub_831FC738);
PPC_FUNC_IMPL(__imp__sub_831FC738) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC740"))) PPC_WEAK_FUNC(sub_831FC740);
PPC_FUNC_IMPL(__imp__sub_831FC740) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fc790
	if (ctx.cr6.eq) goto loc_831FC790;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,-21188
	ctx.r10.s64 = ctx.r10.s64 + -21188;
loc_831FC754:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x831fc778
	if (ctx.cr0.eq) goto loc_831FC778;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x831fc754
	if (ctx.cr6.eq) goto loc_831FC754;
loc_831FC778:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831fc790
	if (!ctx.cr0.eq) goto loc_831FC790;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831FC790:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC798"))) PPC_WEAK_FUNC(sub_831FC798);
PPC_FUNC_IMPL(__imp__sub_831FC798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC79C"))) PPC_WEAK_FUNC(sub_831FC79C);
PPC_FUNC_IMPL(__imp__sub_831FC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC7A0"))) PPC_WEAK_FUNC(sub_831FC7A0);
PPC_FUNC_IMPL(__imp__sub_831FC7A0) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7A8"))) PPC_WEAK_FUNC(sub_831FC7A8);
PPC_FUNC_IMPL(__imp__sub_831FC7A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831FC7BC"))) PPC_WEAK_FUNC(sub_831FC7BC);
PPC_FUNC_IMPL(__imp__sub_831FC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC7C0"))) PPC_WEAK_FUNC(sub_831FC7C0);
PPC_FUNC_IMPL(__imp__sub_831FC7C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7C8"))) PPC_WEAK_FUNC(sub_831FC7C8);
PPC_FUNC_IMPL(__imp__sub_831FC7C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7D0"))) PPC_WEAK_FUNC(sub_831FC7D0);
PPC_FUNC_IMPL(__imp__sub_831FC7D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7D8"))) PPC_WEAK_FUNC(sub_831FC7D8);
PPC_FUNC_IMPL(__imp__sub_831FC7D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7E0"))) PPC_WEAK_FUNC(sub_831FC7E0);
PPC_FUNC_IMPL(__imp__sub_831FC7E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7E8"))) PPC_WEAK_FUNC(sub_831FC7E8);
PPC_FUNC_IMPL(__imp__sub_831FC7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC7EC"))) PPC_WEAK_FUNC(sub_831FC7EC);
PPC_FUNC_IMPL(__imp__sub_831FC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC7F0"))) PPC_WEAK_FUNC(sub_831FC7F0);
PPC_FUNC_IMPL(__imp__sub_831FC7F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8320c778
	ctx.lr = 0x831FC810;
	sub_8320C778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831fc824
	if (!ctx.cr0.eq) goto loc_831FC824;
	// bl 0x8320b290
	ctx.lr = 0x831FC81C;
	sub_8320B290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fc82c
	goto loc_831FC82C;
loc_831FC824:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_831FC82C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FC83C"))) PPC_WEAK_FUNC(sub_831FC83C);
PPC_FUNC_IMPL(__imp__sub_831FC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC840"))) PPC_WEAK_FUNC(sub_831FC840);
PPC_FUNC_IMPL(__imp__sub_831FC840) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
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

__attribute__((alias("__imp__sub_831FC85C"))) PPC_WEAK_FUNC(sub_831FC85C);
PPC_FUNC_IMPL(__imp__sub_831FC85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC860"))) PPC_WEAK_FUNC(sub_831FC860);
PPC_FUNC_IMPL(__imp__sub_831FC860) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// andi. r11,r11,16468
	ctx.r11.u64 = ctx.r11.u64 & 16468;
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

__attribute__((alias("__imp__sub_831FC87C"))) PPC_WEAK_FUNC(sub_831FC87C);
PPC_FUNC_IMPL(__imp__sub_831FC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FC880"))) PPC_WEAK_FUNC(sub_831FC880);
PPC_FUNC_IMPL(__imp__sub_831FC880) {
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
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// beq cr6,0x831fc904
	if (ctx.cr6.eq) goto loc_831FC904;
	// cmplwi cr6,r5,20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 20, ctx.xer);
	// beq cr6,0x831fc8fc
	if (ctx.cr6.eq) goto loc_831FC8FC;
	// cmplwi cr6,r5,21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 21, ctx.xer);
	// beq cr6,0x831fc8f4
	if (ctx.cr6.eq) goto loc_831FC8F4;
	// cmplwi cr6,r5,22
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22, ctx.xer);
	// beq cr6,0x831fc8e8
	if (ctx.cr6.eq) goto loc_831FC8E8;
	// cmplwi cr6,r5,23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 23, ctx.xer);
	// beq cr6,0x831fc8dc
	if (ctx.cr6.eq) goto loc_831FC8DC;
	// bl 0x82bea298
	ctx.lr = 0x831FC8CC;
	sub_82BEA298(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x831fc968
	goto loc_831FC968;
loc_831FC8DC:
	// li r11,11
	ctx.r11.s64 = 11;
loc_831FC8E0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831fc978
	goto loc_831FC978;
loc_831FC8E8:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x831fc960
	goto loc_831FC960;
loc_831FC8F4:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x831fc8e0
	goto loc_831FC8E0;
loc_831FC8FC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831fc8e0
	goto loc_831FC8E0;
loc_831FC904:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bge cr6,0x831fc954
	if (!ctx.cr6.lt) goto loc_831FC954;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x831fc944
	if (ctx.cr6.eq) goto loc_831FC944;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x831fc8f4
	if (ctx.cr6.eq) goto loc_831FC8F4;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x831fc8e8
	if (ctx.cr6.eq) goto loc_831FC8E8;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// beq cr6,0x831fc8dc
	if (ctx.cr6.eq) goto loc_831FC8DC;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// beq cr6,0x831fc8fc
	if (ctx.cr6.eq) goto loc_831FC8FC;
	// bl 0x82bea298
	ctx.lr = 0x831FC938;
	sub_82BEA298(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831fc974
	goto loc_831FC974;
loc_831FC944:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// b 0x831fc968
	goto loc_831FC968;
loc_831FC954:
	// rlwinm r11,r6,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831FC960:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_831FC968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x831fc978
	if (!ctx.cr6.gt) goto loc_831FC978;
loc_831FC974:
	// bl 0x82bea298
	ctx.lr = 0x831FC978;
	sub_82BEA298(ctx, base);
loc_831FC978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x831fc988
	if (ctx.cr6.lt) goto loc_831FC988;
	// bl 0x82bea298
	ctx.lr = 0x831FC988;
	sub_82BEA298(ctx, base);
loc_831FC988:
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

__attribute__((alias("__imp__sub_831FC9A0"))) PPC_WEAK_FUNC(sub_831FC9A0);
PPC_FUNC_IMPL(__imp__sub_831FC9A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x831fc880
	ctx.lr = 0x831FC9D0;
	sub_831FC880(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r3,r11,4,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
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

__attribute__((alias("__imp__sub_831FCA04"))) PPC_WEAK_FUNC(sub_831FCA04);
PPC_FUNC_IMPL(__imp__sub_831FCA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCA08"))) PPC_WEAK_FUNC(sub_831FCA08);
PPC_FUNC_IMPL(__imp__sub_831FCA08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r10,r3,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r11,r11,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FCA28"))) PPC_WEAK_FUNC(sub_831FCA28);
PPC_FUNC_IMPL(__imp__sub_831FCA28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r3,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r3,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FCA40"))) PPC_WEAK_FUNC(sub_831FCA40);
PPC_FUNC_IMPL(__imp__sub_831FCA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FCA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831fca8c
	if (!ctx.cr6.lt) goto loc_831FCA8C;
loc_831FCA60:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FCA70;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fca80
	if (!ctx.cr0.gt) goto loc_831FCA80;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fca9c
	if (!ctx.cr6.gt) goto loc_831FCA9C;
loc_831FCA80:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831fca60
	if (ctx.cr6.lt) goto loc_831FCA60;
loc_831FCA8C:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = ctx.r29.u32 / ctx.r11.u32;
loc_831FCA94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_831FCA9C:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FCAAC;
	sub_8320CE20(ctx, base);
	// b 0x831fca94
	goto loc_831FCA94;
}

__attribute__((alias("__imp__sub_831FCAB0"))) PPC_WEAK_FUNC(sub_831FCAB0);
PPC_FUNC_IMPL(__imp__sub_831FCAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FCAB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831fcb88
	if (!ctx.cr6.lt) goto loc_831FCB88;
loc_831FCAD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r28,r9,16,16,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r27,r9,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r28,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r27,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8320ce20
	ctx.lr = 0x831FCB4C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fcb5c
	if (!ctx.cr0.gt) goto loc_831FCB5C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fcb98
	if (!ctx.cr6.gt) goto loc_831FCB98;
loc_831FCB5C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x8320ce20
	ctx.lr = 0x831FCB6C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fcb7c
	if (!ctx.cr0.gt) goto loc_831FCB7C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fcbac
	if (!ctx.cr6.gt) goto loc_831FCBAC;
loc_831FCB7C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831fcad0
	if (ctx.cr6.lt) goto loc_831FCAD0;
loc_831FCB88:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = ctx.r29.u32 / ctx.r11.u32;
loc_831FCB90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_831FCB98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_831FCB9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8320ce20
	ctx.lr = 0x831FCBA8;
	sub_8320CE20(ctx, base);
	// b 0x831fcb90
	goto loc_831FCB90;
loc_831FCBAC:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x831fcb9c
	goto loc_831FCB9C;
}

__attribute__((alias("__imp__sub_831FCBB4"))) PPC_WEAK_FUNC(sub_831FCBB4);
PPC_FUNC_IMPL(__imp__sub_831FCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCBB8"))) PPC_WEAK_FUNC(sub_831FCBB8);
PPC_FUNC_IMPL(__imp__sub_831FCBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FCBC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x831fcc90
	if (!ctx.cr6.lt) goto loc_831FCC90;
loc_831FCBD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r28,r9,16,16,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r27,r9,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r28,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r27,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8320ce20
	ctx.lr = 0x831FCC54;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fcc64
	if (!ctx.cr0.gt) goto loc_831FCC64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fcca0
	if (!ctx.cr6.gt) goto loc_831FCCA0;
loc_831FCC64:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x8320ce20
	ctx.lr = 0x831FCC74;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fcc84
	if (!ctx.cr0.gt) goto loc_831FCC84;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fccb4
	if (!ctx.cr6.gt) goto loc_831FCCB4;
loc_831FCC84:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831fcbd8
	if (ctx.cr6.lt) goto loc_831FCBD8;
loc_831FCC90:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = ctx.r29.u32 / ctx.r11.u32;
loc_831FCC98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_831FCCA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_831FCCA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8320ce20
	ctx.lr = 0x831FCCB0;
	sub_8320CE20(ctx, base);
	// b 0x831fcc98
	goto loc_831FCC98;
loc_831FCCB4:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x831fcca4
	goto loc_831FCCA4;
}

__attribute__((alias("__imp__sub_831FCCBC"))) PPC_WEAK_FUNC(sub_831FCCBC);
PPC_FUNC_IMPL(__imp__sub_831FCCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCCC0"))) PPC_WEAK_FUNC(sub_831FCCC0);
PPC_FUNC_IMPL(__imp__sub_831FCCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831FCCC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// add r29,r30,r28
	ctx.r29.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x831fcd10
	if (!ctx.cr6.lt) goto loc_831FCD10;
loc_831FCCE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FCCF4;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fcd04
	if (!ctx.cr0.gt) goto loc_831FCD04;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fcd40
	if (!ctx.cr6.gt) goto loc_831FCD40;
loc_831FCD04:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x831fcce4
	if (ctx.cr6.lt) goto loc_831FCCE4;
loc_831FCD10:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r28,r11
	ctx.r3.u32 = ctx.r28.u32 / ctx.r11.u32;
loc_831FCD18:
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// rlwinm. r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fcd38
	if (ctx.cr0.eq) goto loc_831FCD38;
loc_831FCD24:
	// lwbrx r10,0,r30
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r30.u32));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x831fcd24
	if (!ctx.cr0.eq) goto loc_831FCD24;
loc_831FCD38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_831FCD40:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FCD50;
	sub_8320CE20(ctx, base);
	// b 0x831fcd18
	goto loc_831FCD18;
}

__attribute__((alias("__imp__sub_831FCD54"))) PPC_WEAK_FUNC(sub_831FCD54);
PPC_FUNC_IMPL(__imp__sub_831FCD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCD58"))) PPC_WEAK_FUNC(sub_831FCD58);
PPC_FUNC_IMPL(__imp__sub_831FCD58) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FCD64"))) PPC_WEAK_FUNC(sub_831FCD64);
PPC_FUNC_IMPL(__imp__sub_831FCD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCD68"))) PPC_WEAK_FUNC(sub_831FCD68);
PPC_FUNC_IMPL(__imp__sub_831FCD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FCD70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r30,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x831fcdac
	if (ctx.cr6.lt) goto loc_831FCDAC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-21072
	ctx.r6.s64 = ctx.r11.s64 + -21072;
	// addi r5,r10,-21136
	ctx.r5.s64 = ctx.r10.s64 + -21136;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FCDAC;
	sub_8320CF10(ctx, base);
loc_831FCDAC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FCDD0"))) PPC_WEAK_FUNC(sub_831FCDD0);
PPC_FUNC_IMPL(__imp__sub_831FCDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FCDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r30,r31,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x831fce14
	if (ctx.cr6.lt) goto loc_831FCE14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-21072
	ctx.r6.s64 = ctx.r11.s64 + -21072;
	// addi r5,r10,-21136
	ctx.r5.s64 = ctx.r10.s64 + -21136;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FCE14;
	sub_8320CF10(ctx, base);
loc_831FCE14:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FCE40"))) PPC_WEAK_FUNC(sub_831FCE40);
PPC_FUNC_IMPL(__imp__sub_831FCE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x831fce88
	if (ctx.cr0.lt) goto loc_831FCE88;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_831FCE54:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x831fce7c
	if (ctx.cr6.eq) goto loc_831FCE7C;
	// li r10,31
	ctx.r10.s64 = 31;
loc_831FCE64:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831fce90
	if (ctx.cr0.eq) goto loc_831FCE90;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x831fce64
	if (!ctx.cr0.lt) goto loc_831FCE64;
loc_831FCE7C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x831fce54
	if (!ctx.cr0.lt) goto loc_831FCE54;
loc_831FCE88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831FCE90:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FCE9C"))) PPC_WEAK_FUNC(sub_831FCE9C);
PPC_FUNC_IMPL(__imp__sub_831FCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCEA0"))) PPC_WEAK_FUNC(sub_831FCEA0);
PPC_FUNC_IMPL(__imp__sub_831FCEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FCED0"))) PPC_WEAK_FUNC(sub_831FCED0);
PPC_FUNC_IMPL(__imp__sub_831FCED0) {
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

__attribute__((alias("__imp__sub_831FCF04"))) PPC_WEAK_FUNC(sub_831FCF04);
PPC_FUNC_IMPL(__imp__sub_831FCF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FCF08"))) PPC_WEAK_FUNC(sub_831FCF08);
PPC_FUNC_IMPL(__imp__sub_831FCF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831FCF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831fcf28
	if (!ctx.cr6.eq) goto loc_831FCF28;
	// li r30,1
	ctx.r30.s64 = 1;
loc_831FCF28:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x831fcf50
	if (ctx.cr6.eq) goto loc_831FCF50;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
loc_831FCF38:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fcd68
	ctx.lr = 0x831FCF44;
	sub_831FCD68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x831fcf38
	if (ctx.cr6.lt) goto loc_831FCF38;
loc_831FCF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FCF58"))) PPC_WEAK_FUNC(sub_831FCF58);
PPC_FUNC_IMPL(__imp__sub_831FCF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FCF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831FCF80;
	sub_82CB1160(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x831fcfb4
	if (!ctx.cr6.eq) goto loc_831FCFB4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831fcfac
	if (!ctx.cr6.eq) goto loc_831FCFAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fcf08
	ctx.lr = 0x831FCFA4;
	sub_831FCF08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_831FCFAC:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x831fd078
	if (ctx.cr6.eq) goto loc_831FD078;
loc_831FCFB4:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// beq cr6,0x831fcfd8
	if (ctx.cr6.eq) goto loc_831FCFD8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x831fcfe8
	if (!ctx.cr6.eq) goto loc_831FCFE8;
loc_831FCFD8:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x831fcfe8
	if (ctx.cr0.eq) goto loc_831FCFE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831FCFE8:
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq 0x831fd188
	if (ctx.cr0.eq) goto loc_831FD188;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_831FD000:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fd010
	if (!ctx.cr6.lt) goto loc_831FD010;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_831FD010:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x831fcf58
	ctx.lr = 0x831FD02C;
	sub_831FCF58(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x831fd06c
	if (ctx.cr6.eq) goto loc_831FD06C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_831FD06C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831fd000
	if (!ctx.cr0.eq) goto loc_831FD000;
	// b 0x831fd188
	goto loc_831FD188;
loc_831FD078:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831fd188
	if (ctx.cr6.eq) goto loc_831FD188;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x831fd188
	if (ctx.cr6.eq) goto loc_831FD188;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_831FD0A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x831fd0c4
	if (ctx.cr6.eq) goto loc_831FD0C4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x831fd0d4
	if (!ctx.cr6.eq) goto loc_831FD0D4;
loc_831FD0C4:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x831fd0d4
	if (ctx.cr0.eq) goto loc_831FD0D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831FD0D4:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fd0f4
	if (!ctx.cr6.lt) goto loc_831FD0F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_831FD0F4:
	// lhz r10,6(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x831fcf58
	ctx.lr = 0x831FD13C;
	sub_831FCF58(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x831fd17c
	if (ctx.cr6.eq) goto loc_831FD17C;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_831FD17C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x831fd0a0
	if (!ctx.cr0.eq) goto loc_831FD0A0;
loc_831FD188:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD190"))) PPC_WEAK_FUNC(sub_831FD190);
PPC_FUNC_IMPL(__imp__sub_831FD190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x831fd1c8
	if (!ctx.cr6.eq) goto loc_831FD1C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FD1C8:
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD200"))) PPC_WEAK_FUNC(sub_831FD200);
PPC_FUNC_IMPL(__imp__sub_831FD200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FD208;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x831fd2a4
	if (ctx.cr6.eq) goto loc_831FD2A4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x831fd2a4
	if (ctx.cr0.eq) goto loc_831FD2A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fd2a4
	if (ctx.cr6.eq) goto loc_831FD2A4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x831fd2a4
	if (ctx.cr6.eq) goto loc_831FD2A4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_831FD254:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x831fd298
	if (!ctx.cr6.eq) goto loc_831FD298;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fd190
	ctx.lr = 0x831FD280;
	sub_831FD190(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fcf58
	ctx.lr = 0x831FD298;
	sub_831FCF58(ctx, base);
loc_831FD298:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x831fd254
	if (!ctx.cr0.eq) goto loc_831FD254;
loc_831FD2A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD2AC"))) PPC_WEAK_FUNC(sub_831FD2AC);
PPC_FUNC_IMPL(__imp__sub_831FD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD2B0"))) PPC_WEAK_FUNC(sub_831FD2B0);
PPC_FUNC_IMPL(__imp__sub_831FD2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FD2B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fcdd0
	ctx.lr = 0x831FD2D0;
	sub_831FCDD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fd340
	if (!ctx.cr0.eq) goto loc_831FD340;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// lwz r4,4680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fce40
	ctx.lr = 0x831FD2E8;
	sub_831FCE40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831fd300
	if (!ctx.cr0.lt) goto loc_831FD300;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x831fd348
	goto loc_831FD348;
loc_831FD300:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fcd68
	ctx.lr = 0x831FD314;
	sub_831FCD68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 328, ctx.r29.u8);
	// bl 0x831fcd68
	ctx.lr = 0x831FD32C;
	sub_831FCD68(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831FD340:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
loc_831FD348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD350"))) PPC_WEAK_FUNC(sub_831FD350);
PPC_FUNC_IMPL(__imp__sub_831FD350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fd370
	if (!ctx.cr0.eq) goto loc_831FD370;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fd370
	if (!ctx.cr0.eq) goto loc_831FD370;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831fd374
	if (!ctx.cr0.eq) goto loc_831FD374;
loc_831FD370:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FD374:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD37C"))) PPC_WEAK_FUNC(sub_831FD37C);
PPC_FUNC_IMPL(__imp__sub_831FD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD380"))) PPC_WEAK_FUNC(sub_831FD380);
PPC_FUNC_IMPL(__imp__sub_831FD380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831FD388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fd4a0
	if (ctx.cr0.eq) goto loc_831FD4A0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fd4a0
	if (!ctx.cr0.eq) goto loc_831FD4A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fd3c4
	if (!ctx.cr0.eq) goto loc_831FD3C4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fd3c4
	if (!ctx.cr0.eq) goto loc_831FD3C4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831fd3c8
	if (!ctx.cr0.eq) goto loc_831FD3C8;
loc_831FD3C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FD3C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fd4a0
	if (ctx.cr0.eq) goto loc_831FD4A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r30,r10,-9328
	ctx.r30.s64 = ctx.r10.s64 + -9328;
	// rlwinm r29,r11,10,25,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x831fd404
	if (ctx.cr6.lt) goto loc_831FD404;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fd404
	if (!ctx.cr0.eq) goto loc_831FD404;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x831fd2b0
	ctx.lr = 0x831FD400;
	sub_831FD2B0(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r3.u8);
loc_831FD404:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x831fd42c
	if (ctx.cr6.lt) goto loc_831FD42C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fd42c
	if (!ctx.cr0.eq) goto loc_831FD42C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x831fd2b0
	ctx.lr = 0x831FD428;
	sub_831FD2B0(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
loc_831FD42C:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// addi r30,r11,-8888
	ctx.r30.s64 = ctx.r11.s64 + -8888;
	// bge cr6,0x831fd454
	if (!ctx.cr6.lt) goto loc_831FD454;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x831fd470
	if (!ctx.cr6.eq) goto loc_831FD470;
loc_831FD454:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fd470
	if (!ctx.cr0.eq) goto loc_831FD470;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fd2b0
	ctx.lr = 0x831FD46C;
	sub_831FD2B0(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_831FD470:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x831fd494
	if (!ctx.cr6.eq) goto loc_831FD494;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// bl 0x831fd2b0
	ctx.lr = 0x831FD490;
	sub_831FD2B0(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_831FD494:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831FD4A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD4A8"))) PPC_WEAK_FUNC(sub_831FD4A8);
PPC_FUNC_IMPL(__imp__sub_831FD4A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD4B0"))) PPC_WEAK_FUNC(sub_831FD4B0);
PPC_FUNC_IMPL(__imp__sub_831FD4B0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x831fd4cc
	if (ctx.cr0.eq) goto loc_831FD4CC;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_831FD4CC:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// beq 0x831fd53c
	if (ctx.cr0.eq) goto loc_831FD53C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bgt cr6,0x831fd4f8
	if (ctx.cr6.gt) goto loc_831FD4F8;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
loc_831FD4F8:
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// beq 0x831fd510
	if (ctx.cr0.eq) goto loc_831FD510;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831fd518
	if (!ctx.cr0.eq) goto loc_831FD518;
loc_831FD510:
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// slw r8,r4,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
loc_831FD518:
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bne 0x831fd528
	if (!ctx.cr0.eq) goto loc_831FD528;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_831FD528:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x831fd540
	if (!ctx.cr0.eq) goto loc_831FD540;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// b 0x831fd544
	goto loc_831FD544;
loc_831FD53C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_831FD540:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_831FD544:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x831fd55c
	if (ctx.cr6.eq) goto loc_831FD55C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_831FD55C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fd568
	if (ctx.cr0.eq) goto loc_831FD568;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_831FD568:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD584"))) PPC_WEAK_FUNC(sub_831FD584);
PPC_FUNC_IMPL(__imp__sub_831FD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD588"))) PPC_WEAK_FUNC(sub_831FD588);
PPC_FUNC_IMPL(__imp__sub_831FD588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FD590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,24284
	ctx.r31.s64 = ctx.r11.s64 + 24284;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
loc_831FD5A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd5cc
	if (!ctx.cr6.eq) goto loc_831FD5CC;
	// stwcx. r29,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd5a8
	if (!ctx.cr0.eq) goto loc_831FD5A8;
	// b 0x831fd5d4
	goto loc_831FD5D4;
loc_831FD5CC:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD5D4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831fd618
	goto loc_831FD618;
loc_831FD5DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x831FD5E4;
	sub_82E645C8(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_831FD5E8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd60c
	if (!ctx.cr6.eq) goto loc_831FD60C;
	// stwcx. r29,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd5e8
	if (!ctx.cr0.eq) goto loc_831FD5E8;
	// b 0x831fd614
	goto loc_831FD614;
loc_831FD60C:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD614:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_831FD618:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fd5dc
	if (ctx.cr6.eq) goto loc_831FD5DC;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831fd638
	if (!ctx.cr6.eq) goto loc_831FD638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77d4
	ctx.lr = 0x831FD638;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_831FD638:
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24320, ctx.r11.u32);
loc_831FD648:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd648
	if (!ctx.cr0.eq) goto loc_831FD648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77e4
	ctx.lr = 0x831FD668;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD670"))) PPC_WEAK_FUNC(sub_831FD670);
PPC_FUNC_IMPL(__imp__sub_831FD670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FD678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r3,r11,24284
	ctx.r3.s64 = ctx.r11.s64 + 24284;
	// bl 0x833b77f4
	ctx.lr = 0x831FD688;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,24320
	ctx.r31.s64 = ctx.r11.s64 + 24320;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
loc_831FD69C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd6c0
	if (!ctx.cr6.eq) goto loc_831FD6C0;
	// stwcx. r29,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd69c
	if (!ctx.cr0.eq) goto loc_831FD69C;
	// b 0x831fd6c8
	goto loc_831FD6C8;
loc_831FD6C0:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD6C8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831fd70c
	goto loc_831FD70C;
loc_831FD6D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x831FD6D8;
	sub_82E645C8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_831FD6DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd700
	if (!ctx.cr6.eq) goto loc_831FD700;
	// stwcx. r29,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd6dc
	if (!ctx.cr0.eq) goto loc_831FD6DC;
	// b 0x831fd708
	goto loc_831FD708;
loc_831FD700:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD708:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_831FD70C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fd6d0
	if (ctx.cr6.eq) goto loc_831FD6D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831FD728:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd728
	if (!ctx.cr0.eq) goto loc_831FD728;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD748"))) PPC_WEAK_FUNC(sub_831FD748);
PPC_FUNC_IMPL(__imp__sub_831FD748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FD750;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,24284
	ctx.r31.s64 = ctx.r11.s64 + 24284;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
loc_831FD770:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd794
	if (!ctx.cr6.eq) goto loc_831FD794;
	// stwcx. r28,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd770
	if (!ctx.cr0.eq) goto loc_831FD770;
	// b 0x831fd79c
	goto loc_831FD79C;
loc_831FD794:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD79C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831fd7e0
	goto loc_831FD7E0;
loc_831FD7A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x831FD7AC;
	sub_82E645C8(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_831FD7B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd7d4
	if (!ctx.cr6.eq) goto loc_831FD7D4;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd7b0
	if (!ctx.cr0.eq) goto loc_831FD7B0;
	// b 0x831fd7dc
	goto loc_831FD7DC;
loc_831FD7D4:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD7DC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_831FD7E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fd7a4
	if (ctx.cr6.eq) goto loc_831FD7A4;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831fd800
	if (!ctx.cr6.eq) goto loc_831FD800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77d4
	ctx.lr = 0x831FD800;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_831FD800:
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24320, ctx.r11.u32);
loc_831FD810:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd810
	if (!ctx.cr0.eq) goto loc_831FD810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77e4
	ctx.lr = 0x831FD830;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83210888
	ctx.lr = 0x831FD83C;
	sub_83210888(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77f4
	ctx.lr = 0x831FD848;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_831FD84C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd8a0
	if (!ctx.cr6.eq) goto loc_831FD8A0;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd84c
	if (!ctx.cr0.eq) goto loc_831FD84C;
	// b 0x831fd8a8
	goto loc_831FD8A8;
loc_831FD870:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x831FD878;
	sub_82E645C8(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_831FD87C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x831fd8a0
	if (!ctx.cr6.eq) goto loc_831FD8A0;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd87c
	if (!ctx.cr0.eq) goto loc_831FD87C;
	// b 0x831fd8a8
	goto loc_831FD8A8;
loc_831FD8A0:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_831FD8A8:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831fd870
	if (ctx.cr6.eq) goto loc_831FD870;
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24320, ctx.r11.u32);
	// lwz r11,24320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24320);
loc_831FD8C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831fd8c8
	if (!ctx.cr0.eq) goto loc_831FD8C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FD8EC"))) PPC_WEAK_FUNC(sub_831FD8EC);
PPC_FUNC_IMPL(__imp__sub_831FD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD8F0"))) PPC_WEAK_FUNC(sub_831FD8F0);
PPC_FUNC_IMPL(__imp__sub_831FD8F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x831fd940
	if (!ctx.cr6.eq) goto loc_831FD940;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x831fd90c
	if (!ctx.cr6.lt) goto loc_831FD90C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_831FD90C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831fd940
	if (ctx.cr6.eq) goto loc_831FD940;
loc_831FD920:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x831fd948
	if (ctx.cr6.eq) goto loc_831FD948;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x831fd920
	if (ctx.cr6.lt) goto loc_831FD920;
loc_831FD940:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831FD948:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF0;
	// rlwinm r11,r11,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD964"))) PPC_WEAK_FUNC(sub_831FD964);
PPC_FUNC_IMPL(__imp__sub_831FD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD968"))) PPC_WEAK_FUNC(sub_831FD968);
PPC_FUNC_IMPL(__imp__sub_831FD968) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x831fd978
	if (ctx.cr6.eq) goto loc_831FD978;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831FD978:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD980"))) PPC_WEAK_FUNC(sub_831FD980);
PPC_FUNC_IMPL(__imp__sub_831FD980) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD998"))) PPC_WEAK_FUNC(sub_831FD998);
PPC_FUNC_IMPL(__imp__sub_831FD998) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x831FD9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FD9E4"))) PPC_WEAK_FUNC(sub_831FD9E4);
PPC_FUNC_IMPL(__imp__sub_831FD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FD9E8"))) PPC_WEAK_FUNC(sub_831FD9E8);
PPC_FUNC_IMPL(__imp__sub_831FD9E8) {
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,1192
	ctx.r10.s64 = ctx.r1.s64 + 1192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb2578
	ctx.lr = 0x831FDA34;
	sub_82CB2578(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x831fda48
	if (!ctx.cr0.lt) goto loc_831FDA48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831fda64
	goto loc_831FDA64;
loc_831FDA48:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x831fda64
	if (!ctx.cr6.gt) goto loc_831FDA64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831FDA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831FDA64:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
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

__attribute__((alias("__imp__sub_831FDA7C"))) PPC_WEAK_FUNC(sub_831FDA7C);
PPC_FUNC_IMPL(__imp__sub_831FDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDA80"))) PPC_WEAK_FUNC(sub_831FDA80);
PPC_FUNC_IMPL(__imp__sub_831FDA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fda94
	goto loc_831FDA94;
loc_831FDA84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x831fdab8
	if (ctx.cr6.eq) goto loc_831FDAB8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_831FDA94:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fda84
	if (!ctx.cr6.eq) goto loc_831FDA84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// addi r11,r11,21574
	ctx.r11.s64 = ctx.r11.s64 + 21574;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_831FDAB0:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831FDAB8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fdab0
	goto loc_831FDAB0;
}

__attribute__((alias("__imp__sub_831FDAC4"))) PPC_WEAK_FUNC(sub_831FDAC4);
PPC_FUNC_IMPL(__imp__sub_831FDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDAC8"))) PPC_WEAK_FUNC(sub_831FDAC8);
PPC_FUNC_IMPL(__imp__sub_831FDAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDACC"))) PPC_WEAK_FUNC(sub_831FDACC);
PPC_FUNC_IMPL(__imp__sub_831FDACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDAD0"))) PPC_WEAK_FUNC(sub_831FDAD0);
PPC_FUNC_IMPL(__imp__sub_831FDAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDADC"))) PPC_WEAK_FUNC(sub_831FDADC);
PPC_FUNC_IMPL(__imp__sub_831FDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDAE0"))) PPC_WEAK_FUNC(sub_831FDAE0);
PPC_FUNC_IMPL(__imp__sub_831FDAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x831fdb18
	if (!ctx.cr6.eq) goto loc_831FDB18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FDB18:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDB50"))) PPC_WEAK_FUNC(sub_831FDB50);
PPC_FUNC_IMPL(__imp__sub_831FDB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831FDB58;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831FDB78;
	sub_82CB1160(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831fdbac
	if (ctx.cr6.eq) goto loc_831FDBAC;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x831fdb50
	ctx.lr = 0x831FDBA4;
	sub_831FDB50(ctx, base);
	// mullw r28,r3,r31
	ctx.r28.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// b 0x831fdc5c
	goto loc_831FDC5C;
loc_831FDBAC:
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831fdc24
	if (ctx.cr6.eq) goto loc_831FDC24;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x831fdc5c
	if (ctx.cr6.eq) goto loc_831FDC5C;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_831FDBCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x831fdb50
	ctx.lr = 0x831FDC10;
	sub_831FDB50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x831fdbcc
	if (!ctx.cr0.eq) goto loc_831FDBCC;
	// b 0x831fdc5c
	goto loc_831FDC5C;
loc_831FDC24:
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mullw r28,r10,r9
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x831fdc44
	if (ctx.cr6.eq) goto loc_831FDC44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x831fdc5c
	if (!ctx.cr6.eq) goto loc_831FDC5C;
loc_831FDC44:
	// clrlwi. r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fdc54
	if (!ctx.cr0.eq) goto loc_831FDC54;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x831fdc5c
	goto loc_831FDC5C;
loc_831FDC54:
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_831FDC5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FDC68"))) PPC_WEAK_FUNC(sub_831FDC68);
PPC_FUNC_IMPL(__imp__sub_831FDC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDC6C"))) PPC_WEAK_FUNC(sub_831FDC6C);
PPC_FUNC_IMPL(__imp__sub_831FDC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDC70"))) PPC_WEAK_FUNC(sub_831FDC70);
PPC_FUNC_IMPL(__imp__sub_831FDC70) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FDC7C"))) PPC_WEAK_FUNC(sub_831FDC7C);
PPC_FUNC_IMPL(__imp__sub_831FDC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDC80"))) PPC_WEAK_FUNC(sub_831FDC80);
PPC_FUNC_IMPL(__imp__sub_831FDC80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDCA8"))) PPC_WEAK_FUNC(sub_831FDCA8);
PPC_FUNC_IMPL(__imp__sub_831FDCA8) {
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

__attribute__((alias("__imp__sub_831FDCC8"))) PPC_WEAK_FUNC(sub_831FDCC8);
PPC_FUNC_IMPL(__imp__sub_831FDCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDCCC"))) PPC_WEAK_FUNC(sub_831FDCCC);
PPC_FUNC_IMPL(__imp__sub_831FDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDCD0"))) PPC_WEAK_FUNC(sub_831FDCD0);
PPC_FUNC_IMPL(__imp__sub_831FDCD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDCDC"))) PPC_WEAK_FUNC(sub_831FDCDC);
PPC_FUNC_IMPL(__imp__sub_831FDCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDCE0"))) PPC_WEAK_FUNC(sub_831FDCE0);
PPC_FUNC_IMPL(__imp__sub_831FDCE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD08"))) PPC_WEAK_FUNC(sub_831FDD08);
PPC_FUNC_IMPL(__imp__sub_831FDD08) {
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

__attribute__((alias("__imp__sub_831FDD28"))) PPC_WEAK_FUNC(sub_831FDD28);
PPC_FUNC_IMPL(__imp__sub_831FDD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD2C"))) PPC_WEAK_FUNC(sub_831FDD2C);
PPC_FUNC_IMPL(__imp__sub_831FDD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDD30"))) PPC_WEAK_FUNC(sub_831FDD30);
PPC_FUNC_IMPL(__imp__sub_831FDD30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD34"))) PPC_WEAK_FUNC(sub_831FDD34);
PPC_FUNC_IMPL(__imp__sub_831FDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDD38"))) PPC_WEAK_FUNC(sub_831FDD38);
PPC_FUNC_IMPL(__imp__sub_831FDD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD44"))) PPC_WEAK_FUNC(sub_831FDD44);
PPC_FUNC_IMPL(__imp__sub_831FDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDD48"))) PPC_WEAK_FUNC(sub_831FDD48);
PPC_FUNC_IMPL(__imp__sub_831FDD48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD58"))) PPC_WEAK_FUNC(sub_831FDD58);
PPC_FUNC_IMPL(__imp__sub_831FDD58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD74"))) PPC_WEAK_FUNC(sub_831FDD74);
PPC_FUNC_IMPL(__imp__sub_831FDD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FDD78"))) PPC_WEAK_FUNC(sub_831FDD78);
PPC_FUNC_IMPL(__imp__sub_831FDD78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDD80"))) PPC_WEAK_FUNC(sub_831FDD80);
PPC_FUNC_IMPL(__imp__sub_831FDD80) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x831fddac
	if (ctx.cr6.eq) goto loc_831FDDAC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x831fddac
	if (ctx.cr6.eq) goto loc_831FDDAC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x831fdda4
	if (ctx.cr6.lt) goto loc_831FDDA4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x831fddac
	if (!ctx.cr6.gt) goto loc_831FDDAC;
loc_831FDDA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831fddb0
	goto loc_831FDDB0;
loc_831FDDAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FDDB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDDB8"))) PPC_WEAK_FUNC(sub_831FDDB8);
PPC_FUNC_IMPL(__imp__sub_831FDDB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDDC0"))) PPC_WEAK_FUNC(sub_831FDDC0);
PPC_FUNC_IMPL(__imp__sub_831FDDC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x831fddd8
	if (!ctx.cr6.lt) goto loc_831FDDD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831fddd8
	if (ctx.cr6.lt) goto loc_831FDDD8;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
loc_831FDDD8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDDE0"))) PPC_WEAK_FUNC(sub_831FDDE0);
PPC_FUNC_IMPL(__imp__sub_831FDDE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x7FFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FDDE8"))) PPC_WEAK_FUNC(sub_831FDDE8);
PPC_FUNC_IMPL(__imp__sub_831FDDE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x831fde10
	if (!ctx.cr6.eq) goto loc_831FDE10;
	// bl 0x82bea298
	ctx.lr = 0x831FDE10;
	sub_82BEA298(ctx, base);
loc_831FDE10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831FDE38"))) PPC_WEAK_FUNC(sub_831FDE38);
PPC_FUNC_IMPL(__imp__sub_831FDE38) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831fde5c
	if (!ctx.cr6.eq) goto loc_831FDE5C;
	// bl 0x82bea298
	ctx.lr = 0x831FDE58;
	sub_82BEA298(ctx, base);
	// b 0x831fde84
	goto loc_831FDE84;
loc_831FDE5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fde84
	if (ctx.cr6.eq) goto loc_831FDE84;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x831FDE74;
	sub_822996C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831FDE84:
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

__attribute__((alias("__imp__sub_831FDE98"))) PPC_WEAK_FUNC(sub_831FDE98);
PPC_FUNC_IMPL(__imp__sub_831FDE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FDEA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,-20824
	ctx.r27.s64 = ctx.r10.s64 + -20824;
	// bne cr6,0x831fdee4
	if (!ctx.cr6.eq) goto loc_831FDEE4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FDEE4;
	sub_8320CF10(ctx, base);
loc_831FDEE4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fdf0c
	if (ctx.cr6.lt) goto loc_831FDF0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20896
	ctx.r5.s64 = ctx.r11.s64 + -20896;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FDF0C;
	sub_8320CF10(ctx, base);
loc_831FDF0C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831fdf40
	if (ctx.cr6.lt) goto loc_831FDF40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20984
	ctx.r5.s64 = ctx.r11.s64 + -20984;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FDF40;
	sub_8320CF10(ctx, base);
loc_831FDF40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FDF88"))) PPC_WEAK_FUNC(sub_831FDF88);
PPC_FUNC_IMPL(__imp__sub_831FDF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831FDF90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// addi r26,r10,-20824
	ctx.r26.s64 = ctx.r10.s64 + -20824;
	// blt cr6,0x831fdfdc
	if (ctx.cr6.lt) goto loc_831FDFDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-20672
	ctx.r5.s64 = ctx.r11.s64 + -20672;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FDFDC;
	sub_8320CF10(ctx, base);
loc_831FDFDC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fe010
	if (ctx.cr6.lt) goto loc_831FE010;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-20744
	ctx.r5.s64 = ctx.r11.s64 + -20744;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FE010;
	sub_8320CF10(ctx, base);
loc_831FE010:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831fde98
	ctx.lr = 0x831FE040;
	sub_831FDE98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FE048"))) PPC_WEAK_FUNC(sub_831FE048);
PPC_FUNC_IMPL(__imp__sub_831FE048) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831fe07c
	if (ctx.cr6.eq) goto loc_831FE07C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x822996c0
	ctx.lr = 0x831FE078;
	sub_822996C0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_831FE07C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_831FE0A0"))) PPC_WEAK_FUNC(sub_831FE0A0);
PPC_FUNC_IMPL(__imp__sub_831FE0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x831FE0A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// beq 0x831fe1b4
	if (ctx.cr0.eq) goto loc_831FE1B4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831fe1b4
	if (ctx.cr6.eq) goto loc_831FE1B4;
loc_831FE0E0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x831fe1b4
	if (!ctx.cr6.lt) goto loc_831FE1B4;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// divwu r7,r30,r11
	ctx.r7.u32 = ctx.r30.u32 / ctx.r11.u32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r7,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fe164
	if (ctx.cr0.eq) goto loc_831FE164;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x831fe164
	if (!ctx.cr6.eq) goto loc_831FE164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
loc_831FE164:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x831FE17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// blt cr6,0x831fe0e0
	if (ctx.cr6.lt) goto loc_831FE0E0;
loc_831FE1B4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe2f4
	if (ctx.cr0.eq) goto loc_831FE2F4;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// add r21,r26,r29
	ctx.r21.u64 = ctx.r26.u64 + ctx.r29.u64;
loc_831FE1C8:
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x831fe2f4
	if (!ctx.cr6.lt) goto loc_831FE2F4;
loc_831FE1DC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x831fe2ec
	if (ctx.cr6.eq) goto loc_831FE2EC;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r25,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0x8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe244
	if (ctx.cr0.eq) goto loc_831FE244;
	// bl 0x82bea298
	ctx.lr = 0x831FE244;
	sub_82BEA298(ctx, base);
loc_831FE244:
	// rlwinm r11,r30,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fe2e0
	if (ctx.cr0.eq) goto loc_831FE2E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// clrlwi r31,r11,20
	ctx.r31.u64 = ctx.r11.u32 & 0xFFF;
	// bne cr6,0x831fe270
	if (!ctx.cr6.eq) goto loc_831FE270;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_831FE270:
	// rlwinm r9,r30,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// rlwinm. r27,r11,20,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r29,r11,16,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// or r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// beq 0x831fe2e0
	if (ctx.cr0.eq) goto loc_831FE2E0;
loc_831FE290:
	// clrlwi r5,r29,31
	ctx.r5.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x831fe2c8
	if (!ctx.cr6.eq) goto loc_831FE2C8;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x831FE2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 1;
	// b 0x831fe2d0
	goto loc_831FE2D0;
loc_831FE2C8:
	// ble cr6,0x831fe2d0
	if (!ctx.cr6.gt) goto loc_831FE2D0;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_831FE2D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x831fe290
	if (!ctx.cr0.eq) goto loc_831FE290;
loc_831FE2E0:
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x831fe1dc
	if (ctx.cr6.lt) goto loc_831FE1DC;
loc_831FE2EC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x831fe1c8
	if (!ctx.cr6.eq) goto loc_831FE1C8;
loc_831FE2F4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FE2FC"))) PPC_WEAK_FUNC(sub_831FE2FC);
PPC_FUNC_IMPL(__imp__sub_831FE2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FE300"))) PPC_WEAK_FUNC(sub_831FE300);
PPC_FUNC_IMPL(__imp__sub_831FE300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x831FE308;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83215548
	ctx.lr = 0x831FE328;
	sub_83215548(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x832139f8
	ctx.lr = 0x831FE330;
	sub_832139F8(ctx, base);
	// b 0x831fe3ac
	goto loc_831FE3AC;
loc_831FE334:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214130
	ctx.lr = 0x831FE33C;
	sub_83214130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1978
	ctx.r11.s64 = ctx.r11.s64 + -1978;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x831fe39c
	if (ctx.cr6.gt) goto loc_831FE39C;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-20608
	ctx.r12.s64 = ctx.r12.s64 + -20608;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31968
	ctx.r12.s64 = -2095054848;
	// addi r12,r12,-7304
	ctx.r12.s64 = ctx.r12.s64 + -7304;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_831FE378;
	case 1:
		goto loc_831FE430;
	case 2:
		goto loc_831FE394;
	case 3:
		goto loc_831FE448;
	case 4:
		goto loc_831FE454;
	case 5:
		goto loc_831FE46C;
	case 6:
		goto loc_831FE3E8;
	case 7:
		goto loc_831FE400;
	case 8:
		goto loc_831FE484;
	case 9:
		goto loc_831FE418;
	case 10:
		goto loc_831FE39C;
	case 11:
		goto loc_831FE4BC;
	case 12:
		goto loc_831FE39C;
	case 13:
		goto loc_831FE49C;
	default:
		__builtin_unreachable();
	}
loc_831FE378:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe384
	if (ctx.cr0.eq) goto loc_831FE384;
	// bl 0x82bea298
	ctx.lr = 0x831FE384;
	sub_82BEA298(ctx, base);
loc_831FE384:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE394:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe3a0
	if (ctx.cr0.eq) goto loc_831FE3A0;
loc_831FE39C:
	// bl 0x82bea298
	ctx.lr = 0x831FE3A0;
	sub_82BEA298(ctx, base);
loc_831FE3A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83214088
	ctx.lr = 0x831FE3AC;
	sub_83214088(ctx, base);
loc_831FE3AC:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831fe334
	if (!ctx.cr0.eq) goto loc_831FE334;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e6ac80
	ctx.lr = 0x831FE3C4;
	sub_82E6AC80(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831fe3d0
	if (ctx.cr6.eq) goto loc_831FE3D0;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_831FE3D0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x831fe3dc
	if (ctx.cr6.eq) goto loc_831FE3DC;
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
loc_831FE3DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_831FE3E8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe3f4
	if (ctx.cr0.eq) goto loc_831FE3F4;
	// bl 0x82bea298
	ctx.lr = 0x831FE3F4;
	sub_82BEA298(ctx, base);
loc_831FE3F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE400:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe40c
	if (ctx.cr0.eq) goto loc_831FE40C;
	// bl 0x82bea298
	ctx.lr = 0x831FE40C;
	sub_82BEA298(ctx, base);
loc_831FE40C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE418:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe424
	if (ctx.cr0.eq) goto loc_831FE424;
	// bl 0x82bea298
	ctx.lr = 0x831FE424;
	sub_82BEA298(ctx, base);
loc_831FE424:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE430:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe43c
	if (!ctx.cr0.eq) goto loc_831FE43C;
	// bl 0x82bea298
	ctx.lr = 0x831FE43C;
	sub_82BEA298(ctx, base);
loc_831FE43C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3F00) | (ctx.r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE448:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe3a0
	if (!ctx.cr0.eq) goto loc_831FE3A0;
	// b 0x831fe39c
	goto loc_831FE39C;
loc_831FE454:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe460
	if (!ctx.cr0.eq) goto loc_831FE460;
	// bl 0x82bea298
	ctx.lr = 0x831FE460;
	sub_82BEA298(ctx, base);
loc_831FE460:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0x40000) | (ctx.r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE46C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe478
	if (!ctx.cr0.eq) goto loc_831FE478;
	// bl 0x82bea298
	ctx.lr = 0x831FE478;
	sub_82BEA298(ctx, base);
loc_831FE478:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE484:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe490
	if (!ctx.cr0.eq) goto loc_831FE490;
	// bl 0x82bea298
	ctx.lr = 0x831FE490;
	sub_82BEA298(ctx, base);
loc_831FE490:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x78000000) | (ctx.r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE49C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe4a8
	if (!ctx.cr0.eq) goto loc_831FE4A8;
	// bl 0x82bea298
	ctx.lr = 0x831FE4A8;
	sub_82BEA298(ctx, base);
loc_831FE4A8:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x831fe3a0
	goto loc_831FE3A0;
loc_831FE4BC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fe4c8
	if (!ctx.cr0.eq) goto loc_831FE4C8;
	// bl 0x82bea298
	ctx.lr = 0x831FE4C8;
	sub_82BEA298(ctx, base);
loc_831FE4C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x831fe3a0
	goto loc_831FE3A0;
}

__attribute__((alias("__imp__sub_831FE4D4"))) PPC_WEAK_FUNC(sub_831FE4D4);
PPC_FUNC_IMPL(__imp__sub_831FE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FE4D8"))) PPC_WEAK_FUNC(sub_831FE4D8);
PPC_FUNC_IMPL(__imp__sub_831FE4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x831FE4E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x831FE510;
	sub_82CB16F0(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x831FE524;
	sub_82CB16F0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82cb16f0
	ctx.lr = 0x831FE534;
	sub_82CB16F0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82cb16f0
	ctx.lr = 0x831FE544;
	sub_82CB16F0(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82cb16f0
	ctx.lr = 0x831FE554;
	sub_82CB16F0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r20,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r20.u8);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
	// b 0x831fe5d0
	goto loc_831FE5D0;
loc_831FE56C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x831fe5d8
	if (ctx.cr6.eq) goto loc_831FE5D8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x831fe594
	if (!ctx.cr6.eq) goto loc_831FE594;
	// rlwinm r11,r9,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x831fe5d0
	goto loc_831FE5D0;
loc_831FE594:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x831fe5ac
	if (!ctx.cr6.eq) goto loc_831FE5AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x831fcd68
	ctx.lr = 0x831FE5A8;
	sub_831FCD68(ctx, base);
	// b 0x831fe5b4
	goto loc_831FE5B4;
loc_831FE5AC:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x831fe5bc
	if (!ctx.cr6.eq) goto loc_831FE5BC;
loc_831FE5B4:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// b 0x831fe5d0
	goto loc_831FE5D0;
loc_831FE5BC:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x831fe5cc
	if (ctx.cr6.eq) goto loc_831FE5CC;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x831fe5d8
	if (!ctx.cr6.eq) goto loc_831FE5D8;
loc_831FE5CC:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_831FE5D0:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x831fe56c
	if (ctx.cr6.lt) goto loc_831FE56C;
loc_831FE5D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fd200
	ctx.lr = 0x831FE5E4;
	sub_831FD200(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215fe8
	ctx.lr = 0x831FE5EC;
	sub_83215FE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83216a00
	ctx.lr = 0x831FE5F4;
	sub_83216A00(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x831fe6f8
	if (ctx.cr0.eq) goto loc_831FE6F8;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r23,r8,-20528
	ctx.r23.s64 = ctx.r8.s64 + -20528;
	// addi r26,r9,-21168
	ctx.r26.s64 = ctx.r9.s64 + -21168;
	// addi r22,r10,-20572
	ctx.r22.s64 = ctx.r10.s64 + -20572;
	// addi r25,r11,-21072
	ctx.r25.s64 = ctx.r11.s64 + -21072;
loc_831FE620:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r28,r11,12,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x831fe650
	if (ctx.cr6.lt) goto loc_831FE650;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,910
	ctx.r7.s64 = 910;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FE64C;
	sub_8320CF10(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831FE650:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831fe6e8
	if (ctx.cr6.eq) goto loc_831FE6E8;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_831FE664:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe6d4
	if (ctx.cr0.eq) goto loc_831FE6D4;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,20,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831fe6b8
	if (ctx.cr6.lt) goto loc_831FE6B8;
	// beq cr6,0x831fe6d4
	if (ctx.cr6.eq) goto loc_831FE6D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x831fe6b0
	if (ctx.cr6.lt) goto loc_831FE6B0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1006
	ctx.r7.s64 = 1006;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x831FE6A8;
	sub_8320CF10(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831fe6d4
	goto loc_831FE6D4;
loc_831FE6B0:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x831fe6d4
	goto loc_831FE6D4;
loc_831FE6B8:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_831FE6D4:
	// rlwinm. r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x831fe664
	if (!ctx.cr0.eq) goto loc_831FE664;
loc_831FE6E8:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bne 0x831fe620
	if (!ctx.cr0.eq) goto loc_831FE620;
loc_831FE6F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FE704"))) PPC_WEAK_FUNC(sub_831FE704);
PPC_FUNC_IMPL(__imp__sub_831FE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FE708"))) PPC_WEAK_FUNC(sub_831FE708);
PPC_FUNC_IMPL(__imp__sub_831FE708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831FE710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fe738
	if (ctx.cr0.eq) goto loc_831FE738;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2932
	ctx.r3.u64 = ctx.r3.u64 | 2932;
	// b 0x831fe7d8
	goto loc_831FE7D8;
loc_831FE738:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mulli r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 * 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x831FE74C;
	sub_82299698(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x831fe760
	if (!ctx.cr0.eq) goto loc_831FE760;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x831fe7d8
	goto loc_831FE7D8;
loc_831FE760:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x831fe7cc
	if (!ctx.cr6.gt) goto loc_831FE7CC;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// addi r6,r31,328
	ctx.r6.s64 = ctx.r31.s64 + 328;
loc_831FE77C:
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// rotlwi r10,r4,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r10,r10,584
	ctx.r10.s64 = ctx.r10.s64 + 584;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_831FE7A4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x831fe7a4
	if (!ctx.cr0.eq) goto loc_831FE7A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831fe77c
	if (ctx.cr6.lt) goto loc_831FE77C;
loc_831FE7CC:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_831FE7D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FE7E0"))) PPC_WEAK_FUNC(sub_831FE7E0);
PPC_FUNC_IMPL(__imp__sub_831FE7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x831FE7E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x831fe814
	if (!ctx.cr6.eq) goto loc_831FE814;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e72cb8
	ctx.lr = 0x831FE814;
	sub_82E72CB8(ctx, base);
loc_831FE814:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_831FE820:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83215270
	ctx.lr = 0x831FE830;
	sub_83215270(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831fe940
	if (!ctx.cr6.eq) goto loc_831FE940;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x831fe848
	if (ctx.cr6.eq) goto loc_831FE848;
	// bl 0x82bea298
	ctx.lr = 0x831FE848;
	sub_82BEA298(ctx, base);
loc_831FE848:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x831fe874
	if (ctx.cr6.eq) goto loc_831FE874;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831fe878
	if (ctx.cr6.eq) goto loc_831FE878;
loc_831FE874:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FE878:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r1,164
	ctx.r31.s64 = ctx.r1.s64 + 164;
loc_831FE884:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,-16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fe918
	if (ctx.cr6.eq) goto loc_831FE918;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x831fe8a8
	if (!ctx.cr6.eq) goto loc_831FE8A8;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x831fe90c
	if (ctx.cr6.eq) goto loc_831FE90C;
loc_831FE8A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831fe8c4
	if (ctx.cr6.eq) goto loc_831FE8C4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e72ca0
	ctx.lr = 0x831FE8C0;
	sub_82E72CA0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_831FE8C4:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x831fc880
	ctx.lr = 0x831FE8E8;
	sub_831FC880(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r6,r11,4,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
loc_831FE90C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r25.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_831FE918:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x831fe884
	if (ctx.cr6.lt) goto loc_831FE884;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831fe940
	if (ctx.cr6.eq) goto loc_831FE940;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e72ca0
	ctx.lr = 0x831FE940;
	sub_82E72CA0(ctx, base);
loc_831FE940:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x831fe820
	if (ctx.cr6.lt) goto loc_831FE820;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FE954"))) PPC_WEAK_FUNC(sub_831FE954);
PPC_FUNC_IMPL(__imp__sub_831FE954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FE958"))) PPC_WEAK_FUNC(sub_831FE958);
PPC_FUNC_IMPL(__imp__sub_831FE958) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831fea98
	if (ctx.cr0.eq) goto loc_831FEA98;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x831fea40
	if (ctx.cr0.eq) goto loc_831FEA40;
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831fe9b8
	if (ctx.cr0.eq) goto loc_831FE9B8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x831fe9ac
	if (!ctx.cr6.eq) goto loc_831FE9AC;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r10,r10,12,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r8,r10,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_831FE9AC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82e73598
	ctx.lr = 0x831FE9B4;
	sub_82E73598(ctx, base);
	// b 0x831fead8
	goto loc_831FEAD8;
loc_831FE9B8:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831fea30
	if (ctx.cr6.eq) goto loc_831FEA30;
loc_831FE9C8:
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x831fe9e4
	if (ctx.cr6.eq) goto loc_831FE9E4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831fe9c8
	if (!ctx.cr6.eq) goto loc_831FE9C8;
loc_831FE9E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831fea30
	if (ctx.cr6.eq) goto loc_831FEA30;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,209
	ctx.r8.s64 = 209;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r8,3,20,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF000);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,24,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x82e735c8
	ctx.lr = 0x831FEA2C;
	sub_82E735C8(ctx, base);
	// b 0x831fead8
	goto loc_831FEAD8;
loc_831FEA30:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82e735b0
	ctx.lr = 0x831FEA3C;
	sub_82E735B0(ctx, base);
	// b 0x831fead8
	goto loc_831FEAD8;
loc_831FEA40:
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x831fea8c
	if (ctx.cr0.eq) goto loc_831FEA8C;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r9,63
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 63, ctx.xer);
	// bne cr6,0x831fea8c
	if (!ctx.cr6.eq) goto loc_831FEA8C;
	// lbz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-241
	ctx.r7.s64 = -15794176;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r8,-20500
	ctx.r8.s64 = ctx.r8.s64 + -20500;
	// lis r6,-16
	ctx.r6.s64 = -1048576;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r7,r9,20,8,11
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xF00000) | (ctx.r7.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r6,r9,16,12,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xF0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF0FFFF);
	// and r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831FEA8C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82e735e0
	ctx.lr = 0x831FEA94;
	sub_82E735E0(ctx, base);
	// b 0x831fead8
	goto loc_831FEAD8;
loc_831FEA98:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fead0
	if (ctx.cr0.eq) goto loc_831FEAD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_831FEAD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e73878
	ctx.lr = 0x831FEAD8;
	sub_82E73878(ctx, base);
loc_831FEAD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FEAE8"))) PPC_WEAK_FUNC(sub_831FEAE8);
PPC_FUNC_IMPL(__imp__sub_831FEAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x831FEAF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x831febd8
	if (!ctx.cr6.lt) goto loc_831FEBD8;
loc_831FEB20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r9,16,16,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r21,r9,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r22,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8320ce20
	ctx.lr = 0x831FEB9C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831febac
	if (!ctx.cr0.gt) goto loc_831FEBAC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fec28
	if (!ctx.cr6.gt) goto loc_831FEC28;
loc_831FEBAC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x8320ce20
	ctx.lr = 0x831FEBBC;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831febcc
	if (!ctx.cr0.gt) goto loc_831FEBCC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831fec3c
	if (!ctx.cr6.gt) goto loc_831FEC3C;
loc_831FEBCC:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x831feb20
	if (ctx.cr6.lt) goto loc_831FEB20;
loc_831FEBD8:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r30,r11
	ctx.r3.u32 = ctx.r30.u32 / ctx.r11.u32;
loc_831FEBE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r10,-5800
	ctx.r5.s64 = ctx.r10.s64 + -5800;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fe0a0
	ctx.lr = 0x831FEC20;
	sub_831FE0A0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_831FEC28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_831FEC2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8320ce20
	ctx.lr = 0x831FEC38;
	sub_8320CE20(ctx, base);
	// b 0x831febe0
	goto loc_831FEBE0;
loc_831FEC3C:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x831fec2c
	goto loc_831FEC2C;
}

__attribute__((alias("__imp__sub_831FEC44"))) PPC_WEAK_FUNC(sub_831FEC44);
PPC_FUNC_IMPL(__imp__sub_831FEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FEC48"))) PPC_WEAK_FUNC(sub_831FEC48);
PPC_FUNC_IMPL(__imp__sub_831FEC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x831FEC50;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,4684
	ctx.r3.s64 = 4684;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82299698
	ctx.lr = 0x831FEC8C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831feca0
	if (!ctx.cr0.eq) goto loc_831FECA0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x831fed50
	goto loc_831FED50;
loc_831FECA0:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fe4d8
	ctx.lr = 0x831FECC4;
	sub_831FE4D8(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11392
	ctx.r5.s64 = ctx.r11.s64 + -11392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fe0a0
	ctx.lr = 0x831FECE4;
	sub_831FE0A0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fe708
	ctx.lr = 0x831FECF4;
	sub_831FE708(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x831fed30
	if (ctx.cr0.lt) goto loc_831FED30;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu. r29,r11,r10
	ctx.r29.u32 = ctx.r11.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x831fed30
	if (ctx.cr0.eq) goto loc_831FED30;
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
loc_831FED14:
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6e6a8
	ctx.lr = 0x831FED24;
	sub_82E6E6A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x831fed14
	if (!ctx.cr0.eq) goto loc_831FED14;
loc_831FED30:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x831FED3C;
	sub_822996C0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831fed50
	if (ctx.cr6.eq) goto loc_831FED50;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x831FED50;
	sub_822996C0(ctx, base);
loc_831FED50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FED5C"))) PPC_WEAK_FUNC(sub_831FED5C);
PPC_FUNC_IMPL(__imp__sub_831FED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FED60"))) PPC_WEAK_FUNC(sub_831FED60);
PPC_FUNC_IMPL(__imp__sub_831FED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831FED68;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82cb16f0
	ctx.lr = 0x831FED98;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bge cr6,0x831fefc8
	if (!ctx.cr6.lt) goto loc_831FEFC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,-20492
	ctx.r24.s64 = ctx.r11.s64 + -20492;
loc_831FEDE0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x831fefc8
	if (ctx.cr6.eq) goto loc_831FEFC8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x831fef68
	if (ctx.cr6.eq) goto loc_831FEF68;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x831feeec
	if (ctx.cr6.eq) goto loc_831FEEEC;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x831fee84
	if (ctx.cr6.eq) goto loc_831FEE84;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x831fee28
	if (ctx.cr6.eq) goto loc_831FEE28;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x831fefc8
	if (!ctx.cr6.eq) goto loc_831FEFC8;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831fefc0
	goto loc_831FEFC0;
loc_831FEE28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x831fefd4
	if (!ctx.cr6.lt) goto loc_831FEFD4;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831fefe0
	if (!ctx.cr0.eq) goto loc_831FEFE0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x82e6e6a8
	ctx.lr = 0x831FEE7C;
	sub_82E6E6A8(ctx, base);
loc_831FEE7C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x831fefc0
	goto loc_831FEFC0;
loc_831FEE84:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x831fefec
	if (!ctx.cr6.lt) goto loc_831FEFEC;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831feff8
	if (!ctx.cr0.eq) goto loc_831FEFF8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x831feedc
	if (ctx.cr6.eq) goto loc_831FEEDC;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_831FEEDC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e70dd0
	ctx.lr = 0x831FEEE8;
	sub_82E70DD0(ctx, base);
	// b 0x831fee7c
	goto loc_831FEE7C;
loc_831FEEEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x831ff004
	if (!ctx.cr6.lt) goto loc_831FF004;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x831ff010
	if (!ctx.cr0.eq) goto loc_831FF010;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x831fef44
	if (ctx.cr6.eq) goto loc_831FEF44;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_831FEF44:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	ctx.r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fef5c
	if (!ctx.cr6.eq) goto loc_831FEF5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_831FEF5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e6e690
	ctx.lr = 0x831FEF64;
	sub_82E6E690(ctx, base);
	// b 0x831fefc0
	goto loc_831FEFC0;
loc_831FEF68:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,2560
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2560, ctx.xer);
	// bne cr6,0x831fefc0
	if (!ctx.cr6.eq) goto loc_831FEFC0;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x831fefc0
	if (!ctx.cr6.lt) goto loc_831FEFC0;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x831fefc0
	if (ctx.cr6.gt) goto loc_831FEFC0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x831fefb4
	if (!ctx.cr6.eq) goto loc_831FEFB4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_831FEFB4:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
loc_831FEFC0:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x831fede0
	if (ctx.cr6.lt) goto loc_831FEDE0;
loc_831FEFC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FEFCC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_831FEFD4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x831fefcc
	goto loc_831FEFCC;
loc_831FEFE0:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x831fefcc
	goto loc_831FEFCC;
loc_831FEFEC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x831fefcc
	goto loc_831FEFCC;
loc_831FEFF8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x831fefcc
	goto loc_831FEFCC;
loc_831FF004:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x831fefcc
	goto loc_831FEFCC;
loc_831FF010:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x831fefcc
	goto loc_831FEFCC;
}

__attribute__((alias("__imp__sub_831FF01C"))) PPC_WEAK_FUNC(sub_831FF01C);
PPC_FUNC_IMPL(__imp__sub_831FF01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF020"))) PPC_WEAK_FUNC(sub_831FF020);
PPC_FUNC_IMPL(__imp__sub_831FF020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x831FF028;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x83214ef8
	ctx.lr = 0x831FF054;
	sub_83214EF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x831ff0a0
	if (!ctx.cr6.lt) goto loc_831FF0A0;
loc_831FF074:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FF084;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831ff094
	if (!ctx.cr0.gt) goto loc_831FF094;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x831ff0e4
	if (!ctx.cr6.gt) goto loc_831FF0E4;
loc_831FF094:
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x831ff074
	if (ctx.cr6.lt) goto loc_831FF074;
loc_831FF0A0:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = ctx.r29.u32 / ctx.r11.u32;
loc_831FF0A8:
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// rlwinm. r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x831ff0cc
	if (ctx.cr0.eq) goto loc_831FF0CC;
loc_831FF0B8:
	// lwbrx r9,0,r11
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831ff0b8
	if (!ctx.cr0.eq) goto loc_831FF0B8;
loc_831FF0CC:
	// bl 0x82e71c98
	ctx.lr = 0x831FF0D0;
	sub_82E71C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831ff0f8
	if (!ctx.cr0.eq) goto loc_831FF0F8;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x831ff218
	goto loc_831FF218;
loc_831FF0E4:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320ce20
	ctx.lr = 0x831FF0F4;
	sub_8320CE20(ctx, base);
	// b 0x831ff0a8
	goto loc_831FF0A8;
loc_831FF0F8:
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x831ff10c
	if (ctx.cr6.eq) goto loc_831FF10C;
	// li r4,54
	ctx.r4.s64 = 54;
loc_831FF10C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73588
	ctx.lr = 0x831FF114;
	sub_82E73588(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x831FF124;
	sub_831FE7E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831fec48
	ctx.lr = 0x831FF14C;
	sub_831FEC48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x831ff218
	if (ctx.cr0.lt) goto loc_831FF218;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831fed60
	ctx.lr = 0x831FF16C;
	sub_831FED60(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x831ff218
	if (ctx.cr0.lt) goto loc_831FF218;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x831ff1bc
	if (ctx.cr6.eq) goto loc_831FF1BC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x831ff1bc
	if (ctx.cr0.eq) goto loc_831FF1BC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73590
	ctx.lr = 0x831FF1BC;
	sub_82E73590(ctx, base);
loc_831FF1BC:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831fe300
	ctx.lr = 0x831FF1DC;
	sub_831FE300(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831feae8
	ctx.lr = 0x831FF200;
	sub_831FEAE8(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x831ff218
	if (ctx.cr6.eq) goto loc_831FF218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82e735f8
	ctx.lr = 0x831FF218;
	sub_82E735F8(ctx, base);
loc_831FF218:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF224"))) PPC_WEAK_FUNC(sub_831FF224);
PPC_FUNC_IMPL(__imp__sub_831FF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF228"))) PPC_WEAK_FUNC(sub_831FF228);
PPC_FUNC_IMPL(__imp__sub_831FF228) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x831ff2c0
	goto loc_831FF2C0;
loc_831FF248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e6e720
	ctx.lr = 0x831FF254;
	sub_82E6E720(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ff2bc
	if (ctx.cr0.eq) goto loc_831FF2BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ff2e0
	if (ctx.cr6.eq) goto loc_831FF2E0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x831ff29c
	if (!ctx.cr6.gt) goto loc_831FF29C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x831ff290
	if (ctx.cr6.eq) goto loc_831FF290;
	// ble cr6,0x831ff2e0
	if (!ctx.cr6.gt) goto loc_831FF2E0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x831ff29c
	if (!ctx.cr6.gt) goto loc_831FF29C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x831ff2e0
	if (!ctx.cr6.eq) goto loc_831FF2E0;
	// b 0x831ff2bc
	goto loc_831FF2BC;
loc_831FF290:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ff2e0
	if (ctx.cr0.eq) goto loc_831FF2E0;
	// b 0x831ff2bc
	goto loc_831FF2BC;
loc_831FF29C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r10,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831ff2d4
	if (!ctx.cr0.eq) goto loc_831FF2D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,16468
	ctx.r11.u64 = ctx.r11.u64 & 16468;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831ff2e0
	if (!ctx.cr0.eq) goto loc_831FF2E0;
loc_831FF2BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831FF2C0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e73890
	ctx.lr = 0x831FF2C8;
	sub_82E73890(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x831ff248
	if (ctx.cr6.gt) goto loc_831FF248;
	// b 0x831ff2e0
	goto loc_831FF2E0;
loc_831FF2D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831FF2E0:
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

__attribute__((alias("__imp__sub_831FF2F8"))) PPC_WEAK_FUNC(sub_831FF2F8);
PPC_FUNC_IMPL(__imp__sub_831FF2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FF300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e6e6f0
	ctx.lr = 0x831FF30C;
	sub_82E6E6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x831ff354
	if (ctx.cr0.eq) goto loc_831FF354;
loc_831FF318:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6e750
	ctx.lr = 0x831FF328;
	sub_82E6E750(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831ff348
	if (ctx.cr6.eq) goto loc_831FF348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831ff348
	if (ctx.cr0.eq) goto loc_831FF348;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831FF348:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x831ff318
	if (ctx.cr6.lt) goto loc_831FF318;
loc_831FF354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF35C"))) PPC_WEAK_FUNC(sub_831FF35C);
PPC_FUNC_IMPL(__imp__sub_831FF35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF360"))) PPC_WEAK_FUNC(sub_831FF360);
PPC_FUNC_IMPL(__imp__sub_831FF360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FF368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831ff44c
	goto loc_831FF44C;
loc_831FF384:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 31, ctx.xer);
	// beq cr6,0x831ff3c8
	if (ctx.cr6.eq) goto loc_831FF3C8;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// beq cr6,0x831ff444
	if (ctx.cr6.eq) goto loc_831FF444;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// beq cr6,0x831ff3c0
	if (ctx.cr6.eq) goto loc_831FF3C0;
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// beq cr6,0x831ff3c0
	if (ctx.cr6.eq) goto loc_831FF3C0;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x831ff454
	if (!ctx.cr6.eq) goto loc_831FF454;
	// rlwinm r11,r10,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x831ff448
	goto loc_831FF448;
loc_831FF3C0:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// b 0x831ff448
	goto loc_831FF448;
loc_831FF3C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x831ff444
	if (!ctx.cr6.eq) goto loc_831FF444;
	// lwz r30,308(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// stw r11,308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 308, ctx.r11.u32);
	// blt cr6,0x831ff3f8
	if (ctx.cr6.lt) goto loc_831FF3F8;
	// bl 0x82bea298
	ctx.lr = 0x831FF3F8;
	sub_82BEA298(ctx, base);
loc_831FF3F8:
	// addi r11,r30,13
	ctx.r11.s64 = ctx.r30.s64 + 13;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,20,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_831FF444:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_831FF448:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831FF44C:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x831ff384
	if (!ctx.cr6.eq) goto loc_831FF384;
loc_831FF454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF45C"))) PPC_WEAK_FUNC(sub_831FF45C);
PPC_FUNC_IMPL(__imp__sub_831FF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF460"))) PPC_WEAK_FUNC(sub_831FF460);
PPC_FUNC_IMPL(__imp__sub_831FF460) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF468"))) PPC_WEAK_FUNC(sub_831FF468);
PPC_FUNC_IMPL(__imp__sub_831FF468) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF470"))) PPC_WEAK_FUNC(sub_831FF470);
PPC_FUNC_IMPL(__imp__sub_831FF470) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831FF4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_831FF4DC"))) PPC_WEAK_FUNC(sub_831FF4DC);
PPC_FUNC_IMPL(__imp__sub_831FF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF4E0"))) PPC_WEAK_FUNC(sub_831FF4E0);
PPC_FUNC_IMPL(__imp__sub_831FF4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831FF4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FF4FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831ff54c
	if (ctx.cr6.eq) goto loc_831FF54C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x831ff53c
	if (ctx.cr6.eq) goto loc_831FF53C;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// cmplwi cr6,r11,511
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 511, ctx.xer);
	// blt cr6,0x831ff544
	if (ctx.cr6.lt) goto loc_831FF544;
loc_831FF53C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff470
	ctx.lr = 0x831FF544;
	sub_831FF470(ctx, base);
loc_831FF544:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x831ff4fc
	if (!ctx.cr6.lt) goto loc_831FF4FC;
loc_831FF54C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF554"))) PPC_WEAK_FUNC(sub_831FF554);
PPC_FUNC_IMPL(__imp__sub_831FF554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF558"))) PPC_WEAK_FUNC(sub_831FF558);
PPC_FUNC_IMPL(__imp__sub_831FF558) {
	PPC_FUNC_PROLOGUE();
	// b 0x831ff4e0
	sub_831FF4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF55C"))) PPC_WEAK_FUNC(sub_831FF55C);
PPC_FUNC_IMPL(__imp__sub_831FF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF560"))) PPC_WEAK_FUNC(sub_831FF560);
PPC_FUNC_IMPL(__imp__sub_831FF560) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb2578
	ctx.lr = 0x831FF5B0;
	sub_82CB2578(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// bge 0x831ff5cc
	if (!ctx.cr0.lt) goto loc_831FF5CC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x831ff678
	goto loc_831FF678;
loc_831FF5CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x831ff678
	if (!ctx.cr6.gt) goto loc_831FF678;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831ff648
	if (ctx.cr6.eq) goto loc_831FF648;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x831ff618
	if (ctx.cr6.eq) goto loc_831FF618;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x831ff618
	if (ctx.cr6.eq) goto loc_831FF618;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x831ff610
	if (ctx.cr6.lt) goto loc_831FF610;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x831ff618
	if (!ctx.cr6.gt) goto loc_831FF618;
loc_831FF610:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831ff61c
	goto loc_831FF61C;
loc_831FF618:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831FF61C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ff648
	if (!ctx.cr0.eq) goto loc_831FF648;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831FF640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x831ff668
	if (ctx.cr0.lt) goto loc_831FF668;
loc_831FF648:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831ff678
	if (!ctx.cr0.lt) goto loc_831FF678;
loc_831FF668:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831ff678
	if (ctx.cr6.lt) goto loc_831FF678;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_831FF678:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_831FF690"))) PPC_WEAK_FUNC(sub_831FF690);
PPC_FUNC_IMPL(__imp__sub_831FF690) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831ff6cc
	if (!ctx.cr0.lt) goto loc_831FF6CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831ff6cc
	if (ctx.cr6.lt) goto loc_831FF6CC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_831FF6CC:
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

__attribute__((alias("__imp__sub_831FF6E0"))) PPC_WEAK_FUNC(sub_831FF6E0);
PPC_FUNC_IMPL(__imp__sub_831FF6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x831FF6E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ff7c4
	if (!ctx.cr0.eq) goto loc_831FF7C4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x831ff7c4
	if (ctx.cr0.eq) goto loc_831FF7C4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// rlwinm. r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r27,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r27.u64);
	// clrlwi r30,r10,20
	ctx.r30.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r31,r10,16,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// or r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// beq 0x831ff7c4
	if (ctx.cr0.eq) goto loc_831FF7C4;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_831FF748:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e6e750
	ctx.lr = 0x831FF758;
	sub_82E6E750(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x831fd4b0
	ctx.lr = 0x831FF778;
	sub_831FD4B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ff79c
	if (ctx.cr0.eq) goto loc_831FF79C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_831FF79C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x831ff748
	if (!ctx.cr0.eq) goto loc_831FF748;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x831ff7c4
	if (ctx.cr6.eq) goto loc_831FF7C4;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff228
	ctx.lr = 0x831FF7C4;
	sub_831FF228(ctx, base);
loc_831FF7C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FF7CC"))) PPC_WEAK_FUNC(sub_831FF7CC);
PPC_FUNC_IMPL(__imp__sub_831FF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FF7D0"))) PPC_WEAK_FUNC(sub_831FF7D0);
PPC_FUNC_IMPL(__imp__sub_831FF7D0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831ff80c
	if (!ctx.cr0.lt) goto loc_831FF80C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x831ff80c
	if (ctx.cr6.lt) goto loc_831FF80C;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_831FF80C:
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

__attribute__((alias("__imp__sub_831FF820"))) PPC_WEAK_FUNC(sub_831FF820);
PPC_FUNC_IMPL(__imp__sub_831FF820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31968
	ctx.r31.s64 = -2095054848;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r31,r31,-2096
	ctx.r31.s64 = ctx.r31.s64 + -2096;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x8335dd98
	ctx.lr = 0x831FF864;
	sub_8335DD98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FF878"))) PPC_WEAK_FUNC(sub_831FF878);
PPC_FUNC_IMPL(__imp__sub_831FF878) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831ff888
	if (ctx.cr0.eq) goto loc_831FF888;
	// b 0x831ff470
	sub_831FF470(ctx, base);
	return;
loc_831FF888:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FF890"))) PPC_WEAK_FUNC(sub_831FF890);
PPC_FUNC_IMPL(__imp__sub_831FF890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ff8bc
	if (!ctx.cr6.eq) goto loc_831FF8BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20472
	ctx.r4.s64 = ctx.r11.s64 + -20472;
	// b 0x831ff92c
	goto loc_831FF92C;
loc_831FF8BC:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ff934
	if (!ctx.cr6.eq) goto loc_831FF934;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ff8e0
	if (!ctx.cr6.eq) goto loc_831FF8E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,7116
	ctx.r4.s64 = ctx.r11.s64 + 7116;
	// b 0x831ff92c
	goto loc_831FF92C;
loc_831FF8E0:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ff8f8
	if (!ctx.cr6.eq) goto loc_831FF8F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20480
	ctx.r4.s64 = ctx.r11.s64 + -20480;
	// b 0x831ff92c
	goto loc_831FF92C;
loc_831FF8F8:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831ff910
	if (!ctx.cr6.eq) goto loc_831FF910;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,7124
	ctx.r4.s64 = ctx.r11.s64 + 7124;
	// b 0x831ff92c
	goto loc_831FF92C;
loc_831FF910:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ff924
	if (ctx.cr0.eq) goto loc_831FF924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,7108
	ctx.r4.s64 = ctx.r11.s64 + 7108;
	// b 0x831ff92c
	goto loc_831FF92C;
loc_831FF924:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,7100
	ctx.r4.s64 = ctx.r11.s64 + 7100;
loc_831FF92C:
	// bl 0x831ff560
	ctx.lr = 0x831FF930;
	sub_831FF560(ctx, base);
	// b 0x831ff948
	goto loc_831FF948;
loc_831FF934:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20488
	ctx.r4.s64 = ctx.r11.s64 + -20488;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x831ff560
	ctx.lr = 0x831FF948;
	sub_831FF560(ctx, base);
loc_831FF948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FF958"))) PPC_WEAK_FUNC(sub_831FF958);
PPC_FUNC_IMPL(__imp__sub_831FF958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x831FF960;
	__savegprlr_19(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831ff9a4
	if (ctx.cr6.lt) goto loc_831FF9A4;
	// beq cr6,0x831ff99c
	if (ctx.cr6.eq) goto loc_831FF99C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x831ff994
	if (ctx.cr6.lt) goto loc_831FF994;
	// bne cr6,0x831ff9ac
	if (!ctx.cr6.eq) goto loc_831FF9AC;
	// li r10,115
	ctx.r10.s64 = 115;
	// b 0x831ff9b0
	goto loc_831FF9B0;
loc_831FF994:
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x831ff9b0
	goto loc_831FF9B0;
loc_831FF99C:
	// li r10,105
	ctx.r10.s64 = 105;
	// b 0x831ff9b0
	goto loc_831FF9B0;
loc_831FF9A4:
	// li r10,98
	ctx.r10.s64 = 98;
	// b 0x831ff9b0
	goto loc_831FF9B0;
loc_831FF9AC:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
loc_831FF9B0:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ff9d4
	if (!ctx.cr6.eq) goto loc_831FF9D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20360
	ctx.r4.s64 = ctx.r11.s64 + -20360;
	// bl 0x82cb61f0
	ctx.lr = 0x831FF9D0;
	sub_82CB61F0(ctx, base);
	// b 0x831ffa04
	goto loc_831FFA04;
loc_831FF9D4:
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831ff9f0
	if (!ctx.cr6.eq) goto loc_831FF9F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20368
	ctx.r4.s64 = ctx.r11.s64 + -20368;
	// bl 0x82cb61f0
	ctx.lr = 0x831FF9EC;
	sub_82CB61F0(ctx, base);
	// b 0x831ffa04
	goto loc_831FFA04;
loc_831FF9F0:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r9,-20376
	ctx.r4.s64 = ctx.r9.s64 + -20376;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFA04;
	sub_82CB61F0(ctx, base);
loc_831FFA04:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r21.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x82cb16f0
	ctx.lr = 0x831FFA1C;
	sub_82CB16F0(ctx, base);
	// lwz r31,44(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831ffc44
	if (ctx.cr6.eq) goto loc_831FFC44;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ffc44
	if (ctx.cr6.eq) goto loc_831FFC44;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831ffc44
	if (!ctx.cr6.eq) goto loc_831FFC44;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ffc44
	if (!ctx.cr6.eq) goto loc_831FFC44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-20384
	ctx.r4.s64 = ctx.r11.s64 + -20384;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFA5C;
	sub_82CB61F0(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831ffc0c
	if (!ctx.cr6.gt) goto loc_831FFC0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r24,r11,-14480
	ctx.r24.s64 = ctx.r11.s64 + -14480;
	// addi r28,r10,-20408
	ctx.r28.s64 = ctx.r10.s64 + -20408;
	// addi r27,r9,-20424
	ctx.r27.s64 = ctx.r9.s64 + -20424;
	// addi r30,r8,-18112
	ctx.r30.s64 = ctx.r8.s64 + -18112;
	// addi r26,r7,-12392
	ctx.r26.s64 = ctx.r7.s64 + -12392;
	// addi r25,r6,-12384
	ctx.r25.s64 = ctx.r6.s64 + -12384;
	// addi r29,r5,32256
	ctx.r29.s64 = ctx.r5.s64 + 32256;
loc_831FFAA4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x831ffae0
	if (ctx.cr6.eq) goto loc_831FFAE0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_831FFAB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831ffab4
	if (!ctx.cr6.eq) goto loc_831FFAB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831FFAC8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x831ffac8
	if (!ctx.cr6.eq) goto loc_831FFAC8;
loc_831FFAE0:
	// li r5,127
	ctx.r5.s64 = 127;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x82cb16f0
	ctx.lr = 0x831FFAF4;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x831ffba4
	if (ctx.cr6.lt) goto loc_831FFBA4;
	// beq cr6,0x831ffb80
	if (ctx.cr6.eq) goto loc_831FFB80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x831ffb20
	if (ctx.cr6.lt) goto loc_831FFB20;
	// bne cr6,0x831ffbc8
	if (!ctx.cr6.eq) goto loc_831FFBC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFB1C;
	sub_82CB61F0(ctx, base);
	// b 0x831ffbc8
	goto loc_831FFBC8;
loc_831FFB20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82cb61f0
	ctx.lr = 0x831FFB7C;
	sub_82CB61F0(ctx, base);
	// b 0x831ffb9c
	goto loc_831FFB9C;
loc_831FFB80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb61f0
	ctx.lr = 0x831FFB9C;
	sub_82CB61F0(ctx, base);
loc_831FFB9C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x831ffbc8
	goto loc_831FFBC8;
loc_831FFBA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ffbb8
	if (!ctx.cr6.eq) goto loc_831FFBB8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_831FFBB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFBC4;
	sub_82CB61F0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_831FFBC8:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_831FFBD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831ffbd0
	if (!ctx.cr6.eq) goto loc_831FFBD0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831FFBE4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x831ffbe4
	if (!ctx.cr6.eq) goto loc_831FFBE4;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831ffaa4
	if (ctx.cr6.lt) goto loc_831FFAA4;
loc_831FFC0C:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r10,-20428
	ctx.r10.s64 = ctx.r10.s64 + -20428;
loc_831FFC18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x831ffc18
	if (!ctx.cr6.eq) goto loc_831FFC18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831FFC2C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x831ffc2c
	if (!ctx.cr6.eq) goto loc_831FFC2C;
loc_831FFC44:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lwz r9,20(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,-11296
	ctx.r10.s64 = ctx.r10.s64 + -11296;
	// addi r7,r11,21574
	ctx.r7.s64 = ctx.r11.s64 + 21574;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x831ffc78
	goto loc_831FFC78;
loc_831FFC64:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831ffc9c
	if (ctx.cr6.eq) goto loc_831FFC9C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831FFC78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831ffc64
	if (!ctx.cr6.eq) goto loc_831FFC64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_831FFC84:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r10,r11,-11352
	ctx.r10.s64 = ctx.r11.s64 + -11352;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x831ffcb8
	goto loc_831FFCB8;
loc_831FFC9C:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831ffc84
	goto loc_831FFC84;
loc_831FFCA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831ffcc4
	if (ctx.cr6.eq) goto loc_831FFCC4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831FFCB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x831ffca4
	if (!ctx.cr6.eq) goto loc_831FFCA4;
	// b 0x831ffcc8
	goto loc_831FFCC8;
loc_831FFCC4:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831FFCC8:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lwz r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r4,r5,-20468
	ctx.r4.s64 = ctx.r5.s64 + -20468;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ff560
	ctx.lr = 0x831FFCF0;
	sub_831FF560(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FFCF8"))) PPC_WEAK_FUNC(sub_831FFCF8);
PPC_FUNC_IMPL(__imp__sub_831FFCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x831FFD00;
	__savegprlr_23(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x831FFD30;
	sub_82CB1160(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,-21932
	ctx.r27.s64 = ctx.r11.s64 + -21932;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831ffd50
	if (ctx.cr6.eq) goto loc_831FFD50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20328
	ctx.r4.s64 = ctx.r11.s64 + -20328;
	// b 0x831ffd6c
	goto loc_831FFD6C;
loc_831FFD50:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ffd68
	if (ctx.cr6.eq) goto loc_831FFD68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20340
	ctx.r4.s64 = ctx.r11.s64 + -20340;
	// b 0x831ffd6c
	goto loc_831FFD6C;
loc_831FFD68:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_831FFD6C:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFD84;
	sub_82CB61F0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831ffdb8
	if (!ctx.cr6.eq) goto loc_831FFDB8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ffebc
	if (!ctx.cr6.eq) goto loc_831FFEBC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831ff958
	ctx.lr = 0x831FFDAC;
	sub_831FF958(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831ffeb0
	if (ctx.cr6.eq) goto loc_831FFEB0;
loc_831FFDB8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-20348
	ctx.r4.s64 = ctx.r11.s64 + -20348;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFDD4;
	sub_82CB61F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831fdb50
	ctx.lr = 0x831FFDF4;
	sub_831FDB50(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x831fffe4
	if (ctx.cr6.eq) goto loc_831FFFE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r11,21574
	ctx.r30.s64 = ctx.r11.s64 + 21574;
	// addi r25,r10,-20356
	ctx.r25.s64 = ctx.r10.s64 + -20356;
loc_831FFE14:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFE24;
	sub_82CB61F0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831ffe38
	if (!ctx.cr6.lt) goto loc_831FFE38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_831FFE38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x831ffcf8
	ctx.lr = 0x831FFE60;
	sub_831FFCF8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x831ffea0
	if (ctx.cr6.eq) goto loc_831FFEA0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_831FFEA0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x831ffe14
	if (ctx.cr6.lt) goto loc_831FFE14;
	// b 0x831fffe4
	goto loc_831FFFE4;
loc_831FFEB0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fffe4
	if (ctx.cr6.eq) goto loc_831FFFE4;
loc_831FFEBC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82cb61f0
	ctx.lr = 0x831FFED8;
	sub_82CB61F0(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x831fffe4
	if (ctx.cr6.eq) goto loc_831FFFE4;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r10,22368
	ctx.r27.s64 = ctx.r10.s64 + 22368;
	// addi r26,r11,21574
	ctx.r26.s64 = ctx.r11.s64 + 21574;
loc_831FFF04:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x831fdb50
	ctx.lr = 0x831FFF58;
	sub_831FDB50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fff70
	if (!ctx.cr6.lt) goto loc_831FFF70;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_831FFF70:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x831ffcf8
	ctx.lr = 0x831FFF98;
	sub_831FFCF8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x831fffd8
	if (ctx.cr6.eq) goto loc_831FFFD8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_831FFFD8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x831fff04
	if (!ctx.cr0.eq) goto loc_831FFF04;
loc_831FFFE4:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FFFEC"))) PPC_WEAK_FUNC(sub_831FFFEC);
PPC_FUNC_IMPL(__imp__sub_831FFFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FFFF0"))) PPC_WEAK_FUNC(sub_831FFFF0);
PPC_FUNC_IMPL(__imp__sub_831FFFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831FFFF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83200098
	if (ctx.cr6.eq) goto loc_83200098;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x83200024
	if (!ctx.cr6.gt) goto loc_83200024;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8320009c
	goto loc_8320009C;
loc_83200024:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83200098
	if (ctx.cr6.eq) goto loc_83200098;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x83200098
	if (ctx.cr6.eq) goto loc_83200098;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,21574
	ctx.r29.s64 = ctx.r11.s64 + 21574;
loc_83200050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bl 0x831fdae0
	ctx.lr = 0x8320006C;
	sub_831FDAE0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ffcf8
	ctx.lr = 0x8320008C;
	sub_831FFCF8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x83200050
	if (!ctx.cr0.eq) goto loc_83200050;
loc_83200098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320009C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832000A4"))) PPC_WEAK_FUNC(sub_832000A4);
PPC_FUNC_IMPL(__imp__sub_832000A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832000A8"))) PPC_WEAK_FUNC(sub_832000A8);
PPC_FUNC_IMPL(__imp__sub_832000A8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832000e8
	if (ctx.cr6.eq) goto loc_832000E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// bl 0x831ff560
	ctx.lr = 0x832000E0;
	sub_831FF560(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832000E8:
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

__attribute__((alias("__imp__sub_832000FC"))) PPC_WEAK_FUNC(sub_832000FC);
PPC_FUNC_IMPL(__imp__sub_832000FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200100"))) PPC_WEAK_FUNC(sub_83200100);
PPC_FUNC_IMPL(__imp__sub_83200100) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x832000a8
	ctx.lr = 0x83200120;
	sub_832000A8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x831ff560
	ctx.lr = 0x83200130;
	sub_831FF560(ctx, base);
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

__attribute__((alias("__imp__sub_83200144"))) PPC_WEAK_FUNC(sub_83200144);
PPC_FUNC_IMPL(__imp__sub_83200144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200148"))) PPC_WEAK_FUNC(sub_83200148);
PPC_FUNC_IMPL(__imp__sub_83200148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20308
	ctx.r4.s64 = ctx.r11.s64 + -20308;
	// b 0x832000a8
	sub_832000A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200154"))) PPC_WEAK_FUNC(sub_83200154);
PPC_FUNC_IMPL(__imp__sub_83200154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200158"))) PPC_WEAK_FUNC(sub_83200158);
PPC_FUNC_IMPL(__imp__sub_83200158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// b 0x832000a8
	sub_832000A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200164"))) PPC_WEAK_FUNC(sub_83200164);
PPC_FUNC_IMPL(__imp__sub_83200164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200168"))) PPC_WEAK_FUNC(sub_83200168);
PPC_FUNC_IMPL(__imp__sub_83200168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// b 0x832000a8
	sub_832000A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200174"))) PPC_WEAK_FUNC(sub_83200174);
PPC_FUNC_IMPL(__imp__sub_83200174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200178"))) PPC_WEAK_FUNC(sub_83200178);
PPC_FUNC_IMPL(__imp__sub_83200178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// b 0x832000a8
	sub_832000A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200184"))) PPC_WEAK_FUNC(sub_83200184);
PPC_FUNC_IMPL(__imp__sub_83200184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200188"))) PPC_WEAK_FUNC(sub_83200188);
PPC_FUNC_IMPL(__imp__sub_83200188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83200190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e73890
	ctx.lr = 0x832001A0;
	sub_82E73890(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x832001e0
	if (ctx.cr0.eq) goto loc_832001E0;
loc_832001AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e6e720
	ctx.lr = 0x832001B8;
	sub_82E6E720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff6e0
	ctx.lr = 0x832001D4;
	sub_831FF6E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832001ac
	if (ctx.cr6.lt) goto loc_832001AC;
loc_832001E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832001E8"))) PPC_WEAK_FUNC(sub_832001E8);
PPC_FUNC_IMPL(__imp__sub_832001E8) {
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
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83200188
	ctx.lr = 0x83200200;
	sub_83200188(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83200210"))) PPC_WEAK_FUNC(sub_83200210);
PPC_FUNC_IMPL(__imp__sub_83200210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83200218;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x83200188
	ctx.lr = 0x8320023C;
	sub_83200188(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x83200290
	if (!ctx.cr6.eq) goto loc_83200290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6e6f0
	ctx.lr = 0x8320024C;
	sub_82E6E6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83200290
	if (ctx.cr0.eq) goto loc_83200290;
loc_83200254:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6e750
	ctx.lr = 0x83200264;
	sub_82E6E750(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83200284
	if (ctx.cr6.eq) goto loc_83200284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83200284
	if (ctx.cr0.eq) goto loc_83200284;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83200284:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83200254
	if (ctx.cr6.lt) goto loc_83200254;
loc_83200290:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73600
	ctx.lr = 0x83200298;
	sub_82E73600(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73608
	ctx.lr = 0x832002AC;
	sub_82E73608(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832002B4"))) PPC_WEAK_FUNC(sub_832002B4);
PPC_FUNC_IMPL(__imp__sub_832002B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832002B8"))) PPC_WEAK_FUNC(sub_832002B8);
PPC_FUNC_IMPL(__imp__sub_832002B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x832002C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r11,24312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24312);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8320030c
	if (ctx.cr6.eq) goto loc_8320030C;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bne 0x83200310
	if (!ctx.cr0.eq) goto loc_83200310;
loc_8320030C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_83200310:
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82cb16f0
	ctx.lr = 0x83200320;
	sub_82CB16F0(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x831fc7f0
	ctx.lr = 0x83200338;
	sub_831FC7F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x83200604
	if (ctx.cr0.lt) goto loc_83200604;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8320c9e0
	ctx.lr = 0x83200370;
	sub_8320C9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x831fde38
	ctx.lr = 0x8320037C;
	sub_831FDE38(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83200390
	if (ctx.cr6.eq) goto loc_83200390;
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// b 0x832005fc
	goto loc_832005FC;
loc_83200390:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832003A0:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x832003a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832003A0;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-14624
	ctx.r10.s64 = ctx.r10.s64 + -14624;
	// lis r7,-31968
	ctx.r7.s64 = -2095054848;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,-14528
	ctx.r10.s64 = ctx.r7.s64 + -14528;
	// addi r9,r9,-14432
	ctx.r9.s64 = ctx.r9.s64 + -14432;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// lis r6,-31968
	ctx.r6.s64 = -2095054848;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lis r4,-31968
	ctx.r4.s64 = -2095054848;
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// lis r8,-31968
	ctx.r8.s64 = -2095054848;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,-14536
	ctx.r10.s64 = ctx.r4.s64 + -14536;
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// addi r8,r8,-14616
	ctx.r8.s64 = ctx.r8.s64 + -14616;
	// addi r9,r6,-14440
	ctx.r9.s64 = ctx.r6.s64 + -14440;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-31968
	ctx.r5.s64 = -2095054848;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-31968
	ctx.r3.s64 = -2095054848;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r9,r3,-14424
	ctx.r9.s64 = ctx.r3.s64 + -14424;
	// addi r8,r5,-14576
	ctx.r8.s64 = ctx.r5.s64 + -14576;
	// addi r11,r11,-14400
	ctx.r11.s64 = ctx.r11.s64 + -14400;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r30,-31968
	ctx.r30.s64 = -2095054848;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r29,-31968
	ctx.r29.s64 = -2095054848;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r28,-31968
	ctx.r28.s64 = -2095054848;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r30,-14376
	ctx.r9.s64 = ctx.r30.s64 + -14376;
	// addi r10,r29,-14368
	ctx.r10.s64 = ctx.r29.s64 + -14368;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r28,-14360
	ctx.r11.s64 = ctx.r28.s64 + -14360;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r27,50
	ctx.r27.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83216dc0
	ctx.lr = 0x83200478;
	sub_83216DC0(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83210620
	ctx.lr = 0x83200494;
	sub_83210620(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x832005d4
	if (ctx.cr0.eq) goto loc_832005D4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83217590
	ctx.lr = 0x832004A8;
	sub_83217590(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83210ab0
	ctx.lr = 0x832004B4;
	sub_83210AB0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83200508
	if (ctx.cr6.eq) goto loc_83200508;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83216a90
	ctx.lr = 0x832004D0;
	sub_83216A90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83216a78
	ctx.lr = 0x832004DC;
	sub_83216A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83217eb8
	ctx.lr = 0x832004E4;
	sub_83217EB8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832188f8
	ctx.lr = 0x83200500;
	sub_832188F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8320053c
	goto loc_8320053C;
loc_83200508:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fd748
	ctx.lr = 0x83200514;
	sub_831FD748(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83200544
	if (!ctx.cr0.eq) goto loc_83200544;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83217580
	ctx.lr = 0x83200524;
	sub_83217580(ctx, base);
	// bl 0x83216a78
	ctx.lr = 0x83200528;
	sub_83216A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83218098
	ctx.lr = 0x83200530;
	sub_83218098(ctx, base);
	// bl 0x832139f8
	ctx.lr = 0x83200534;
	sub_832139F8(ctx, base);
	// bl 0x83214130
	ctx.lr = 0x83200538;
	sub_83214130(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8320053C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83200550
	if (ctx.cr6.eq) goto loc_83200550;
loc_83200544:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x832005c0
	goto loc_832005C0;
loc_83200550:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,924(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,916(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ff020
	ctx.lr = 0x83200578;
	sub_831FF020(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x832005b0
	if (ctx.cr0.lt) goto loc_832005B0;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83200188
	ctx.lr = 0x83200590;
	sub_83200188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73600
	ctx.lr = 0x83200598;
	sub_82E73600(ctx, base);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73608
	ctx.lr = 0x832005AC;
	sub_82E73608(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832005B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832005c0
	if (ctx.cr6.eq) goto loc_832005C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73580
	ctx.lr = 0x832005C0;
	sub_82E73580(ctx, base);
loc_832005C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83210b48
	ctx.lr = 0x832005C8;
	sub_83210B48(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83217980
	ctx.lr = 0x832005D0;
	sub_83217980(ctx, base);
	// b 0x832005e0
	goto loc_832005E0;
loc_832005D4:
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// bl 0x82bea298
	ctx.lr = 0x832005E0;
	sub_82BEA298(ctx, base);
loc_832005E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832005f4
	if (ctx.cr6.eq) goto loc_832005F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832107c8
	ctx.lr = 0x832005F4;
	sub_832107C8(ctx, base);
loc_832005F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832173a0
	ctx.lr = 0x832005FC;
	sub_832173A0(ctx, base);
loc_832005FC:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831fe048
	ctx.lr = 0x83200604;
	sub_831FE048(ctx, base);
loc_83200604:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200610"))) PPC_WEAK_FUNC(sub_83200610);
PPC_FUNC_IMPL(__imp__sub_83200610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83200618;
	__savegprlr_16(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lwz r11,24312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24312);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8320065c
	if (ctx.cr6.eq) goto loc_8320065C;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bne 0x83200660
	if (!ctx.cr0.eq) goto loc_83200660;
loc_8320065C:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_83200660:
	// li r5,1860
	ctx.r5.s64 = 1860;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82cb16f0
	ctx.lr = 0x83200670;
	sub_82CB16F0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,33024
	ctx.r3.u64 = ctx.r3.u64 | 33024;
	// bl 0x82299698
	ctx.lr = 0x83200680;
	sub_82299698(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r16,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r16.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83200698:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83200698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83200698;
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82cb16f0
	ctx.lr = 0x832006B8;
	sub_82CB16F0(ctx, base);
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// addi r10,r1,2176
	ctx.r10.s64 = ctx.r1.s64 + 2176;
	// lis r9,16392
	ctx.r9.s64 = 1074266112;
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x832006dc
	if (ctx.cr6.lt) goto loc_832006DC;
	// bl 0x82bea298
	ctx.lr = 0x832006DC;
	sub_82BEA298(ctx, base);
loc_832006DC:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// b 0x832007b8
	goto loc_832007B8;
loc_832006F0:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 31, ctx.xer);
	// beq cr6,0x83200734
	if (ctx.cr6.eq) goto loc_83200734;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// beq cr6,0x832007b0
	if (ctx.cr6.eq) goto loc_832007B0;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// beq cr6,0x8320072c
	if (ctx.cr6.eq) goto loc_8320072C;
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// beq cr6,0x8320072c
	if (ctx.cr6.eq) goto loc_8320072C;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x832007c0
	if (!ctx.cr6.eq) goto loc_832007C0;
	// rlwinm r11,r10,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x832007b4
	goto loc_832007B4;
loc_8320072C:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// b 0x832007b4
	goto loc_832007B4;
loc_83200734:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x832007b0
	if (!ctx.cr6.eq) goto loc_832007B0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
	// blt cr6,0x83200760
	if (ctx.cr6.lt) goto loc_83200760;
	// bl 0x82bea298
	ctx.lr = 0x83200760;
	sub_82BEA298(ctx, base);
loc_83200760:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,20,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
loc_832007B0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_832007B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832007B8:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x832006f0
	if (!ctx.cr6.eq) goto loc_832006F0;
loc_832007C0:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x832193c0
	ctx.lr = 0x832007CC;
	sub_832193C0(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8321ab00
	ctx.lr = 0x832007F4;
	sub_8321AB00(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x83200c20
	if (ctx.cr0.lt) goto loc_83200C20;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x8320080c
	if (!ctx.cr6.gt) goto loc_8320080C;
	// bl 0x82bea298
	ctx.lr = 0x8320080C;
	sub_82BEA298(ctx, base);
loc_8320080C:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8320081C:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8320081c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8320081C;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-14624
	ctx.r10.s64 = ctx.r10.s64 + -14624;
	// lis r7,-31968
	ctx.r7.s64 = -2095054848;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,-14528
	ctx.r10.s64 = ctx.r7.s64 + -14528;
	// addi r9,r9,-14432
	ctx.r9.s64 = ctx.r9.s64 + -14432;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// lis r6,-31968
	ctx.r6.s64 = -2095054848;
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// lis r4,-31968
	ctx.r4.s64 = -2095054848;
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// lis r8,-31968
	ctx.r8.s64 = -2095054848;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,-14536
	ctx.r10.s64 = ctx.r4.s64 + -14536;
	// std r22,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r22.u64);
	// addi r8,r8,-14616
	ctx.r8.s64 = ctx.r8.s64 + -14616;
	// addi r9,r6,-14440
	ctx.r9.s64 = ctx.r6.s64 + -14440;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-31968
	ctx.r5.s64 = -2095054848;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-31968
	ctx.r3.s64 = -2095054848;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r9,r3,-14424
	ctx.r9.s64 = ctx.r3.s64 + -14424;
	// addi r8,r5,-14576
	ctx.r8.s64 = ctx.r5.s64 + -14576;
	// addi r11,r11,-14400
	ctx.r11.s64 = ctx.r11.s64 + -14400;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r31,-31968
	ctx.r31.s64 = -2095054848;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r30,-31968
	ctx.r30.s64 = -2095054848;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r29,-31968
	ctx.r29.s64 = -2095054848;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,-14376
	ctx.r9.s64 = ctx.r31.s64 + -14376;
	// addi r10,r30,-14368
	ctx.r10.s64 = ctx.r30.s64 + -14368;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r29,-14360
	ctx.r11.s64 = ctx.r29.s64 + -14360;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r28,50
	ctx.r28.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83216dc0
	ctx.lr = 0x832008F4;
	sub_83216DC0(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83210620
	ctx.lr = 0x83200910;
	sub_83210620(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x83200bec
	if (ctx.cr0.eq) goto loc_83200BEC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83217590
	ctx.lr = 0x83200924;
	sub_83217590(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83210ab0
	ctx.lr = 0x83200930;
	sub_83210AB0(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83200968
	if (ctx.cr6.eq) goto loc_83200968;
loc_83200944:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831fdf88
	ctx.lr = 0x83200958;
	sub_831FDF88(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83200944
	if (ctx.cr6.lt) goto loc_83200944;
loc_83200968:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832009b8
	if (ctx.cr6.eq) goto loc_832009B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83216a90
	ctx.lr = 0x83200980;
	sub_83216A90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83216a78
	ctx.lr = 0x8320098C;
	sub_83216A78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83217eb8
	ctx.lr = 0x83200994;
	sub_83217EB8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832188f8
	ctx.lr = 0x832009B0;
	sub_832188F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832009ec
	goto loc_832009EC;
loc_832009B8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831fd748
	ctx.lr = 0x832009C4;
	sub_831FD748(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832009f4
	if (!ctx.cr0.eq) goto loc_832009F4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83217580
	ctx.lr = 0x832009D4;
	sub_83217580(ctx, base);
	// bl 0x83216a78
	ctx.lr = 0x832009D8;
	sub_83216A78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83218098
	ctx.lr = 0x832009E0;
	sub_83218098(ctx, base);
	// bl 0x832139f8
	ctx.lr = 0x832009E4;
	sub_832139F8(ctx, base);
	// bl 0x83214130
	ctx.lr = 0x832009E8;
	sub_83214130(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832009EC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x832009fc
	if (ctx.cr6.eq) goto loc_832009FC;
loc_832009F4:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_832009FC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x83200bd8
	if (ctx.cr6.lt) goto loc_83200BD8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83200a54
	if (!ctx.cr6.eq) goto loc_83200A54;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83215328
	ctx.lr = 0x83200A1C;
	sub_83215328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832139f8
	ctx.lr = 0x83200A24;
	sub_832139F8(ctx, base);
	// b 0x83200a4c
	goto loc_83200A4C;
loc_83200A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x83200A30;
	sub_83214130(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83200a40
	if (!ctx.cr6.eq) goto loc_83200A40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83200A40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214088
	ctx.lr = 0x83200A4C;
	sub_83214088(ctx, base);
loc_83200A4C:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83200a28
	if (!ctx.cr0.eq) goto loc_83200A28;
loc_83200A54:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x83200A64;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83200a74
	if (!ctx.cr0.eq) goto loc_83200A74;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_83200A74:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x83200afc
	if (ctx.cr6.lt) goto loc_83200AFC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83200af8
	if (!ctx.cr6.eq) goto loc_83200AF8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83215328
	ctx.lr = 0x83200A94;
	sub_83215328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x832139f8
	ctx.lr = 0x83200A9C;
	sub_832139F8(ctx, base);
	// b 0x83200af0
	goto loc_83200AF0;
loc_83200AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x83200AA8;
	sub_83214130(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83200ae4
	if (!ctx.cr6.eq) goto loc_83200AE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,20,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r9,r11,0,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_83200AE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214088
	ctx.lr = 0x83200AF0;
	sub_83214088(ctx, base);
loc_83200AF0:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83200aa0
	if (!ctx.cr0.eq) goto loc_83200AA0;
loc_83200AF8:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_83200AFC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// blt cr6,0x83200bc4
	if (ctx.cr6.lt) goto loc_83200BC4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,2668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2668);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,2660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2660);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831ff020
	ctx.lr = 0x83200B2C;
	sub_831FF020(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x83200bb4
	if (ctx.cr0.lt) goto loc_83200BB4;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83200188
	ctx.lr = 0x83200B44;
	sub_83200188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6e6f0
	ctx.lr = 0x83200B4C;
	sub_82E6E6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// beq 0x83200b94
	if (ctx.cr0.eq) goto loc_83200B94;
loc_83200B58:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6e750
	ctx.lr = 0x83200B68;
	sub_82E6E750(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83200b88
	if (ctx.cr6.eq) goto loc_83200B88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83200b88
	if (ctx.cr0.eq) goto loc_83200B88;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83200B88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83200b58
	if (ctx.cr6.lt) goto loc_83200B58;
loc_83200B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73600
	ctx.lr = 0x83200B9C;
	sub_82E73600(ctx, base);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73608
	ctx.lr = 0x83200BB0;
	sub_82E73608(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83200BB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83200bc4
	if (ctx.cr6.eq) goto loc_83200BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73580
	ctx.lr = 0x83200BC4;
	sub_82E73580(ctx, base);
loc_83200BC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83200bd8
	if (ctx.cr6.eq) goto loc_83200BD8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x83200BD8;
	sub_822996C0(ctx, base);
loc_83200BD8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83210b48
	ctx.lr = 0x83200BE0;
	sub_83210B48(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83217980
	ctx.lr = 0x83200BE8;
	sub_83217980(ctx, base);
	// b 0x83200bf8
	goto loc_83200BF8;
loc_83200BEC:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r22,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r22.u32);
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_83200BF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83200c0c
	if (ctx.cr6.eq) goto loc_83200C0C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832107c8
	ctx.lr = 0x83200C0C;
	sub_832107C8(ctx, base);
loc_83200C0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832173a0
	ctx.lr = 0x83200C14;
	sub_832173A0(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822996c0
	ctx.lr = 0x83200C20;
	sub_822996C0(ctx, base);
loc_83200C20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200C2C"))) PPC_WEAK_FUNC(sub_83200C2C);
PPC_FUNC_IMPL(__imp__sub_83200C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200C30"))) PPC_WEAK_FUNC(sub_83200C30);
PPC_FUNC_IMPL(__imp__sub_83200C30) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83200cb0
	if (ctx.cr6.eq) goto loc_83200CB0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x83200cb0
	if (ctx.cr6.lt) goto loc_83200CB0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83200cb0
	if (ctx.cr6.eq) goto loc_83200CB0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83200cb0
	if (ctx.cr6.eq) goto loc_83200CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-2
	ctx.r31.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83200c8c
	if (!ctx.cr6.eq) goto loc_83200C8C;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x83200610
	ctx.lr = 0x83200C88;
	sub_83200610(ctx, base);
	// b 0x83200cb8
	goto loc_83200CB8;
loc_83200C8C:
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83200cb0
	if (!ctx.cr6.eq) goto loc_83200CB0;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x832002b8
	ctx.lr = 0x83200CAC;
	sub_832002B8(ctx, base);
	// b 0x83200cb8
	goto loc_83200CB8;
loc_83200CB0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_83200CB8:
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

