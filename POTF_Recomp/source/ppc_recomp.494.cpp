#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FC6DEC"))) PPC_WEAK_FUNC(sub_82FC6DEC);
PPC_FUNC_IMPL(__imp__sub_82FC6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DF0"))) PPC_WEAK_FUNC(sub_82FC6DF0);
PPC_FUNC_IMPL(__imp__sub_82FC6DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DF4"))) PPC_WEAK_FUNC(sub_82FC6DF4);
PPC_FUNC_IMPL(__imp__sub_82FC6DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6DF8"))) PPC_WEAK_FUNC(sub_82FC6DF8);
PPC_FUNC_IMPL(__imp__sub_82FC6DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6DFC"))) PPC_WEAK_FUNC(sub_82FC6DFC);
PPC_FUNC_IMPL(__imp__sub_82FC6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E00"))) PPC_WEAK_FUNC(sub_82FC6E00);
PPC_FUNC_IMPL(__imp__sub_82FC6E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E04"))) PPC_WEAK_FUNC(sub_82FC6E04);
PPC_FUNC_IMPL(__imp__sub_82FC6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E08"))) PPC_WEAK_FUNC(sub_82FC6E08);
PPC_FUNC_IMPL(__imp__sub_82FC6E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E0C"))) PPC_WEAK_FUNC(sub_82FC6E0C);
PPC_FUNC_IMPL(__imp__sub_82FC6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E10"))) PPC_WEAK_FUNC(sub_82FC6E10);
PPC_FUNC_IMPL(__imp__sub_82FC6E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E14"))) PPC_WEAK_FUNC(sub_82FC6E14);
PPC_FUNC_IMPL(__imp__sub_82FC6E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E18"))) PPC_WEAK_FUNC(sub_82FC6E18);
PPC_FUNC_IMPL(__imp__sub_82FC6E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E1C"))) PPC_WEAK_FUNC(sub_82FC6E1C);
PPC_FUNC_IMPL(__imp__sub_82FC6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E20"))) PPC_WEAK_FUNC(sub_82FC6E20);
PPC_FUNC_IMPL(__imp__sub_82FC6E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E24"))) PPC_WEAK_FUNC(sub_82FC6E24);
PPC_FUNC_IMPL(__imp__sub_82FC6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E28"))) PPC_WEAK_FUNC(sub_82FC6E28);
PPC_FUNC_IMPL(__imp__sub_82FC6E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E2C"))) PPC_WEAK_FUNC(sub_82FC6E2C);
PPC_FUNC_IMPL(__imp__sub_82FC6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E30"))) PPC_WEAK_FUNC(sub_82FC6E30);
PPC_FUNC_IMPL(__imp__sub_82FC6E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E34"))) PPC_WEAK_FUNC(sub_82FC6E34);
PPC_FUNC_IMPL(__imp__sub_82FC6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC6E38"))) PPC_WEAK_FUNC(sub_82FC6E38);
PPC_FUNC_IMPL(__imp__sub_82FC6E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -192);
	// addi r11,r3,-140
	ctx.r11.s64 = ctx.r3.s64 + -140;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,16208
	ctx.r8.s64 = ctx.r9.s64 + 16208;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,-52(r7)
	PPC_STORE_U32(ctx.r7.u32 + -52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC6E58"))) PPC_WEAK_FUNC(sub_82FC6E58);
PPC_FUNC_IMPL(__imp__sub_82FC6E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC6E60;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fc6f94
	if (ctx.cr6.eq) goto loc_82FC6F94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fc6e9c
	if (ctx.cr6.eq) goto loc_82FC6E9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC6E9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e649f8
	ctx.lr = 0x82FC6EA4;
	sub_82E649F8(ctx, base);
	// bl 0x833b8a44
	ctx.lr = 0x82FC6EA8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6ed0
	if (ctx.cr6.eq) goto loc_82FC6ED0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6ee4
	if (ctx.cr6.eq) goto loc_82FC6EE4;
loc_82FC6ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6ED8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC6EE4:
	// addis r8,r28,5
	ctx.r8.s64 = ctx.r28.s64 + 327680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r8,-17760
	ctx.r8.s64 = ctx.r8.s64 + -17760;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addis r9,r28,5
	ctx.r9.s64 = ctx.r28.s64 + 327680;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r9,r9,-17752
	ctx.r9.s64 = ctx.r9.s64 + -17752;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lfd f11,0(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f0,16216(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16216);
	// lfd f12,0(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f7,f9,f0
	ctx.f7.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fdiv f8,f10,f13
	ctx.f8.f64 = ctx.f10.f64 / ctx.f13.f64;
	// fdiv f6,f8,f7
	ctx.f6.f64 = ctx.f8.f64 / ctx.f7.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r26.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7058
	if (ctx.cr6.eq) goto loc_82FC7058;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc7058
	if (!ctx.cr6.eq) goto loc_82FC7058;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc7058
	if (!ctx.cr0.eq) goto loc_82FC7058;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC6F7C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC6F84;
	__imp__KfLowerIrql(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC6F94:
	// bl 0x833b8a44
	ctx.lr = 0x82FC6F98;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc6fc0
	if (ctx.cr6.eq) goto loc_82FC6FC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc6fe0
	if (ctx.cr6.eq) goto loc_82FC6FE0;
loc_82FC6FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC6FC8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r7,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r7.u8);
	// b 0x82fc6fe4
	goto loc_82FC6FE4;
loc_82FC6FE0:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FC6FE4:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lfs f0,6148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f13,108(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82fc7048
	if (ctx.cr0.eq) goto loc_82FC7048;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc7048
	if (!ctx.cr6.eq) goto loc_82FC7048;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc7048
	if (!ctx.cr0.eq) goto loc_82FC7048;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x833b8384
	ctx.lr = 0x82FC7040;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC7048;
	__imp__KfLowerIrql(ctx, base);
loc_82FC7048:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82FC7058:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7068"))) PPC_WEAK_FUNC(sub_82FC7068);
PPC_FUNC_IMPL(__imp__sub_82FC7068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC7070;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fc7204
	if (ctx.cr6.lt) goto loc_82FC7204;
	// beq cr6,0x82fc7158
	if (ctx.cr6.eq) goto loc_82FC7158;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82fc70b0
	if (ctx.cr6.lt) goto loc_82FC70B0;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC70B0:
	// lfs f31,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC70B8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc70e0
	if (ctx.cr6.eq) goto loc_82FC70E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc70f4
	if (ctx.cr6.eq) goto loc_82FC70F4;
loc_82FC70E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC70E8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC70F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7100;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7120
	if (ctx.cr6.eq) goto loc_82FC7120;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7134
	if (ctx.cr6.eq) goto loc_82FC7134;
loc_82FC7120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7128;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC7134:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r8,204(r28)
	PPC_STORE_U8(ctx.r28.u32 + 204, ctx.r8.u8);
	// lfs f0,6148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,200(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 200, temp.u32);
	// b 0x82fc7374
	goto loc_82FC7374;
loc_82FC7158:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7160;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7188
	if (ctx.cr6.eq) goto loc_82FC7188;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc719c
	if (ctx.cr6.eq) goto loc_82FC719C;
loc_82FC7188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7190;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC719C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC71AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc71cc
	if (ctx.cr6.eq) goto loc_82FC71CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc71e0
	if (ctx.cr6.eq) goto loc_82FC71E0;
loc_82FC71CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC71D4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC71E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC71F8;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,190(r30)
	PPC_STORE_U8(ctx.r30.u32 + 190, ctx.r11.u8);
	// b 0x82fc7374
	goto loc_82FC7374;
loc_82FC7204:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82fe59e8
	ctx.lr = 0x82FC7210;
	sub_82FE59E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lfs f0,6148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,16224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16224);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lbz r6,7(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lbz r9,13(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lbz r7,15(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC72D4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc72fc
	if (ctx.cr6.eq) goto loc_82FC72FC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7310
	if (ctx.cr6.eq) goto loc_82FC7310;
loc_82FC72FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7304;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC7310:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC7320;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc7340
	if (ctx.cr6.eq) goto loc_82FC7340;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc7354
	if (ctx.cr6.eq) goto loc_82FC7354;
loc_82FC7340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC7348;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC7354:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82cb1160
	ctx.lr = 0x82FC736C;
	sub_82CB1160(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,189(r29)
	PPC_STORE_U8(ctx.r29.u32 + 189, ctx.r11.u8);
loc_82FC7374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc73c4
	if (ctx.cr6.eq) goto loc_82FC73C4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc73c4
	if (!ctx.cr6.eq) goto loc_82FC73C4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc73c4
	if (!ctx.cr0.eq) goto loc_82FC73C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC73B8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC73C0;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC73C4:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc740c
	if (ctx.cr6.eq) goto loc_82FC740C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc740c
	if (!ctx.cr6.eq) goto loc_82FC740C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc740c
	if (!ctx.cr0.eq) goto loc_82FC740C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC7404;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC740C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC740C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC741C"))) PPC_WEAK_FUNC(sub_82FC741C);
PPC_FUNC_IMPL(__imp__sub_82FC741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC7420"))) PPC_WEAK_FUNC(sub_82FC7420);
PPC_FUNC_IMPL(__imp__sub_82FC7420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82FC7428;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r21,r3,20
	ctx.r21.s64 = ctx.r3.s64 + 20;
	// subf r25,r8,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x82fc7460
	if (ctx.cr6.gt) goto loc_82FC7460;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82fc7464
	if (!ctx.cr6.gt) goto loc_82FC7464;
loc_82FC7460:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82FC7464:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// addi r22,r3,24
	ctx.r22.s64 = ctx.r3.s64 + 24;
	// lfs f0,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f13.u64);
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82fc787c
	if (!ctx.cr6.lt) goto loc_82FC787C;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x82fc75dc
	if (ctx.cr6.lt) goto loc_82FC75DC;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r27,r7,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82FC74F4:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r24,r29,r25
	ctx.r24.u64 = ctx.r29.u64 + ctx.r25.u64;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// rlwinm r18,r29,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFC;
	// lfs f8,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lfsx f5,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r17,r6,1
	ctx.r17.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r18,r11
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r19,r19,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFC;
	// lfsx f3,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r16,r6,2,16,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// rlwinm r18,r31,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// fsubs f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfsx f8,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r24,r17,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 1;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f13,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,-4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f7,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfsx f30,r18,r11
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfsx f7,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// rlwinm r24,r20,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// fmadds f2,f30,f1,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f3,f13,f9,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,-8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f3,-4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc74f4
	if (!ctx.cr0.eq) goto loc_82FC74F4;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC75DC:
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82fc7668
	if (ctx.cr6.gt) goto loc_82FC7668;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r27.s64;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r8,r28,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC761C:
	// rlwinm r28,r8,2,16,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r27,r29,r8
	ctx.r27.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r27,2,16,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82fc761c
	if (!ctx.cr0.eq) goto loc_82FC761C;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7668:
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc7680
	if (ctx.cr6.eq) goto loc_82FC7680;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82fc7688
	goto loc_82FC7688;
loc_82FC7680:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
loc_82FC7688:
	// subfic r8,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82fc77e8
	if (ctx.cr6.lt) goto loc_82FC77E8;
	// subfic r9,r7,252
	ctx.xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r20,12(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r20,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r20.s64;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r26,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r26,r20,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r20.s64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
loc_82FC7700:
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f10,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,-1
	ctx.r24.s64 = ctx.r31.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// rlwinm r19,r28,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFC;
	// lfsx f7,r9,r25
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// addi r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 1;
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r6,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfsx f5,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r19,r31,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfsx f2,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r20,r18,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f31,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfsx f5,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfsx f11,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmadds f3,f2,f8,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f4,f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f2,f31,f10,f7
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f1,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc7700
	if (!ctx.cr0.eq) goto loc_82FC7700;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC77E8:
	// cmplwi cr6,r27,256
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 256, ctx.xer);
	// bge cr6,0x82fc7870
	if (!ctx.cr6.lt) goto loc_82FC7870;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r27.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC7824:
	// rlwinm r31,r8,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r30,r3,r8
	ctx.r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r30,r30,2,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f10,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f8,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82fc7824
	if (!ctx.cr0.eq) goto loc_82FC7824;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7870:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x82fc7a50
	goto loc_82FC7A50;
loc_82FC787C:
	// addi r31,r10,256
	ctx.r31.s64 = ctx.r10.s64 + 256;
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r11,r7,256
	ctx.r11.s64 = ctx.r7.s64 + 256;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// bge cr6,0x82fc79d0
	if (!ctx.cr6.lt) goto loc_82FC79D0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82fc79d0
	if (ctx.cr6.lt) goto loc_82FC79D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82fc79d0
	if (ctx.cr6.lt) goto loc_82FC79D0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x82fc7948
	if (!ctx.cr6.eq) goto loc_82FC7948;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r7,65
	ctx.r7.s64 = 65;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82FC78E0:
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvrx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v62
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvrx128 v59,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v58,v61,v59
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// stvlx128 v60,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v58,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc78e0
	if (!ctx.cr0.eq) goto loc_82FC78E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82FC7948:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r3,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r3.s64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// li r9,256
	ctx.r9.s64 = 256;
	// lfs f12,16232(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
loc_82FC7978:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f9,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f7,f9,f0,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82fc7978
	if (!ctx.cr0.eq) goto loc_82FC7978;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
loc_82FC79D0:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lfs f13,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// lfs f12,16232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_82FC7A04:
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r31,r31,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f10,r3,r6
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f8,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82fc7a04
	if (!ctx.cr0.eq) goto loc_82FC7A04;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_82FC7A50:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7A6C"))) PPC_WEAK_FUNC(sub_82FC7A6C);
PPC_FUNC_IMPL(__imp__sub_82FC7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC7A70"))) PPC_WEAK_FUNC(sub_82FC7A70);
PPC_FUNC_IMPL(__imp__sub_82FC7A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lfs f8,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f8.f64 = double(temp.f32);
	// blt cr6,0x82fc7b2c
	if (ctx.cr6.lt) goto loc_82FC7B2C;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r6,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_82FC7AB0:
	// lfs f7,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f7,f1,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// fmadds f5,f13,f12,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f0,f12,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f9,f13,f12,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f12,f4,f11,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f4,f13,f12,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f12,f2,f11,f5
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f9,f13,f12,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f12,f7,f11,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f2.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82fc7ab0
	if (!ctx.cr0.eq) goto loc_82FC7AB0;
loc_82FC7B2C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82fc7b74
	if (ctx.cr6.gt) goto loc_82FC7B74;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82FC7B4C:
	// fmuls f11,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f9,f13,f12,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f13,f8,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fc7b4c
	if (!ctx.cr0.eq) goto loc_82FC7B4C;
loc_82FC7B74:
	// stfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC7B80"))) PPC_WEAK_FUNC(sub_82FC7B80);
PPC_FUNC_IMPL(__imp__sub_82FC7B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC7B88;
	__savegprlr_27(ctx, base);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7BD4:
	// rlwinm r29,r11,2,21,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r28,2,21,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7FC;
	// rlwinm r27,r27,2,21,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x7FC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f8,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f7,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne 0x82fc7bd4
	if (!ctx.cr0.eq) goto loc_82FC7BD4;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7C48"))) PPC_WEAK_FUNC(sub_82FC7C48);
PPC_FUNC_IMPL(__imp__sub_82FC7C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82FC7C50;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC7C58;
	__savefpr_27(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82FC7C88:
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,23,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r30,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfsx f2,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f11,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r31,r29,2,23,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x1FC;
	// fmadds f10,f0,f11,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfsx f9,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// fmadds f8,f0,f9,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f8.f64));
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f31,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// fmadds f7,f0,f31,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f7,8(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfsx f30,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r5,r30,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1FC;
	// fmadds f6,f0,f30,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f6.f64));
	// stfs f6,12(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfsx f29,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f5,f0,f29,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f5.f64));
	// lfs f28,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// addi r7,r4,28
	ctx.r7.s64 = ctx.r4.s64 + 28;
	// stfs f5,16(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// lfsx f27,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f28,f0,f27,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f28.f64));
	// fmadds f3,f13,f1,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f2,f13,f10,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f28,20(r9)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// fmadds f1,f13,f8,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f13,f7,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f31.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f10,f13,f6,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f30.f64));
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f1,16(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f9,f13,f5,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f29.f64));
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f10,24(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fmadds f12,f13,f28,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x82fc7c88
	if (!ctx.cr0.eq) goto loc_82FC7C88;
	// neg r7,r6
	ctx.r7.s64 = -ctx.r6.s64;
	// subfic r9,r6,2
	ctx.xer.ca = ctx.r6.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r6.s64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82FC7DAC:
	// rlwinm r6,r7,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// rlwinm r27,r9,2,23,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FC;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r26,r5,2,23,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f6,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// fmadds f5,f0,f6,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,-8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// rlwinm r25,r5,2,23,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r24,r6,2,23,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r22,r6,2,23,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// rlwinm r23,r5,2,23,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// addi r5,r9,5
	ctx.r5.s64 = ctx.r9.s64 + 5;
	// addi r28,r4,28
	ctx.r28.s64 = ctx.r4.s64 + 28;
	// fmadds f2,f13,f5,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// rlwinm r21,r5,2,23,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r4,20
	ctx.r30.s64 = ctx.r4.s64 + 20;
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f12,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfsx f6,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f13,f5,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f2,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f0,f2,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f8,f13,f12,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfsx f10,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f6,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfsx f4,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f0,f4,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f2,f13,f5,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfsx f12,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f10,f13,f3,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// bne 0x82fc7dac
	if (!ctx.cr0.eq) goto loc_82FC7DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC7EEC;
	__restfpr_27(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7EF0"))) PPC_WEAK_FUNC(sub_82FC7EF0);
PPC_FUNC_IMPL(__imp__sub_82FC7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC7EF8;
	__savegprlr_27(ctx, base);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7F44:
	// rlwinm r29,r11,2,19,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r28,2,19,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x1FFC;
	// rlwinm r27,r27,2,19,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x1FFC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f8,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f7,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne 0x82fc7f44
	if (!ctx.cr0.eq) goto loc_82FC7F44;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC7FB8"))) PPC_WEAK_FUNC(sub_82FC7FB8);
PPC_FUNC_IMPL(__imp__sub_82FC7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC7FC0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC7FC8;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC7FFC:
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r30,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfsx f2,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r29,2,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r5,r5,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f30,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f29,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r5,r30,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// bne 0x82fc7ffc
	if (!ctx.cr0.eq) goto loc_82FC7FFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC8128;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC812C"))) PPC_WEAK_FUNC(sub_82FC812C);
PPC_FUNC_IMPL(__imp__sub_82FC812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8130"))) PPC_WEAK_FUNC(sub_82FC8130);
PPC_FUNC_IMPL(__imp__sub_82FC8130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,23
	ctx.r10.u64 = ctx.r7.u32 & 0x1FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8188"))) PPC_WEAK_FUNC(sub_82FC8188);
PPC_FUNC_IMPL(__imp__sub_82FC8188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC8190;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC8198;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC81CC:
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r5,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r30,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfsx f2,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r29,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r5,r5,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 5;
	// lfsx f30,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f29,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r5,r30,2,21,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// bne 0x82fc81cc
	if (!ctx.cr0.eq) goto loc_82FC81CC;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC82F8;
	__restfpr_27(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC82FC"))) PPC_WEAK_FUNC(sub_82FC82FC);
PPC_FUNC_IMPL(__imp__sub_82FC82FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8300"))) PPC_WEAK_FUNC(sub_82FC8300);
PPC_FUNC_IMPL(__imp__sub_82FC8300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC8308;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae4
	ctx.lr = 0x82FC8310;
	__savefpr_27(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC8344:
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r31,r31,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7FC;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r30,r11,2,21,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7FC;
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r6,r29,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f3,f0,f4,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,-8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfsx f2,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f2,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r28,2,21,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7FC;
	// fmadds f9,f0,f10,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsx f31,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r31,r31,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7FC;
	// fmadds f8,f0,f31,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// lfsx f30,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f29,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r31,r29,2,21,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x7FC;
	// fmadds f6,f0,f29,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f28,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f28,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f5.f64));
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f3,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f2,f13,f1,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// lfsx f3,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f0,f3,f11
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f27,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f1,f13,f9,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,4(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f12,f13,f8,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmadds f10,f13,f7,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f9,f13,f6,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f29.f64));
	// stfs f1,12(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fmadds f8,f13,f5,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f28.f64));
	// stfs f10,20(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f9,24(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stfs f8,28(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f27,20(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x82fc8344
	if (!ctx.cr0.eq) goto loc_82FC8344;
	// clrlwi r11,r7,23
	ctx.r11.u64 = ctx.r7.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x82FC8474;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC8478"))) PPC_WEAK_FUNC(sub_82FC8478);
PPC_FUNC_IMPL(__imp__sub_82FC8478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC8480;
	__savegprlr_29(ctx, base);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_82FC84C0:
	// rlwinm r30,r10,2,20,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFC;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r29,r9,2,20,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfsx f10,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f9,r29,r31
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82fc84c0
	if (!ctx.cr0.eq) goto loc_82FC84C0;
	// clrlwi r11,r7,22
	ctx.r11.u64 = ctx.r7.u32 & 0x3FF;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC851C"))) PPC_WEAK_FUNC(sub_82FC851C);
PPC_FUNC_IMPL(__imp__sub_82FC851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8520"))) PPC_WEAK_FUNC(sub_82FC8520);
PPC_FUNC_IMPL(__imp__sub_82FC8520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8558"))) PPC_WEAK_FUNC(sub_82FC8558);
PPC_FUNC_IMPL(__imp__sub_82FC8558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f1.f64));
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f1,f12,f9,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC859C"))) PPC_WEAK_FUNC(sub_82FC859C);
PPC_FUNC_IMPL(__imp__sub_82FC859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC85A0"))) PPC_WEAK_FUNC(sub_82FC85A0);
PPC_FUNC_IMPL(__imp__sub_82FC85A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC85DC"))) PPC_WEAK_FUNC(sub_82FC85DC);
PPC_FUNC_IMPL(__imp__sub_82FC85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC85E0"))) PPC_WEAK_FUNC(sub_82FC85E0);
PPC_FUNC_IMPL(__imp__sub_82FC85E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r10,r6,20
	ctx.r10.u64 = ctx.r6.u32 & 0xFFF;
	// clrlwi r9,r5,20
	ctx.r9.u64 = ctx.r5.u32 & 0xFFF;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r6,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC865C"))) PPC_WEAK_FUNC(sub_82FC865C);
PPC_FUNC_IMPL(__imp__sub_82FC865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8660"))) PPC_WEAK_FUNC(sub_82FC8660);
PPC_FUNC_IMPL(__imp__sub_82FC8660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8698"))) PPC_WEAK_FUNC(sub_82FC8698);
PPC_FUNC_IMPL(__imp__sub_82FC8698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,21
	ctx.r10.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC86F0"))) PPC_WEAK_FUNC(sub_82FC86F0);
PPC_FUNC_IMPL(__imp__sub_82FC86F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,21
	ctx.r10.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f9,f13,f11,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfsx f9,r5,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,21
	ctx.r8.u64 = ctx.r9.u32 & 0x7FF;
	// fmadds f1,f12,f1,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8750"))) PPC_WEAK_FUNC(sub_82FC8750);
PPC_FUNC_IMPL(__imp__sub_82FC8750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// clrlwi r10,r7,22
	ctx.r10.u64 = ctx.r7.u32 & 0x3FF;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,22
	ctx.r8.u64 = ctx.r9.u32 & 0x3FF;
	// fmadds f1,f13,f11,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC87A8"))) PPC_WEAK_FUNC(sub_82FC87A8);
PPC_FUNC_IMPL(__imp__sub_82FC87A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f12,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC87E8"))) PPC_WEAK_FUNC(sub_82FC87E8);
PPC_FUNC_IMPL(__imp__sub_82FC87E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82FC87F0;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,14068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f11.u64);
	// lwz r9,-140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82fc8c1c
	if (!ctx.cr6.lt) goto loc_82FC8C1C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x82fc897c
	if (ctx.cr6.lt) goto loc_82FC897C;
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r27,r7,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r25,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r25.s64;
	// subf r29,r28,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r28.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r25,r25,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r25.s64;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82FC8894:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r24,r29,r25
	ctx.r24.u64 = ctx.r29.u64 + ctx.r25.u64;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r23,r6,-1
	ctx.r23.s64 = ctx.r6.s64 + -1;
	// rlwinm r21,r29,2,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// lfs f8,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r24,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3FC;
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r22,r31,-1
	ctx.r22.s64 = ctx.r31.s64 + -1;
	// lfsx f5,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r6,1
	ctx.r20.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r22,r22,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3FC;
	// lfsx f3,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r19,r6,2,22,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// rlwinm r21,r31,2,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// fsubs f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfsx f8,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r24,r20,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3FC;
	// fsubs f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 1;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f13,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,-4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f7,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfsx f30,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfsx f7,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// rlwinm r24,r23,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// fmadds f2,f30,f1,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f3,f13,f9,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f4,-8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f3,-4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc8894
	if (!ctx.cr0.eq) goto loc_82FC8894;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC897C:
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82fc8a08
	if (ctx.cr6.gt) goto loc_82FC8A08;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r27.s64;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r8,r28,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC89BC:
	// rlwinm r28,r8,2,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r27,r29,r8
	ctx.r27.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r27,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82fc89bc
	if (!ctx.cr0.eq) goto loc_82FC89BC;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8A08:
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc8a20
	if (ctx.cr6.eq) goto loc_82FC8A20;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82fc8a28
	goto loc_82FC8A28;
loc_82FC8A20:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
loc_82FC8A28:
	// subfic r8,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82fc8b88
	if (ctx.cr6.lt) goto loc_82FC8B88;
	// subfic r9,r7,252
	ctx.xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r23,12(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r23,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r23.s64;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r26,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r26,r23,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r23.s64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
loc_82FC8AA0:
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f10,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,-1
	ctx.r24.s64 = ctx.r31.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r6,-1
	ctx.r23.s64 = ctx.r6.s64 + -1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// rlwinm r22,r28,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC;
	// lfsx f7,r25,r9
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3FC;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r24,r24,2,22,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3FC;
	// addi r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 1;
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r6,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfsx f5,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r22,r31,2,22,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfsx f2,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r23,r21,2,22,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3FC;
	// lfsx f1,r24,r11
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f31,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfsx f5,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfsx f11,r23,r11
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// fmadds f3,f2,f8,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f4,f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f2,f31,f10,f7
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f1,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82fc8aa0
	if (!ctx.cr0.eq) goto loc_82FC8AA0;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8B88:
	// cmplwi cr6,r27,256
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 256, ctx.xer);
	// bge cr6,0x82fc8c10
	if (!ctx.cr6.lt) goto loc_82FC8C10;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r27.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82FC8BC4:
	// rlwinm r30,r8,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r29,r29,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f10,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f8,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82fc8bc4
	if (!ctx.cr0.eq) goto loc_82FC8BC4;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8C10:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82fc8cb4
	goto loc_82FC8CB4;
loc_82FC8C1C:
	// subf r11,r10,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r10.s64;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f12,16232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_82FC8C68:
	// rlwinm r30,r11,2,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r29,r29,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f10,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f8,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82fc8c68
	if (!ctx.cr0.eq) goto loc_82FC8C68;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FC8CB4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC8CD0"))) PPC_WEAK_FUNC(sub_82FC8CD0);
PPC_FUNC_IMPL(__imp__sub_82FC8CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r3,r3,47792
	ctx.r3.u64 = ctx.r3.u64 | 47792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CDC"))) PPC_WEAK_FUNC(sub_82FC8CDC);
PPC_FUNC_IMPL(__imp__sub_82FC8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CE0"))) PPC_WEAK_FUNC(sub_82FC8CE0);
PPC_FUNC_IMPL(__imp__sub_82FC8CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CE4"))) PPC_WEAK_FUNC(sub_82FC8CE4);
PPC_FUNC_IMPL(__imp__sub_82FC8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CE8"))) PPC_WEAK_FUNC(sub_82FC8CE8);
PPC_FUNC_IMPL(__imp__sub_82FC8CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CEC"))) PPC_WEAK_FUNC(sub_82FC8CEC);
PPC_FUNC_IMPL(__imp__sub_82FC8CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CF0"))) PPC_WEAK_FUNC(sub_82FC8CF0);
PPC_FUNC_IMPL(__imp__sub_82FC8CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CF4"))) PPC_WEAK_FUNC(sub_82FC8CF4);
PPC_FUNC_IMPL(__imp__sub_82FC8CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8CF8"))) PPC_WEAK_FUNC(sub_82FC8CF8);
PPC_FUNC_IMPL(__imp__sub_82FC8CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8CFC"))) PPC_WEAK_FUNC(sub_82FC8CFC);
PPC_FUNC_IMPL(__imp__sub_82FC8CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D00"))) PPC_WEAK_FUNC(sub_82FC8D00);
PPC_FUNC_IMPL(__imp__sub_82FC8D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D04"))) PPC_WEAK_FUNC(sub_82FC8D04);
PPC_FUNC_IMPL(__imp__sub_82FC8D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D08"))) PPC_WEAK_FUNC(sub_82FC8D08);
PPC_FUNC_IMPL(__imp__sub_82FC8D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D0C"))) PPC_WEAK_FUNC(sub_82FC8D0C);
PPC_FUNC_IMPL(__imp__sub_82FC8D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D10"))) PPC_WEAK_FUNC(sub_82FC8D10);
PPC_FUNC_IMPL(__imp__sub_82FC8D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D14"))) PPC_WEAK_FUNC(sub_82FC8D14);
PPC_FUNC_IMPL(__imp__sub_82FC8D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D18"))) PPC_WEAK_FUNC(sub_82FC8D18);
PPC_FUNC_IMPL(__imp__sub_82FC8D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D1C"))) PPC_WEAK_FUNC(sub_82FC8D1C);
PPC_FUNC_IMPL(__imp__sub_82FC8D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D20"))) PPC_WEAK_FUNC(sub_82FC8D20);
PPC_FUNC_IMPL(__imp__sub_82FC8D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D24"))) PPC_WEAK_FUNC(sub_82FC8D24);
PPC_FUNC_IMPL(__imp__sub_82FC8D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D28"))) PPC_WEAK_FUNC(sub_82FC8D28);
PPC_FUNC_IMPL(__imp__sub_82FC8D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D2C"))) PPC_WEAK_FUNC(sub_82FC8D2C);
PPC_FUNC_IMPL(__imp__sub_82FC8D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D30"))) PPC_WEAK_FUNC(sub_82FC8D30);
PPC_FUNC_IMPL(__imp__sub_82FC8D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D34"))) PPC_WEAK_FUNC(sub_82FC8D34);
PPC_FUNC_IMPL(__imp__sub_82FC8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D38"))) PPC_WEAK_FUNC(sub_82FC8D38);
PPC_FUNC_IMPL(__imp__sub_82FC8D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D3C"))) PPC_WEAK_FUNC(sub_82FC8D3C);
PPC_FUNC_IMPL(__imp__sub_82FC8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D40"))) PPC_WEAK_FUNC(sub_82FC8D40);
PPC_FUNC_IMPL(__imp__sub_82FC8D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,47792
	ctx.r11.u64 = ctx.r11.u64 | 47792;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC8D54"))) PPC_WEAK_FUNC(sub_82FC8D54);
PPC_FUNC_IMPL(__imp__sub_82FC8D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC8D58"))) PPC_WEAK_FUNC(sub_82FC8D58);
PPC_FUNC_IMPL(__imp__sub_82FC8D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82FC8D60;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ab0
	ctx.lr = 0x82FC8D68;
	__savefpr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17968(r1)
	ea = -17968 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,17988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17988, ctx.r30.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fc8db0
	if (ctx.cr6.eq) goto loc_82FC8DB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fc8da8
	if (ctx.cr6.eq) goto loc_82FC8DA8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// b 0x82fc8dbc
	goto loc_82FC8DBC;
loc_82FC8DA8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82fc8db4
	goto loc_82FC8DB4;
loc_82FC8DB0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82FC8DB4:
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82FC8DBC:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,16(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// dcbt r0,r11
	// dcbt r0,r29
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r11
	// li r5,128
	ctx.r5.s64 = 128;
	// dcbt r5,r29
	// addi r5,r1,7744
	ctx.r5.s64 = ctx.r1.s64 + 7744;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x82fc7420
	ctx.lr = 0x82FC8E08;
	sub_82FC7420(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9920
	ctx.r5.s64 = ctx.r1.s64 + 9920;
	// addi r4,r1,7744
	ctx.r4.s64 = ctx.r1.s64 + 7744;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x82fc7a70
	ctx.lr = 0x82FC8E20;
	sub_82FC7A70(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,6704
	ctx.r6.s64 = ctx.r1.s64 + 6704;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r1,9920
	ctx.r4.s64 = ctx.r1.s64 + 9920;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x82fc7b80
	ctx.lr = 0x82FC8E3C;
	sub_82FC7B80(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r3,2332
	ctx.r3.s64 = ctx.r3.s64 + 2332;
	// bl 0x82fc7c48
	ctx.lr = 0x82FC8E4C;
	sub_82FC7C48(ctx, base);
	// addi r4,r1,16639
	ctx.r4.s64 = ctx.r1.s64 + 16639;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// rlwinm r31,r4,0,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,12096
	ctx.r6.s64 = ctx.r1.s64 + 12096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r3,2868
	ctx.r3.s64 = ctx.r3.s64 + 2868;
	// bl 0x82fc7ef0
	ctx.lr = 0x82FC8E70;
	sub_82FC7EF0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,11104
	ctx.r3.s64 = ctx.r3.s64 + 11104;
	// bl 0x82fc7fb8
	ctx.lr = 0x82FC8E80;
	sub_82FC7FB8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,4640
	ctx.r5.s64 = ctx.r1.s64 + 4640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,12152
	ctx.r3.s64 = ctx.r3.s64 + 12152;
	// bl 0x82fc8300
	ctx.lr = 0x82FC8E94;
	sub_82FC8300(ctx, base);
	// addi r3,r1,14303
	ctx.r3.s64 = ctx.r1.s64 + 14303;
	// addi r10,r1,15471
	ctx.r10.s64 = ctx.r1.s64 + 15471;
	// rlwinm r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r4,r1,4640
	ctx.r4.s64 = ctx.r1.s64 + 4640;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// addi r3,r3,14224
	ctx.r3.s64 = ctx.r3.s64 + 14224;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// bl 0x82fc8478
	ctx.lr = 0x82FC8EC0;
	sub_82FC8478(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r1,7744
	ctx.r5.s64 = ctx.r1.s64 + 7744;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x82fc7420
	ctx.lr = 0x82FC8ED4;
	sub_82FC7420(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9920
	ctx.r5.s64 = ctx.r1.s64 + 9920;
	// addi r4,r1,7744
	ctx.r4.s64 = ctx.r1.s64 + 7744;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x82fc7a70
	ctx.lr = 0x82FC8EEC;
	sub_82FC7A70(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,4640
	ctx.r6.s64 = ctx.r1.s64 + 4640;
	// addi r5,r1,2560
	ctx.r5.s64 = ctx.r1.s64 + 2560;
	// addi r4,r1,9920
	ctx.r4.s64 = ctx.r1.s64 + 9920;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,18360
	ctx.r3.s64 = ctx.r3.s64 + 18360;
	// bl 0x82fc7b80
	ctx.lr = 0x82FC8F08;
	sub_82FC7B80(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,2560
	ctx.r4.s64 = ctx.r1.s64 + 2560;
	// addi r3,r3,20452
	ctx.r3.s64 = ctx.r3.s64 + 20452;
	// bl 0x82fc7c48
	ctx.lr = 0x82FC8F18;
	sub_82FC7C48(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,13136
	ctx.r6.s64 = ctx.r1.s64 + 13136;
	// addi r5,r1,1520
	ctx.r5.s64 = ctx.r1.s64 + 1520;
	// addi r4,r1,2560
	ctx.r4.s64 = ctx.r1.s64 + 2560;
	// addi r3,r3,20988
	ctx.r3.s64 = ctx.r3.s64 + 20988;
	// bl 0x82fc7ef0
	ctx.lr = 0x82FC8F34;
	sub_82FC7EF0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// addi r3,r3,29224
	ctx.r3.s64 = ctx.r3.s64 + 29224;
	// bl 0x82fc7fb8
	ctx.lr = 0x82FC8F44;
	sub_82FC7FB8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,3600
	ctx.r5.s64 = ctx.r1.s64 + 3600;
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// addi r3,r3,30272
	ctx.r3.s64 = ctx.r3.s64 + 30272;
	// bl 0x82fc8300
	ctx.lr = 0x82FC8F58;
	sub_82FC8300(ctx, base);
	// addi r9,r1,7871
	ctx.r9.s64 = ctx.r1.s64 + 7871;
	// addi r8,r1,10047
	ctx.r8.s64 = ctx.r1.s64 + 10047;
	// rlwinm r11,r9,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// rlwinm r5,r8,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r4,r1,3600
	ctx.r4.s64 = ctx.r1.s64 + 3600;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// addi r3,r3,32344
	ctx.r3.s64 = ctx.r3.s64 + 32344;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// stw r5,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// bl 0x82fc8478
	ctx.lr = 0x82FC8F88;
	sub_82FC8478(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r3,r7,18352
	ctx.r3.u64 = ctx.r7.u64 | 18352;
	// ori r11,r6,236
	ctx.r11.u64 = ctx.r6.u64 | 236;
	// ori r10,r5,18356
	ctx.r10.u64 = ctx.r5.u64 | 18356;
	// ori r9,r4,232
	ctx.r9.u64 = ctx.r4.u64 | 232;
	// addi r8,r1,2560
	ctx.r8.s64 = ctx.r1.s64 + 2560;
	// lfsx f13,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,6704
	ctx.r7.s64 = ctx.r1.s64 + 6704;
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,1520
	ctx.r6.s64 = ctx.r1.s64 + 1520;
	// lfsx f11,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,4640
	ctx.r4.s64 = ctx.r1.s64 + 4640;
	// addi r3,r1,2564
	ctx.r3.s64 = ctx.r1.s64 + 2564;
	// addi r11,r1,6708
	ctx.r11.s64 = ctx.r1.s64 + 6708;
	// addi r10,r1,1524
	ctx.r10.s64 = ctx.r1.s64 + 1524;
	// addi r9,r1,484
	ctx.r9.s64 = ctx.r1.s64 + 484;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r30,r1,4644
	ctx.r30.s64 = ctx.r1.s64 + 4644;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r29,r1,2568
	ctx.r29.s64 = ctx.r1.s64 + 2568;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// subf r7,r31,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// addi r6,r1,6712
	ctx.r6.s64 = ctx.r1.s64 + 6712;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r7,r1,6720
	ctx.r7.s64 = ctx.r1.s64 + 6720;
	// addi r9,r1,1532
	ctx.r9.s64 = ctx.r1.s64 + 1532;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r30,r1,1536
	ctx.r30.s64 = ctx.r1.s64 + 1536;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r28,r1,4652
	ctx.r28.s64 = ctx.r1.s64 + 4652;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r30,r1,2576
	ctx.r30.s64 = ctx.r1.s64 + 2576;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r8,r1,492
	ctx.r8.s64 = ctx.r1.s64 + 492;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r31,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r31.s64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r5,r1,1528
	ctx.r5.s64 = ctx.r1.s64 + 1528;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// subf r9,r31,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r31.s64;
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,4648
	ctx.r3.s64 = ctx.r1.s64 + 4648;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r1,2572
	ctx.r11.s64 = ctx.r1.s64 + 2572;
	// addi r10,r1,6716
	ctx.r10.s64 = ctx.r1.s64 + 6716;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r9,r1,3616
	ctx.r9.s64 = ctx.r1.s64 + 3616;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r8,r1,5696
	ctx.r8.s64 = ctx.r1.s64 + 5696;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,4656
	ctx.r6.s64 = ctx.r1.s64 + 4656;
	// addi r5,r1,2580
	ctx.r5.s64 = ctx.r1.s64 + 2580;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r4,r1,6724
	ctx.r4.s64 = ctx.r1.s64 + 6724;
	// addi r3,r1,1540
	ctx.r3.s64 = ctx.r1.s64 + 1540;
	// addi r11,r1,500
	ctx.r11.s64 = ctx.r1.s64 + 500;
	// addi r10,r1,4660
	ctx.r10.s64 = ctx.r1.s64 + 4660;
	// addi r30,r1,5700
	ctx.r30.s64 = ctx.r1.s64 + 5700;
	// subf r9,r31,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r8,r31,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r31.s64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// subf r7,r31,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r6,r31,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r26,r1,2584
	ctx.r26.s64 = ctx.r1.s64 + 2584;
	// addi r25,r1,6728
	ctx.r25.s64 = ctx.r1.s64 + 6728;
	// addi r24,r1,1544
	ctx.r24.s64 = ctx.r1.s64 + 1544;
	// addi r23,r1,504
	ctx.r23.s64 = ctx.r1.s64 + 504;
	// addi r22,r1,4664
	ctx.r22.s64 = ctx.r1.s64 + 4664;
	// addi r21,r1,5680
	ctx.r21.s64 = ctx.r1.s64 + 5680;
	// addi r20,r1,3600
	ctx.r20.s64 = ctx.r1.s64 + 3600;
	// addi r19,r1,5684
	ctx.r19.s64 = ctx.r1.s64 + 5684;
	// addi r18,r1,3604
	ctx.r18.s64 = ctx.r1.s64 + 3604;
	// addi r17,r1,5688
	ctx.r17.s64 = ctx.r1.s64 + 5688;
	// addi r16,r1,3608
	ctx.r16.s64 = ctx.r1.s64 + 3608;
	// addi r15,r1,5692
	ctx.r15.s64 = ctx.r1.s64 + 5692;
	// addi r14,r1,3612
	ctx.r14.s64 = ctx.r1.s64 + 3612;
	// addi r29,r1,3620
	ctx.r29.s64 = ctx.r1.s64 + 3620;
	// addi r28,r1,5704
	ctx.r28.s64 = ctx.r1.s64 + 5704;
	// addi r27,r1,3624
	ctx.r27.s64 = ctx.r1.s64 + 3624;
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r3,r31,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r30,r31,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r26,r31,r22
	ctx.r26.s64 = ctx.r22.s64 - ctx.r31.s64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r22,r31,r18
	ctx.r22.s64 = ctx.r18.s64 - ctx.r31.s64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r29,r31,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r31.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r25,r31,r21
	ctx.r25.s64 = ctx.r21.s64 - ctx.r31.s64;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r27,r31,r23
	ctx.r27.s64 = ctx.r23.s64 - ctx.r31.s64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// subf r28,r31,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r31.s64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// subf r18,r31,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r31.s64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r21,r31,r17
	ctx.r21.s64 = ctx.r17.s64 - ctx.r31.s64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// subf r24,r31,r20
	ctx.r24.s64 = ctx.r20.s64 - ctx.r31.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subf r23,r31,r19
	ctx.r23.s64 = ctx.r19.s64 - ctx.r31.s64;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r17,r31,r10
	ctx.r17.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r20,r31,r16
	ctx.r20.s64 = ctx.r16.s64 - ctx.r31.s64;
	// subf r19,r31,r15
	ctx.r19.s64 = ctx.r15.s64 - ctx.r31.s64;
	// subf r18,r31,r14
	ctx.r18.s64 = ctx.r14.s64 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FC9214:
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r16,r1,1520
	ctx.r16.s64 = ctx.r1.s64 + 1520;
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r14,128(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// std r17,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r17.u64);
	// lfsx f3,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f1,r15,r11
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f3,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfsx f8,r10,r16
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r16,104(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmuls f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmuls f1,f8,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lwz r17,164(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfsx f3,r14,r11
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// std r19,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r19.u64);
	// fmuls f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// std r18,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r18.u64);
	// addi r18,r1,480
	ctx.r18.s64 = ctx.r1.s64 + 480;
	// lwz r19,208(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lfsx f31,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f3,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r16,184(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lfsx f30,r15,r11
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// addi r14,r1,2560
	ctx.r14.s64 = ctx.r1.s64 + 2560;
	// lfsx f29,r17,r11
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f9,f30,f10,f9
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfsx f30,r10,r18
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f29,f13,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfsx f29,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// std r21,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r21.u64);
	// fmadds f3,f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f31.f64));
	// lwz r21,188(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fmadds f1,f30,f10,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f7,f29,f10,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfsx f30,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// std r20,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r20.u64);
	// lfsx f31,r10,r14
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r16,192(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r20,r1,6704
	ctx.r20.s64 = ctx.r1.s64 + 6704;
	// fmadds f6,f31,f13,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfsx f31,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f2,f31,f13,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f2.f64));
	// addi r14,r1,4640
	ctx.r14.s64 = ctx.r1.s64 + 4640;
	// fmadds f5,f29,f13,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lwz r15,200(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lfsx f29,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// lwz r21,204(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfsx f31,r10,r20
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	ctx.f31.f64 = double(temp.f32);
	// lwz r20,196(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfsx f28,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// lwz r19,212(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// fmadds f8,f30,f10,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f8.f64));
	// lwz r16,176(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f27,r10,r14
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f3,f12,f30,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f3.f64));
	// lfsx f26,r15,r11
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	ctx.f26.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// lfsx f25,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f25.f64 = double(temp.f32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// lfsx f30,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// addi r15,r1,5680
	ctx.r15.s64 = ctx.r1.s64 + 5680;
	// lfsx f31,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// lfsx f28,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// lwz r16,92(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfsx f27,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f27.f64 = double(temp.f32);
	// fadds f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// lfs f29,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fadds f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// lfs f26,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// lfsx f24,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f24.f64 = double(temp.f32);
	// lwz r16,132(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f29,f29,f12
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lwz r14,140(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fmuls f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// lwz r21,148(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fadds f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// lfsx f25,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// lfsx f22,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f22.f64 = double(temp.f32);
	// lfsx f19,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f25,f25,f11
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// fmadds f31,f28,f10,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f31.f64));
	// lfsx f21,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f30,f19,f13,f30
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfsx f20,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f24,f24,f11
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// lfsx f23,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f23.f64 = double(temp.f32);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfsx f28,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f6,r10,r15
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, temp.u32);
	// fmadds f29,f22,f13,f29
	ctx.f29.f64 = double(float(ctx.f22.f64 * ctx.f13.f64 + ctx.f29.f64));
	// lfsx f22,r14,r11
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r11.u32);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f27,f21,f10,f27
	ctx.f27.f64 = double(float(ctx.f21.f64 * ctx.f10.f64 + ctx.f27.f64));
	// lfsx f21,r21,r11
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f21.f64 = double(temp.f32);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r1,3600
	ctx.r31.s64 = ctx.r1.s64 + 3600;
	// fmadds f26,f20,f13,f26
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f26.f64));
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// fmadds f28,f28,f10,f25
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f25.f64));
	// ld r20,280(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fadds f31,f31,f22
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f22.f64));
	// ld r19,264(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fadds f6,f30,f21
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f21.f64));
	// ld r18,248(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fmadds f24,f23,f10,f24
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f10.f64 + ctx.f24.f64));
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// ld r21,296(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfsx f23,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f1,r10,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfsx f25,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfsx f19,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f19.f64 = double(temp.f32);
	// fadds f30,f29,f23
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f23.f64));
	// lfsx f20,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfsx f18,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f18.f64 = double(temp.f32);
	// fadds f29,f27,f25
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// stfsx f3,r25,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// fadds f27,f26,f19
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f19.f64));
	// stfsx f1,r24,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f9,r23,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfsx f7,r22,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r11.u32, temp.u32);
	// fadds f26,f24,f20
	ctx.f26.f64 = double(float(ctx.f24.f64 + ctx.f20.f64));
	// stfsx f4,r21,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, temp.u32);
	// fadds f28,f28,f18
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f18.f64));
	// stfsx f3,r20,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfsx f2,r19,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f1,r18,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r18.u32 + ctx.r11.u32, temp.u32);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f8,f26,f0
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f5,f27,f0
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// ld r17,240(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfsx f7,r16,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r16.u32 + ctx.r11.u32, temp.u32);
	// fmuls f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfsx f6,r14,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r14.u32 + ctx.r11.u32, temp.u32);
	// fmuls f4,f28,f0
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// stfsx f8,r31,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfsx f9,r17,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r17.u32 + ctx.r11.u32, temp.u32);
	// stfsx f5,r31,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfsx f4,r31,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// blt cr6,0x82fc9214
	if (ctx.cr6.lt) goto loc_82FC9214;
	// lwz r11,17988(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17988);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addis r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 196608;
	// ori r5,r10,38556
	ctx.r5.u64 = ctx.r10.u64 | 38556;
	// addi r6,r6,-26992
	ctx.r6.s64 = ctx.r6.s64 + -26992;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// ori r4,r9,40624
	ctx.r4.u64 = ctx.r9.u64 | 40624;
	// ori r3,r8,40656
	ctx.r3.u64 = ctx.r8.u64 | 40656;
	// ori r9,r7,40676
	ctx.r9.u64 = ctx.r7.u64 | 40676;
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addis r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,-29064
	ctx.r10.s64 = ctx.r10.s64 + -29064;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addi r8,r8,-24920
	ctx.r8.s64 = ctx.r8.s64 + -24920;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addis r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 196608;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// stw r8,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// addi r5,r5,-29052
	ctx.r5.s64 = ctx.r5.s64 + -29052;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r4,-24828
	ctx.r4.s64 = ctx.r4.s64 + -24828;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r10,r10,-8384
	ctx.r10.s64 = ctx.r10.s64 + -8384;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addi r8,r8,-4244
	ctx.r8.s64 = ctx.r8.s64 + -4244;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// stw r8,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r8.u32);
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addis r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 196608;
	// addi r5,r5,-4160
	ctx.r5.s64 = ctx.r5.s64 + -4160;
	// addi r3,r3,-8412
	ctx.r3.s64 = ctx.r3.s64 + -8412;
	// addi r11,r11,-24816
	ctx.r11.s64 = ctx.r11.s64 + -24816;
	// stw r5,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// addi r9,r9,-6312
	ctx.r9.s64 = ctx.r9.s64 + -6312;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r7,r7,-4212
	ctx.r7.s64 = ctx.r7.s64 + -4212;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r6,r6,-4192
	ctx.r6.s64 = ctx.r6.s64 + -4192;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// addi r4,r4,12256
	ctx.r4.s64 = ctx.r4.s64 + 12256;
	// stw r7,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stw r4,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r4.u32);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r3,r3,-4148
	ctx.r3.s64 = ctx.r3.s64 + -4148;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// addi r11,r11,12284
	ctx.r11.s64 = ctx.r11.s64 + 12284;
	// addi r9,r9,20504
	ctx.r9.s64 = ctx.r9.s64 + 20504;
	// addi r7,r7,28720
	ctx.r7.s64 = ctx.r7.s64 + 28720;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addis r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 262144;
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// addis r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 262144;
	// addi r28,r28,16616
	ctx.r28.s64 = ctx.r28.s64 + 16616;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// addis r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 262144;
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addis r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 262144;
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// addi r5,r5,-28600
	ctx.r5.s64 = ctx.r5.s64 + -28600;
	// lwz r24,216(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r9,r9,-6324
	ctx.r9.s64 = ctx.r9.s64 + -6324;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// addi r10,r10,-24484
	ctx.r10.s64 = ctx.r10.s64 + -24484;
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// addi r6,r6,-8072
	ctx.r6.s64 = ctx.r6.s64 + -8072;
	// stw r9,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// addi r4,r4,-8036
	ctx.r4.s64 = ctx.r4.s64 + -8036;
	// stw r10,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addis r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 262144;
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// addis r26,r31,5
	ctx.r26.s64 = ctx.r31.s64 + 327680;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addis r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 262144;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addis r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 262144;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r30,r30,8400
	ctx.r30.s64 = ctx.r30.s64 + 8400;
	// addi r27,r27,20732
	ctx.r27.s64 = ctx.r27.s64 + 20732;
	// addi r26,r26,-28392
	ctx.r26.s64 = ctx.r26.s64 + -28392;
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// addi r25,r25,20744
	ctx.r25.s64 = ctx.r25.s64 + 20744;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// addi r23,r23,-24472
	ctx.r23.s64 = ctx.r23.s64 + -24472;
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// addi r28,r28,-8420
	ctx.r28.s64 = ctx.r28.s64 + -8420;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// stw r28,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r28.u32);
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addis r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 262144;
	// addis r22,r31,3
	ctx.r22.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// addi r10,r10,-8396
	ctx.r10.s64 = ctx.r10.s64 + -8396;
	// addi r6,r6,12272
	ctx.r6.s64 = ctx.r6.s64 + 12272;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r5,28708
	ctx.r5.s64 = ctx.r5.s64 + 28708;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r9,r9,20488
	ctx.r9.s64 = ctx.r9.s64 + 20488;
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// addi r4,r4,-28612
	ctx.r4.s64 = ctx.r4.s64 + -28612;
	// stw r6,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r6.u32);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// addi r22,r22,-4252
	ctx.r22.s64 = ctx.r22.s64 + -4252;
	// stw r5,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r5.u32);
	// addis r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 196608;
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// addis r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 262144;
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// addis r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 262144;
	// addis r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 262144;
	// addi r30,r30,-24836
	ctx.r30.s64 = ctx.r30.s64 + -24836;
	// addi r27,r27,-4168
	ctx.r27.s64 = ctx.r27.s64 + -4168;
	// addi r26,r26,-24492
	ctx.r26.s64 = ctx.r26.s64 + -24492;
	// addi r28,r28,168
	ctx.r28.s64 = ctx.r28.s64 + 168;
	// addi r25,r25,-8076
	ctx.r25.s64 = ctx.r25.s64 + -8076;
	// addi r23,r23,-8048
	ctx.r23.s64 = ctx.r23.s64 + -8048;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// stw r25,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r25.u32);
	// addis r25,r31,3
	ctx.r25.s64 = ctx.r31.s64 + 196608;
	// addi r28,r28,8388
	ctx.r28.s64 = ctx.r28.s64 + 8388;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r25,r25,12248
	ctx.r25.s64 = ctx.r25.s64 + 12248;
	// lwz r18,156(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// stw r25,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r25.u32);
	// addis r25,r31,5
	ctx.r25.s64 = ctx.r31.s64 + 327680;
	// addi r28,r28,20724
	ctx.r28.s64 = ctx.r28.s64 + 20724;
	// addi r25,r25,-28396
	ctx.r25.s64 = ctx.r25.s64 + -28396;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r25,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r25.u32);
	// addis r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 262144;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// subf r28,r3,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r25,r3,r24
	ctx.r25.s64 = ctx.r24.s64 - ctx.r3.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// subf r3,r3,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r3.s64;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r23,r23,16604
	ctx.r23.s64 = ctx.r23.s64 + 16604;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// li r20,256
	ctx.r20.s64 = 256;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// addis r22,r31,3
	ctx.r22.s64 = ctx.r31.s64 + 196608;
	// lfs f0,17708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17708);
	ctx.f0.f64 = double(temp.f32);
	// addis r21,r31,3
	ctx.r21.s64 = ctx.r31.s64 + 196608;
	// lfs f13,7676(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 7676);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r25,r9,20
	ctx.r25.s64 = ctx.r9.s64 + 20;
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// addi r29,r29,-24896
	ctx.r29.s64 = ctx.r29.s64 + -24896;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r28,-4228
	ctx.r28.s64 = ctx.r28.s64 + -4228;
	// addi r22,r22,-24864
	ctx.r22.s64 = ctx.r22.s64 + -24864;
	// addi r21,r21,-4196
	ctx.r21.s64 = ctx.r21.s64 + -4196;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r9,r26,24
	ctx.r9.s64 = ctx.r26.s64 + 24;
	// b 0x82fc9850
	goto loc_82FC9850;
loc_82FC984C:
	// lwz r20,144(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82FC9850:
	// lwz r19,116(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r19,r19,27
	ctx.r19.u64 = ctx.r19.u32 & 0x1F;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82fc9870
	if (!ctx.cr6.eq) goto loc_82FC9870;
	// lwz r19,160(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// dcbt r20,r19
	// lwz r19,152(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// dcbt r20,r19
loc_82FC9870:
	// lfs f0,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,0(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r18,0(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r17,r1,5680
	ctx.r17.s64 = ctx.r1.s64 + 5680;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// std r31,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r31.u64);
	// subf r19,r18,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r18.s64;
	// std r26,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r26.u64);
	// addi r15,r20,2
	ctx.r15.s64 = ctx.r20.s64 + 2;
	// lwz r14,216(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// clrlwi r20,r19,23
	ctx.r20.u64 = ctx.r19.u32 & 0x1FF;
	// lwz r19,148(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r16,r1,3600
	ctx.r16.s64 = ctx.r1.s64 + 3600;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// std r25,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r25.u64);
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r9.u64);
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f8,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f7,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// std r4,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r4.u64);
	// lfsx f3,r20,r23
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r23.u32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r14,196(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfsx f13,r24,r18
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r18.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r19,204(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// fmadds f2,f0,f3,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f13.f64));
	// std r5,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r5.u64);
	// lfs f0,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r18,176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f31,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r20,192(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r25,188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lfs f29,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f28,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f12,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r14,304(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r19,340(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lfs f30,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lwz r31,344(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lfs f27,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lwz r26,352(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lfs f26,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// lwz r18,172(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lfs f25,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lwz r20,256(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lfs f24,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lwz r25,360(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// add r18,r18,r24
	ctx.r18.u64 = ctx.r18.u64 + ctx.r24.u64;
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lfs f23,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lwz r5,368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lfs f21,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f21.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// lwz r14,236(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lfs f22,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// lwz r19,376(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lfs f20,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// lwz r31,312(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lfs f19,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f19.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r26,r1,12096
	ctx.r26.s64 = ctx.r1.s64 + 12096;
	// addi r4,r1,13136
	ctx.r4.s64 = ctx.r1.s64 + 13136;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// lfs f18,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f18.f64 = double(temp.f32);
	// lwz r18,156(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r20,392(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lfs f16,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// lwz r14,320(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stfs f7,404(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f16,240(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f17,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// lfs f16,4(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f16.f64 = double(temp.f32);
	// lwz r19,104(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f15,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f15.f64 = double(temp.f32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f14,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f14.f64 = double(temp.f32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfsx f7,r15,r23
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r15.u32 + ctx.r23.u32, temp.u32);
	// lwz r20,0(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r15,r20,1
	ctx.r15.s64 = ctx.r20.s64 + 1;
	// lwz r20,136(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfsx f8,r20,r26
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r26.u32);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r15,r15,23
	ctx.r15.u64 = ctx.r15.u32 & 0x1FF;
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f3,f16,f7,f3
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f7.f64 + ctx.f3.f64));
	// lfsx f8,r20,r4
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r4.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r15,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r15.u32);
	// stfs f3,12(r18)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r18.u32 + 12, temp.u32);
	// lfsx f7,r19,r17
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r17.u32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r15,0(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfsx f3,r19,r16
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r16.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f7,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f17,372(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f16,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f16.f64 = double(temp.f32);
	// lfs f17,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f17.f64 = double(temp.f32);
	// stfs f15,248(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// subf r19,r19,r15
	ctx.r19.s64 = ctx.r15.s64 - ctx.r19.s64;
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// lfs f5,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f5.f64 = double(temp.f32);
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// lfsx f0,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f14,296(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f28,f28,f5
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// lfsx f15,r19,r3
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r3.u32);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f31,f16,f15,f31
	ctx.f31.f64 = double(float(ctx.f16.f64 * ctx.f15.f64 + ctx.f31.f64));
	// stfsx f31,r17,r3
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + ctx.r3.u32, temp.u32);
	// lwz r19,0(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// fmadds f31,f31,f17,f15
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f17.f64 + ctx.f15.f64));
	// fadds f17,f7,f11
	ctx.f17.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// fmuls f7,f1,f6
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
	// stfs f31,12(r20)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r19,r20,12
	ctx.r19.s64 = ctx.r20.s64 + 12;
	// lfs f31,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f16,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f16.f64 = double(temp.f32);
	// clrlwi r17,r17,31
	ctx.r17.u64 = ctx.r17.u32 & 0x1;
	// fmuls f6,f17,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// lfs f17,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f17.f64 = double(temp.f32);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r17,r20
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r20.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f16,20(r20)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r20.u32 + 20, temp.u32);
	// stfs f17,16(r20)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r20.u32 + 16, temp.u32);
	// fmadds f1,f1,f31,f17
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f17.f64));
	// stfs f1,8(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r20,r20,31
	ctx.r20.u64 = ctx.r20.u32 & 0x1;
	// lfs f31,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r20,6
	ctx.r17.s64 = ctx.r20.s64 + 6;
	// lfs f17,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f17.f64 = double(temp.f32);
	// addi r20,r29,20
	ctx.r20.s64 = ctx.r29.s64 + 20;
	// lfs f16,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f16.f64 = double(temp.f32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r22,16
	ctx.r20.s64 = ctx.r22.s64 + 16;
	// lfs f15,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f15.f64 = double(temp.f32);
	// fadds f25,f8,f25
	ctx.f25.f64 = double(float(ctx.f8.f64 + ctx.f25.f64));
	// lfsx f14,r17,r29
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r29.u32);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f1,f1,f14,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f14.f64 + ctx.f30.f64));
	// fmuls f31,f31,f14
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f14.f64));
	// stfs f1,24(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// stfs f16,28(r29)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// fmadds f1,f1,f17,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f17.f64 + ctx.f31.f64));
	// stfs f1,16(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lfs f1,12(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r17,0(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f31,20(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r19,r17,31
	ctx.r19.u64 = ctx.r17.u32 & 0x1;
	// addi r19,r19,5
	ctx.r19.s64 = ctx.r19.s64 + 5;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r19,r22
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r22.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f1,f30,f1,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f29.f64));
	// stfs f1,20(r22)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r22.u32 + 20, temp.u32);
	// stfs f31,24(r22)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 24, temp.u32);
	// lfs f31,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// stfs f1,4(r22)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r22.u32 + 4, temp.u32);
	// lwz r17,12(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// lwz r15,0(r30)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r16,r15,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r15.s64;
	// subf r19,r17,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r17.s64;
	// clrlwi r20,r16,20
	ctx.r20.u64 = ctx.r16.u32 & 0xFFF;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f30,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// lfsx f30,r19,r11
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f28,r20,r11
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r20,1
	ctx.r19.s64 = ctx.r20.s64 + 1;
	// lwz r20,408(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lfs f1,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi r19,r19,31
	ctx.r19.u64 = ctx.r19.u32 & 0x1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r19,r20
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r20.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// stfs f1,8(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// lfs f1,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// stfs f27,4(r20)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// lwz r20,336(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r19,0(r8)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f1,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// subf r17,r16,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r16.s64;
	// clrlwi r17,r17,23
	ctx.r17.u64 = ctx.r17.u32 & 0x1FF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r17,r8
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r8.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f1,f30,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fadds f1,f4,f15
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f15.f64));
	// stfsx f1,r19,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r8.u32, temp.u32);
	// lwz r19,0(r8)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// fmadds f4,f1,f31,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f1,f22,f5
	ctx.f1.f64 = double(float(ctx.f22.f64 * ctx.f5.f64));
	// stw r19,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r19.u32);
	// stfs f4,12(r20)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r20,416(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// lfs f4,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f5,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// subf r17,r16,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r16.s64;
	// clrlwi r17,r17,23
	ctx.r17.u64 = ctx.r17.u32 & 0x1FF;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r17,r7
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r7.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f4,f4,f31,f26
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f26.f64));
	// stfsx f4,r19,r7
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r7.u32, temp.u32);
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// fmadds f5,f4,f5,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f31.f64));
	// clrlwi r19,r19,23
	ctx.r19.u64 = ctx.r19.u32 & 0x1FF;
	// stw r19,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r19.u32);
	// stfs f5,12(r20)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r20,424(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// addi r19,r20,12
	ctx.r19.s64 = ctx.r20.s64 + 12;
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi r17,r17,31
	ctx.r17.u64 = ctx.r17.u32 & 0x1;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// lfs f5,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r17,r20
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r20.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f4,f31,f4,f25
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 + ctx.f25.f64));
	// stfs f5,20(r20)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r20.u32 + 20, temp.u32);
	// stfs f25,16(r20)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r20.u32 + 16, temp.u32);
	// stfs f4,8(r20)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// lwz r20,0(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r20,r20,31
	ctx.r20.u64 = ctx.r20.u32 & 0x1;
	// lfs f31,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r20,6
	ctx.r17.s64 = ctx.r20.s64 + 6;
	// lfs f30,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// addi r20,r28,20
	ctx.r20.s64 = ctx.r28.s64 + 20;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r21,16
	ctx.r20.s64 = ctx.r21.s64 + 16;
	// lfsx f29,r17,r28
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r28.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f5,f5,f29,f24
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f24.f64));
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f5,24(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// stfs f30,28(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// fmadds f5,f29,f31,f4
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f5,16(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// lfs f4,12(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r17,0(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f5,20(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// clrlwi r19,r17,31
	ctx.r19.u64 = ctx.r17.u32 & 0x1;
	// addi r19,r19,5
	ctx.r19.s64 = ctx.r19.s64 + 5;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r19,r21
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r21.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f4,f31,f4,f23
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 + ctx.f23.f64));
	// stfs f4,20(r21)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r21.u32 + 20, temp.u32);
	// stfs f5,24(r21)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r21.u32 + 24, temp.u32);
	// lfs f5,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f4,4(r21)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// lwz r19,0(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r17,12(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r16,0(r27)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f5,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// subf r19,r17,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r17.s64;
	// lwz r17,0(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r25,440(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fadds f31,f0,f20
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
	// subf r17,r16,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r16.s64;
	// ld r5,432(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// ld r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// clrlwi r20,r17,20
	ctx.r20.u64 = ctx.r17.u32 & 0xFFF;
	// ld r9,456(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// fadds f3,f3,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f18.f64));
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r19,r10
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r10.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r20,r10
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// stfs f4,8(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f5,20(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lwz r20,0(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r20,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r10.u32, temp.u32);
	// lwz r20,0(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// clrlwi r19,r20,20
	ctx.r19.u64 = ctx.r20.u32 & 0xFFF;
	// lwz r20,348(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi r19,r19,31
	ctx.r19.u64 = ctx.r19.u32 & 0x1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// lfs f1,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r19,r20
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r20.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f4,8(r20)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// lfs f1,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 8, temp.u32);
	// stfs f21,4(r20)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// lwz r20,420(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lfs f4,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f5,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// subf r19,r17,r19
	ctx.r19.s64 = ctx.r19.s64 - ctx.r17.s64;
	// clrlwi r17,r19,21
	ctx.r17.u64 = ctx.r19.u32 & 0x7FF;
	// lwz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r17,r6
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f1,f4,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fadds f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fadds f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfsx f4,r19,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r6.u32, temp.u32);
	// lwz r19,0(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,21
	ctx.r19.u64 = ctx.r19.u32 & 0x7FF;
	// fmadds f1,f4,f5,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stw r19,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r19.u32);
	// stfs f1,12(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r20,356(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r19,0(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r17,r16,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r16.s64;
	// addi r16,r19,2
	ctx.r16.s64 = ctx.r19.s64 + 2;
	// lfs f5,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// clrlwi r19,r17,21
	ctx.r19.u64 = ctx.r17.u32 & 0x7FF;
	// lfs f4,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r17,r16,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r26,448(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// lwz r16,116(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfsx f30,r19,r25
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r25.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f30,f4,f31
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f4.f64 + ctx.f31.f64));
	// stfsx f4,r17,r25
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r17.u32 + ctx.r25.u32, temp.u32);
	// fmuls f5,f30,f5
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f5.f64));
	// fmadds f1,f1,f31,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f5.f64));
	// lwz r19,0(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,21
	ctx.r19.u64 = ctx.r19.u32 & 0x7FF;
	// stw r19,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r19.u32);
	// stfs f1,16(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 16, temp.u32);
	// lwz r20,396(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f4,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r15,0(r5)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f5,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// subf r17,r17,r15
	ctx.r17.s64 = ctx.r15.s64 - ctx.r17.s64;
	// clrlwi r17,r17,21
	ctx.r17.u64 = ctx.r17.u32 & 0x7FF;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r17,r5
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f1,f4,f19
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f19.f64));
	// stfsx f4,r19,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r5.u32, temp.u32);
	// lwz r19,0(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// fmadds f1,f4,f5,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f1.f64));
	// clrlwi r19,r19,21
	ctx.r19.u64 = ctx.r19.u32 & 0x7FF;
	// stw r19,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r19.u32);
	// stfs f1,12(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r20,364(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lfs f5,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r15,0(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// subf r17,r17,r15
	ctx.r17.s64 = ctx.r15.s64 - ctx.r17.s64;
	// clrlwi r17,r17,22
	ctx.r17.u64 = ctx.r17.u32 & 0x3FF;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r17,r4
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f5,f1,f5,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fadds f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfsx f2,r19,r4
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r4.u32, temp.u32);
	// fmadds f1,f2,f4,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lwz r19,0(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,22
	ctx.r19.u64 = ctx.r19.u32 & 0x3FF;
	// stw r19,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r19.u32);
	// stfs f1,12(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// lwz r19,12(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lfs f5,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f4,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// subf r20,r19,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r19.s64;
	// lwz r19,0(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r20,r20,20
	ctx.r20.u64 = ctx.r20.u32 & 0xFFF;
	// subf r19,r19,r17
	ctx.r19.s64 = ctx.r17.s64 - ctx.r19.s64;
	// addi r17,r20,2
	ctx.r17.s64 = ctx.r20.s64 + 2;
	// clrlwi r20,r19,20
	ctx.r20.u64 = ctx.r19.u32 & 0xFFF;
	// rlwinm r19,r17,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r20,2
	ctx.r17.s64 = ctx.r20.s64 + 2;
	// clrlwi r20,r16,27
	ctx.r20.u64 = ctx.r16.u32 & 0x1F;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lfsx f2,r19,r9
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// lfsx f5,r17,r9
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f4,8(r26)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f1,20(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
	// lwz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f3,r20,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, temp.u32);
	// ld r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// lfs f2,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f2.f64 = double(temp.f32);
	// lwz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r19,r20,1
	ctx.r19.s64 = ctx.r20.s64 + 1;
	// lwz r20,412(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// clrlwi r17,r19,20
	ctx.r17.u64 = ctx.r19.u32 & 0xFFF;
	// addi r19,r20,16
	ctx.r19.s64 = ctx.r20.s64 + 16;
	// stw r17,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// lwz r17,0(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// clrlwi r17,r17,31
	ctx.r17.u64 = ctx.r17.u32 & 0x1;
	// lfs f5,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// addi r17,r17,5
	ctx.r17.s64 = ctx.r17.s64 + 5;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r17,r20
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r20.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,24(r20)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r20.u32 + 24, temp.u32);
	// fmadds f1,f3,f5,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f2,20(r20)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r20.u32 + 20, temp.u32);
	// stfs f1,4(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// bne cr6,0x82fca070
	if (!ctx.cr6.eq) goto loc_82FCA070;
	// lwz r20,144(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r20,r20,128
	ctx.r20.s64 = ctx.r20.s64 + 128;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
loc_82FCA070:
	// lwz r16,128(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f4,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lwz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// addi r20,r17,16
	ctx.r20.s64 = ctx.r17.s64 + 16;
	// lfs f9,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r19,20
	ctx.r20.s64 = ctx.r19.s64 + 20;
	// lfs f3,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r19,r15,16
	ctx.r19.s64 = ctx.r15.s64 + 16;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r16,r16,16
	ctx.r16.s64 = ctx.r16.s64 + 16;
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lfs f2,8(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r17,0(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// fadds f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// subf r11,r17,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r17.s64;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// lwz r15,0(r16)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// lwz r17,124(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// clrlwi r15,r11,21
	ctx.r15.u64 = ctx.r11.u32 & 0x7FF;
	// addi r17,r17,16
	ctx.r17.s64 = ctx.r17.s64 + 16;
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r15,r16
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r16.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f1,f2,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f10.f64));
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f9,r11,r16
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r16.u32, temp.u32);
	// lwz r15,0(r16)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// clrlwi r15,r15,21
	ctx.r15.u64 = ctx.r15.u32 & 0x7FF;
	// fmadds f3,f9,f3,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f1.f64));
	// stw r15,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r15.u32);
	// stfs f3,12(r14)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r14.u32 + 12, temp.u32);
	// lwz r16,120(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,12(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,8(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r14,0(r16)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// subf r14,r14,r11
	ctx.r14.s64 = ctx.r11.s64 - ctx.r14.s64;
	// lfs f1,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r15,2
	ctx.r11.s64 = ctx.r15.s64 + 2;
	// clrlwi r15,r14,21
	ctx.r15.u64 = ctx.r14.u32 & 0x7FF;
	// rlwinm r14,r11,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r15,2
	ctx.r15.s64 = ctx.r15.s64 + 2;
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r15,r20
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r20.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f9,f10,f2,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfsx f9,r14,r20
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r14.u32 + ctx.r20.u32, temp.u32);
	// lwz r15,0(r20)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// clrlwi r15,r15,21
	ctx.r15.u64 = ctx.r15.u32 & 0x7FF;
	// fmadds f2,f5,f1,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stw r15,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r15.u32);
	// stfs f2,16(r16)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r16.u32 + 16, temp.u32);
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r15,0(r19)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r14,0(r20)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f0,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// subf r15,r14,r15
	ctx.r15.s64 = ctx.r15.s64 - ctx.r14.s64;
	// addi r14,r16,2
	ctx.r14.s64 = ctx.r16.s64 + 2;
	// clrlwi r16,r15,21
	ctx.r16.u64 = ctx.r15.u32 & 0x7FF;
	// rlwinm r15,r14,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r16,r19
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f1,f10,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfsx f9,r15,r19
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r15.u32 + ctx.r19.u32, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// clrlwi r15,r16,21
	ctx.r15.u64 = ctx.r16.u32 & 0x7FF;
	// fmadds f5,f9,f0,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lwz r14,104(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f4,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// stw r15,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r15.u32);
	// stfs f5,12(r20)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// addi r20,r14,4
	ctx.r20.s64 = ctx.r14.s64 + 4;
	// lwz r19,100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f6,0(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// lfs f3,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfsx f7,r24,r19
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r19.u32, temp.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f1,8(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r15,136(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// stfsx f12,r20,r24
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r24.u32, temp.u32);
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lwz r19,0(r17)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lfs f0,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,0(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r14,r19,2
	ctx.r14.s64 = ctx.r19.s64 + 2;
	// subf r20,r20,r19
	ctx.r20.s64 = ctx.r19.s64 - ctx.r20.s64;
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,264(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// clrlwi r20,r20,22
	ctx.r20.u64 = ctx.r20.u32 & 0x3FF;
	// cmpwi cr6,r15,1024
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1024, ctx.xer);
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r19,24
	ctx.r20.s64 = ctx.r19.s64 + 24;
	// lfsx f12,r11,r17
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f1,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfsx f10,r14,r17
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r14.u32 + ctx.r17.u32, temp.u32);
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lwz r15,0(r17)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// clrlwi r15,r15,22
	ctx.r15.u64 = ctx.r15.u32 & 0x3FF;
	// stw r15,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r15.u32);
	// stfs f9,12(r16)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r16.u32 + 12, temp.u32);
	// lwz r16,0(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f8,16(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r17,24(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lfs f7,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// subf r17,r16,r17
	ctx.r17.s64 = ctx.r17.s64 - ctx.r16.s64;
	// lwz r16,24(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// clrlwi r17,r17,20
	ctx.r17.u64 = ctx.r17.u32 & 0xFFF;
	// lwz r15,12(r19)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// subf r16,r15,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r15.s64;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// clrlwi r16,r16,20
	ctx.r16.u64 = ctx.r16.u32 & 0xFFF;
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	ctx.r16.s64 = ctx.r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r17,r20
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r20.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r16,r20
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r20.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f3,8(r19)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r19.u32 + 8, temp.u32);
	// stfs f4,20(r19)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r19.u32 + 20, temp.u32);
	// lwz r19,24(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f2,r19,r20
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r20.u32, temp.u32);
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// clrlwi r19,r19,20
	ctx.r19.u64 = ctx.r19.u32 & 0xFFF;
	// stw r19,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r19.u32);
	// lwz r20,280(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r19,0(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lfs f2,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r19,r19,31
	ctx.r19.u64 = ctx.r19.u32 & 0x1;
	// lfs f0,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// addi r17,r19,5
	ctx.r17.s64 = ctx.r19.s64 + 5;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f13,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,20(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// ld r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// addi r19,r20,16
	ctx.r19.s64 = ctx.r20.s64 + 16;
	// lfsx f11,r17,r20
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r20.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,24(r20)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r20.u32 + 24, temp.u32);
	// stfs f0,20(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 20, temp.u32);
	// fmadds f10,f11,f13,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f10,4(r20)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r20.u32 + 4, temp.u32);
	// blt cr6,0x82fc984c
	if (ctx.cr6.lt) goto loc_82FC984C;
	// lwz r27,232(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// lwz r28,220(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r3,-28368
	ctx.r3.s64 = ctx.r3.s64 + -28368;
	// lwz r26,228(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fc8188
	ctx.lr = 0x82FCA34C;
	sub_82FC8188(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,-26296
	ctx.r3.s64 = ctx.r3.s64 + -26296;
	// bl 0x82fc8188
	ctx.lr = 0x82FCA35C;
	sub_82FC8188(ctx, base);
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,-24224
	ctx.r3.s64 = ctx.r3.s64 + -24224;
	// bl 0x82fc8188
	ctx.lr = 0x82FCA370;
	sub_82FC8188(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,-22152
	ctx.r3.s64 = ctx.r3.s64 + -22152;
	// bl 0x82fc8188
	ctx.lr = 0x82FCA380;
	sub_82FC8188(ctx, base);
	// addi r29,r28,-8
	ctx.r29.s64 = ctx.r28.s64 + -8;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r3,-20080
	ctx.r3.s64 = ctx.r3.s64 + -20080;
	// bl 0x82fc87e8
	ctx.lr = 0x82FCA398;
	sub_82FC87E8(ctx, base);
	// addi r28,r26,-8
	ctx.r28.s64 = ctx.r26.s64 + -8;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r3,-19024
	ctx.r3.s64 = ctx.r3.s64 + -19024;
	// bl 0x82fc87e8
	ctx.lr = 0x82FCA3B0;
	sub_82FC87E8(ctx, base);
	// li r7,92
	ctx.r7.s64 = 92;
	// lis r6,-31908
	ctx.r6.s64 = -2091122688;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r5,r6,26544
	ctx.r5.s64 = ctx.r6.s64 + 26544;
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// subf r3,r9,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r9.s64;
	// lvlx128 v63,r31,r7
	temp.u32 = ctx.r31.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r24,r9,r29
	ctx.r24.s64 = ctx.r29.s64 - ctx.r9.s64;
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// subf r26,r9,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r9.s64;
	// subf r22,r30,r8
	ctx.r22.s64 = ctx.r8.s64 - ctx.r30.s64;
	// lwz r7,332(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r25,r9,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// vsubfp128 v0,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vaddfp128 v62,v63,v63
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// subf r23,r9,r28
	ctx.r23.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// subf r30,r30,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r30.s64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r31,-16
	ctx.r31.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
loc_82FCA420:
	// lvx128 v61,r27,r10
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lvx128 v60,r3,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v13,v63,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// lvx128 v59,r0,r10
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v12,v63,v60
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// lvx128 v58,r26,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v11,v63,v59
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v59.f32)));
	// vmulfp128 v10,v63,v58
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32)));
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r31
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r22,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r25,r11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r29,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r24,r11
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v55,v62,v57
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v57.f32)));
	// lvx128 v54,r30,r10
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v53,v62,v56
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v56.f32)));
	// lvx128 v52,r23,r11
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v51,v62,v54
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v50,v62,v52
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vmaddfp v5,v0,v8,v13
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmaddfp v4,v0,v9,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v3,v0,v7,v11
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v2,v0,v6,v10
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v55,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r9,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx128 v51,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stvx128 v5,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r7,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stvx128 v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x82fca420
	if (!ctx.cr0.eq) goto loc_82FCA420;
	// addi r1,r1,17968
	ctx.r1.s64 = ctx.r1.s64 + 17968;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x82FCA4CC;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA4D0"))) PPC_WEAK_FUNC(sub_82FCA4D0);
PPC_FUNC_IMPL(__imp__sub_82FCA4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,16236
	ctx.r10.s64 = ctx.r11.s64 + 16236;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA4E0"))) PPC_WEAK_FUNC(sub_82FCA4E0);
PPC_FUNC_IMPL(__imp__sub_82FCA4E0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,16236
	ctx.r9.s64 = ctx.r11.s64 + 16236;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82fca520
	if (ctx.cr6.eq) goto loc_82FCA520;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCA520;
	sub_82FBF870(ctx, base);
loc_82FCA520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCA538"))) PPC_WEAK_FUNC(sub_82FCA538);
PPC_FUNC_IMPL(__imp__sub_82FCA538) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r9,16208
	ctx.r7.s64 = ctx.r9.s64 + 16208;
	// addi r6,r8,16236
	ctx.r6.s64 = ctx.r8.s64 + 16236;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,-52(r5)
	PPC_STORE_U32(ctx.r5.u32 + -52, ctx.r7.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA564"))) PPC_WEAK_FUNC(sub_82FCA564);
PPC_FUNC_IMPL(__imp__sub_82FCA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA568"))) PPC_WEAK_FUNC(sub_82FCA568);
PPC_FUNC_IMPL(__imp__sub_82FCA568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FCA570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FCA584;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fca5ac
	if (ctx.cr6.eq) goto loc_82FCA5AC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fca5c0
	if (ctx.cr6.eq) goto loc_82FCA5C0;
loc_82FCA5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCA5B4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FCA5C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fca5e8
	if (ctx.cr6.eq) goto loc_82FCA5E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fe6150
	ctx.lr = 0x82FCA5E8;
	sub_82FE6150(ctx, base);
loc_82FCA5E8:
	// lbz r11,189(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fca60c
	if (ctx.cr6.eq) goto loc_82FCA60C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fe6518
	ctx.lr = 0x82FCA608;
	sub_82FE6518(ctx, base);
	// b 0x82fca628
	goto loc_82FCA628;
loc_82FCA60C:
	// lbz r11,190(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 190);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fca628
	if (ctx.cr6.eq) goto loc_82FCA628;
	// addi r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe8eb0
	ctx.lr = 0x82FCA628;
	sub_82FE8EB0(ctx, base);
loc_82FCA628:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// stb r10,190(r30)
	PPC_STORE_U8(ctx.r30.u32 + 190, ctx.r10.u8);
	// stb r10,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r10.u8);
	// stb r10,189(r30)
	PPC_STORE_U8(ctx.r30.u32 + 189, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fca680
	if (ctx.cr6.eq) goto loc_82FCA680;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fca680
	if (!ctx.cr6.eq) goto loc_82FCA680;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fca680
	if (!ctx.cr0.eq) goto loc_82FCA680;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FCA678;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCA680;
	__imp__KfLowerIrql(ctx, base);
loc_82FCA680:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fc8d58
	ctx.lr = 0x82FCA69C;
	sub_82FC8D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA6A4"))) PPC_WEAK_FUNC(sub_82FCA6A4);
PPC_FUNC_IMPL(__imp__sub_82FCA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA6A8"))) PPC_WEAK_FUNC(sub_82FCA6A8);
PPC_FUNC_IMPL(__imp__sub_82FCA6A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fca6d8
	if (ctx.cr6.eq) goto loc_82FCA6D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r10,r11,16244
	ctx.r10.s64 = ctx.r11.s64 + 16244;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fe7f90
	ctx.lr = 0x82FCA6D8;
	sub_82FE7F90(ctx, base);
loc_82FCA6D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fe9008
	ctx.lr = 0x82FCA6E4;
	sub_82FE9008(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r10,r11,16240
	ctx.r10.s64 = ctx.r11.s64 + 16240;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x82fe59e8
	ctx.lr = 0x82FCA700;
	sub_82FE59E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCA718"))) PPC_WEAK_FUNC(sub_82FCA718);
PPC_FUNC_IMPL(__imp__sub_82FCA718) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r9,16208
	ctx.r7.s64 = ctx.r9.s64 + 16208;
	// addi r6,r8,16236
	ctx.r6.s64 = ctx.r8.s64 + 16236;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,-52(r5)
	PPC_STORE_U32(ctx.r5.u32 + -52, ctx.r7.u32);
	// stw r6,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA744"))) PPC_WEAK_FUNC(sub_82FCA744);
PPC_FUNC_IMPL(__imp__sub_82FCA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA748"))) PPC_WEAK_FUNC(sub_82FCA748);
PPC_FUNC_IMPL(__imp__sub_82FCA748) {
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
	// lwz r10,-192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -192);
	// addi r31,r3,-192
	ctx.r31.s64 = ctx.r3.s64 + -192;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r9,16208
	ctx.r7.s64 = ctx.r9.s64 + 16208;
	// addi r6,r8,16236
	ctx.r6.s64 = ctx.r8.s64 + 16236;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r7,-52(r4)
	PPC_STORE_U32(ctx.r4.u32 + -52, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82fca7a4
	if (ctx.cr6.eq) goto loc_82FCA7A4;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCA7A4;
	sub_82FBF870(ctx, base);
loc_82FCA7A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCA7BC"))) PPC_WEAK_FUNC(sub_82FCA7BC);
PPC_FUNC_IMPL(__imp__sub_82FCA7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA7C0"))) PPC_WEAK_FUNC(sub_82FCA7C0);
PPC_FUNC_IMPL(__imp__sub_82FCA7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16280
	ctx.r9.s64 = ctx.r11.s64 + 16280;
	// addi r8,r10,16252
	ctx.r8.s64 = ctx.r10.s64 + 16252;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r8,r5,16236
	ctx.r8.s64 = ctx.r5.s64 + 16236;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r6,16208
	ctx.r9.s64 = ctx.r6.s64 + 16208;
	// addi r6,r4,14660
	ctx.r6.s64 = ctx.r4.s64 + 14660;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,-52(r5)
	PPC_STORE_U32(ctx.r5.u32 + -52, ctx.r9.u32);
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA818"))) PPC_WEAK_FUNC(sub_82FCA818);
PPC_FUNC_IMPL(__imp__sub_82FCA818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcab50
	sub_82FCAB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA820"))) PPC_WEAK_FUNC(sub_82FCA820);
PPC_FUNC_IMPL(__imp__sub_82FCA820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA824"))) PPC_WEAK_FUNC(sub_82FCA824);
PPC_FUNC_IMPL(__imp__sub_82FCA824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA828"))) PPC_WEAK_FUNC(sub_82FCA828);
PPC_FUNC_IMPL(__imp__sub_82FCA828) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA840"))) PPC_WEAK_FUNC(sub_82FCA840);
PPC_FUNC_IMPL(__imp__sub_82FCA840) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x82fca878
	if (!ctx.cr0.eq) goto loc_82FCA878;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCA874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FCA878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA888"))) PPC_WEAK_FUNC(sub_82FCA888);
PPC_FUNC_IMPL(__imp__sub_82FCA888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA898"))) PPC_WEAK_FUNC(sub_82FCA898);
PPC_FUNC_IMPL(__imp__sub_82FCA898) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCA8A4"))) PPC_WEAK_FUNC(sub_82FCA8A4);
PPC_FUNC_IMPL(__imp__sub_82FCA8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCA8A8"))) PPC_WEAK_FUNC(sub_82FCA8A8);
PPC_FUNC_IMPL(__imp__sub_82FCA8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fca840
	sub_82FCA840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA8B0"))) PPC_WEAK_FUNC(sub_82FCA8B0);
PPC_FUNC_IMPL(__imp__sub_82FCA8B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fca828
	sub_82FCA828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA8B8"))) PPC_WEAK_FUNC(sub_82FCA8B8);
PPC_FUNC_IMPL(__imp__sub_82FCA8B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fca888
	sub_82FCA888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCA8C0"))) PPC_WEAK_FUNC(sub_82FCA8C0);
PPC_FUNC_IMPL(__imp__sub_82FCA8C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fb9160
	ctx.lr = 0x82FCA8E8;
	sub_82FB9160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcaa10
	if (ctx.cr6.lt) goto loc_82FCAA10;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb9160
	ctx.lr = 0x82FCA8FC;
	sub_82FB9160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcaa10
	if (ctx.cr6.lt) goto loc_82FCAA10;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r11,48000
	ctx.r8.u64 = ctx.r11.u64 | 48000;
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb9550
	ctx.lr = 0x82FCA930;
	sub_82FB9550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcaa10
	if (ctx.cr6.lt) goto loc_82FCAA10;
	// lbz r11,121(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fcaa0c
	if (ctx.cr6.lt) goto loc_82FCAA0C;
	// beq cr6,0x82fca964
	if (ctx.cr6.eq) goto loc_82FCA964;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82fca95c
	if (ctx.cr6.lt) goto loc_82FCA95C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82fcaa10
	goto loc_82FCAA10;
loc_82FCA95C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fca968
	goto loc_82FCA968;
loc_82FCA964:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82FCA968:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82fe6148
	ctx.lr = 0x82FCA980;
	sub_82FE6148(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,1024
	ctx.r9.s64 = ctx.r11.s64 + 1024;
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// addi r7,r11,2048
	ctx.r7.s64 = ctx.r11.s64 + 2048;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r5,r11,5120
	ctx.r5.s64 = ctx.r11.s64 + 5120;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// bl 0x82bea278
	ctx.lr = 0x82FCA9C0;
	sub_82BEA278(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fca568
	ctx.lr = 0x82FCA9D0;
	sub_82FCA568(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bea278
	ctx.lr = 0x82FCA9D8;
	sub_82BEA278(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addis r4,r31,5
	ctx.r4.s64 = ctx.r31.s64 + 327680;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r11,r11,-17752
	ctx.r11.s64 = ctx.r11.s64 + -17752;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r4,-17760
	ctx.r4.s64 = ctx.r4.s64 + -17760;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
loc_82FCAA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FCAA10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82FCAA28"))) PPC_WEAK_FUNC(sub_82FCAA28);
PPC_FUNC_IMPL(__imp__sub_82FCAA28) {
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
	// lwz r10,-52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -52);
	// addi r31,r3,-52
	ctx.r31.s64 = ctx.r3.s64 + -52;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r9,16208
	ctx.r7.s64 = ctx.r9.s64 + 16208;
	// addi r6,r8,16236
	ctx.r6.s64 = ctx.r8.s64 + 16236;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r7,-52(r4)
	PPC_STORE_U32(ctx.r4.u32 + -52, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82fcaa84
	if (ctx.cr6.eq) goto loc_82FCAA84;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCAA84;
	sub_82FBF870(ctx, base);
loc_82FCAA84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCAA9C"))) PPC_WEAK_FUNC(sub_82FCAA9C);
PPC_FUNC_IMPL(__imp__sub_82FCAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAAA0"))) PPC_WEAK_FUNC(sub_82FCAAA0);
PPC_FUNC_IMPL(__imp__sub_82FCAAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FCAAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,14680
	ctx.r9.s64 = ctx.r11.s64 + 14680;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r7,16252
	ctx.r3.s64 = ctx.r7.s64 + 16252;
	// addi r4,r8,16280
	ctx.r4.s64 = ctx.r8.s64 + 16280;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r11,r6,16244
	ctx.r11.s64 = ctx.r6.s64 + 16244;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82fe7f90
	ctx.lr = 0x82FCAB04;
	sub_82FE7F90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fe9008
	ctx.lr = 0x82FCAB10;
	sub_82FE9008(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r9,r10,16240
	ctx.r9.s64 = ctx.r10.s64 + 16240;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r9,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x82fe59e8
	ctx.lr = 0x82FCAB2C;
	sub_82FE59E8(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r3,r5,47784
	ctx.r3.u64 = ctx.r5.u64 | 47784;
	// ori r4,r6,47776
	ctx.r4.u64 = ctx.r6.u64 | 47776;
	// stdx r29,r31,r3
	PPC_STORE_U64(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stdx r29,r31,r4
	PPC_STORE_U64(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCAB50"))) PPC_WEAK_FUNC(sub_82FCAB50);
PPC_FUNC_IMPL(__imp__sub_82FCAB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16280
	ctx.r9.s64 = ctx.r11.s64 + 16280;
	// addi r8,r10,16252
	ctx.r8.s64 = ctx.r10.s64 + 16252;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r8,r5,16236
	ctx.r8.s64 = ctx.r5.s64 + 16236;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r6,16208
	ctx.r9.s64 = ctx.r6.s64 + 16208;
	// addi r6,r4,14660
	ctx.r6.s64 = ctx.r4.s64 + 14660;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,-52(r5)
	PPC_STORE_U32(ctx.r5.u32 + -52, ctx.r9.u32);
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCABA8"))) PPC_WEAK_FUNC(sub_82FCABA8);
PPC_FUNC_IMPL(__imp__sub_82FCABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCABB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,47792
	ctx.r4.u64 = ctx.r4.u64 | 47792;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCABDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fcabfc
	if (ctx.cr6.eq) goto loc_82FCABFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fcaaa0
	ctx.lr = 0x82FCABF0;
	sub_82FCAAA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fcac0c
	if (!ctx.cr6.eq) goto loc_82FCAC0C;
loc_82FCABFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FCAC0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCAC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fcac40
	if (ctx.cr6.lt) goto loc_82FCAC40;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FCAC40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCAC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCAC60"))) PPC_WEAK_FUNC(sub_82FCAC60);
PPC_FUNC_IMPL(__imp__sub_82FCAC60) {
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
	// bl 0x82fcce90
	ctx.lr = 0x82FCAC78;
	sub_82FCCE90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,16312
	ctx.r10.s64 = ctx.r11.s64 + 16312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FCAC9C"))) PPC_WEAK_FUNC(sub_82FCAC9C);
PPC_FUNC_IMPL(__imp__sub_82FCAC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCACA0"))) PPC_WEAK_FUNC(sub_82FCACA0);
PPC_FUNC_IMPL(__imp__sub_82FCACA0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,16312
	ctx.r10.s64 = ctx.r11.s64 + 16312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fcd348
	ctx.lr = 0x82FCACC8;
	sub_82FCD348(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcacf4
	if (ctx.cr6.eq) goto loc_82FCACF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCACEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
loc_82FCACF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fccb40
	ctx.lr = 0x82FCACFC;
	sub_82FCCB40(ctx, base);
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

__attribute__((alias("__imp__sub_82FCAD10"))) PPC_WEAK_FUNC(sub_82FCAD10);
PPC_FUNC_IMPL(__imp__sub_82FCAD10) {
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
	// bl 0x82fcd840
	ctx.lr = 0x82FCAD30;
	sub_82FCD840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcad54
	if (ctx.cr6.lt) goto loc_82FCAD54;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCAD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCAD54:
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

__attribute__((alias("__imp__sub_82FCAD6C"))) PPC_WEAK_FUNC(sub_82FCAD6C);
PPC_FUNC_IMPL(__imp__sub_82FCAD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAD70"))) PPC_WEAK_FUNC(sub_82FCAD70);
PPC_FUNC_IMPL(__imp__sub_82FCAD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,20324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// b 0x82fbcfd0
	sub_82FBCFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCAD7C"))) PPC_WEAK_FUNC(sub_82FCAD7C);
PPC_FUNC_IMPL(__imp__sub_82FCAD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAD80"))) PPC_WEAK_FUNC(sub_82FCAD80);
PPC_FUNC_IMPL(__imp__sub_82FCAD80) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FCAD90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fcad90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FCAD90;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCADD4"))) PPC_WEAK_FUNC(sub_82FCADD4);
PPC_FUNC_IMPL(__imp__sub_82FCADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCADD8"))) PPC_WEAK_FUNC(sub_82FCADD8);
PPC_FUNC_IMPL(__imp__sub_82FCADD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCADF8"))) PPC_WEAK_FUNC(sub_82FCADF8);
PPC_FUNC_IMPL(__imp__sub_82FCADF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCAE14"))) PPC_WEAK_FUNC(sub_82FCAE14);
PPC_FUNC_IMPL(__imp__sub_82FCAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAE18"))) PPC_WEAK_FUNC(sub_82FCAE18);
PPC_FUNC_IMPL(__imp__sub_82FCAE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE1C"))) PPC_WEAK_FUNC(sub_82FCAE1C);
PPC_FUNC_IMPL(__imp__sub_82FCAE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAE20"))) PPC_WEAK_FUNC(sub_82FCAE20);
PPC_FUNC_IMPL(__imp__sub_82FCAE20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE28"))) PPC_WEAK_FUNC(sub_82FCAE28);
PPC_FUNC_IMPL(__imp__sub_82FCAE28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE30"))) PPC_WEAK_FUNC(sub_82FCAE30);
PPC_FUNC_IMPL(__imp__sub_82FCAE30) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE3C"))) PPC_WEAK_FUNC(sub_82FCAE3C);
PPC_FUNC_IMPL(__imp__sub_82FCAE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAE40"))) PPC_WEAK_FUNC(sub_82FCAE40);
PPC_FUNC_IMPL(__imp__sub_82FCAE40) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE4C"))) PPC_WEAK_FUNC(sub_82FCAE4C);
PPC_FUNC_IMPL(__imp__sub_82FCAE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCAE50"))) PPC_WEAK_FUNC(sub_82FCAE50);
PPC_FUNC_IMPL(__imp__sub_82FCAE50) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCAE58"))) PPC_WEAK_FUNC(sub_82FCAE58);
PPC_FUNC_IMPL(__imp__sub_82FCAE58) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCAE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fcaebc
	if (ctx.cr6.lt) goto loc_82FCAEBC;
	// beq cr6,0x82fcaea8
	if (ctx.cr6.eq) goto loc_82FCAEA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fcaec0
	goto loc_82FCAEC0;
loc_82FCAEA8:
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82fcaec0
	goto loc_82FCAEC0;
loc_82FCAEBC:
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
loc_82FCAEC0:
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

__attribute__((alias("__imp__sub_82FCAED8"))) PPC_WEAK_FUNC(sub_82FCAED8);
PPC_FUNC_IMPL(__imp__sub_82FCAED8) {
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
	// bl 0x82fcaca0
	ctx.lr = 0x82FCAEF0;
	sub_82FCACA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCAF08"))) PPC_WEAK_FUNC(sub_82FCAF08);
PPC_FUNC_IMPL(__imp__sub_82FCAF08) {
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
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// beq cr6,0x82fcaf6c
	if (ctx.cr6.eq) goto loc_82FCAF6C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82FCAF6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcd708
	ctx.lr = 0x82FCAF78;
	sub_82FCD708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb018
	if (ctx.cr6.lt) goto loc_82FCB018;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FCAFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fcafc8
	if (ctx.cr6.eq) goto loc_82FCAFC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82fb6b78
	ctx.lr = 0x82FCAFC4;
	sub_82FB6B78(ctx, base);
	// b 0x82fcafcc
	goto loc_82FCAFCC;
loc_82FCAFC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FCAFCC:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fcafe4
	if (!ctx.cr6.eq) goto loc_82FCAFE4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82fcb018
	goto loc_82FCB018;
loc_82FCAFE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCAFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb018
	if (ctx.cr6.lt) goto loc_82FCB018;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCB018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCB018:
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

__attribute__((alias("__imp__sub_82FCB030"))) PPC_WEAK_FUNC(sub_82FCB030);
PPC_FUNC_IMPL(__imp__sub_82FCB030) {
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
	// bl 0x82fcc8a8
	ctx.lr = 0x82FCB04C;
	sub_82FCC8A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fcb068
	if (ctx.cr6.lt) goto loc_82FCB068;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fb9550
	ctx.lr = 0x82FCB068;
	sub_82FB9550(ctx, base);
loc_82FCB068:
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

__attribute__((alias("__imp__sub_82FCB084"))) PPC_WEAK_FUNC(sub_82FCB084);
PPC_FUNC_IMPL(__imp__sub_82FCB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB088"))) PPC_WEAK_FUNC(sub_82FCB088);
PPC_FUNC_IMPL(__imp__sub_82FCB088) {
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
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fcb0c4
	if (ctx.cr6.eq) goto loc_82FCB0C4;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82FCB0C4:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fb9550
	ctx.lr = 0x82FCB0D4;
	sub_82FB9550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcd120
	ctx.lr = 0x82FCB0DC;
	sub_82FCD120(ctx, base);
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

__attribute__((alias("__imp__sub_82FCB0F0"))) PPC_WEAK_FUNC(sub_82FCB0F0);
PPC_FUNC_IMPL(__imp__sub_82FCB0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCB0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FCB104;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcb12c
	if (ctx.cr6.eq) goto loc_82FCB12C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fcb144
	if (ctx.cr6.eq) goto loc_82FCB144;
loc_82FCB12C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCB134;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FCB144:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fcb180
	if (ctx.cr6.eq) goto loc_82FCB180;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FCB180:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcb1c4
	if (ctx.cr6.eq) goto loc_82FCB1C4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fcb1c4
	if (!ctx.cr6.eq) goto loc_82FCB1C4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcb1c4
	if (!ctx.cr0.eq) goto loc_82FCB1C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FCB1BC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCB1C4;
	__imp__KfLowerIrql(ctx, base);
loc_82FCB1C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB1CC"))) PPC_WEAK_FUNC(sub_82FCB1CC);
PPC_FUNC_IMPL(__imp__sub_82FCB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB1D0"))) PPC_WEAK_FUNC(sub_82FCB1D0);
PPC_FUNC_IMPL(__imp__sub_82FCB1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCB1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FCB1E4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcb20c
	if (ctx.cr6.eq) goto loc_82FCB20C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fcb224
	if (ctx.cr6.eq) goto loc_82FCB224;
loc_82FCB20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCB214;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FCB224:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fcb260
	if (ctx.cr6.eq) goto loc_82FCB260;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FCB260:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcb2a4
	if (ctx.cr6.eq) goto loc_82FCB2A4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fcb2a4
	if (!ctx.cr6.eq) goto loc_82FCB2A4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcb2a4
	if (!ctx.cr0.eq) goto loc_82FCB2A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FCB29C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCB2A4;
	__imp__KfLowerIrql(ctx, base);
loc_82FCB2A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB2B0"))) PPC_WEAK_FUNC(sub_82FCB2B0);
PPC_FUNC_IMPL(__imp__sub_82FCB2B0) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r7,r9,48000
	ctx.r7.u64 = ctx.r9.u64 | 48000;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r8,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// beq cr6,0x82fcb310
	if (ctx.cr6.eq) goto loc_82FCB310;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82FCB310:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fcca58
	ctx.lr = 0x82FCB31C;
	sub_82FCCA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb330
	if (ctx.cr6.lt) goto loc_82FCB330;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82FCB330:
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

__attribute__((alias("__imp__sub_82FCB344"))) PPC_WEAK_FUNC(sub_82FCB344);
PPC_FUNC_IMPL(__imp__sub_82FCB344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB348"))) PPC_WEAK_FUNC(sub_82FCB348);
PPC_FUNC_IMPL(__imp__sub_82FCB348) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82fcb2b0
	ctx.lr = 0x82FCB360;
	sub_82FCB2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb374
	if (ctx.cr6.lt) goto loc_82FCB374;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FCB374:
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

__attribute__((alias("__imp__sub_82FCB388"))) PPC_WEAK_FUNC(sub_82FCB388);
PPC_FUNC_IMPL(__imp__sub_82FCB388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FCB390;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82fcae58
	ctx.lr = 0x82FCB39C;
	sub_82FCAE58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fcb460
	if (ctx.cr6.eq) goto loc_82FCB460;
	// bl 0x833b8a44
	ctx.lr = 0x82FCB3AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcb3d4
	if (ctx.cr6.eq) goto loc_82FCB3D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fcb3e8
	if (ctx.cr6.eq) goto loc_82FCB3E8;
loc_82FCB3D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCB3DC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FCB3E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcb460
	if (ctx.cr6.eq) goto loc_82FCB460;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fcb460
	if (!ctx.cr6.eq) goto loc_82FCB460;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcb460
	if (!ctx.cr0.eq) goto loc_82FCB460;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FCB458;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCB460;
	__imp__KfLowerIrql(ctx, base);
loc_82FCB460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB468"))) PPC_WEAK_FUNC(sub_82FCB468);
PPC_FUNC_IMPL(__imp__sub_82FCB468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FCB470;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// bl 0x82fcae58
	ctx.lr = 0x82FCB488;
	sub_82FCAE58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fcb54c
	if (ctx.cr6.eq) goto loc_82FCB54C;
	// bl 0x833b8a44
	ctx.lr = 0x82FCB498;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcb4c0
	if (ctx.cr6.eq) goto loc_82FCB4C0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fcb4d4
	if (ctx.cr6.eq) goto loc_82FCB4D4;
loc_82FCB4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCB4C8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FCB4D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcb54c
	if (ctx.cr6.eq) goto loc_82FCB54C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fcb54c
	if (!ctx.cr6.eq) goto loc_82FCB54C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcb54c
	if (!ctx.cr0.eq) goto loc_82FCB54C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FCB544;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCB54C;
	__imp__KfLowerIrql(ctx, base);
loc_82FCB54C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB558"))) PPC_WEAK_FUNC(sub_82FCB558);
PPC_FUNC_IMPL(__imp__sub_82FCB558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCB560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fcb2b0
	ctx.lr = 0x82FCB57C;
	sub_82FCB2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb590
	if (ctx.cr6.lt) goto loc_82FCB590;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// b 0x82fcb594
	goto loc_82FCB594;
loc_82FCB590:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82FCB594:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcb638
	if (ctx.cr6.lt) goto loc_82FCB638;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82fcbd58
	ctx.lr = 0x82FCB5B0;
	sub_82FCBD58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fcb638
	if (ctx.cr6.lt) goto loc_82FCB638;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCB5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fcb618
	if (ctx.cr6.eq) goto loc_82FCB618;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fcce90
	ctx.lr = 0x82FCB5EC;
	sub_82FCCE90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,16312
	ctx.r10.s64 = ctx.r11.s64 + 16312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fcaf08
	ctx.lr = 0x82FCB604;
	sub_82FCAF08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fcb624
	if (ctx.cr6.lt) goto loc_82FCB624;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x82fcb638
	goto loc_82FCB638;
loc_82FCB618:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82fcb638
	goto loc_82FCB638;
loc_82FCB624:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCB638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCB638:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fcb654
	if (ctx.cr6.eq) goto loc_82FCB654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCB654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCB654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB660"))) PPC_WEAK_FUNC(sub_82FCB660);
PPC_FUNC_IMPL(__imp__sub_82FCB660) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB678"))) PPC_WEAK_FUNC(sub_82FCB678);
PPC_FUNC_IMPL(__imp__sub_82FCB678) {
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
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fcb6b4
	if (!ctx.cr6.eq) goto loc_82FCB6B4;
loc_82FCB69C:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82FCB6B4:
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// bl 0x82fbf860
	ctx.lr = 0x82FCB6C4;
	sub_82FBF860(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fcb69c
	if (!ctx.cr6.eq) goto loc_82FCB69C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
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

__attribute__((alias("__imp__sub_82FCB6EC"))) PPC_WEAK_FUNC(sub_82FCB6EC);
PPC_FUNC_IMPL(__imp__sub_82FCB6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB6F0"))) PPC_WEAK_FUNC(sub_82FCB6F0);
PPC_FUNC_IMPL(__imp__sub_82FCB6F0) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r30,r10,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCB720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82fcb730
	if (!ctx.cr6.gt) goto loc_82FCB730;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fcb744
	goto loc_82FCB744;
loc_82FCB730:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_82FCB744:
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

__attribute__((alias("__imp__sub_82FCB75C"))) PPC_WEAK_FUNC(sub_82FCB75C);
PPC_FUNC_IMPL(__imp__sub_82FCB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB760"))) PPC_WEAK_FUNC(sub_82FCB760);
PPC_FUNC_IMPL(__imp__sub_82FCB760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB774"))) PPC_WEAK_FUNC(sub_82FCB774);
PPC_FUNC_IMPL(__imp__sub_82FCB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB778"))) PPC_WEAK_FUNC(sub_82FCB778);
PPC_FUNC_IMPL(__imp__sub_82FCB778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf860
	sub_82FBF860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB78C"))) PPC_WEAK_FUNC(sub_82FCB78C);
PPC_FUNC_IMPL(__imp__sub_82FCB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB790"))) PPC_WEAK_FUNC(sub_82FCB790);
PPC_FUNC_IMPL(__imp__sub_82FCB790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB7B0"))) PPC_WEAK_FUNC(sub_82FCB7B0);
PPC_FUNC_IMPL(__imp__sub_82FCB7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB7B4"))) PPC_WEAK_FUNC(sub_82FCB7B4);
PPC_FUNC_IMPL(__imp__sub_82FCB7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB7B8"))) PPC_WEAK_FUNC(sub_82FCB7B8);
PPC_FUNC_IMPL(__imp__sub_82FCB7B8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16420
	ctx.r9.s64 = ctx.r11.s64 + 16420;
	// addi r8,r10,16400
	ctx.r8.s64 = ctx.r10.s64 + 16400;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fcb810
	if (ctx.cr6.eq) goto loc_82FCB810;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// bl 0x82fbf870
	ctx.lr = 0x82FCB808;
	sub_82FBF870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82FCB810:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FCB834"))) PPC_WEAK_FUNC(sub_82FCB834);
PPC_FUNC_IMPL(__imp__sub_82FCB834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB838"))) PPC_WEAK_FUNC(sub_82FCB838);
PPC_FUNC_IMPL(__imp__sub_82FCB838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcb9e8
	sub_82FCB9E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB840"))) PPC_WEAK_FUNC(sub_82FCB840);
PPC_FUNC_IMPL(__imp__sub_82FCB840) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB858"))) PPC_WEAK_FUNC(sub_82FCB858);
PPC_FUNC_IMPL(__imp__sub_82FCB858) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x82fcb890
	if (!ctx.cr0.eq) goto loc_82FCB890;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCB88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FCB890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB8A0"))) PPC_WEAK_FUNC(sub_82FCB8A0);
PPC_FUNC_IMPL(__imp__sub_82FCB8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB8B0"))) PPC_WEAK_FUNC(sub_82FCB8B0);
PPC_FUNC_IMPL(__imp__sub_82FCB8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16464
	ctx.r9.s64 = ctx.r11.s64 + 16464;
	// addi r8,r10,16444
	ctx.r8.s64 = ctx.r10.s64 + 16444;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x82fcb7b8
	sub_82FCB7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB8CC"))) PPC_WEAK_FUNC(sub_82FCB8CC);
PPC_FUNC_IMPL(__imp__sub_82FCB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB8D0"))) PPC_WEAK_FUNC(sub_82FCB8D0);
PPC_FUNC_IMPL(__imp__sub_82FCB8D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcba90
	sub_82FCBA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB8D8"))) PPC_WEAK_FUNC(sub_82FCB8D8);
PPC_FUNC_IMPL(__imp__sub_82FCB8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB8EC"))) PPC_WEAK_FUNC(sub_82FCB8EC);
PPC_FUNC_IMPL(__imp__sub_82FCB8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB8F0"))) PPC_WEAK_FUNC(sub_82FCB8F0);
PPC_FUNC_IMPL(__imp__sub_82FCB8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16508
	ctx.r9.s64 = ctx.r11.s64 + 16508;
	// addi r8,r10,16488
	ctx.r8.s64 = ctx.r10.s64 + 16488;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// b 0x82fcb7b8
	sub_82FCB7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB914"))) PPC_WEAK_FUNC(sub_82FCB914);
PPC_FUNC_IMPL(__imp__sub_82FCB914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB918"))) PPC_WEAK_FUNC(sub_82FCB918);
PPC_FUNC_IMPL(__imp__sub_82FCB918) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcbb58
	sub_82FCBB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB920"))) PPC_WEAK_FUNC(sub_82FCB920);
PPC_FUNC_IMPL(__imp__sub_82FCB920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB924"))) PPC_WEAK_FUNC(sub_82FCB924);
PPC_FUNC_IMPL(__imp__sub_82FCB924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB928"))) PPC_WEAK_FUNC(sub_82FCB928);
PPC_FUNC_IMPL(__imp__sub_82FCB928) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCB958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fcb974
	if (ctx.cr6.eq) goto loc_82FCB974;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCB974;
	sub_82FBF870(ctx, base);
loc_82FCB974:
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

__attribute__((alias("__imp__sub_82FCB98C"))) PPC_WEAK_FUNC(sub_82FCB98C);
PPC_FUNC_IMPL(__imp__sub_82FCB98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCB990"))) PPC_WEAK_FUNC(sub_82FCB990);
PPC_FUNC_IMPL(__imp__sub_82FCB990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcb858
	sub_82FCB858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB998"))) PPC_WEAK_FUNC(sub_82FCB998);
PPC_FUNC_IMPL(__imp__sub_82FCB998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fcb840
	sub_82FCB840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCB9A0"))) PPC_WEAK_FUNC(sub_82FCB9A0);
PPC_FUNC_IMPL(__imp__sub_82FCB9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,14660
	ctx.r8.s64 = ctx.r11.s64 + 14660;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r6,r10,16420
	ctx.r6.s64 = ctx.r10.s64 + 16420;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r5,r9,16400
	ctx.r5.s64 = ctx.r9.s64 + 16400;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCB9E8"))) PPC_WEAK_FUNC(sub_82FCB9E8);
PPC_FUNC_IMPL(__imp__sub_82FCB9E8) {
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
	// bl 0x82fcb7b8
	ctx.lr = 0x82FCBA08;
	sub_82FCB7B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcba28
	if (ctx.cr6.eq) goto loc_82FCBA28;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCBA28;
	sub_82FBF870(ctx, base);
loc_82FCBA28:
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

__attribute__((alias("__imp__sub_82FCBA44"))) PPC_WEAK_FUNC(sub_82FCBA44);
PPC_FUNC_IMPL(__imp__sub_82FCBA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBA48"))) PPC_WEAK_FUNC(sub_82FCBA48);
PPC_FUNC_IMPL(__imp__sub_82FCBA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,14660
	ctx.r8.s64 = ctx.r11.s64 + 14660;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r6,r10,16464
	ctx.r6.s64 = ctx.r10.s64 + 16464;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r5,r9,16444
	ctx.r5.s64 = ctx.r9.s64 + 16444;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBA90"))) PPC_WEAK_FUNC(sub_82FCBA90);
PPC_FUNC_IMPL(__imp__sub_82FCBA90) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16464
	ctx.r9.s64 = ctx.r11.s64 + 16464;
	// addi r8,r10,16444
	ctx.r8.s64 = ctx.r10.s64 + 16444;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x82fcb7b8
	ctx.lr = 0x82FCBAC8;
	sub_82FCB7B8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fcbae8
	if (ctx.cr6.eq) goto loc_82FCBAE8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCBAE8;
	sub_82FBF870(ctx, base);
loc_82FCBAE8:
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

__attribute__((alias("__imp__sub_82FCBB04"))) PPC_WEAK_FUNC(sub_82FCBB04);
PPC_FUNC_IMPL(__imp__sub_82FCBB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBB08"))) PPC_WEAK_FUNC(sub_82FCBB08);
PPC_FUNC_IMPL(__imp__sub_82FCBB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,14660
	ctx.r8.s64 = ctx.r11.s64 + 14660;
	// addi r11,r10,16508
	ctx.r11.s64 = ctx.r10.s64 + 16508;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r10,r9,16488
	ctx.r10.s64 = ctx.r9.s64 + 16488;
	// addi r6,r3,28
	ctx.r6.s64 = ctx.r3.s64 + 28;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBB54"))) PPC_WEAK_FUNC(sub_82FCBB54);
PPC_FUNC_IMPL(__imp__sub_82FCBB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBB58"))) PPC_WEAK_FUNC(sub_82FCBB58);
PPC_FUNC_IMPL(__imp__sub_82FCBB58) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,16508
	ctx.r9.s64 = ctx.r11.s64 + 16508;
	// addi r8,r10,16488
	ctx.r8.s64 = ctx.r10.s64 + 16488;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x82fcb7b8
	ctx.lr = 0x82FCBB90;
	sub_82FCB7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCBBA8"))) PPC_WEAK_FUNC(sub_82FCBBA8);
PPC_FUNC_IMPL(__imp__sub_82FCBBA8) {
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82fbf860
	ctx.lr = 0x82FCBBD0;
	sub_82FBF860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcbc3c
	if (ctx.cr6.eq) goto loc_82FCBC3C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,14660
	ctx.r7.s64 = ctx.r10.s64 + 14660;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r9,16464
	ctx.r5.s64 = ctx.r9.s64 + 16464;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r4,r8,16444
	ctx.r4.s64 = ctx.r8.s64 + 16444;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82FCBC3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
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

__attribute__((alias("__imp__sub_82FCBC58"))) PPC_WEAK_FUNC(sub_82FCBC58);
PPC_FUNC_IMPL(__imp__sub_82FCBC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FCBC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82fbf860
	ctx.lr = 0x82FCBC84;
	sub_82FBF860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fcbca0
	if (!ctx.cr6.eq) goto loc_82FCBCA0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FCBCA0:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,14660
	ctx.r7.s64 = ctx.r10.s64 + 14660;
	// addi r5,r9,16508
	ctx.r5.s64 = ctx.r9.s64 + 16508;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r8,16488
	ctx.r4.s64 = ctx.r8.s64 + 16488;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCBCF4"))) PPC_WEAK_FUNC(sub_82FCBCF4);
PPC_FUNC_IMPL(__imp__sub_82FCBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBCF8"))) PPC_WEAK_FUNC(sub_82FCBCF8);
PPC_FUNC_IMPL(__imp__sub_82FCBCF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82fcbd28
	if (ctx.cr6.eq) goto loc_82FCBD28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbc58
	ctx.lr = 0x82FCBD24;
	sub_82FCBC58(ctx, base);
	// b 0x82fcbd30
	goto loc_82FCBD30;
loc_82FCBD28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbba8
	ctx.lr = 0x82FCBD30;
	sub_82FCBBA8(ctx, base);
loc_82FCBD30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcbd40
	if (ctx.cr6.lt) goto loc_82FCBD40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FCBD40:
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

__attribute__((alias("__imp__sub_82FCBD54"))) PPC_WEAK_FUNC(sub_82FCBD54);
PPC_FUNC_IMPL(__imp__sub_82FCBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBD58"))) PPC_WEAK_FUNC(sub_82FCBD58);
PPC_FUNC_IMPL(__imp__sub_82FCBD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCBD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fcbdb8
	if (!ctx.cr6.eq) goto loc_82FCBDB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82fcbd98
	if (ctx.cr6.eq) goto loc_82FCBD98;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbc58
	ctx.lr = 0x82FCBD94;
	sub_82FCBC58(ctx, base);
	// b 0x82fcbda0
	goto loc_82FCBDA0;
loc_82FCBD98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbba8
	ctx.lr = 0x82FCBDA0;
	sub_82FCBBA8(ctx, base);
loc_82FCBDA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcbdfc
	if (ctx.cr6.lt) goto loc_82FCBDFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FCBDB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCBDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FCBDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82FCBDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCBDFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCBE04"))) PPC_WEAK_FUNC(sub_82FCBE04);
PPC_FUNC_IMPL(__imp__sub_82FCBE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBE08"))) PPC_WEAK_FUNC(sub_82FCBE08);
PPC_FUNC_IMPL(__imp__sub_82FCBE08) {
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
	// bl 0x82fcce90
	ctx.lr = 0x82FCBE20;
	sub_82FCCE90(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,16536
	ctx.r10.s64 = ctx.r11.s64 + 16536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FCBE44"))) PPC_WEAK_FUNC(sub_82FCBE44);
PPC_FUNC_IMPL(__imp__sub_82FCBE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBE48"))) PPC_WEAK_FUNC(sub_82FCBE48);
PPC_FUNC_IMPL(__imp__sub_82FCBE48) {
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
	// bl 0x82fcc978
	ctx.lr = 0x82FCBE68;
	sub_82FCC978(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCBE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82FCBE98"))) PPC_WEAK_FUNC(sub_82FCBE98);
PPC_FUNC_IMPL(__imp__sub_82FCBE98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// lbz r9,25(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// stb r9,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r9.u8);
	// stb r11,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBEC8"))) PPC_WEAK_FUNC(sub_82FCBEC8);
PPC_FUNC_IMPL(__imp__sub_82FCBEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBED0"))) PPC_WEAK_FUNC(sub_82FCBED0);
PPC_FUNC_IMPL(__imp__sub_82FCBED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBED8"))) PPC_WEAK_FUNC(sub_82FCBED8);
PPC_FUNC_IMPL(__imp__sub_82FCBED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCBEEC"))) PPC_WEAK_FUNC(sub_82FCBEEC);
PPC_FUNC_IMPL(__imp__sub_82FCBEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBEF0"))) PPC_WEAK_FUNC(sub_82FCBEF0);
PPC_FUNC_IMPL(__imp__sub_82FCBEF0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBF04"))) PPC_WEAK_FUNC(sub_82FCBF04);
PPC_FUNC_IMPL(__imp__sub_82FCBF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBF08"))) PPC_WEAK_FUNC(sub_82FCBF08);
PPC_FUNC_IMPL(__imp__sub_82FCBF08) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBF1C"))) PPC_WEAK_FUNC(sub_82FCBF1C);
PPC_FUNC_IMPL(__imp__sub_82FCBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBF20"))) PPC_WEAK_FUNC(sub_82FCBF20);
PPC_FUNC_IMPL(__imp__sub_82FCBF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCBF30"))) PPC_WEAK_FUNC(sub_82FCBF30);
PPC_FUNC_IMPL(__imp__sub_82FCBF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCBF40"))) PPC_WEAK_FUNC(sub_82FCBF40);
PPC_FUNC_IMPL(__imp__sub_82FCBF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCBF5C"))) PPC_WEAK_FUNC(sub_82FCBF5C);
PPC_FUNC_IMPL(__imp__sub_82FCBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBF60"))) PPC_WEAK_FUNC(sub_82FCBF60);
PPC_FUNC_IMPL(__imp__sub_82FCBF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq 0x82fcbf78
	if (ctx.cr0.eq) goto loc_82FCBF78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FCBF78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCBF8C"))) PPC_WEAK_FUNC(sub_82FCBF8C);
PPC_FUNC_IMPL(__imp__sub_82FCBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCBF90"))) PPC_WEAK_FUNC(sub_82FCBF90);
PPC_FUNC_IMPL(__imp__sub_82FCBF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCBF98"))) PPC_WEAK_FUNC(sub_82FCBF98);
PPC_FUNC_IMPL(__imp__sub_82FCBF98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fcca58
	ctx.lr = 0x82FCBFBC;
	sub_82FCCA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc034
	if (ctx.cr6.lt) goto loc_82FCC034;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r9,25(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-31890
	ctx.r7.s64 = -2089943040;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lwz r11,20324(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20324);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82fbd710
	ctx.lr = 0x82FCC004;
	sub_82FBD710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc034
	if (ctx.cr6.lt) goto loc_82FCC034;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_82FCC034:
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

__attribute__((alias("__imp__sub_82FCC04C"))) PPC_WEAK_FUNC(sub_82FCC04C);
PPC_FUNC_IMPL(__imp__sub_82FCC04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC050"))) PPC_WEAK_FUNC(sub_82FCC050);
PPC_FUNC_IMPL(__imp__sub_82FCC050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCC058;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// bl 0x82fcd708
	ctx.lr = 0x82FCC070;
	sub_82FCD708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc14c
	if (ctx.cr6.lt) goto loc_82FCC14C;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc0b8
	if (ctx.cr6.eq) goto loc_82FCC0B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCC0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fcc154
	if (ctx.cr6.eq) goto loc_82FCC154;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FCC0B8:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc12c
	if (ctx.cr6.eq) goto loc_82FCC12C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,25(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r30,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r30.u8);
	// beq cr6,0x82fcc12c
	if (ctx.cr6.eq) goto loc_82FCC12C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82FCC0F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc14c
	if (ctx.cr6.lt) goto loc_82FCC14C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82fccc10
	ctx.lr = 0x82FCC118;
	sub_82FCCC10(ctx, base);
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcc0f4
	if (ctx.cr6.lt) goto loc_82FCC0F4;
loc_82FCC12C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc14c
	if (ctx.cr6.lt) goto loc_82FCC14C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCC14C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FCC154:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC164"))) PPC_WEAK_FUNC(sub_82FCC164);
PPC_FUNC_IMPL(__imp__sub_82FCC164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC168"))) PPC_WEAK_FUNC(sub_82FCC168);
PPC_FUNC_IMPL(__imp__sub_82FCC168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FCC170;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fcc190
	if (!ctx.cr6.eq) goto loc_82FCC190;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,16628
	ctx.r31.s64 = ctx.r11.s64 + 16628;
loc_82FCC190:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc1a4
	if (ctx.cr6.eq) goto loc_82FCC1A4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82fcc1b4
	goto loc_82FCC1B4;
loc_82FCC1A4:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82FCC1B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fcc208
	if (!ctx.cr6.eq) goto loc_82FCC208;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc220
	if (ctx.cr6.lt) goto loc_82FCC220;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,53(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// bl 0x82fbaa80
	ctx.lr = 0x82FCC204;
	sub_82FBAA80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FCC208:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCC220:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC228"))) PPC_WEAK_FUNC(sub_82FCC228);
PPC_FUNC_IMPL(__imp__sub_82FCC228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCC230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc27c
	if (ctx.cr6.eq) goto loc_82FCC27C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82FCC250:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCC268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,69(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fcc250
	if (ctx.cr6.lt) goto loc_82FCC250;
loc_82FCC27C:
	// stb r28,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC288"))) PPC_WEAK_FUNC(sub_82FCC288);
PPC_FUNC_IMPL(__imp__sub_82FCC288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FCC290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,61(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 61);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r27,r9,31
	ctx.r27.u64 = ctx.r9.u32 & 0x1;
	// beq cr6,0x82fcc318
	if (ctx.cr6.eq) goto loc_82FCC318;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FCC2C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc318
	if (ctx.cr6.lt) goto loc_82FCC318;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FCC304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fcc2c0
	if (ctx.cr6.lt) goto loc_82FCC2C0;
loc_82FCC318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC320"))) PPC_WEAK_FUNC(sub_82FCC320);
PPC_FUNC_IMPL(__imp__sub_82FCC320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FCC340"))) PPC_WEAK_FUNC(sub_82FCC340);
PPC_FUNC_IMPL(__imp__sub_82FCC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCC348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,16536
	ctx.r10.s64 = ctx.r11.s64 + 16536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fcd348
	ctx.lr = 0x82FCC364;
	sub_82FCD348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcc228
	ctx.lr = 0x82FCC36C;
	sub_82FCC228(ctx, base);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x82fcc3cc
	if (ctx.cr6.eq) goto loc_82FCC3CC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82FCC384:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fcc3b8
	if (ctx.cr6.eq) goto loc_82FCC3B8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
loc_82FCC3B8:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcc384
	if (ctx.cr6.lt) goto loc_82FCC384;
loc_82FCC3CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fccb40
	ctx.lr = 0x82FCC3D4;
	sub_82FCCB40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC3DC"))) PPC_WEAK_FUNC(sub_82FCC3DC);
PPC_FUNC_IMPL(__imp__sub_82FCC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC3E0"))) PPC_WEAK_FUNC(sub_82FCC3E0);
PPC_FUNC_IMPL(__imp__sub_82FCC3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FCC3E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82fcc228
	ctx.lr = 0x82FCC3FC;
	sub_82FCC228(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fcc474
	if (ctx.cr6.eq) goto loc_82FCC474;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc460
	if (ctx.cr6.eq) goto loc_82FCC460;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FCC41C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fcc468
	if (ctx.cr6.lt) goto loc_82FCC468;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fcc168
	ctx.lr = 0x82FCC43C;
	sub_82FCC168(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcc41c
	if (ctx.cr6.lt) goto loc_82FCC41C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fcc468
	if (ctx.cr6.lt) goto loc_82FCC468;
loc_82FCC460:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r11,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r11.u8);
loc_82FCC468:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82FCC46C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FCC474:
	// lbz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc468
	if (ctx.cr6.eq) goto loc_82FCC468;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,72(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fcc168
	ctx.lr = 0x82FCC490;
	sub_82FCC168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc46c
	if (ctx.cr6.lt) goto loc_82FCC46C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC4A8"))) PPC_WEAK_FUNC(sub_82FCC4A8);
PPC_FUNC_IMPL(__imp__sub_82FCC4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCC4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82fcd840
	ctx.lr = 0x82FCC4C0;
	sub_82FCD840(ctx, base);
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc530
	if (ctx.cr6.eq) goto loc_82FCC530;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FCC4D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc530
	if (ctx.cr6.lt) goto loc_82FCC530;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FCC4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FCC51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,69(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fcc4d4
	if (ctx.cr6.lt) goto loc_82FCC4D4;
loc_82FCC530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC538"))) PPC_WEAK_FUNC(sub_82FCC538);
PPC_FUNC_IMPL(__imp__sub_82FCC538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCC540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FCC54C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcc574
	if (ctx.cr6.eq) goto loc_82FCC574;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fcc58c
	if (ctx.cr6.eq) goto loc_82FCC58C;
loc_82FCC574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCC57C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FCC58C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fcc5c8
	if (ctx.cr6.eq) goto loc_82FCC5C8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FCC5C8:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fcc60c
	if (ctx.cr6.eq) goto loc_82FCC60C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fcc60c
	if (!ctx.cr6.eq) goto loc_82FCC60C;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcc60c
	if (!ctx.cr0.eq) goto loc_82FCC60C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FCC604;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCC60C;
	__imp__KfLowerIrql(ctx, base);
loc_82FCC60C:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc674
	if (ctx.cr6.eq) goto loc_82FCC674;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FCC624:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc674
	if (ctx.cr6.lt) goto loc_82FCC674;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq 0x82fcc64c
	if (ctx.cr0.eq) goto loc_82FCC64C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fcc660
	goto loc_82FCC660;
loc_82FCC64C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCC660:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fcc624
	if (ctx.cr6.lt) goto loc_82FCC624;
loc_82FCC674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC67C"))) PPC_WEAK_FUNC(sub_82FCC67C);
PPC_FUNC_IMPL(__imp__sub_82FCC67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC680"))) PPC_WEAK_FUNC(sub_82FCC680);
PPC_FUNC_IMPL(__imp__sub_82FCC680) {
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
	// bl 0x82fcc340
	ctx.lr = 0x82FCC6A0;
	sub_82FCC340(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc6c0
	if (ctx.cr6.eq) goto loc_82FCC6C0;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FCC6C0;
	sub_82FBF870(ctx, base);
loc_82FCC6C0:
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

__attribute__((alias("__imp__sub_82FCC6DC"))) PPC_WEAK_FUNC(sub_82FCC6DC);
PPC_FUNC_IMPL(__imp__sub_82FCC6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC6E0"))) PPC_WEAK_FUNC(sub_82FCC6E0);
PPC_FUNC_IMPL(__imp__sub_82FCC6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FCC6E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r11,69(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 69);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc750
	if (ctx.cr6.eq) goto loc_82FCC750;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FCC708:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc85c
	if (ctx.cr6.lt) goto loc_82FCC85C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FCC734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,69(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 69);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fcc708
	if (ctx.cr6.lt) goto loc_82FCC708;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fcc85c
	if (ctx.cr6.lt) goto loc_82FCC85C;
loc_82FCC750:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,20324(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20324);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FCC770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fcc794
	if (ctx.cr6.lt) goto loc_82FCC794;
	// bne cr6,0x82fcc858
	if (!ctx.cr6.eq) goto loc_82FCC858;
	// lbz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 76);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82fcc798
	goto loc_82FCC798;
loc_82FCC794:
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
loc_82FCC798:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fcc858
	if (ctx.cr6.eq) goto loc_82FCC858;
	// bl 0x833b8a44
	ctx.lr = 0x82FCC7A4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcc7cc
	if (ctx.cr6.eq) goto loc_82FCC7CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fcc7e0
	if (ctx.cr6.eq) goto loc_82FCC7E0;
loc_82FCC7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FCC7D4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FCC7E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fcc858
	if (ctx.cr6.eq) goto loc_82FCC858;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fcc858
	if (!ctx.cr6.eq) goto loc_82FCC858;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fcc858
	if (!ctx.cr0.eq) goto loc_82FCC858;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FCC850;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FCC858;
	__imp__KfLowerIrql(ctx, base);
loc_82FCC858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FCC85C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC864"))) PPC_WEAK_FUNC(sub_82FCC864);
PPC_FUNC_IMPL(__imp__sub_82FCC864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC868"))) PPC_WEAK_FUNC(sub_82FCC868);
PPC_FUNC_IMPL(__imp__sub_82FCC868) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x82fc0128
	ctx.lr = 0x82FCC888;
	sub_82FC0128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FCC8A0"))) PPC_WEAK_FUNC(sub_82FCC8A0);
PPC_FUNC_IMPL(__imp__sub_82FCC8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82fc0130
	sub_82FC0130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC8A8"))) PPC_WEAK_FUNC(sub_82FCC8A8);
PPC_FUNC_IMPL(__imp__sub_82FCC8A8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82fc0128
	ctx.lr = 0x82FCC8D8;
	sub_82FC0128(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc8f8
	if (ctx.cr6.eq) goto loc_82FCC8F8;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FCC8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCC8F8:
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fcc920
	if (ctx.cr6.eq) goto loc_82FCC920;
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fcc95c
	if (ctx.cr6.eq) goto loc_82FCC95C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
loc_82FCC920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FCC938:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82fc0130
	ctx.lr = 0x82FCC944;
	sub_82FC0130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82FCC95C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCC974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fcc938
	goto loc_82FCC938;
}

__attribute__((alias("__imp__sub_82FCC978"))) PPC_WEAK_FUNC(sub_82FCC978);
PPC_FUNC_IMPL(__imp__sub_82FCC978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCC98C"))) PPC_WEAK_FUNC(sub_82FCC98C);
PPC_FUNC_IMPL(__imp__sub_82FCC98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC990"))) PPC_WEAK_FUNC(sub_82FCC990);
PPC_FUNC_IMPL(__imp__sub_82FCC990) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fb8e78
	sub_82FB8E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC994"))) PPC_WEAK_FUNC(sub_82FCC994);
PPC_FUNC_IMPL(__imp__sub_82FCC994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC998"))) PPC_WEAK_FUNC(sub_82FCC998);
PPC_FUNC_IMPL(__imp__sub_82FCC998) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fb9138
	sub_82FB9138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC99C"))) PPC_WEAK_FUNC(sub_82FCC99C);
PPC_FUNC_IMPL(__imp__sub_82FCC99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC9A0"))) PPC_WEAK_FUNC(sub_82FCC9A0);
PPC_FUNC_IMPL(__imp__sub_82FCC9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fbd730
	sub_82FBD730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC9A4"))) PPC_WEAK_FUNC(sub_82FCC9A4);
PPC_FUNC_IMPL(__imp__sub_82FCC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC9A8"))) PPC_WEAK_FUNC(sub_82FCC9A8);
PPC_FUNC_IMPL(__imp__sub_82FCC9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCC9AC"))) PPC_WEAK_FUNC(sub_82FCC9AC);
PPC_FUNC_IMPL(__imp__sub_82FCC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC9B0"))) PPC_WEAK_FUNC(sub_82FCC9B0);
PPC_FUNC_IMPL(__imp__sub_82FCC9B0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCC9BC"))) PPC_WEAK_FUNC(sub_82FCC9BC);
PPC_FUNC_IMPL(__imp__sub_82FCC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC9C0"))) PPC_WEAK_FUNC(sub_82FCC9C0);
PPC_FUNC_IMPL(__imp__sub_82FCC9C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCC9C8"))) PPC_WEAK_FUNC(sub_82FCC9C8);
PPC_FUNC_IMPL(__imp__sub_82FCC9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCC9DC"))) PPC_WEAK_FUNC(sub_82FCC9DC);
PPC_FUNC_IMPL(__imp__sub_82FCC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCC9E0"))) PPC_WEAK_FUNC(sub_82FCC9E0);
PPC_FUNC_IMPL(__imp__sub_82FCC9E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,62(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCC9E8"))) PPC_WEAK_FUNC(sub_82FCC9E8);
PPC_FUNC_IMPL(__imp__sub_82FCC9E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fcca04
	if (ctx.cr6.lt) goto loc_82FCCA04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82FCCA04:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCCA1C"))) PPC_WEAK_FUNC(sub_82FCCA1C);
PPC_FUNC_IMPL(__imp__sub_82FCCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCCA20"))) PPC_WEAK_FUNC(sub_82FCCA20);
PPC_FUNC_IMPL(__imp__sub_82FCCA20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ori r9,r10,48000
	ctx.r9.u64 = ctx.r10.u64 | 48000;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r8,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r8.u8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FCCA58"))) PPC_WEAK_FUNC(sub_82FCCA58);
PPC_FUNC_IMPL(__imp__sub_82FCCA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FCCA60;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fccacc
	if (!ctx.cr6.eq) goto loc_82FCCACC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,48000
	ctx.r8.u64 = ctx.r9.u64 | 48000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82fb9568
	ctx.lr = 0x82FCCAC0;
	sub_82FB9568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fccb34
	if (ctx.cr6.lt) goto loc_82FCCB34;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FCCACC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fccb28
	if (ctx.cr6.eq) goto loc_82FCCB28;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fccb28
	if (ctx.cr6.eq) goto loc_82FCCB28;
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
loc_82FCCAE8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20324(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20324);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82fbd710
	ctx.lr = 0x82FCCB00;
	sub_82FBD710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fccb34
	if (ctx.cr6.lt) goto loc_82FCCB34;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fccae8
	if (ctx.cr6.lt) goto loc_82FCCAE8;
loc_82FCCB28:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82FCCB34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCCB3C"))) PPC_WEAK_FUNC(sub_82FCCB3C);
PPC_FUNC_IMPL(__imp__sub_82FCCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCCB40"))) PPC_WEAK_FUNC(sub_82FCCB40);
PPC_FUNC_IMPL(__imp__sub_82FCCB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FCCB48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,16640
	ctx.r9.s64 = ctx.r11.s64 + 16640;
	// lbz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fccbb8
	if (ctx.cr6.eq) goto loc_82FCCBB8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82FCCB70:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fccba0
	if (ctx.cr6.eq) goto loc_82FCCBA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCCB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stwx r28,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r28.u32);
loc_82FCCBA0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lbz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fccb70
	if (ctx.cr6.lt) goto loc_82FCCB70;
loc_82FCCBB8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fccbcc
	if (ctx.cr6.eq) goto loc_82FCCBCC;
	// bl 0x82fb8e98
	ctx.lr = 0x82FCCBC8;
	sub_82FB8E98(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_82FCCBCC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82fccbf8
	if (ctx.cr6.eq) goto loc_82FCCBF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCCBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82FCCBF8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14660
	ctx.r10.s64 = ctx.r11.s64 + 14660;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FCCC0C"))) PPC_WEAK_FUNC(sub_82FCCC0C);
PPC_FUNC_IMPL(__imp__sub_82FCCC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FCCC10"))) PPC_WEAK_FUNC(sub_82FCCC10);
PPC_FUNC_IMPL(__imp__sub_82FCCC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FCCC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82fbd730
	ctx.lr = 0x82FCCC4C;
	sub_82FBD730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fccca0
	if (ctx.cr6.lt) goto loc_82FCCCA0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FCCC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fccca0
	if (ctx.cr6.lt) goto loc_82FCCCA0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lhz r7,62(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82fccca0
	if (!ctx.cr6.gt) goto loc_82FCCCA0;
	// sth r11,62(r30)
	PPC_STORE_U16(ctx.r30.u32 + 62, ctx.r11.u16);
loc_82FCCCA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

