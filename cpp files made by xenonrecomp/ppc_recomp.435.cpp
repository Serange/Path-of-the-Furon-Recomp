#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D742D8"))) PPC_WEAK_FUNC(sub_82D742D8);
PPC_FUNC_IMPL(__imp__sub_82D742D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// blt cr6,0x82d743a8
	if (ctx.cr6.lt) goto loc_82D743A8;
loc_82D7433C:
	// and r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d74398
	if (ctx.cr6.eq) goto loc_82D74398;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f0
	ctx.f5.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f6
	ctx.f3.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f4
	ctx.f1.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fmadds f0,f6,f12,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f5,f8
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f6,f4,f10,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f5,f3,f9,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fmadds f13,f1,f7,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d743b4
	if (ctx.cr6.lt) goto loc_82D743B4;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d74398
	if (!ctx.cr6.lt) goto loc_82D74398;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82D74398:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82d7433c
	if (!ctx.cr6.gt) goto loc_82D7433C;
loc_82D743A8:
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D743B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743BC"))) PPC_WEAK_FUNC(sub_82D743BC);
PPC_FUNC_IMPL(__imp__sub_82D743BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D743C0"))) PPC_WEAK_FUNC(sub_82D743C0);
PPC_FUNC_IMPL(__imp__sub_82D743C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743C8"))) PPC_WEAK_FUNC(sub_82D743C8);
PPC_FUNC_IMPL(__imp__sub_82D743C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743D8"))) PPC_WEAK_FUNC(sub_82D743D8);
PPC_FUNC_IMPL(__imp__sub_82D743D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743E0"))) PPC_WEAK_FUNC(sub_82D743E0);
PPC_FUNC_IMPL(__imp__sub_82D743E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743E8"))) PPC_WEAK_FUNC(sub_82D743E8);
PPC_FUNC_IMPL(__imp__sub_82D743E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D743F8"))) PPC_WEAK_FUNC(sub_82D743F8);
PPC_FUNC_IMPL(__imp__sub_82D743F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7441C"))) PPC_WEAK_FUNC(sub_82D7441C);
PPC_FUNC_IMPL(__imp__sub_82D7441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74420"))) PPC_WEAK_FUNC(sub_82D74420);
PPC_FUNC_IMPL(__imp__sub_82D74420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74444"))) PPC_WEAK_FUNC(sub_82D74444);
PPC_FUNC_IMPL(__imp__sub_82D74444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74448"))) PPC_WEAK_FUNC(sub_82D74448);
PPC_FUNC_IMPL(__imp__sub_82D74448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7445C"))) PPC_WEAK_FUNC(sub_82D7445C);
PPC_FUNC_IMPL(__imp__sub_82D7445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74460"))) PPC_WEAK_FUNC(sub_82D74460);
PPC_FUNC_IMPL(__imp__sub_82D74460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74480"))) PPC_WEAK_FUNC(sub_82D74480);
PPC_FUNC_IMPL(__imp__sub_82D74480) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74488"))) PPC_WEAK_FUNC(sub_82D74488);
PPC_FUNC_IMPL(__imp__sub_82D74488) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74490"))) PPC_WEAK_FUNC(sub_82D74490);
PPC_FUNC_IMPL(__imp__sub_82D74490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74494"))) PPC_WEAK_FUNC(sub_82D74494);
PPC_FUNC_IMPL(__imp__sub_82D74494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74498"))) PPC_WEAK_FUNC(sub_82D74498);
PPC_FUNC_IMPL(__imp__sub_82D74498) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D744A0"))) PPC_WEAK_FUNC(sub_82D744A0);
PPC_FUNC_IMPL(__imp__sub_82D744A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D744A8"))) PPC_WEAK_FUNC(sub_82D744A8);
PPC_FUNC_IMPL(__imp__sub_82D744A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D744AC"))) PPC_WEAK_FUNC(sub_82D744AC);
PPC_FUNC_IMPL(__imp__sub_82D744AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D744B0"))) PPC_WEAK_FUNC(sub_82D744B0);
PPC_FUNC_IMPL(__imp__sub_82D744B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D744B4"))) PPC_WEAK_FUNC(sub_82D744B4);
PPC_FUNC_IMPL(__imp__sub_82D744B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D744B8"))) PPC_WEAK_FUNC(sub_82D744B8);
PPC_FUNC_IMPL(__imp__sub_82D744B8) {
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
	// bl 0x82d62918
	ctx.lr = 0x82D744D0;
	sub_82D62918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D744F0"))) PPC_WEAK_FUNC(sub_82D744F0);
PPC_FUNC_IMPL(__imp__sub_82D744F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d632a0
	sub_82D632A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D744F4"))) PPC_WEAK_FUNC(sub_82D744F4);
PPC_FUNC_IMPL(__imp__sub_82D744F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D744F8"))) PPC_WEAK_FUNC(sub_82D744F8);
PPC_FUNC_IMPL(__imp__sub_82D744F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7450c
	if (!ctx.cr6.eq) goto loc_82D7450C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7450C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7454c
	if (!ctx.cr6.eq) goto loc_82D7454C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74548
	if (ctx.cr6.eq) goto loc_82D74548;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82D74548:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_82D7454C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74554"))) PPC_WEAK_FUNC(sub_82D74554);
PPC_FUNC_IMPL(__imp__sub_82D74554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74558"))) PPC_WEAK_FUNC(sub_82D74558);
PPC_FUNC_IMPL(__imp__sub_82D74558) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74570"))) PPC_WEAK_FUNC(sub_82D74570);
PPC_FUNC_IMPL(__imp__sub_82D74570) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d745a8
	if (!ctx.cr6.eq) goto loc_82D745A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d745a8
	if (ctx.cr6.eq) goto loc_82D745A8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d76758
	ctx.lr = 0x82D745A8;
	sub_82D76758(ctx, base);
loc_82D745A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D745C8"))) PPC_WEAK_FUNC(sub_82D745C8);
PPC_FUNC_IMPL(__imp__sub_82D745C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D745D0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82d74684
	if (!ctx.cr6.gt) goto loc_82D74684;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D74628:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D74648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82d74670
	if (!ctx.cr6.gt) goto loc_82D74670;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82D74670:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d74628
	if (ctx.cr6.lt) goto loc_82D74628;
loc_82D74684:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74694"))) PPC_WEAK_FUNC(sub_82D74694);
PPC_FUNC_IMPL(__imp__sub_82D74694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74698"))) PPC_WEAK_FUNC(sub_82D74698);
PPC_FUNC_IMPL(__imp__sub_82D74698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D746A0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6adc
	ctx.lr = 0x82D746A8;
	__savefpr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d74ce4
	if (ctx.cr6.eq) goto loc_82D74CE4;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82d746dc
	if (!ctx.cr6.eq) goto loc_82D746DC;
loc_82D746C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b28
	ctx.lr = 0x82D746D8;
	__restfpr_25(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D746DC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D746F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82d746c8
	if (ctx.cr6.eq) goto loc_82D746C8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d747b0
	if (ctx.cr6.eq) goto loc_82D747B0;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x82d7476c
	if (!ctx.cr6.gt) goto loc_82D7476C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D7476C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d74784
	if (!ctx.cr6.gt) goto loc_82D74784;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82D74784:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d745c8
	ctx.lr = 0x82D74790;
	sub_82D745C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d74a78
	if (ctx.cr6.eq) goto loc_82D74A78;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d74bcc
	if (!ctx.cr6.eq) goto loc_82D74BCC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82d74bcc
	goto loc_82D74BCC;
loc_82D747B0:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74940
	if (ctx.cr6.eq) goto loc_82D74940;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// beq cr6,0x82d74828
	if (ctx.cr6.eq) goto loc_82D74828;
loc_82D747E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f27,f13,f27
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fadds f26,f12,f26
	ctx.f26.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// bne cr6,0x82d747e8
	if (!ctx.cr6.eq) goto loc_82D747E8;
loc_82D74828:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f25,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f25.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 / ctx.f12.f64));
	// fmuls f28,f11,f28
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmuls f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f26,f11,f26
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// beq cr6,0x82d748b4
	if (ctx.cr6.eq) goto loc_82D748B4;
loc_82D74868:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fsubs f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f26.f64));
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// fmadds f30,f12,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f29,f10,f10,f29
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f29.f64));
	// fmadds f31,f9,f9,f31
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f31.f64));
	// bne cr6,0x82d74868
	if (!ctx.cr6.eq) goto loc_82D74868;
loc_82D748B4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 / ctx.f12.f64));
	// fmuls f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d748fc
	if (!ctx.cr6.gt) goto loc_82D748FC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D748FC:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82d74914
	if (!ctx.cr6.gt) goto loc_82D74914;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82D74914:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d745c8
	ctx.lr = 0x82D74920;
	sub_82D745C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d74a78
	if (ctx.cr6.eq) goto loc_82D74A78;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d74bcc
	if (!ctx.cr6.eq) goto loc_82D74BCC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82d74bcc
	goto loc_82D74BCC;
loc_82D74940:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74a80
	if (ctx.cr6.eq) goto loc_82D74A80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d745c8
	ctx.lr = 0x82D7495C;
	sub_82D745C8(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x82d745c8
	ctx.lr = 0x82D74998;
	sub_82D745C8(ctx, base);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// li r4,2
	ctx.r4.s64 = 2;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fdivs f30,f4,f3
	ctx.f30.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// bl 0x82d745c8
	ctx.lr = 0x82D749D4;
	sub_82D745C8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f9,f30,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f13,f10,f10
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f9,f9
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmuls f0,f7,f7
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bge cr6,0x82d74a3c
	if (!ctx.cr6.lt) goto loc_82D74A3C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82D74A3C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d74a54
	if (!ctx.cr6.lt) goto loc_82D74A54;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82D74A54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d745c8
	ctx.lr = 0x82D74A60;
	sub_82D745C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d74a78
	if (ctx.cr6.eq) goto loc_82D74A78;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d74bcc
	if (!ctx.cr6.eq) goto loc_82D74BCC;
loc_82D74A78:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82d74bcc
	goto loc_82D74BCC;
loc_82D74A80:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74bb8
	if (ctx.cr6.eq) goto loc_82D74BB8;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82D74AEC:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d74b18
	if (!ctx.cr6.lt) goto loc_82D74B18;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D74B18:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d74b44
	if (!ctx.cr6.lt) goto loc_82D74B44;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82D74B44:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82d74aec
	if (!ctx.cr0.eq) goto loc_82D74AEC;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82D74B68:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// beq cr6,0x82d74bcc
	if (ctx.cr6.eq) goto loc_82D74BCC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d745c8
	ctx.lr = 0x82D74B80;
	sub_82D745C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d74ba0
	if (ctx.cr6.eq) goto loc_82D74BA0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d74ba0
	if (ctx.cr6.eq) goto loc_82D74BA0;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82d74ba8
	goto loc_82D74BA8;
loc_82D74BA0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82D74BA8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d74b68
	if (ctx.cr6.eq) goto loc_82D74B68;
	// b 0x82d74bcc
	goto loc_82D74BCC;
loc_82D74BB8:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d74ce4
	if (ctx.cr6.eq) goto loc_82D74CE4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82D74BCC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d74bfc
	if (!ctx.cr6.eq) goto loc_82D74BFC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d746c8
	if (!ctx.cr6.gt) goto loc_82D746C8;
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
loc_82D74BFC:
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d74c28
	if (ctx.cr6.eq) goto loc_82D74C28;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x82d74c84
	goto loc_82D74C84;
loc_82D74C28:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D74C2C;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d74ce4
	if (ctx.cr6.eq) goto loc_82D74CE4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r25,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r25.u32);
	// stw r25,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r25.u32);
	// stw r25,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r25.u32);
	// stw r25,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r25.u32);
	// stw r25,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r25.u32);
	// stw r25,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r25.u32);
	// stw r25,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r25.u32);
	// beq cr6,0x82d74ce4
	if (ctx.cr6.eq) goto loc_82D74CE4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82D74C84:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82d74ca8
	if (!ctx.cr6.eq) goto loc_82D74CA8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D74CA8:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r5,r30,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r30.s64;
	// stw r5,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r5.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b28
	ctx.lr = 0x82D74CE0;
	__restfpr_25(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82D74CE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6b28
	ctx.lr = 0x82D74CF4;
	__restfpr_25(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74CF8"))) PPC_WEAK_FUNC(sub_82D74CF8);
PPC_FUNC_IMPL(__imp__sub_82D74CF8) {
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
loc_82D74D14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r3,r9,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x82d74d50
	if (!ctx.cr6.eq) goto loc_82D74D50;
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x82d74d58
	if (ctx.cr6.eq) goto loc_82D74D58;
loc_82D74D50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d74cf8
	ctx.lr = 0x82D74D58;
	sub_82D74CF8(ctx, base);
loc_82D74D58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d74d14
	if (!ctx.cr6.eq) goto loc_82D74D14;
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

__attribute__((alias("__imp__sub_82D74D78"))) PPC_WEAK_FUNC(sub_82D74D78);
PPC_FUNC_IMPL(__imp__sub_82D74D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D74D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D74DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d74698
	ctx.lr = 0x82D74DBC;
	sub_82D74698(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r29,r9,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r27,r29,40
	ctx.r27.s64 = ctx.r29.s64 + 40;
	// bne cr6,0x82d74dd8
	if (!ctx.cr6.eq) goto loc_82D74DD8;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x82d74ddc
	if (ctx.cr6.eq) goto loc_82D74DDC;
loc_82D74DD8:
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_82D74DDC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d74de8
	if (ctx.cr6.eq) goto loc_82D74DE8;
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
loc_82D74DE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d74e28
	if (ctx.cr6.eq) goto loc_82D74E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d74e0c
	if (!ctx.cr6.eq) goto loc_82D74E0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d629b8
	ctx.lr = 0x82D74E0C;
	sub_82D629B8(ctx, base);
loc_82D74E0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82D74E28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82d74e68
	if (ctx.cr6.eq) goto loc_82D74E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82d74e4c
	if (!ctx.cr6.eq) goto loc_82D74E4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d629b8
	ctx.lr = 0x82D74E4C;
	sub_82D629B8(ctx, base);
loc_82D74E4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82D74E68:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74E84"))) PPC_WEAK_FUNC(sub_82D74E84);
PPC_FUNC_IMPL(__imp__sub_82D74E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74E88"))) PPC_WEAK_FUNC(sub_82D74E88);
PPC_FUNC_IMPL(__imp__sub_82D74E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D74E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d74f74
	if (ctx.cr6.eq) goto loc_82D74F74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d74ecc
	if (!ctx.cr6.gt) goto loc_82D74ECC;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D74ECC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d74ef4
	if (ctx.cr6.eq) goto loc_82D74EF4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82D74EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d74f74
	if (ctx.cr6.eq) goto loc_82D74F74;
loc_82D74EF4:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74f28
	if (ctx.cr6.eq) goto loc_82D74F28;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82d74e88
	ctx.lr = 0x82D74F1C;
	sub_82D74E88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D74F28:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d74f74
	if (ctx.cr6.eq) goto loc_82D74F74;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d74f74
	if (ctx.cr6.eq) goto loc_82D74F74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82d74f54
	if (!ctx.cr6.eq) goto loc_82D74F54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D74F54:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d74e88
	ctx.lr = 0x82D74F68;
	sub_82D74E88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D74F74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74F7C"))) PPC_WEAK_FUNC(sub_82D74F7C);
PPC_FUNC_IMPL(__imp__sub_82D74F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74F80"))) PPC_WEAK_FUNC(sub_82D74F80);
PPC_FUNC_IMPL(__imp__sub_82D74F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D74F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_82D74F94:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r31,r11,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82d74fb0
	if (!ctx.cr6.eq) goto loc_82D74FB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82d74fd0
	if (ctx.cr6.eq) goto loc_82D74FD0;
loc_82D74FB0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82D74FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75020
	if (ctx.cr6.eq) goto loc_82D75020;
loc_82D74FD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d74ff8
	if (ctx.cr6.eq) goto loc_82D74FF8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82D74FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75020
	if (ctx.cr6.eq) goto loc_82D75020;
loc_82D74FF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d75010
	if (ctx.cr6.eq) goto loc_82D75010;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d74f80
	ctx.lr = 0x82D75010;
	sub_82D74F80(ctx, base);
loc_82D75010:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d75020
	if (ctx.cr6.eq) goto loc_82D75020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d74f94
	goto loc_82D74F94;
loc_82D75020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D75028"))) PPC_WEAK_FUNC(sub_82D75028);
PPC_FUNC_IMPL(__imp__sub_82D75028) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d75050
	if (!ctx.cr6.eq) goto loc_82D75050;
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
loc_82D75050:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82d74cf8
	ctx.lr = 0x82D75058;
	sub_82D74CF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7506C"))) PPC_WEAK_FUNC(sub_82D7506C);
PPC_FUNC_IMPL(__imp__sub_82D7506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75070"))) PPC_WEAK_FUNC(sub_82D75070);
PPC_FUNC_IMPL(__imp__sub_82D75070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d7508c
	if (!ctx.cr6.eq) goto loc_82D7508C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D7508C:
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,72(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d752d4
	if (ctx.cr6.eq) goto loc_82D752D4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r30,-40
	ctx.r30.s64 = -40;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f7,-18264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-18268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f6.f64 = double(temp.f32);
loc_82D750BC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,-40
	ctx.r4.s64 = ctx.r4.s64 + -40;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// beq 0x82d750d4
	if (ctx.cr0.eq) goto loc_82D750D4;
	// dcbt r10,r30
loc_82D750D4:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d75228
	if (!ctx.cr6.eq) goto loc_82D75228;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d75110
	if (!ctx.cr6.eq) goto loc_82D75110;
	// stfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f6,16(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f6,20(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// b 0x82d752cc
	goto loc_82D752CC;
loc_82D75110:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// ble cr6,0x82d752cc
	if (!ctx.cr6.gt) goto loc_82D752CC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82d7520c
	if (ctx.cr6.eq) goto loc_82D7520C;
loc_82D7518C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82d751b4
	if (!ctx.cr6.lt) goto loc_82D751B4;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82D751B4:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82d751c4
	if (!ctx.cr6.lt) goto loc_82D751C4;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_82D751C4:
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d751d4
	if (!ctx.cr6.lt) goto loc_82D751D4;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82D751D4:
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d751e4
	if (!ctx.cr6.gt) goto loc_82D751E4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82D751E4:
	// lfs f0,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d751f4
	if (!ctx.cr6.gt) goto loc_82D751F4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82D751F4:
	// lfs f0,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d75204
	if (!ctx.cr6.gt) goto loc_82D75204;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82D75204:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82d7518c
	if (!ctx.cr6.eq) goto loc_82D7518C;
loc_82D7520C:
	// stfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x82d752cc
	goto loc_82D752CC;
loc_82D75228:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 + 40;
	// bne cr6,0x82d7523c
	if (!ctx.cr6.eq) goto loc_82D7523C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7523C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d75250
	if (ctx.cr6.lt) goto loc_82D75250;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75250:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d75268
	if (ctx.cr6.lt) goto loc_82D75268;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75268:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d75280
	if (ctx.cr6.lt) goto loc_82D75280;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75280:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d75298
	if (ctx.cr6.gt) goto loc_82D75298;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75298:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d752b0
	if (ctx.cr6.gt) goto loc_82D752B0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D752B0:
	// stfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d752c8
	if (ctx.cr6.gt) goto loc_82D752C8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D752C8:
	// stfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_82D752CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82d750bc
	if (!ctx.cr6.eq) goto loc_82D750BC;
loc_82D752D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D752E4"))) PPC_WEAK_FUNC(sub_82D752E4);
PPC_FUNC_IMPL(__imp__sub_82D752E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D752E8"))) PPC_WEAK_FUNC(sub_82D752E8);
PPC_FUNC_IMPL(__imp__sub_82D752E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D752F8"))) PPC_WEAK_FUNC(sub_82D752F8);
PPC_FUNC_IMPL(__imp__sub_82D752F8) {
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
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// beq cr6,0x82d75340
	if (ctx.cr6.eq) goto loc_82D75340;
	// bl 0x82294ab8
	ctx.lr = 0x82D75338;
	sub_82294AB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D75340:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82d7535c
	if (!ctx.cr6.gt) goto loc_82D7535C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D7535C:
	// bl 0x822959a0
	ctx.lr = 0x82D75360;
	sub_822959A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x82D75374;
	sub_82CB16F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82D7538C"))) PPC_WEAK_FUNC(sub_82D7538C);
PPC_FUNC_IMPL(__imp__sub_82D7538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75390"))) PPC_WEAK_FUNC(sub_82D75390);
PPC_FUNC_IMPL(__imp__sub_82D75390) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d753c0
	if (ctx.cr6.eq) goto loc_82D753C0;
	// bl 0x82294ab8
	ctx.lr = 0x82D753B4;
	sub_82294AB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82d753c4
	goto loc_82D753C4;
loc_82D753C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D753C4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D753DC"))) PPC_WEAK_FUNC(sub_82D753DC);
PPC_FUNC_IMPL(__imp__sub_82D753DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D753E0"))) PPC_WEAK_FUNC(sub_82D753E0);
PPC_FUNC_IMPL(__imp__sub_82D753E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D753E8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d756d0
	if (ctx.cr6.eq) goto loc_82D756D0;
	// lwz r26,16(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// neg r11,r26
	ctx.r11.s64 = -ctx.r26.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82D75418;
	sub_82CB8074(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82D75434;
	sub_82CB16F0(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82D75444:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d75488
	if (ctx.cr0.eq) goto loc_82D75488;
loc_82D75464:
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divwu r10,r10,r7
	ctx.r10.u32 = ctx.r10.u32 / ctx.r7.u32;
	// lbzx r5,r10,r28
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82d75488
	if (!ctx.cr6.eq) goto loc_82D75488;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stbx r6,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r6.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d75464
	if (!ctx.cr6.eq) goto loc_82D75464;
loc_82D75488:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82d75444
	if (!ctx.cr6.eq) goto loc_82D75444;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d756d0
	if (ctx.cr6.eq) goto loc_82D756D0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f7,-18264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-18268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f6.f64 = double(temp.f32);
loc_82D754B4:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r5,r5,-40
	ctx.r5.s64 = ctx.r5.s64 + -40;
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d756c8
	if (ctx.cr6.eq) goto loc_82D756C8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d75624
	if (!ctx.cr6.eq) goto loc_82D75624;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d7550c
	if (!ctx.cr6.eq) goto loc_82D7550C;
	// stfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f6,16(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f6,20(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// b 0x82d756c8
	goto loc_82D756C8;
loc_82D7550C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// ble cr6,0x82d756c8
	if (!ctx.cr6.gt) goto loc_82D756C8;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82d75608
	if (ctx.cr6.eq) goto loc_82D75608;
loc_82D75588:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82d755b0
	if (!ctx.cr6.lt) goto loc_82D755B0;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82D755B0:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82d755c0
	if (!ctx.cr6.lt) goto loc_82D755C0;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_82D755C0:
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d755d0
	if (!ctx.cr6.lt) goto loc_82D755D0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82D755D0:
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d755e0
	if (!ctx.cr6.gt) goto loc_82D755E0;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82D755E0:
	// lfs f0,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d755f0
	if (!ctx.cr6.gt) goto loc_82D755F0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82D755F0:
	// lfs f0,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d75600
	if (!ctx.cr6.gt) goto loc_82D75600;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82D75600:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82d75588
	if (!ctx.cr6.eq) goto loc_82D75588;
loc_82D75608:
	// stfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x82d756c8
	goto loc_82D756C8;
loc_82D75624:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 + 40;
	// bne cr6,0x82d75638
	if (!ctx.cr6.eq) goto loc_82D75638;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D75638:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d7564c
	if (ctx.cr6.lt) goto loc_82D7564C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D7564C:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d75664
	if (ctx.cr6.lt) goto loc_82D75664;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75664:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d7567c
	if (ctx.cr6.lt) goto loc_82D7567C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D7567C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d75694
	if (ctx.cr6.gt) goto loc_82D75694;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75694:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d756ac
	if (ctx.cr6.gt) goto loc_82D756AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D756AC:
	// stfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d756c4
	if (ctx.cr6.gt) goto loc_82D756C4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D756C4:
	// stfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_82D756C8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d754b4
	if (!ctx.cr6.eq) goto loc_82D754B4;
loc_82D756D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D756DC"))) PPC_WEAK_FUNC(sub_82D756DC);
PPC_FUNC_IMPL(__imp__sub_82D756DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D756E0"))) PPC_WEAK_FUNC(sub_82D756E0);
PPC_FUNC_IMPL(__imp__sub_82D756E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D756E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82d75710
	if (!ctx.cr6.eq) goto loc_82D75710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d752f8
	ctx.lr = 0x82D75710;
	sub_82D752F8(ctx, base);
loc_82D75710:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82d75778
	if (ctx.cr0.eq) goto loc_82D75778;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D75730:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divwu r4,r5,r6
	ctx.r4.u32 = ctx.r5.u32 / ctx.r6.u32;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r3,r4,27
	ctx.r3.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r7,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82d75778
	if (!ctx.cr6.eq) goto loc_82D75778;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d75730
	if (!ctx.cr6.eq) goto loc_82D75730;
loc_82D75778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D75780"))) PPC_WEAK_FUNC(sub_82D75780);
PPC_FUNC_IMPL(__imp__sub_82D75780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82D75788;
	__savegprlr_25(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82d75a48
	if (ctx.cr6.eq) goto loc_82D75A48;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d75a48
	if (ctx.cr6.eq) goto loc_82D75A48;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r27,r7,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r26,r6,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f6,-18268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f6.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f7,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f7.f64 = double(temp.f32);
loc_82D757D4:
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,-32
	ctx.r27.s64 = ctx.r27.s64 + -32;
	// addi r26,r26,-1280
	ctx.r26.s64 = ctx.r26.s64 + -1280;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75a40
	if (ctx.cr6.eq) goto loc_82D75A40;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r30,32
	ctx.r30.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82D757FC:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r4,-40
	ctx.r4.s64 = ctx.r4.s64 + -40;
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82d75a38
	if (ctx.cr6.eq) goto loc_82D75A38;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82d75994
	if (!ctx.cr6.eq) goto loc_82D75994;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d7587c
	if (!ctx.cr6.eq) goto loc_82D7587C;
	// stfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x82d75a38
	goto loc_82D75A38;
loc_82D7587C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// ble cr6,0x82d75a38
	if (!ctx.cr6.gt) goto loc_82D75A38;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82d75978
	if (ctx.cr6.eq) goto loc_82D75978;
loc_82D758F8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82d75920
	if (!ctx.cr6.lt) goto loc_82D75920;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82D75920:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82d75930
	if (!ctx.cr6.lt) goto loc_82D75930;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_82D75930:
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d75940
	if (!ctx.cr6.lt) goto loc_82D75940;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82D75940:
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d75950
	if (!ctx.cr6.gt) goto loc_82D75950;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82D75950:
	// lfs f0,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d75960
	if (!ctx.cr6.gt) goto loc_82D75960;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82D75960:
	// lfs f0,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d75970
	if (!ctx.cr6.gt) goto loc_82D75970;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82D75970:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82d758f8
	if (!ctx.cr6.eq) goto loc_82D758F8;
loc_82D75978:
	// stfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x82d75a38
	goto loc_82D75A38;
loc_82D75994:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r9,40
	ctx.r10.s64 = ctx.r9.s64 + 40;
	// bne cr6,0x82d759a8
	if (!ctx.cr6.eq) goto loc_82D759A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D759A8:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d759bc
	if (ctx.cr6.lt) goto loc_82D759BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D759BC:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d759d4
	if (ctx.cr6.lt) goto loc_82D759D4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D759D4:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d759ec
	if (ctx.cr6.lt) goto loc_82D759EC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D759EC:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d75a04
	if (ctx.cr6.gt) goto loc_82D75A04;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75A04:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d75a1c
	if (ctx.cr6.gt) goto loc_82D75A1C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75A1C:
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d75a34
	if (ctx.cr6.gt) goto loc_82D75A34;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D75A34:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_82D75A38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82d757fc
	if (!ctx.cr6.eq) goto loc_82D757FC;
loc_82D75A40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d757d4
	if (!ctx.cr6.eq) goto loc_82D757D4;
loc_82D75A48:
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D75A4C"))) PPC_WEAK_FUNC(sub_82D75A4C);
PPC_FUNC_IMPL(__imp__sub_82D75A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75A50"))) PPC_WEAK_FUNC(sub_82D75A50);
PPC_FUNC_IMPL(__imp__sub_82D75A50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D75A84"))) PPC_WEAK_FUNC(sub_82D75A84);
PPC_FUNC_IMPL(__imp__sub_82D75A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75A88"))) PPC_WEAK_FUNC(sub_82D75A88);
PPC_FUNC_IMPL(__imp__sub_82D75A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D75AAC"))) PPC_WEAK_FUNC(sub_82D75AAC);
PPC_FUNC_IMPL(__imp__sub_82D75AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75AB0"))) PPC_WEAK_FUNC(sub_82D75AB0);
PPC_FUNC_IMPL(__imp__sub_82D75AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D75AB4"))) PPC_WEAK_FUNC(sub_82D75AB4);
PPC_FUNC_IMPL(__imp__sub_82D75AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75AB8"))) PPC_WEAK_FUNC(sub_82D75AB8);
PPC_FUNC_IMPL(__imp__sub_82D75AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D75ABC"))) PPC_WEAK_FUNC(sub_82D75ABC);
PPC_FUNC_IMPL(__imp__sub_82D75ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75AC0"))) PPC_WEAK_FUNC(sub_82D75AC0);
PPC_FUNC_IMPL(__imp__sub_82D75AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D75AC8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f31,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
loc_82D75AEC:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f11,f8,f31
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f10,f6,f31
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// blt cr6,0x82d75bb8
	if (ctx.cr6.lt) goto loc_82D75BB8;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
loc_82D75B4C:
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d75ba8
	if (ctx.cr6.eq) goto loc_82D75BA8;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f6,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f0
	ctx.f5.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f6
	ctx.f3.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f4
	ctx.f1.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fmadds f0,f6,f12,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f6,f4,f11,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f5,f3,f9,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fmadds f13,f1,f8,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d75c1c
	if (ctx.cr6.lt) goto loc_82D75C1C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d75ba8
	if (!ctx.cr6.lt) goto loc_82D75BA8;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82D75BA8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82d75b4c
	if (!ctx.cr6.gt) goto loc_82D75B4C;
loc_82D75BB8:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D75BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75c44
	if (ctx.cr6.eq) goto loc_82D75C44;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d75c24
	if (ctx.cr6.eq) goto loc_82D75C24;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75c2c
	if (ctx.cr6.eq) goto loc_82D75C2C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82d75ac0
	ctx.lr = 0x82D75BFC;
	sub_82D75AC0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82d75c14
	if (!ctx.cr6.eq) goto loc_82D75C14;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D75C14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82d75aec
	goto loc_82D75AEC;
loc_82D75C1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d75bc0
	goto loc_82D75BC0;
loc_82D75C24:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d75c30
	goto loc_82D75C30;
loc_82D75C2C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82D75C30:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82D75C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D75C44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D75C50"))) PPC_WEAK_FUNC(sub_82D75C50);
PPC_FUNC_IMPL(__imp__sub_82D75C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D75C58;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f31,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
loc_82D75C7C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f11,f8,f31
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f10,f6,f31
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// blt cr6,0x82d75d48
	if (ctx.cr6.lt) goto loc_82D75D48;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
loc_82D75CDC:
	// and r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82d75d38
	if (ctx.cr6.eq) goto loc_82D75D38;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fabs f3,f13
	ctx.f3.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fabs f1,f4
	ctx.f1.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fmuls f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmadds f6,f0,f10,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f5,f3,f9,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f4,f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f13,f1,f8,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fadds f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d75dac
	if (ctx.cr6.lt) goto loc_82D75DAC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d75d38
	if (!ctx.cr6.lt) goto loc_82D75D38;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82D75D38:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82d75cdc
	if (!ctx.cr6.gt) goto loc_82D75CDC;
loc_82D75D48:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D75D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75e80
	if (ctx.cr6.eq) goto loc_82D75E80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d75db4
	if (ctx.cr6.eq) goto loc_82D75DB4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75e20
	if (ctx.cr6.eq) goto loc_82D75E20;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82d75c50
	ctx.lr = 0x82D75D8C;
	sub_82D75C50(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82d75da4
	if (!ctx.cr6.eq) goto loc_82D75DA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D75DA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82d75c7c
	goto loc_82D75C7C;
loc_82D75DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d75d50
	goto loc_82D75D50;
loc_82D75DB4:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d75e80
	if (ctx.cr6.eq) goto loc_82D75E80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d75e80
	if (ctx.cr6.eq) goto loc_82D75E80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d75dec
	if (!ctx.cr6.gt) goto loc_82D75DEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d629b8
	ctx.lr = 0x82D75DEC;
	sub_82D629B8(ctx, base);
loc_82D75DEC:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D75E08;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D75E20:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d75e80
	if (ctx.cr6.eq) goto loc_82D75E80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d75e80
	if (ctx.cr6.eq) goto loc_82D75E80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d75e58
	if (!ctx.cr6.gt) goto loc_82D75E58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d629b8
	ctx.lr = 0x82D75E58;
	sub_82D629B8(ctx, base);
loc_82D75E58:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82D75E74;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82D75E80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D75E8C"))) PPC_WEAK_FUNC(sub_82D75E8C);
PPC_FUNC_IMPL(__imp__sub_82D75E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D75E90"))) PPC_WEAK_FUNC(sub_82D75E90);
PPC_FUNC_IMPL(__imp__sub_82D75E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D75E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-32280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32280);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,-32280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32280, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D75ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82d75fe4
	if (ctx.cr6.eq) goto loc_82D75FE4;
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d75f28
	if (ctx.cr6.eq) goto loc_82D75F28;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stb r29,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r29.u8);
loc_82D75F28:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfsx f7,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bge cr6,0x82d75f84
	if (!ctx.cr6.lt) goto loc_82D75F84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// b 0x82d75f9c
	goto loc_82D75F9C;
loc_82D75F84:
	// addi r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 + 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d75fa8
	if (!ctx.cr6.gt) goto loc_82D75FA8;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_82D75F9C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
loc_82D75FA8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d75fe4
	if (ctx.cr6.eq) goto loc_82D75FE4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82D75FE4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76040
	if (ctx.cr6.eq) goto loc_82D76040;
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f6,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82D76040:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d74698
	ctx.lr = 0x82D7604C;
	sub_82D74698(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76064
	if (ctx.cr6.eq) goto loc_82D76064;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
loc_82D76064:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d76070
	if (ctx.cr6.eq) goto loc_82D76070;
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
loc_82D76070:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76080
	if (ctx.cr6.eq) goto loc_82D76080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d75e90
	ctx.lr = 0x82D76080;
	sub_82D75E90(ctx, base);
loc_82D76080:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82d76094
	if (ctx.cr6.eq) goto loc_82D76094;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d75e90
	ctx.lr = 0x82D76094;
	sub_82D75E90(ctx, base);
loc_82D76094:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D760AC"))) PPC_WEAK_FUNC(sub_82D760AC);
PPC_FUNC_IMPL(__imp__sub_82D760AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D760B0"))) PPC_WEAK_FUNC(sub_82D760B0);
PPC_FUNC_IMPL(__imp__sub_82D760B0) {
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D760D4"))) PPC_WEAK_FUNC(sub_82D760D4);
PPC_FUNC_IMPL(__imp__sub_82D760D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D760D8"))) PPC_WEAK_FUNC(sub_82D760D8);
PPC_FUNC_IMPL(__imp__sub_82D760D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D760E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d7611c
	if (ctx.cr6.eq) goto loc_82D7611C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d632a0
	ctx.lr = 0x82D76100;
	sub_82D632A0(ctx, base);
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76104;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82D7611C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76134
	if (ctx.cr6.eq) goto loc_82D76134;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d76758
	ctx.lr = 0x82D76130;
	sub_82D76758(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82D76134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7615c
	if (ctx.cr6.eq) goto loc_82D7615C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76144;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82D7615C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D76164"))) PPC_WEAK_FUNC(sub_82D76164);
PPC_FUNC_IMPL(__imp__sub_82D76164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76168"))) PPC_WEAK_FUNC(sub_82D76168);
PPC_FUNC_IMPL(__imp__sub_82D76168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D76170;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d762f4
	if (ctx.cr6.eq) goto loc_82D762F4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d762f4
	if (ctx.cr6.eq) goto loc_82D762F4;
	// bl 0x82d760d8
	ctx.lr = 0x82D76194;
	sub_82D760D8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// bl 0x82d5f3b8
	ctx.lr = 0x82D761A8;
	sub_82D5F3B8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,61
	ctx.r5.s64 = 61;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D761C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d762f4
	if (ctx.cr6.eq) goto loc_82D762F4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82d76200
	if (!ctx.cr6.gt) goto loc_82D76200;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82D761E4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d761e4
	if (ctx.cr6.lt) goto loc_82D761E4;
loc_82D76200:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r10,26214
	ctx.r9.u64 = ctx.r10.u64 | 26214;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d76238
	if (ctx.cr6.gt) goto loc_82D76238;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d7623c
	if (!ctx.cr6.gt) goto loc_82D7623C;
loc_82D76238:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82D7623C:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76240;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76298
	if (ctx.cr6.eq) goto loc_82D76298;
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82d76290
	if (ctx.cr0.lt) goto loc_82D76290;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
loc_82D76274:
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x82d76274
	if (!ctx.cr0.lt) goto loc_82D76274;
loc_82D76290:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82d7629c
	goto loc_82D7629C;
loc_82D76298:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82D7629C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r6.u32);
	// stb r26,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r26.u8);
	// stw r11,-32280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32280, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d75e90
	ctx.lr = 0x82D762D8;
	sub_82D75E90(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D762F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D76300"))) PPC_WEAK_FUNC(sub_82D76300);
PPC_FUNC_IMPL(__imp__sub_82D76300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D76308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82d764ec
	if (!ctx.cr6.eq) goto loc_82D764EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82d765e4
	if (ctx.cr6.eq) goto loc_82D765E4;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d765e4
	if (ctx.cr6.eq) goto loc_82D765E4;
	// bl 0x82d760d8
	ctx.lr = 0x82D76338;
	sub_82D760D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// stw r26,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r26.u32);
	// bl 0x82d5f3b8
	ctx.lr = 0x82D7634C;
	sub_82D5F3B8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r5,61
	ctx.r5.s64 = 61;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D76368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d765d8
	if (ctx.cr6.eq) goto loc_82D765D8;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82d763a4
	if (!ctx.cr6.gt) goto loc_82D763A4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82D76388:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82d76388
	if (ctx.cr6.lt) goto loc_82D76388;
loc_82D763A4:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r10,26214
	ctx.r9.u64 = ctx.r10.u64 | 26214;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82d763dc
	if (ctx.cr6.gt) goto loc_82D763DC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d763e0
	if (!ctx.cr6.gt) goto loc_82D763E0;
loc_82D763DC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82D763E0:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D763E4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D763FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7643c
	if (ctx.cr6.eq) goto loc_82D7643C;
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x82d76434
	if (ctx.cr0.lt) goto loc_82D76434;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
loc_82D76418:
	// stw r26,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r26.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x82d76418
	if (!ctx.cr0.lt) goto loc_82D76418;
loc_82D76434:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82d76440
	goto loc_82D76440;
loc_82D7643C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82D76440:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// stb r10,56(r28)
	PPC_STORE_U8(ctx.r28.u32 + 56, ctx.r10.u8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r6,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r6.u32);
	// bl 0x82d5f3b8
	ctx.lr = 0x82D7646C;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7649c
	if (ctx.cr6.eq) goto loc_82D7649C;
	// bl 0x82d62918
	ctx.lr = 0x82D76494;
	sub_82D62918(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// b 0x82d764a0
	goto loc_82D764A0;
loc_82D7649C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D764A0:
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bne cr6,0x82d764c4
	if (!ctx.cr6.eq) goto loc_82D764C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d629b8
	ctx.lr = 0x82D764C4;
	sub_82D629B8(ctx, base);
loc_82D764C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D764EC:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82d765e4
	if (!ctx.cr6.eq) goto loc_82D765E4;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76598
	if (ctx.cr6.eq) goto loc_82D76598;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// beq cr6,0x82d7658c
	if (ctx.cr6.eq) goto loc_82D7658C;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D76518:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d76530
	if (!ctx.cr6.eq) goto loc_82D76530;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82d76564
	goto loc_82D76564;
loc_82D76530:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bne cr6,0x82d76560
	if (!ctx.cr6.eq) goto loc_82D76560;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7655c
	if (ctx.cr6.eq) goto loc_82D7655C;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82D7655C:
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
loc_82D76560:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D76564:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7658c
	if (ctx.cr6.eq) goto loc_82D7658C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d74d78
	ctx.lr = 0x82D76580;
	sub_82D74D78(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82d76518
	if (ctx.cr6.lt) goto loc_82D76518;
loc_82D7658C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D76598:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82d765d8
	if (ctx.cr6.eq) goto loc_82D765D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d632a0
	ctx.lr = 0x82D765B8;
	sub_82D632A0(ctx, base);
	// bl 0x82d5f3b8
	ctx.lr = 0x82D765BC;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D765D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
loc_82D765D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D765E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D765F0"))) PPC_WEAK_FUNC(sub_82D765F0);
PPC_FUNC_IMPL(__imp__sub_82D765F0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d74e88
	ctx.lr = 0x82D76620;
	sub_82D74E88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76634"))) PPC_WEAK_FUNC(sub_82D76634);
PPC_FUNC_IMPL(__imp__sub_82D76634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76638"))) PPC_WEAK_FUNC(sub_82D76638);
PPC_FUNC_IMPL(__imp__sub_82D76638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82D76640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d76684
	if (ctx.cr6.eq) goto loc_82D76684;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82D76668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76684
	if (ctx.cr6.eq) goto loc_82D76684;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d74f80
	ctx.lr = 0x82D76684;
	sub_82D74F80(ctx, base);
loc_82D76684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7668C"))) PPC_WEAK_FUNC(sub_82D7668C);
PPC_FUNC_IMPL(__imp__sub_82D7668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76690"))) PPC_WEAK_FUNC(sub_82D76690);
PPC_FUNC_IMPL(__imp__sub_82D76690) {
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
	// bl 0x82d752f8
	ctx.lr = 0x82D766A8;
	sub_82D752F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D766C0"))) PPC_WEAK_FUNC(sub_82D766C0);
PPC_FUNC_IMPL(__imp__sub_82D766C0) {
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
	// bl 0x82d760d8
	ctx.lr = 0x82D766D8;
	sub_82D760D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d766f4
	if (ctx.cr6.eq) goto loc_82D766F4;
	// bl 0x82294ab8
	ctx.lr = 0x82D766E8;
	sub_82294AB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82d766f8
	goto loc_82D766F8;
loc_82D766F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D766F8:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D76710"))) PPC_WEAK_FUNC(sub_82D76710);
PPC_FUNC_IMPL(__imp__sub_82D76710) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d74e88
	ctx.lr = 0x82D76740;
	sub_82D74E88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76754"))) PPC_WEAK_FUNC(sub_82D76754);
PPC_FUNC_IMPL(__imp__sub_82D76754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76758"))) PPC_WEAK_FUNC(sub_82D76758);
PPC_FUNC_IMPL(__imp__sub_82D76758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D76760;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d76808
	if (ctx.cr6.eq) goto loc_82D76808;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x82d767d8
	if (ctx.cr0.lt) goto loc_82D767D8;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D767A0:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d767c8
	if (!ctx.cr6.eq) goto loc_82D767C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d767c8
	if (ctx.cr6.eq) goto loc_82D767C8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d76758
	ctx.lr = 0x82D767C8;
	sub_82D76758(ctx, base);
loc_82D767C8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bge 0x82d767a0
	if (!ctx.cr0.lt) goto loc_82D767A0;
loc_82D767D8:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d767fc
	if (ctx.cr6.eq) goto loc_82D767FC;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D767E8;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D767FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D767FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D76808:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7682c
	if (!ctx.cr6.eq) goto loc_82D7682C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7682c
	if (ctx.cr6.eq) goto loc_82D7682C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d76758
	ctx.lr = 0x82D7682C;
	sub_82D76758(ctx, base);
loc_82D7682C:
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7685c
	if (ctx.cr6.eq) goto loc_82D7685C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76848;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7685C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7685C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D76868"))) PPC_WEAK_FUNC(sub_82D76868);
PPC_FUNC_IMPL(__imp__sub_82D76868) {
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
	// bl 0x82d632a0
	ctx.lr = 0x82D76888;
	sub_82D632A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d768ac
	if (ctx.cr6.eq) goto loc_82D768AC;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76898;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D768AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D768AC:
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

__attribute__((alias("__imp__sub_82D768C8"))) PPC_WEAK_FUNC(sub_82D768C8);
PPC_FUNC_IMPL(__imp__sub_82D768C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82d768fc
	if (!ctx.cr6.eq) goto loc_82D768FC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
loc_82D768FC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82d769f8
	if (ctx.cr6.eq) goto loc_82D769F8;
loc_82D76978:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82d769a0
	if (!ctx.cr6.lt) goto loc_82D769A0;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82D769A0:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82d769b0
	if (!ctx.cr6.lt) goto loc_82D769B0;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_82D769B0:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82d769c0
	if (!ctx.cr6.lt) goto loc_82D769C0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82D769C0:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d769d0
	if (!ctx.cr6.gt) goto loc_82D769D0;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82D769D0:
	// lfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82d769e0
	if (!ctx.cr6.gt) goto loc_82D769E0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82D769E0:
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d769f0
	if (!ctx.cr6.gt) goto loc_82D769F0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82D769F0:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82d76978
	if (!ctx.cr6.eq) goto loc_82D76978;
loc_82D769F8:
	// stfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76A14"))) PPC_WEAK_FUNC(sub_82D76A14);
PPC_FUNC_IMPL(__imp__sub_82D76A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76A18"))) PPC_WEAK_FUNC(sub_82D76A18);
PPC_FUNC_IMPL(__imp__sub_82D76A18) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76A34"))) PPC_WEAK_FUNC(sub_82D76A34);
PPC_FUNC_IMPL(__imp__sub_82D76A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76A38"))) PPC_WEAK_FUNC(sub_82D76A38);
PPC_FUNC_IMPL(__imp__sub_82D76A38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76A4C"))) PPC_WEAK_FUNC(sub_82D76A4C);
PPC_FUNC_IMPL(__imp__sub_82D76A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76A50"))) PPC_WEAK_FUNC(sub_82D76A50);
PPC_FUNC_IMPL(__imp__sub_82D76A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d76aa8
	if (ctx.cr6.eq) goto loc_82D76AA8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D76AA8:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_82D76AC0"))) PPC_WEAK_FUNC(sub_82D76AC0);
PPC_FUNC_IMPL(__imp__sub_82D76AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76AC4"))) PPC_WEAK_FUNC(sub_82D76AC4);
PPC_FUNC_IMPL(__imp__sub_82D76AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76AC8"))) PPC_WEAK_FUNC(sub_82D76AC8);
PPC_FUNC_IMPL(__imp__sub_82D76AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76ACC"))) PPC_WEAK_FUNC(sub_82D76ACC);
PPC_FUNC_IMPL(__imp__sub_82D76ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76AD0"))) PPC_WEAK_FUNC(sub_82D76AD0);
PPC_FUNC_IMPL(__imp__sub_82D76AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76AD4"))) PPC_WEAK_FUNC(sub_82D76AD4);
PPC_FUNC_IMPL(__imp__sub_82D76AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76AD8"))) PPC_WEAK_FUNC(sub_82D76AD8);
PPC_FUNC_IMPL(__imp__sub_82D76AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76ADC"))) PPC_WEAK_FUNC(sub_82D76ADC);
PPC_FUNC_IMPL(__imp__sub_82D76ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76AE0"))) PPC_WEAK_FUNC(sub_82D76AE0);
PPC_FUNC_IMPL(__imp__sub_82D76AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1900
	ctx.r9.s64 = ctx.r11.s64 + -1900;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76AF8"))) PPC_WEAK_FUNC(sub_82D76AF8);
PPC_FUNC_IMPL(__imp__sub_82D76AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1900
	ctx.r10.s64 = ctx.r11.s64 + -1900;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B08"))) PPC_WEAK_FUNC(sub_82D76B08);
PPC_FUNC_IMPL(__imp__sub_82D76B08) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-1900
	ctx.r9.s64 = ctx.r11.s64 + -1900;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d76b4c
	if (ctx.cr6.eq) goto loc_82D76B4C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76B38;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D76B4C:
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

__attribute__((alias("__imp__sub_82D76B64"))) PPC_WEAK_FUNC(sub_82D76B64);
PPC_FUNC_IMPL(__imp__sub_82D76B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76B68"))) PPC_WEAK_FUNC(sub_82D76B68);
PPC_FUNC_IMPL(__imp__sub_82D76B68) {
	PPC_FUNC_PROLOGUE();
	// oris r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 2147483648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B70"))) PPC_WEAK_FUNC(sub_82D76B70);
PPC_FUNC_IMPL(__imp__sub_82D76B70) {
	PPC_FUNC_PROLOGUE();
	// oris r3,r3,16384
	ctx.r3.u64 = ctx.r3.u64 | 1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B78"))) PPC_WEAK_FUNC(sub_82D76B78);
PPC_FUNC_IMPL(__imp__sub_82D76B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B7C"))) PPC_WEAK_FUNC(sub_82D76B7C);
PPC_FUNC_IMPL(__imp__sub_82D76B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76B80"))) PPC_WEAK_FUNC(sub_82D76B80);
PPC_FUNC_IMPL(__imp__sub_82D76B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B84"))) PPC_WEAK_FUNC(sub_82D76B84);
PPC_FUNC_IMPL(__imp__sub_82D76B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76B88"))) PPC_WEAK_FUNC(sub_82D76B88);
PPC_FUNC_IMPL(__imp__sub_82D76B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B8C"))) PPC_WEAK_FUNC(sub_82D76B8C);
PPC_FUNC_IMPL(__imp__sub_82D76B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76B90"))) PPC_WEAK_FUNC(sub_82D76B90);
PPC_FUNC_IMPL(__imp__sub_82D76B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B94"))) PPC_WEAK_FUNC(sub_82D76B94);
PPC_FUNC_IMPL(__imp__sub_82D76B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76B98"))) PPC_WEAK_FUNC(sub_82D76B98);
PPC_FUNC_IMPL(__imp__sub_82D76B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76B9C"))) PPC_WEAK_FUNC(sub_82D76B9C);
PPC_FUNC_IMPL(__imp__sub_82D76B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BA0"))) PPC_WEAK_FUNC(sub_82D76BA0);
PPC_FUNC_IMPL(__imp__sub_82D76BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BA4"))) PPC_WEAK_FUNC(sub_82D76BA4);
PPC_FUNC_IMPL(__imp__sub_82D76BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BA8"))) PPC_WEAK_FUNC(sub_82D76BA8);
PPC_FUNC_IMPL(__imp__sub_82D76BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BAC"))) PPC_WEAK_FUNC(sub_82D76BAC);
PPC_FUNC_IMPL(__imp__sub_82D76BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BB0"))) PPC_WEAK_FUNC(sub_82D76BB0);
PPC_FUNC_IMPL(__imp__sub_82D76BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BB4"))) PPC_WEAK_FUNC(sub_82D76BB4);
PPC_FUNC_IMPL(__imp__sub_82D76BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BB8"))) PPC_WEAK_FUNC(sub_82D76BB8);
PPC_FUNC_IMPL(__imp__sub_82D76BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BBC"))) PPC_WEAK_FUNC(sub_82D76BBC);
PPC_FUNC_IMPL(__imp__sub_82D76BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BC0"))) PPC_WEAK_FUNC(sub_82D76BC0);
PPC_FUNC_IMPL(__imp__sub_82D76BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1868
	ctx.r9.s64 = ctx.r10.s64 + -1868;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BDC"))) PPC_WEAK_FUNC(sub_82D76BDC);
PPC_FUNC_IMPL(__imp__sub_82D76BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76BE0"))) PPC_WEAK_FUNC(sub_82D76BE0);
PPC_FUNC_IMPL(__imp__sub_82D76BE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BE8"))) PPC_WEAK_FUNC(sub_82D76BE8);
PPC_FUNC_IMPL(__imp__sub_82D76BE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76BF0"))) PPC_WEAK_FUNC(sub_82D76BF0);
PPC_FUNC_IMPL(__imp__sub_82D76BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76C00"))) PPC_WEAK_FUNC(sub_82D76C00);
PPC_FUNC_IMPL(__imp__sub_82D76C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D76C08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d76c60
	if (ctx.cr6.eq) goto loc_82D76C60;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D76C60:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r27,r3,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d76c94
	if (ctx.cr6.eq) goto loc_82D76C94;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76C78;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D76C94:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d76cbc
	if (ctx.cr6.gt) goto loc_82D76CBC;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d76cc0
	if (!ctx.cr6.gt) goto loc_82D76CC0;
loc_82D76CBC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82D76CC0:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D76CC4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d76cf0
	if (ctx.cr6.eq) goto loc_82D76CF0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x82d76cf4
	goto loc_82D76CF4;
loc_82D76CF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D76CF4:
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d76d0c
	if (!ctx.cr6.eq) goto loc_82D76D0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D76D0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D76D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d76eb0
	if (ctx.cr6.eq) goto loc_82D76EB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d76eb0
	if (!ctx.cr6.gt) goto loc_82D76EB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D76D40:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r3,7(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r3,9(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r5,11(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r5,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r5.u8);
	// stb r4,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r4.u8);
	// stb r6,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r6.u8);
	// stb r3,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lbz r4,13(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r6,15(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r6,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// stb r5,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r5.u8);
	// stb r7,15(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15, ctx.r7.u8);
	// stb r4,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lbz r6,17(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r8,19(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// stb r7,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r7.u8);
	// stb r3,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r3.u8);
	// stb r6,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// lbz r3,22(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r4,23(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// stb r4,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r4.u8);
	// stb r8,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r8.u8);
	// stb r3,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r3.u8);
	// stb r5,23(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,26(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// lbz r4,25(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lbz r6,27(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// stb r6,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// stb r7,27(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27, ctx.r7.u8);
	// stb r5,25(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25, ctx.r5.u8);
	// stb r4,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,30(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// lbz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lbz r6,31(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r8,29(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// stb r3,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, ctx.r3.u8);
	// stb r7,31(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31, ctx.r7.u8);
	// stb r6,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r6.u8);
	// stb r8,30(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30, ctx.r8.u8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82d76d40
	if (ctx.cr6.lt) goto loc_82D76D40;
loc_82D76EB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D76EBC"))) PPC_WEAK_FUNC(sub_82D76EBC);
PPC_FUNC_IMPL(__imp__sub_82D76EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76EC0"))) PPC_WEAK_FUNC(sub_82D76EC0);
PPC_FUNC_IMPL(__imp__sub_82D76EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1836
	ctx.r9.s64 = ctx.r10.s64 + -1836;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76EDC"))) PPC_WEAK_FUNC(sub_82D76EDC);
PPC_FUNC_IMPL(__imp__sub_82D76EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D76EE0"))) PPC_WEAK_FUNC(sub_82D76EE0);
PPC_FUNC_IMPL(__imp__sub_82D76EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76EE8"))) PPC_WEAK_FUNC(sub_82D76EE8);
PPC_FUNC_IMPL(__imp__sub_82D76EE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76EF0"))) PPC_WEAK_FUNC(sub_82D76EF0);
PPC_FUNC_IMPL(__imp__sub_82D76EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D76F08"))) PPC_WEAK_FUNC(sub_82D76F08);
PPC_FUNC_IMPL(__imp__sub_82D76F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82D76F10;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d70a90
	ctx.lr = 0x82D76F28;
	sub_82D70A90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d77034
	if (!ctx.cr6.gt) goto loc_82D77034;
	// clrlwi r26,r27,24
	ctx.r26.u64 = ctx.r27.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D76F40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D76F54:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d76f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D76F54;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77010
	if (ctx.cr6.eq) goto loc_82D77010;
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r25,90(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r24,93(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r23,97(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r22,81(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r21,83(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r20,85(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r19,87(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r18,89(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r17,91(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r16,94(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r15,98(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// stb r21,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r21.u8);
	// stb r20,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r20.u8);
	// stb r19,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r19.u8);
	// stb r18,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r18.u8);
	// stb r17,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r17.u8);
	// stb r16,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r16.u8);
	// stb r15,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r15.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// stb r25,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r25.u8);
	// stb r24,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r24.u8);
	// stb r23,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r23.u8);
loc_82D77010:
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d60758
	ctx.lr = 0x82D77020;
	sub_82D60758(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d76f40
	if (ctx.cr6.lt) goto loc_82D76F40;
loc_82D77034:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d70b50
	ctx.lr = 0x82D77044;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D77054;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D77064;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D77074;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D77084;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D77094;
	sub_82D70B50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D770A0"))) PPC_WEAK_FUNC(sub_82D770A0);
PPC_FUNC_IMPL(__imp__sub_82D770A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D770A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D770CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77100
	if (ctx.cr6.eq) goto loc_82D77100;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D77100:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82d7713c
	if (ctx.cr6.eq) goto loc_82D7713C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D77120;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D7713C:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d7716c
	if (ctx.cr6.gt) goto loc_82D7716C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d77170
	if (!ctx.cr6.gt) goto loc_82D77170;
loc_82D7716C:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82D77170:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D77174;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7718C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d771a0
	if (ctx.cr6.eq) goto loc_82D771A0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x82d771a4
	goto loc_82D771A4;
loc_82D771A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D771A4:
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d771bc
	if (!ctx.cr6.eq) goto loc_82D771BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D771BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D771D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77300
	if (ctx.cr6.eq) goto loc_82D77300;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d77300
	if (!ctx.cr6.gt) goto loc_82D77300;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D771F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// lbz r6,7(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// stb r7,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r4,9(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r4,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r4.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// lbz r3,10(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r8,11(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r8,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r8.u8);
	// stb r3,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lbz r4,13(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r6,15(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r6,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// stb r5,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r5.u8);
	// stb r7,15(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15, ctx.r7.u8);
	// stb r4,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lbz r6,17(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r8,19(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// stb r7,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r7.u8);
	// stb r3,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r3.u8);
	// stb r6,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r6.u8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82d771f0
	if (ctx.cr6.lt) goto loc_82D771F0;
loc_82D77300:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77340
	if (ctx.cr6.eq) goto loc_82D77340;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D77340:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7735C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77388
	if (ctx.cr6.eq) goto loc_82D77388;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D77388:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D773A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d773d0
	if (ctx.cr6.eq) goto loc_82D773D0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D773D0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D773EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77418
	if (ctx.cr6.eq) goto loc_82D77418;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D77418:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77460
	if (ctx.cr6.eq) goto loc_82D77460;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D77460:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7747C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d774a8
	if (ctx.cr6.eq) goto loc_82D774A8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D774A8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D774BC"))) PPC_WEAK_FUNC(sub_82D774BC);
PPC_FUNC_IMPL(__imp__sub_82D774BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D774C0"))) PPC_WEAK_FUNC(sub_82D774C0);
PPC_FUNC_IMPL(__imp__sub_82D774C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D774C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,20(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,16(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bne cr6,0x82d7759c
	if (!ctx.cr6.eq) goto loc_82D7759C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D7759C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r4,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r4.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82d774c0
	ctx.lr = 0x82D775BC;
	sub_82D774C0(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x82d775e4
	if (!ctx.cr6.eq) goto loc_82D775E4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82D775E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d774c0
	ctx.lr = 0x82D775F0;
	sub_82D774C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D77604"))) PPC_WEAK_FUNC(sub_82D77604);
PPC_FUNC_IMPL(__imp__sub_82D77604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D77608"))) PPC_WEAK_FUNC(sub_82D77608);
PPC_FUNC_IMPL(__imp__sub_82D77608) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1804
	ctx.r9.s64 = ctx.r10.s64 + -1804;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D77624"))) PPC_WEAK_FUNC(sub_82D77624);
PPC_FUNC_IMPL(__imp__sub_82D77624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D77628"))) PPC_WEAK_FUNC(sub_82D77628);
PPC_FUNC_IMPL(__imp__sub_82D77628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D77630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d77650
	if (!ctx.cr6.eq) goto loc_82D77650;
loc_82D77644:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D77650:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d77644
	if (!ctx.cr6.eq) goto loc_82D77644;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d7771c
	if (ctx.cr6.eq) goto loc_82D7771C;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d776a8
	if (ctx.cr6.eq) goto loc_82D776A8;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D7768C;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D776A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_82D776A8:
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d776d8
	if (ctx.cr6.gt) goto loc_82D776D8;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d776dc
	if (!ctx.cr6.gt) goto loc_82D776DC;
loc_82D776D8:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82D776DC:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D776E0;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D776F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7770c
	if (ctx.cr6.eq) goto loc_82D7770C;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x82d77710
	goto loc_82D77710;
loc_82D7770C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D77710:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77644
	if (ctx.cr6.eq) goto loc_82D77644;
loc_82D7771C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d774c0
	ctx.lr = 0x82D77738;
	sub_82D774C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D77744"))) PPC_WEAK_FUNC(sub_82D77744);
PPC_FUNC_IMPL(__imp__sub_82D77744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D77748"))) PPC_WEAK_FUNC(sub_82D77748);
PPC_FUNC_IMPL(__imp__sub_82D77748) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D77750"))) PPC_WEAK_FUNC(sub_82D77750);
PPC_FUNC_IMPL(__imp__sub_82D77750) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D77760"))) PPC_WEAK_FUNC(sub_82D77760);
PPC_FUNC_IMPL(__imp__sub_82D77760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D77778"))) PPC_WEAK_FUNC(sub_82D77778);
PPC_FUNC_IMPL(__imp__sub_82D77778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D77780;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D777A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d777d8
	if (ctx.cr6.eq) goto loc_82D777D8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D777D8:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82d77814
	if (ctx.cr6.eq) goto loc_82D77814;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D777F8;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7780C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D77814:
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d77844
	if (ctx.cr6.gt) goto loc_82D77844;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d77848
	if (!ctx.cr6.gt) goto loc_82D77848;
loc_82D77844:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82D77848:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D7784C;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d77878
	if (ctx.cr6.eq) goto loc_82D77878;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x82d7787c
	goto loc_82D7787C;
loc_82D77878:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D7787C:
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d77894
	if (!ctx.cr6.eq) goto loc_82D77894;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D77894:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D778AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d77a64
	if (ctx.cr6.eq) goto loc_82D77A64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d77a64
	if (!ctx.cr6.gt) goto loc_82D77A64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D778C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r3,7(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r8,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r8.u8);
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r3,9(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r5,11(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r5,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r5.u8);
	// stb r4,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r4.u8);
	// stb r6,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r6.u8);
	// stb r3,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lbz r4,13(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r6,15(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r6,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// stb r5,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r5.u8);
	// stb r7,15(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15, ctx.r7.u8);
	// stb r4,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lbz r6,17(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r8,19(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// stb r7,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r7.u8);
	// stb r3,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r3.u8);
	// stb r6,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// lbz r3,22(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r4,23(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// stb r4,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r4.u8);
	// stb r8,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r8.u8);
	// stb r3,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r3.u8);
	// stb r5,23(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,26(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// lbz r4,25(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lbz r6,27(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// stb r6,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// stb r7,27(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27, ctx.r7.u8);
	// stb r5,25(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25, ctx.r5.u8);
	// stb r4,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,30(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// lbz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r6,31(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r8,29(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// stb r3,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, ctx.r3.u8);
	// stb r7,31(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31, ctx.r7.u8);
	// stb r6,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r6.u8);
	// stb r8,30(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30, ctx.r8.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,34(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lbz r4,33(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lbz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// lbz r8,35(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r8,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r8.u8);
	// stb r3,35(r10)
	PPC_STORE_U8(ctx.r10.u32 + 35, ctx.r3.u8);
	// stb r5,33(r10)
	PPC_STORE_U8(ctx.r10.u32 + 33, ctx.r5.u8);
	// stb r4,34(r10)
	PPC_STORE_U8(ctx.r10.u32 + 34, ctx.r4.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82d778c8
	if (ctx.cr6.lt) goto loc_82D778C8;
loc_82D77A64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D77A70"))) PPC_WEAK_FUNC(sub_82D77A70);
PPC_FUNC_IMPL(__imp__sub_82D77A70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1772
	ctx.r9.s64 = ctx.r10.s64 + -1772;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D77A8C"))) PPC_WEAK_FUNC(sub_82D77A8C);
PPC_FUNC_IMPL(__imp__sub_82D77A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D77A90"))) PPC_WEAK_FUNC(sub_82D77A90);
PPC_FUNC_IMPL(__imp__sub_82D77A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D77A98;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d77ab8
	if (!ctx.cr6.eq) goto loc_82D77AB8;
loc_82D77AAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D77AB8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d77aac
	if (!ctx.cr6.eq) goto loc_82D77AAC;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d77b04
	if (ctx.cr6.eq) goto loc_82D77B04;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D77AE8;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D77B04:
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// li r27,-5
	ctx.r27.s64 = -5;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d77b38
	if (ctx.cr6.gt) goto loc_82D77B38;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d77b3c
	if (!ctx.cr6.gt) goto loc_82D77B3C;
loc_82D77B38:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82D77B3C:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D77B40;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d77aac
	if (ctx.cr6.eq) goto loc_82D77AAC;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82d77aac
	if (ctx.cr6.eq) goto loc_82D77AAC;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d774c0
	ctx.lr = 0x82D77B8C;
	sub_82D774C0(ctx, base);
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d77bb8
	if (ctx.cr6.gt) goto loc_82D77BB8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82d77bb8
	if (ctx.cr6.gt) goto loc_82D77BB8;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82D77BB8:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D77BBC;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D77BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d77be8
	if (ctx.cr6.eq) goto loc_82D77BE8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x82d77bec
	goto loc_82D77BEC;
loc_82D77BE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D77BEC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d77aac
	if (ctx.cr6.eq) goto loc_82D77AAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,-18268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// beq cr6,0x82d77cac
	if (ctx.cr6.eq) goto loc_82D77CAC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
loc_82D77C28:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82d77c3c
	if (!ctx.cr6.gt) goto loc_82D77C3C;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77C3C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82d77c50
	if (!ctx.cr6.gt) goto loc_82D77C50;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77C50:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82d77c64
	if (!ctx.cr6.gt) goto loc_82D77C64;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77C64:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x82d77c78
	if (!ctx.cr6.gt) goto loc_82D77C78;
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77C78:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x82d77c8c
	if (!ctx.cr6.gt) goto loc_82D77C8C;
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77C8C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// ble cr6,0x82d77ca0
	if (!ctx.cr6.gt) goto loc_82D77CA0;
	// fabs f7,f0
	ctx.f7.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D77CA0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x82d77c28
	if (!ctx.cr0.eq) goto loc_82D77C28;
loc_82D77CAC:
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r11,15
	ctx.r11.s64 = 15;
	// lbz r24,19476(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19476);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82d77cc4
	if (!ctx.cr6.eq) goto loc_82D77CC4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82D77CC4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-16484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d77ce4
	if (ctx.cr6.eq) goto loc_82D77CE4;
	// fdivs f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// b 0x82d77ce8
	goto loc_82D77CE8;
loc_82D77CE4:
	// fmr f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f0.f64;
loc_82D77CE8:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82d77cf8
	if (ctx.cr6.eq) goto loc_82D77CF8;
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// b 0x82d77cfc
	goto loc_82D77CFC;
loc_82D77CF8:
	// fmr f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64;
loc_82D77CFC:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82d77d0c
	if (ctx.cr6.eq) goto loc_82D77D0C;
	// fdivs f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// b 0x82d77d10
	goto loc_82D77D10;
loc_82D77D0C:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64;
loc_82D77D10:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x82d77d3c
	if (ctx.cr6.eq) goto loc_82D77D3C;
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// b 0x82d77d40
	goto loc_82D77D40;
loc_82D77D3C:
	// fmr f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64;
loc_82D77D40:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// beq cr6,0x82d77d6c
	if (ctx.cr6.eq) goto loc_82D77D6C;
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// b 0x82d77d70
	goto loc_82D77D70;
loc_82D77D6C:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_82D77D70:
	// fcmpu cr6,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// beq cr6,0x82d77d9c
	if (ctx.cr6.eq) goto loc_82D77D9C;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// b 0x82d77da0
	goto loc_82D77DA0;
loc_82D77D9C:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_82D77DA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// lfs f12,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82d77db8
	if (ctx.cr6.eq) goto loc_82D77DB8;
	// fdivs f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f4.f64));
	// b 0x82d77dbc
	goto loc_82D77DBC;
loc_82D77DB8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D77DBC:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// beq cr6,0x82d77dd0
	if (ctx.cr6.eq) goto loc_82D77DD0;
	// fdivs f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// b 0x82d77dd4
	goto loc_82D77DD4;
loc_82D77DD0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D77DD4:
	// stfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// beq cr6,0x82d77de8
	if (ctx.cr6.eq) goto loc_82D77DE8;
	// fdivs f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// b 0x82d77dec
	goto loc_82D77DEC;
loc_82D77DE8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D77DEC:
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x82d77e00
	if (ctx.cr6.eq) goto loc_82D77E00;
	// fdivs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// b 0x82d77e04
	goto loc_82D77E04;
loc_82D77E00:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D77E04:
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82d77e1c
	if (ctx.cr6.eq) goto loc_82D77E1C;
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// b 0x82d77e20
	goto loc_82D77E20;
loc_82D77E1C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D77E20:
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82d77e30
	if (ctx.cr6.eq) goto loc_82D77E30;
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_82D77E30:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7807c
	if (ctx.cr6.eq) goto loc_82D7807C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r22,20
	ctx.r9.s64 = ctx.r22.s64 + 20;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82D77E50:
	// lfs f0,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sthx r10,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// lfs f8,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f7,f8,f5
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r7,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r7.u16);
	// lfs f2,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r4,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r4.u16);
	// lfs f13,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r8,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r8.u16);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r6,94(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r6,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r6.u16);
	// beq cr6,0x82d78034
	if (ctx.cr6.eq) goto loc_82D78034;
	// lfs f0,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f13,-20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fsubs f8,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// subfic r29,r31,-24
	ctx.xer.ca = ctx.r31.u32 <= 4294967272;
	ctx.r29.s64 = -24 - ctx.r31.s64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82D77F70:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r30,r29,r7
	ctx.r30.u64 = ctx.r29.u64 + ctx.r7.u64;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// lhzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
loc_82D77FA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82d77ff0
	if (ctx.cr6.lt) goto loc_82D77FF0;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfsx f8,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bgt cr6,0x82d77ff0
	if (ctx.cr6.gt) goto loc_82D77FF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82d77ffc
	goto loc_82D77FFC;
loc_82D77FF0:
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_82D77FFC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d78014
	if (!ctx.cr6.eq) goto loc_82D78014;
	// li r6,0
	ctx.r6.s64 = 0;
	// sthx r27,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u16);
loc_82D78014:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d77fa4
	if (!ctx.cr6.eq) goto loc_82D77FA4;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82d77f70
	if (!ctx.cr0.eq) goto loc_82D77F70;
loc_82D78034:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d77e50
	if (ctx.cr6.lt) goto loc_82D77E50;
loc_82D7807C:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78080;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r22,-4
	ctx.r4.s64 = ctx.r22.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D780A0"))) PPC_WEAK_FUNC(sub_82D780A0);
PPC_FUNC_IMPL(__imp__sub_82D780A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D780A8"))) PPC_WEAK_FUNC(sub_82D780A8);
PPC_FUNC_IMPL(__imp__sub_82D780A8) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D780B8"))) PPC_WEAK_FUNC(sub_82D780B8);
PPC_FUNC_IMPL(__imp__sub_82D780B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D780D0"))) PPC_WEAK_FUNC(sub_82D780D0);
PPC_FUNC_IMPL(__imp__sub_82D780D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D780D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r28,303(r1)
	PPC_STORE_U8(ctx.r1.u32 + 303, ctx.r28.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d70a90
	ctx.lr = 0x82D780F4;
	sub_82D70A90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d78240
	if (!ctx.cr6.gt) goto loc_82D78240;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D7810C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,6
	ctx.r9.s64 = 6;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82D78120:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82d78120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D78120;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d78218
	if (ctx.cr6.eq) goto loc_82D78218;
	// lbz r28,114(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r27,118(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r8,111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// lbz r7,115(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// lbz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r6,119(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r26,102(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r24,106(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r23,109(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r22,113(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r21,117(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r20,97(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r19,99(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r18,101(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r17,103(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r16,105(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r15,107(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r14,110(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r28,303(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 303);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r6,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r6.u8);
	// stb r9,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r9.u8);
	// stb r20,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r20.u8);
	// stb r19,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r19.u8);
	// stb r18,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r18.u8);
	// stb r17,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r17.u8);
	// stb r16,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r16.u8);
	// stb r15,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r15.u8);
	// stb r14,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r14.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// stb r4,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r4.u8);
	// stb r3,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r3.u8);
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
	// stb r25,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r25.u8);
	// stb r24,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r24.u8);
	// stb r23,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r23.u8);
	// stb r22,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r22.u8);
	// stb r21,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r21.u8);
loc_82D78218:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d60758
	ctx.lr = 0x82D78228;
	sub_82D60758(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82d7810c
	if (ctx.cr6.lt) goto loc_82D7810C;
loc_82D78240:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d70b50
	ctx.lr = 0x82D78250;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D78260;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D78270;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D78280;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D78290;
	sub_82D70B50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d70b50
	ctx.lr = 0x82D782A0;
	sub_82D70B50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D782AC"))) PPC_WEAK_FUNC(sub_82D782AC);
PPC_FUNC_IMPL(__imp__sub_82D782AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D782B0"))) PPC_WEAK_FUNC(sub_82D782B0);
PPC_FUNC_IMPL(__imp__sub_82D782B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D782B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D782DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d78310
	if (ctx.cr6.eq) goto loc_82D78310;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D78310:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82d7834c
	if (ctx.cr6.eq) goto loc_82D7834C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78330;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D7834C:
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d7837c
	if (ctx.cr6.gt) goto loc_82D7837C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d78380
	if (!ctx.cr6.gt) goto loc_82D78380;
loc_82D7837C:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82D78380:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78384;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7839C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d783b0
	if (ctx.cr6.eq) goto loc_82D783B0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x82d783b4
	goto loc_82D783B4;
loc_82D783B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82D783B4:
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d783cc
	if (!ctx.cr6.eq) goto loc_82D783CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D783CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D783E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d7853c
	if (ctx.cr6.eq) goto loc_82D7853C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d7853c
	if (!ctx.cr6.gt) goto loc_82D7853C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D78400:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// lbz r6,7(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// stb r7,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r7.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r4,9(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r4,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r4.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// lbz r3,10(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r8,11(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r8,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r8.u8);
	// stb r3,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lbz r4,13(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r6,15(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r6,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// stb r5,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r5.u8);
	// stb r7,15(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15, ctx.r7.u8);
	// stb r4,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r4.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lbz r6,17(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r8,19(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// stb r7,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r7.u8);
	// stb r3,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r3.u8);
	// stb r6,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, ctx.r6.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// lbz r3,22(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lbz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r4,23(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// stb r5,23(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23, ctx.r5.u8);
	// stb r4,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r4.u8);
	// stb r3,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r3.u8);
	// stb r8,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r8.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82d78400
	if (ctx.cr6.lt) goto loc_82D78400;
loc_82D7853C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d7857c
	if (ctx.cr6.eq) goto loc_82D7857C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D7857C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d785c4
	if (ctx.cr6.eq) goto loc_82D785C4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D785C4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D785E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d7860c
	if (ctx.cr6.eq) goto loc_82D7860C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D7860C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d78654
	if (ctx.cr6.eq) goto loc_82D78654;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D78654:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d7869c
	if (ctx.cr6.eq) goto loc_82D7869C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D7869C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D786B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82d786e4
	if (ctx.cr6.eq) goto loc_82D786E4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82D786E4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D786F8"))) PPC_WEAK_FUNC(sub_82D786F8);
PPC_FUNC_IMPL(__imp__sub_82D786F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82D78700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r27,r6,40
	ctx.r27.s64 = ctx.r6.s64 + 40;
	// bne cr6,0x82d78728
	if (!ctx.cr6.eq) goto loc_82D78728;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82D78728:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f0,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f2,f1
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d787e0
	if (ctx.cr6.eq) goto loc_82D787E0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d787e0
	if (!ctx.cr6.eq) goto loc_82D787E0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82D787E0:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d7880c
	if (!ctx.cr6.eq) goto loc_82D7880C;
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x82d78830
	goto loc_82D78830;
loc_82D7880C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// ori r9,r11,57005
	ctx.r9.u64 = ctx.r11.u64 | 57005;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d786f8
	ctx.lr = 0x82D78830;
	sub_82D786F8(ctx, base);
loc_82D78830:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d78854
	if (!ctx.cr6.eq) goto loc_82D78854;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x82d78870
	goto loc_82D78870;
loc_82D78854:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82d786f8
	ctx.lr = 0x82D78870;
	sub_82D786F8(ctx, base);
loc_82D78870:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d78890
	if (ctx.cr6.eq) goto loc_82D78890;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82D78890:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D788A0"))) PPC_WEAK_FUNC(sub_82D788A0);
PPC_FUNC_IMPL(__imp__sub_82D788A0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1868
	ctx.r10.s64 = ctx.r11.s64 + -1868;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d788f0
	if (ctx.cr6.eq) goto loc_82D788F0;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D788D4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D788E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D788F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1900
	ctx.r10.s64 = ctx.r11.s64 + -1900;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D78914"))) PPC_WEAK_FUNC(sub_82D78914);
PPC_FUNC_IMPL(__imp__sub_82D78914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D78918"))) PPC_WEAK_FUNC(sub_82D78918);
PPC_FUNC_IMPL(__imp__sub_82D78918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82D78920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d78940
	if (!ctx.cr6.eq) goto loc_82D78940;
loc_82D78934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82D78940:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d78934
	if (!ctx.cr6.eq) goto loc_82D78934;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82d78a08
	if (ctx.cr6.eq) goto loc_82D78A08;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82d7899c
	if (ctx.cr6.eq) goto loc_82D7899C;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78980;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_82D7899C:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d789c4
	if (ctx.cr6.gt) goto loc_82D789C4;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82d789c8
	if (!ctx.cr6.gt) goto loc_82D789C8;
loc_82D789C4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82D789C8:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D789CC;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D789E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d789f8
	if (ctx.cr6.eq) goto loc_82D789F8;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x82d789fc
	goto loc_82D789FC;
loc_82D789F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D789FC:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d78934
	if (ctx.cr6.eq) goto loc_82D78934;
loc_82D78A08:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d786f8
	ctx.lr = 0x82D78A24;
	sub_82D786F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D78A30"))) PPC_WEAK_FUNC(sub_82D78A30);
PPC_FUNC_IMPL(__imp__sub_82D78A30) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1836
	ctx.r10.s64 = ctx.r11.s64 + -1836;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d78a80
	if (ctx.cr6.eq) goto loc_82D78A80;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78A64;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D78A80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1900
	ctx.r10.s64 = ctx.r11.s64 + -1900;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D78AA4"))) PPC_WEAK_FUNC(sub_82D78AA4);
PPC_FUNC_IMPL(__imp__sub_82D78AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D78AA8"))) PPC_WEAK_FUNC(sub_82D78AA8);
PPC_FUNC_IMPL(__imp__sub_82D78AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82D78AB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82d78ad0
	if (!ctx.cr6.eq) goto loc_82D78AD0;
loc_82D78AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82D78AD0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82d78ac4
	if (!ctx.cr6.eq) goto loc_82D78AC4;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d78b20
	if (ctx.cr6.eq) goto loc_82D78B20;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78B04;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D78B20:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r27,-5
	ctx.r27.s64 = -5;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d78b4c
	if (ctx.cr6.gt) goto loc_82D78B4C;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82d78b50
	if (!ctx.cr6.gt) goto loc_82D78B50;
loc_82D78B4C:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82D78B50:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78B54;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d78ac4
	if (ctx.cr6.eq) goto loc_82D78AC4;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82d78ac4
	if (ctx.cr6.eq) goto loc_82D78AC4;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d786f8
	ctx.lr = 0x82D78BA0;
	sub_82D786F8(ctx, base);
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82d78bcc
	if (ctx.cr6.gt) goto loc_82D78BCC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82d78bcc
	if (ctx.cr6.gt) goto loc_82D78BCC;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82D78BCC:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D78BD0;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D78BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d78bfc
	if (ctx.cr6.eq) goto loc_82D78BFC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x82d78c00
	goto loc_82D78C00;
loc_82D78BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D78C00:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d78ac4
	if (ctx.cr6.eq) goto loc_82D78AC4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,-18268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// beq cr6,0x82d78cc0
	if (ctx.cr6.eq) goto loc_82D78CC0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
loc_82D78C3C:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82d78c50
	if (!ctx.cr6.gt) goto loc_82D78C50;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78C50:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82d78c64
	if (!ctx.cr6.gt) goto loc_82D78C64;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78C64:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82d78c78
	if (!ctx.cr6.gt) goto loc_82D78C78;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78C78:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x82d78c8c
	if (!ctx.cr6.gt) goto loc_82D78C8C;
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78C8C:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x82d78ca0
	if (!ctx.cr6.gt) goto loc_82D78CA0;
	// fabs f8,f0
	ctx.f8.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78CA0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// ble cr6,0x82d78cb4
	if (!ctx.cr6.gt) goto loc_82D78CB4;
	// fabs f7,f0
	ctx.f7.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_82D78CB4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x82d78c3c
	if (!ctx.cr0.eq) goto loc_82D78C3C;
loc_82D78CC0:
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r11,15
	ctx.r11.s64 = 15;
	// lbz r24,19476(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19476);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82d78cd8
	if (!ctx.cr6.eq) goto loc_82D78CD8;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82D78CD8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-16484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82d78cf8
	if (ctx.cr6.eq) goto loc_82D78CF8;
	// fdivs f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// b 0x82d78cfc
	goto loc_82D78CFC;
loc_82D78CF8:
	// fmr f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f0.f64;
loc_82D78CFC:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82d78d0c
	if (ctx.cr6.eq) goto loc_82D78D0C;
	// fdivs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// b 0x82d78d10
	goto loc_82D78D10;
loc_82D78D0C:
	// fmr f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64;
loc_82D78D10:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82d78d20
	if (ctx.cr6.eq) goto loc_82D78D20;
	// fdivs f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// b 0x82d78d24
	goto loc_82D78D24;
loc_82D78D20:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64;
loc_82D78D24:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x82d78d50
	if (ctx.cr6.eq) goto loc_82D78D50;
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// b 0x82d78d54
	goto loc_82D78D54;
loc_82D78D50:
	// fmr f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64;
loc_82D78D54:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// beq cr6,0x82d78d80
	if (ctx.cr6.eq) goto loc_82D78D80;
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// b 0x82d78d84
	goto loc_82D78D84;
loc_82D78D80:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_82D78D84:
	// fcmpu cr6,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// beq cr6,0x82d78db0
	if (ctx.cr6.eq) goto loc_82D78DB0;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// b 0x82d78db4
	goto loc_82D78DB4;
loc_82D78DB0:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_82D78DB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f4,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// lfs f12,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82d78dcc
	if (ctx.cr6.eq) goto loc_82D78DCC;
	// fdivs f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f4.f64));
	// b 0x82d78dd0
	goto loc_82D78DD0;
loc_82D78DCC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D78DD0:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// beq cr6,0x82d78de4
	if (ctx.cr6.eq) goto loc_82D78DE4;
	// fdivs f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// b 0x82d78de8
	goto loc_82D78DE8;
loc_82D78DE4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D78DE8:
	// stfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// beq cr6,0x82d78dfc
	if (ctx.cr6.eq) goto loc_82D78DFC;
	// fdivs f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// b 0x82d78e00
	goto loc_82D78E00;
loc_82D78DFC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D78E00:
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// beq cr6,0x82d78e14
	if (ctx.cr6.eq) goto loc_82D78E14;
	// fdivs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// b 0x82d78e18
	goto loc_82D78E18;
loc_82D78E14:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D78E18:
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82d78e30
	if (ctx.cr6.eq) goto loc_82D78E30;
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// b 0x82d78e34
	goto loc_82D78E34;
loc_82D78E30:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82D78E34:
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82d78e44
	if (ctx.cr6.eq) goto loc_82D78E44;
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_82D78E44:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d79080
	if (ctx.cr6.eq) goto loc_82D79080;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r22,20
	ctx.r9.s64 = ctx.r22.s64 + 20;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82D78E64:
	// lfs f0,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sthx r10,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u16);
	// lfs f8,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f7,f8,f5
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r7,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r7.u16);
	// lfs f2,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f1,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r4,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r4.u16);
	// lfs f13,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r8,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r8.u16);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r6,94(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r6,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r6.u16);
	// beq cr6,0x82d79048
	if (ctx.cr6.eq) goto loc_82D79048;
	// lfs f0,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f13,-20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fsubs f8,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// subfic r29,r31,-24
	ctx.xer.ca = ctx.r31.u32 <= 4294967272;
	ctx.r29.s64 = -24 - ctx.r31.s64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82D78F84:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r30,r29,r7
	ctx.r30.u64 = ctx.r29.u64 + ctx.r7.u64;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// lhzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
loc_82D78FB8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82d79004
	if (ctx.cr6.lt) goto loc_82D79004;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfsx f8,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bgt cr6,0x82d79004
	if (ctx.cr6.gt) goto loc_82D79004;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82d79010
	goto loc_82D79010;
loc_82D79004:
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
loc_82D79010:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82d79028
	if (!ctx.cr6.eq) goto loc_82D79028;
	// li r6,0
	ctx.r6.s64 = 0;
	// sthx r27,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u16);
loc_82D79028:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82d78fb8
	if (!ctx.cr6.eq) goto loc_82D78FB8;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82d78f84
	if (!ctx.cr0.eq) goto loc_82D78F84;
loc_82D79048:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r7,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// addi r5,r5,20
	ctx.r5.s64 = ctx.r5.s64 + 20;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82d78e64
	if (ctx.cr6.lt) goto loc_82D78E64;
loc_82D79080:
	// bl 0x82d5f3b8
	ctx.lr = 0x82D79084;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r22,-4
	ctx.r4.s64 = ctx.r22.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D790A4"))) PPC_WEAK_FUNC(sub_82D790A4);
PPC_FUNC_IMPL(__imp__sub_82D790A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D790A8"))) PPC_WEAK_FUNC(sub_82D790A8);
PPC_FUNC_IMPL(__imp__sub_82D790A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1804
	ctx.r10.s64 = ctx.r11.s64 + -1804;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d790f8
	if (ctx.cr6.eq) goto loc_82D790F8;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D790DC;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D790F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D790F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1900
	ctx.r10.s64 = ctx.r11.s64 + -1900;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7911C"))) PPC_WEAK_FUNC(sub_82D7911C);
PPC_FUNC_IMPL(__imp__sub_82D7911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79120"))) PPC_WEAK_FUNC(sub_82D79120);
PPC_FUNC_IMPL(__imp__sub_82D79120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D79128;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d70a90
	ctx.lr = 0x82D79148;
	sub_82D70A90(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d793b4
	if (!ctx.cr6.gt) goto loc_82D793B4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82D7916C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// beq cr6,0x82d79388
	if (ctx.cr6.eq) goto loc_82D79388;
	// lbz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// lbz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r14,113(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lbz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lbz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r10,119(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r9,123(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r8,127(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r7,131(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// lbz r6,135(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// lbz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r14,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r14.u8);
	// lbz r14,117(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r16,87(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r17,86(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r18,85(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,139(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 139);
	// stb r14,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r14.u8);
	// lbz r14,121(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lbz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r20,83(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r21,82(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r22,81(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r14,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r14.u8);
	// lbz r14,125(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lbz r4,143(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r3,147(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r31,114(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r14,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r14.u8);
	// lbz r14,129(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r30,118(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r29,122(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r28,126(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r27,130(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// stb r14,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r14.u8);
	// lbz r14,133(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// lbz r26,134(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// lbz r25,138(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// lbz r24,142(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r14,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r14.u8);
	// lbz r14,137(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// stb r8,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r8.u8);
	// stb r7,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r7.u8);
	// stb r14,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r14.u8);
	// lbz r14,141(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// stb r6,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r6.u8);
	// stb r5,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r5.u8);
	// stb r4,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r4.u8);
	// stb r3,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r3.u8);
	// stb r14,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r14.u8);
	// lbz r14,145(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// stb r23,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r23.u8);
	// stb r22,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r22.u8);
	// stb r21,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r21.u8);
	// stb r20,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r20.u8);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// lbz r14,146(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// stb r19,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r19.u8);
	// stb r18,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r18.u8);
	// stb r17,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r17.u8);
	// stb r16,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r16.u8);
	// stb r15,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r15.u8);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,85(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r31.u8);
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r30.u8);
	// stb r29,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r29.u8);
	// stb r28,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r28.u8);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stb r27,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r27.u8);
	// stb r26,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r26.u8);
	// stb r25,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r25.u8);
	// stb r24,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r24.u8);
	// stb r14,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r14.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r10,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r10.u8);
	// stb r9,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r9.u8);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r7,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r7.u8);
	// stb r6,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r6.u8);
	// stb r5,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r5.u8);
	// stb r4,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r4.u8);
	// stb r3,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r3.u8);
loc_82D79388:
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d60758
	ctx.lr = 0x82D79398;
	sub_82D60758(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// blt cr6,0x82d7916c
	if (ctx.cr6.lt) goto loc_82D7916C;
loc_82D793B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D793C0"))) PPC_WEAK_FUNC(sub_82D793C0);
PPC_FUNC_IMPL(__imp__sub_82D793C0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1772
	ctx.r10.s64 = ctx.r11.s64 + -1772;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82d79410
	if (ctx.cr6.eq) goto loc_82D79410;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D793F4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82D79410:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1900
	ctx.r10.s64 = ctx.r11.s64 + -1900;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D79434"))) PPC_WEAK_FUNC(sub_82D79434);
PPC_FUNC_IMPL(__imp__sub_82D79434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79438"))) PPC_WEAK_FUNC(sub_82D79438);
PPC_FUNC_IMPL(__imp__sub_82D79438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82D79440;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d70a90
	ctx.lr = 0x82D79460;
	sub_82D70A90(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82d79684
	if (!ctx.cr6.gt) goto loc_82D79684;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82D79484:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// beq cr6,0x82d79658
	if (ctx.cr6.eq) goto loc_82D79658;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lbz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lbz r18,141(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// lbz r22,125(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lbz r21,129(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r20,133(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r31,130(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r30,134(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// lbz r29,138(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// stb r18,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r18.u8);
	// stb r20,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r20.u8);
	// stb r21,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r21.u8);
	// lbz r19,137(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r19.u8);
	// lbz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// lbz r20,82(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r21,83(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r29,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r29.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// lbz r7,135(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// lbz r27,139(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 139);
	// lbz r26,143(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r28,142(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// stb r6,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r6.u8);
	// stb r5,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r5.u8);
	// stb r4,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// lbz r3,115(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r10,123(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r9,127(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r8,131(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// lbz r19,81(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r17,114(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r16,118(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r15,122(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r14,126(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r5,83(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r24,117(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r23,121(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// stb r7,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r7.u8);
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// stb r26,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r26.u8);
	// stb r18,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r18.u8);
	// stb r19,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r19.u8);
	// stb r20,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r20.u8);
	// stb r21,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r21.u8);
	// stb r22,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r22.u8);
	// stb r17,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r17.u8);
	// stb r16,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r16.u8);
	// stb r15,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r15.u8);
	// stb r14,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r14.u8);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// stb r5,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r5.u8);
	// stb r4,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r4.u8);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r3,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r3.u8);
	// stb r25,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r25.u8);
	// stb r24,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r24.u8);
	// stb r23,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r23.u8);
	// stb r11,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r11.u8);
	// stb r10,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// stb r9,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r9.u8);
	// stb r8,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r8.u8);
	// stb r7,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r7.u8);
loc_82D79658:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d60758
	ctx.lr = 0x82D79668;
	sub_82D60758(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// blt cr6,0x82d79484
	if (ctx.cr6.lt) goto loc_82D79484;
loc_82D79684:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D79690"))) PPC_WEAK_FUNC(sub_82D79690);
PPC_FUNC_IMPL(__imp__sub_82D79690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7969C"))) PPC_WEAK_FUNC(sub_82D7969C);
PPC_FUNC_IMPL(__imp__sub_82D7969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D796A0"))) PPC_WEAK_FUNC(sub_82D796A0);
PPC_FUNC_IMPL(__imp__sub_82D796A0) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x82d796c8
	if (ctx.cr6.eq) goto loc_82D796C8;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82D796C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d796e8
	if (ctx.cr6.eq) goto loc_82D796E8;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D796D4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D796E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D796E8:
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

__attribute__((alias("__imp__sub_82D79700"))) PPC_WEAK_FUNC(sub_82D79700);
PPC_FUNC_IMPL(__imp__sub_82D79700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79734"))) PPC_WEAK_FUNC(sub_82D79734);
PPC_FUNC_IMPL(__imp__sub_82D79734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79738"))) PPC_WEAK_FUNC(sub_82D79738);
PPC_FUNC_IMPL(__imp__sub_82D79738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7974C"))) PPC_WEAK_FUNC(sub_82D7974C);
PPC_FUNC_IMPL(__imp__sub_82D7974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79750"))) PPC_WEAK_FUNC(sub_82D79750);
PPC_FUNC_IMPL(__imp__sub_82D79750) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x82d79778
	if (ctx.cr6.eq) goto loc_82D79778;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82D79778:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79798
	if (ctx.cr6.eq) goto loc_82D79798;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D79784;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79798:
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

__attribute__((alias("__imp__sub_82D797B0"))) PPC_WEAK_FUNC(sub_82D797B0);
PPC_FUNC_IMPL(__imp__sub_82D797B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D797C4"))) PPC_WEAK_FUNC(sub_82D797C4);
PPC_FUNC_IMPL(__imp__sub_82D797C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D797C8"))) PPC_WEAK_FUNC(sub_82D797C8);
PPC_FUNC_IMPL(__imp__sub_82D797C8) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x82d797f0
	if (ctx.cr6.eq) goto loc_82D797F0;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82D797F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79810
	if (ctx.cr6.eq) goto loc_82D79810;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D797FC;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79810:
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

__attribute__((alias("__imp__sub_82D79828"))) PPC_WEAK_FUNC(sub_82D79828);
PPC_FUNC_IMPL(__imp__sub_82D79828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79874"))) PPC_WEAK_FUNC(sub_82D79874);
PPC_FUNC_IMPL(__imp__sub_82D79874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79878"))) PPC_WEAK_FUNC(sub_82D79878);
PPC_FUNC_IMPL(__imp__sub_82D79878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7988C"))) PPC_WEAK_FUNC(sub_82D7988C);
PPC_FUNC_IMPL(__imp__sub_82D7988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79890"))) PPC_WEAK_FUNC(sub_82D79890);
PPC_FUNC_IMPL(__imp__sub_82D79890) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x82d798b8
	if (ctx.cr6.eq) goto loc_82D798B8;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_82D798B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d798d8
	if (ctx.cr6.eq) goto loc_82D798D8;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D798C4;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D798D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D798D8:
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

__attribute__((alias("__imp__sub_82D798F0"))) PPC_WEAK_FUNC(sub_82D798F0);
PPC_FUNC_IMPL(__imp__sub_82D798F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79904"))) PPC_WEAK_FUNC(sub_82D79904);
PPC_FUNC_IMPL(__imp__sub_82D79904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79908"))) PPC_WEAK_FUNC(sub_82D79908);
PPC_FUNC_IMPL(__imp__sub_82D79908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7994C"))) PPC_WEAK_FUNC(sub_82D7994C);
PPC_FUNC_IMPL(__imp__sub_82D7994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79950"))) PPC_WEAK_FUNC(sub_82D79950);
PPC_FUNC_IMPL(__imp__sub_82D79950) {
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
	// bl 0x82d788a0
	ctx.lr = 0x82D79970;
	sub_82D788A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79994
	if (ctx.cr6.eq) goto loc_82D79994;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D79980;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79994:
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

__attribute__((alias("__imp__sub_82D799B0"))) PPC_WEAK_FUNC(sub_82D799B0);
PPC_FUNC_IMPL(__imp__sub_82D799B0) {
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
	// bl 0x82d78a30
	ctx.lr = 0x82D799D0;
	sub_82D78A30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d799f4
	if (ctx.cr6.eq) goto loc_82D799F4;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D799E0;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D799F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D799F4:
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

__attribute__((alias("__imp__sub_82D79A10"))) PPC_WEAK_FUNC(sub_82D79A10);
PPC_FUNC_IMPL(__imp__sub_82D79A10) {
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
	// bl 0x82d790a8
	ctx.lr = 0x82D79A30;
	sub_82D790A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79a54
	if (ctx.cr6.eq) goto loc_82D79A54;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D79A40;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79A54:
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

__attribute__((alias("__imp__sub_82D79A70"))) PPC_WEAK_FUNC(sub_82D79A70);
PPC_FUNC_IMPL(__imp__sub_82D79A70) {
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
	// bl 0x82d793c0
	ctx.lr = 0x82D79A90;
	sub_82D793C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d79ab4
	if (ctx.cr6.eq) goto loc_82D79AB4;
	// bl 0x82d5f3b8
	ctx.lr = 0x82D79AA0;
	sub_82D5F3B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D79AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D79AB4:
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

__attribute__((alias("__imp__sub_82D79AD0"))) PPC_WEAK_FUNC(sub_82D79AD0);
PPC_FUNC_IMPL(__imp__sub_82D79AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1720
	ctx.r9.s64 = ctx.r10.s64 + -1720;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79AF0"))) PPC_WEAK_FUNC(sub_82D79AF0);
PPC_FUNC_IMPL(__imp__sub_82D79AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-1720
	ctx.r10.s64 = ctx.r11.s64 + -1720;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79B00"))) PPC_WEAK_FUNC(sub_82D79B00);
PPC_FUNC_IMPL(__imp__sub_82D79B00) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-1720
	ctx.r9.s64 = ctx.r11.s64 + -1720;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d79b34
	if (ctx.cr6.eq) goto loc_82D79B34;
	// bl 0x822990f0
	ctx.lr = 0x82D79B30;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D79B34:
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

__attribute__((alias("__imp__sub_82D79B48"))) PPC_WEAK_FUNC(sub_82D79B48);
PPC_FUNC_IMPL(__imp__sub_82D79B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// ble cr6,0x82d79b60
	if (!ctx.cr6.gt) goto loc_82D79B60;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x82d79b64
	goto loc_82D79B64;
loc_82D79B60:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_82D79B64:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d79b78
	if (!ctx.cr6.gt) goto loc_82D79B78;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
loc_82D79B78:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79B88"))) PPC_WEAK_FUNC(sub_82D79B88);
PPC_FUNC_IMPL(__imp__sub_82D79B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79B8C"))) PPC_WEAK_FUNC(sub_82D79B8C);
PPC_FUNC_IMPL(__imp__sub_82D79B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79B90"))) PPC_WEAK_FUNC(sub_82D79B90);
PPC_FUNC_IMPL(__imp__sub_82D79B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79B94"))) PPC_WEAK_FUNC(sub_82D79B94);
PPC_FUNC_IMPL(__imp__sub_82D79B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79B98"))) PPC_WEAK_FUNC(sub_82D79B98);
PPC_FUNC_IMPL(__imp__sub_82D79B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79BFC"))) PPC_WEAK_FUNC(sub_82D79BFC);
PPC_FUNC_IMPL(__imp__sub_82D79BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79C00"))) PPC_WEAK_FUNC(sub_82D79C00);
PPC_FUNC_IMPL(__imp__sub_82D79C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// blt cr6,0x82d79c24
	if (ctx.cr6.lt) goto loc_82D79C24;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82D79C24:
	// fcmpu cr6,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// blt cr6,0x82d79c30
	if (ctx.cr6.lt) goto loc_82D79C30;
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
loc_82D79C30:
	// fcmpu cr6,f7,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// blt cr6,0x82d79c3c
	if (ctx.cr6.lt) goto loc_82D79C3C;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
loc_82D79C3C:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x82d79c64
	if (ctx.cr6.gt) goto loc_82D79C64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82D79C64:
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x82d79c70
	if (ctx.cr6.gt) goto loc_82D79C70;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
loc_82D79C70:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bgt cr6,0x82d79c7c
	if (ctx.cr6.gt) goto loc_82D79C7C;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_82D79C7C:
	// stfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79C98"))) PPC_WEAK_FUNC(sub_82D79C98);
PPC_FUNC_IMPL(__imp__sub_82D79C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82d79ce4
	if (!ctx.cr6.gt) goto loc_82D79CE4;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x82d79ce8
	goto loc_82D79CE8;
loc_82D79CE4:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
loc_82D79CE8:
	// fcmpu cr6,f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bgt cr6,0x82d79d04
	if (ctx.cr6.gt) goto loc_82D79D04;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82d79d00
	if (!ctx.cr6.gt) goto loc_82D79D00;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x82d79d04
	goto loc_82D79D04;
loc_82D79D00:
	// fmr f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f12.f64;
loc_82D79D04:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f0,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fadds f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fadds f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79D5C"))) PPC_WEAK_FUNC(sub_82D79D5C);
PPC_FUNC_IMPL(__imp__sub_82D79D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79D60"))) PPC_WEAK_FUNC(sub_82D79D60);
PPC_FUNC_IMPL(__imp__sub_82D79D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f13,-1168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f12,f3,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79E08"))) PPC_WEAK_FUNC(sub_82D79E08);
PPC_FUNC_IMPL(__imp__sub_82D79E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82d79e20
	if (!ctx.cr6.gt) goto loc_82D79E20;
loc_82D79E18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D79E20:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d79e18
	if (ctx.cr6.gt) goto loc_82D79E18;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d79e18
	if (ctx.cr6.gt) goto loc_82D79E18;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d79e18
	if (ctx.cr6.lt) goto loc_82D79E18;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82d79e18
	if (ctx.cr6.lt) goto loc_82D79E18;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D79E7C"))) PPC_WEAK_FUNC(sub_82D79E7C);
PPC_FUNC_IMPL(__imp__sub_82D79E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D79E80"))) PPC_WEAK_FUNC(sub_82D79E80);
PPC_FUNC_IMPL(__imp__sub_82D79E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d79e90
	if (!ctx.cr6.eq) goto loc_82D79E90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D79E90:
	// lfs f11,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lfs f12,-18324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f12,52(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f13,72(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f12,88(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f12,f7,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fsubs f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmadds f5,f4,f8,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fnmadds f4,f3,f7,f5
	ctx.f4.f64 = double(float(-(ctx.f3.f64 * ctx.f7.f64 + ctx.f5.f64)));
	// stfs f4,12(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmadds f5,f3,f8,f6
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fnmadds f4,f2,f0,f5
	ctx.f4.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 + ctx.f5.f64)));
	// stfs f4,28(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f3,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmadds f13,f3,f13,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fnmadds f6,f0,f10,f13
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64)));
	// stfs f6,44(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f3,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfs f5,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f5,f12,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fnmadds f0,f4,f10,f1
	ctx.f0.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64)));
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f5,f13,f11,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fnmadds f4,f10,f12,f5
	ctx.f4.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64)));
	// stfs f4,76(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f3,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmadds f13,f3,f9,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fnmadds f12,f10,f2,f13
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f2.f64 + ctx.f13.f64)));
	// stfs f12,92(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A02C"))) PPC_WEAK_FUNC(sub_82D7A02C);
PPC_FUNC_IMPL(__imp__sub_82D7A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A030"))) PPC_WEAK_FUNC(sub_82D7A030);
PPC_FUNC_IMPL(__imp__sub_82D7A030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82d7a044
	if (!ctx.cr6.eq) goto loc_82D7A044;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7A044:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f11,24(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f10,28(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f10,40(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f12,44(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f13,52(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f9,56(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f11,60(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f13,64(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f9,68(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f11,72(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f10,76(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f9,80(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f10,88(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f9,92(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A0C4"))) PPC_WEAK_FUNC(sub_82D7A0C4);
PPC_FUNC_IMPL(__imp__sub_82D7A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A0C8"))) PPC_WEAK_FUNC(sub_82D7A0C8);
PPC_FUNC_IMPL(__imp__sub_82D7A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A0D4"))) PPC_WEAK_FUNC(sub_82D7A0D4);
PPC_FUNC_IMPL(__imp__sub_82D7A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A0D8"))) PPC_WEAK_FUNC(sub_82D7A0D8);
PPC_FUNC_IMPL(__imp__sub_82D7A0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A0E4"))) PPC_WEAK_FUNC(sub_82D7A0E4);
PPC_FUNC_IMPL(__imp__sub_82D7A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A0E8"))) PPC_WEAK_FUNC(sub_82D7A0E8);
PPC_FUNC_IMPL(__imp__sub_82D7A0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A0F4"))) PPC_WEAK_FUNC(sub_82D7A0F4);
PPC_FUNC_IMPL(__imp__sub_82D7A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A0F8"))) PPC_WEAK_FUNC(sub_82D7A0F8);
PPC_FUNC_IMPL(__imp__sub_82D7A0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x82d7a124
	if (ctx.cr6.lt) goto loc_82D7A124;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82D7A124:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r7,2
	ctx.r7.s64 = 2;
	// bgt cr6,0x82d7a134
	if (ctx.cr6.gt) goto loc_82D7A134;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82D7A134:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82d7a148
	if (ctx.cr6.lt) goto loc_82D7A148;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D7A148:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// li r9,8
	ctx.r9.s64 = 8;
	// bgt cr6,0x82d7a158
	if (ctx.cr6.gt) goto loc_82D7A158;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D7A158:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82d7a16c
	if (ctx.cr6.lt) goto loc_82D7A16C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D7A16C:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// li r11,32
	ctx.r11.s64 = 32;
	// bgt cr6,0x82d7a17c
	if (ctx.cr6.gt) goto loc_82D7A17C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D7A17C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1680
	ctx.r11.s64 = ctx.r11.s64 + -1680;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A1C0"))) PPC_WEAK_FUNC(sub_82D7A1C0);
PPC_FUNC_IMPL(__imp__sub_82D7A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82D7A1C8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d7a0f8
	ctx.lr = 0x82D7A1F0;
	sub_82D7A0F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82d7a214
	if (!ctx.cr6.eq) goto loc_82D7A214;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82D7A214:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7a030
	ctx.lr = 0x82D7A220;
	sub_82D7A030(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d7a290
	if (!ctx.cr6.gt) goto loc_82D7A290;
	// addi r31,r1,104
	ctx.r31.s64 = ctx.r1.s64 + 104;
loc_82D7A234:
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82d7aed8
	ctx.lr = 0x82D7A264;
	sub_82D7AED8(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// blt cr6,0x82d7a234
	if (ctx.cr6.lt) goto loc_82D7A234;
loc_82D7A290:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f12,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// blt cr6,0x82d7a354
	if (ctx.cr6.lt) goto loc_82D7A354;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82D7A2F0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fadds f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fsubs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f3,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fadds f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// fmadds f6,f9,f8,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f5,f4,f5,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f4,f13,f1,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fmadds f0,f10,f7,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f4.f64));
	// bne 0x82d7a2f0
	if (!ctx.cr0.eq) goto loc_82D7A2F0;
loc_82D7A354:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82d7a39c
	if (!ctx.cr6.lt) goto loc_82D7A39C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82D7A374:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmadds f0,f10,f8,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f0.f64));
	// bne 0x82d7a374
	if (!ctx.cr0.eq) goto loc_82D7A374;
loc_82D7A39C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7A3B8"))) PPC_WEAK_FUNC(sub_82D7A3B8);
PPC_FUNC_IMPL(__imp__sub_82D7A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-17496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17496);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A418"))) PPC_WEAK_FUNC(sub_82D7A418);
PPC_FUNC_IMPL(__imp__sub_82D7A418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82d7a454
	if (!ctx.cr6.gt) goto loc_82D7A454;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D7A454:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// li r3,-1
	ctx.r3.s64 = -1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A46C"))) PPC_WEAK_FUNC(sub_82D7A46C);
PPC_FUNC_IMPL(__imp__sub_82D7A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A470"))) PPC_WEAK_FUNC(sub_82D7A470);
PPC_FUNC_IMPL(__imp__sub_82D7A470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A4AC"))) PPC_WEAK_FUNC(sub_82D7A4AC);
PPC_FUNC_IMPL(__imp__sub_82D7A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A4B0"))) PPC_WEAK_FUNC(sub_82D7A4B0);
PPC_FUNC_IMPL(__imp__sub_82D7A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f8,f2,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmsubs f7,f2,f5,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fmsubs f6,f9,f13,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f11.f64));
	// fmsubs f5,f3,f10,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A524"))) PPC_WEAK_FUNC(sub_82D7A524);
PPC_FUNC_IMPL(__imp__sub_82D7A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A528"))) PPC_WEAK_FUNC(sub_82D7A528);
PPC_FUNC_IMPL(__imp__sub_82D7A528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmuls f13,f9,f9
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fsubs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmadds f9,f5,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fmadds f7,f3,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f5,f8,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f6,f1,f1,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f4,f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fsqrts f2,f5
	ctx.f2.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsqrts f1,f4
	ctx.f1.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmadds f3,f11,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A5C8"))) PPC_WEAK_FUNC(sub_82D7A5C8);
PPC_FUNC_IMPL(__imp__sub_82D7A5C8) {
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
	// bl 0x82d7a528
	ctx.lr = 0x82D7A5D8;
	sub_82D7A528(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82d7a670
	if (ctx.cr6.eq) goto loc_82D7A670;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1984);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f3,f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmsubs f2,f7,f9,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmsubs f1,f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 - ctx.f4.f64));
	// fmuls f12,f3,f3
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f10,f2,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmadds f9,f1,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fdivs f1,f6,f11
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
loc_82D7A670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A680"))) PPC_WEAK_FUNC(sub_82D7A680);
PPC_FUNC_IMPL(__imp__sub_82D7A680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fadds f10,f6,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bgt cr6,0x82d7a6d0
	if (ctx.cr6.gt) goto loc_82D7A6D0;
	// fneg f9,f1
	ctx.f9.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x82d7a6d4
	if (!ctx.cr6.lt) goto loc_82D7A6D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82d7a6d4
	goto loc_82D7A6D4;
loc_82D7A6D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7A6D4:
	// lfs f10,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f12,f7,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bgt cr6,0x82d7a70c
	if (ctx.cr6.gt) goto loc_82D7A70C;
	// fneg f9,f1
	ctx.f9.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x82d7a710
	if (!ctx.cr6.lt) goto loc_82D7A710;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82d7a710
	goto loc_82D7A710;
loc_82D7A70C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7A710:
	// lfs f10,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f12,f7,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fadds f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82d7a748
	if (ctx.cr6.gt) goto loc_82D7A748;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82d7a74c
	if (!ctx.cr6.lt) goto loc_82D7A74C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82d7a74c
	goto loc_82D7A74C;
loc_82D7A748:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D7A74C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7a774
	if (!ctx.cr6.eq) goto loc_82D7A774;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7a76c
	if (!ctx.cr6.eq) goto loc_82D7A76C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82D7A76C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a7ac
	if (ctx.cr6.eq) goto loc_82D7A7AC;
loc_82D7A774:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82d7a788
	if (ctx.cr6.eq) goto loc_82D7A788;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82D7A788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a7ac
	if (ctx.cr6.eq) goto loc_82D7A7AC;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82d7a7a4
	if (!ctx.cr6.eq) goto loc_82D7A7A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D7A7A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d7a7c0
	if (!ctx.cr6.eq) goto loc_82D7A7C0;
loc_82D7A7AC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7a7c0
	if (ctx.cr6.eq) goto loc_82D7A7C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7A7C0:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A7CC"))) PPC_WEAK_FUNC(sub_82D7A7CC);
PPC_FUNC_IMPL(__imp__sub_82D7A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7A7D0"))) PPC_WEAK_FUNC(sub_82D7A7D0);
PPC_FUNC_IMPL(__imp__sub_82D7A7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmuls f11,f5,f5
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f5,f3,f3
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fsubs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// fmadds f3,f8,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f2,f9,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f1,f4,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fsubs f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,-18264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f12,f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f11,f6,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d7a87c
	if (!ctx.cr6.lt) goto loc_82D7A87C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D7A87C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82d7a888
	if (!ctx.cr6.lt) goto loc_82D7A888;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82D7A888:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A898"))) PPC_WEAK_FUNC(sub_82D7A898);
PPC_FUNC_IMPL(__imp__sub_82D7A898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmuls f11,f5,f5
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f5,f3,f3
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fsubs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// fmadds f3,f8,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f2,f9,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f1,f4,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fsubs f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,-18268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18268);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f12,f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f11,f6,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82d7a944
	if (!ctx.cr6.gt) goto loc_82D7A944;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82D7A944:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82d7a950
	if (!ctx.cr6.gt) goto loc_82D7A950;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82D7A950:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7A960"))) PPC_WEAK_FUNC(sub_82D7A960);
PPC_FUNC_IMPL(__imp__sub_82D7A960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// fsubs f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f10,f1,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fmuls f0,f9,f9
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f13,f8,f8
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f10,f3,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f9,f2,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f7,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f13,f6,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f12,f1,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d7aa74
	if (!ctx.cr6.lt) goto loc_82D7AA74;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82D7AA74:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82d7aa8c
	if (!ctx.cr6.lt) goto loc_82D7AA8C;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82D7AA8C:
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AA94"))) PPC_WEAK_FUNC(sub_82D7AA94);
PPC_FUNC_IMPL(__imp__sub_82D7AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AA98"))) PPC_WEAK_FUNC(sub_82D7AA98);
PPC_FUNC_IMPL(__imp__sub_82D7AA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-17496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17496);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f7,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f12,f3,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// lfs f6,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82D7AB04:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// beq cr6,0x82d7ab4c
	if (ctx.cr6.eq) goto loc_82D7AB4C;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f5,f12,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f0,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// beq cr6,0x82d7ab4c
	if (ctx.cr6.eq) goto loc_82D7AB4C;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
loc_82D7AB4C:
	// fmuls f12,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fadds f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82d7ab04
	if (!ctx.cr0.eq) goto loc_82D7AB04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AB8C"))) PPC_WEAK_FUNC(sub_82D7AB8C);
PPC_FUNC_IMPL(__imp__sub_82D7AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AB90"))) PPC_WEAK_FUNC(sub_82D7AB90);
PPC_FUNC_IMPL(__imp__sub_82D7AB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ABA4"))) PPC_WEAK_FUNC(sub_82D7ABA4);
PPC_FUNC_IMPL(__imp__sub_82D7ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ABA8"))) PPC_WEAK_FUNC(sub_82D7ABA8);
PPC_FUNC_IMPL(__imp__sub_82D7ABA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d63328
	ctx.lr = 0x82D7ABC4;
	sub_82D63328(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82d63328
	ctx.lr = 0x82D7ABEC;
	sub_82D63328(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82d63328
	ctx.lr = 0x82D7AC0C;
	sub_82D63328(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// lfs f10,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f2,f12,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f11,f0,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x82d7ac78
	if (ctx.cr6.eq) goto loc_82D7AC78;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82D7AC78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AC90"))) PPC_WEAK_FUNC(sub_82D7AC90);
PPC_FUNC_IMPL(__imp__sub_82D7AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d63328
	ctx.lr = 0x82D7ACB0;
	sub_82D63328(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82d63328
	ctx.lr = 0x82D7ACE0;
	sub_82D63328(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmsubs f7,f8,f31,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82d63328
	ctx.lr = 0x82D7AD00;
	sub_82D63328(ctx, base);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// lfs f10,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmsubs f0,f4,f31,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f2,f12,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f11,f0,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x82d7ad6c
	if (ctx.cr6.eq) goto loc_82D7AD6C;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82D7AD6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AD88"))) PPC_WEAK_FUNC(sub_82D7AD88);
PPC_FUNC_IMPL(__imp__sub_82D7AD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ADB0"))) PPC_WEAK_FUNC(sub_82D7ADB0);
PPC_FUNC_IMPL(__imp__sub_82D7ADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f13,f6,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f10,f6,f7,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f9,f2,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f8,f2,f3,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmuls f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fdivs f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 / ctx.f1.f64));
	// fmuls f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fsubs f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f10,8(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AE30"))) PPC_WEAK_FUNC(sub_82D7AE30);
PPC_FUNC_IMPL(__imp__sub_82D7AE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f8,f9,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f12,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AE84"))) PPC_WEAK_FUNC(sub_82D7AE84);
PPC_FUNC_IMPL(__imp__sub_82D7AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AE88"))) PPC_WEAK_FUNC(sub_82D7AE88);
PPC_FUNC_IMPL(__imp__sub_82D7AE88) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AE9C"))) PPC_WEAK_FUNC(sub_82D7AE9C);
PPC_FUNC_IMPL(__imp__sub_82D7AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AEA0"))) PPC_WEAK_FUNC(sub_82D7AEA0);
PPC_FUNC_IMPL(__imp__sub_82D7AEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82d7aeb4
	if (ctx.cr6.eq) goto loc_82D7AEB4;
loc_82D7AEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D7AEB4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82d7aeac
	if (!ctx.cr6.eq) goto loc_82D7AEAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AED8"))) PPC_WEAK_FUNC(sub_82D7AED8);
PPC_FUNC_IMPL(__imp__sub_82D7AED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82d7b058
	ctx.lr = 0x82D7AF34;
	sub_82D7B058(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fadds f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fnmsubs f11,f12,f31,f31
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f31.f64)));
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AFC4"))) PPC_WEAK_FUNC(sub_82D7AFC4);
PPC_FUNC_IMPL(__imp__sub_82D7AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AFC8"))) PPC_WEAK_FUNC(sub_82D7AFC8);
PPC_FUNC_IMPL(__imp__sub_82D7AFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7AFEC"))) PPC_WEAK_FUNC(sub_82D7AFEC);
PPC_FUNC_IMPL(__imp__sub_82D7AFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7AFF0"))) PPC_WEAK_FUNC(sub_82D7AFF0);
PPC_FUNC_IMPL(__imp__sub_82D7AFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f6,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f8,f2,f6,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7B054"))) PPC_WEAK_FUNC(sub_82D7B054);
PPC_FUNC_IMPL(__imp__sub_82D7B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

