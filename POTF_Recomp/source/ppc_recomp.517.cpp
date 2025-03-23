#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83050A88"))) PPC_WEAK_FUNC(sub_83050A88);
PPC_FUNC_IMPL(__imp__sub_83050A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// lwz r10,1120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050A9C"))) PPC_WEAK_FUNC(sub_83050A9C);
PPC_FUNC_IMPL(__imp__sub_83050A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050AA0"))) PPC_WEAK_FUNC(sub_83050AA0);
PPC_FUNC_IMPL(__imp__sub_83050AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050AAC"))) PPC_WEAK_FUNC(sub_83050AAC);
PPC_FUNC_IMPL(__imp__sub_83050AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050AB0"))) PPC_WEAK_FUNC(sub_83050AB0);
PPC_FUNC_IMPL(__imp__sub_83050AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1100);
	// stw r11,1104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1104, ctx.r11.u32);
	// lwz r10,1120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// stw r10,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050AC4"))) PPC_WEAK_FUNC(sub_83050AC4);
PPC_FUNC_IMPL(__imp__sub_83050AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050AC8"))) PPC_WEAK_FUNC(sub_83050AC8);
PPC_FUNC_IMPL(__imp__sub_83050AC8) {
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
	// bl 0x8304a258
	ctx.lr = 0x83050AE8;
	sub_8304A258(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83050b10
	if (ctx.cr6.eq) goto loc_83050B10;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83050B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83050B10:
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

__attribute__((alias("__imp__sub_83050B2C"))) PPC_WEAK_FUNC(sub_83050B2C);
PPC_FUNC_IMPL(__imp__sub_83050B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050B30"))) PPC_WEAK_FUNC(sub_83050B30);
PPC_FUNC_IMPL(__imp__sub_83050B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,21552
	ctx.r10.s64 = ctx.r11.s64 + 21552;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B40"))) PPC_WEAK_FUNC(sub_83050B40);
PPC_FUNC_IMPL(__imp__sub_83050B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B4C"))) PPC_WEAK_FUNC(sub_83050B4C);
PPC_FUNC_IMPL(__imp__sub_83050B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050B50"))) PPC_WEAK_FUNC(sub_83050B50);
PPC_FUNC_IMPL(__imp__sub_83050B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B64"))) PPC_WEAK_FUNC(sub_83050B64);
PPC_FUNC_IMPL(__imp__sub_83050B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050B68"))) PPC_WEAK_FUNC(sub_83050B68);
PPC_FUNC_IMPL(__imp__sub_83050B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B90"))) PPC_WEAK_FUNC(sub_83050B90);
PPC_FUNC_IMPL(__imp__sub_83050B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83050ba4
	if (!ctx.cr6.lt) goto loc_83050BA4;
loc_83050B9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83050BA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x83050b9c
	if (ctx.cr6.lt) goto loc_83050B9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83050b9c
	if (!ctx.cr6.eq) goto loc_83050B9C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83050b9c
	if (ctx.cr6.lt) goto loc_83050B9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83050b9c
	if (ctx.cr6.lt) goto loc_83050B9C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050BF4"))) PPC_WEAK_FUNC(sub_83050BF4);
PPC_FUNC_IMPL(__imp__sub_83050BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050BF8"))) PPC_WEAK_FUNC(sub_83050BF8);
PPC_FUNC_IMPL(__imp__sub_83050BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,21552
	ctx.r10.s64 = ctx.r11.s64 + 21552;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050C08"))) PPC_WEAK_FUNC(sub_83050C08);
PPC_FUNC_IMPL(__imp__sub_83050C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r5,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050C54"))) PPC_WEAK_FUNC(sub_83050C54);
PPC_FUNC_IMPL(__imp__sub_83050C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050C58"))) PPC_WEAK_FUNC(sub_83050C58);
PPC_FUNC_IMPL(__imp__sub_83050C58) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r7,r8
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x83050c90
	if (!ctx.cr6.gt) goto loc_83050C90;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_83050C90:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82cb1160
	ctx.lr = 0x83050C9C;
	sub_82CB1160(ctx, base);
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

__attribute__((alias("__imp__sub_83050CB4"))) PPC_WEAK_FUNC(sub_83050CB4);
PPC_FUNC_IMPL(__imp__sub_83050CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050CB8"))) PPC_WEAK_FUNC(sub_83050CB8);
PPC_FUNC_IMPL(__imp__sub_83050CB8) {
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83050cf8
	if (ctx.cr6.eq) goto loc_83050CF8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83050CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
loc_83050CF8:
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

__attribute__((alias("__imp__sub_83050D0C"))) PPC_WEAK_FUNC(sub_83050D0C);
PPC_FUNC_IMPL(__imp__sub_83050D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050D10"))) PPC_WEAK_FUNC(sub_83050D10);
PPC_FUNC_IMPL(__imp__sub_83050D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,21612
	ctx.r8.s64 = ctx.r9.s64 + 21612;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050D50"))) PPC_WEAK_FUNC(sub_83050D50);
PPC_FUNC_IMPL(__imp__sub_83050D50) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,21612
	ctx.r10.s64 = ctx.r11.s64 + 21612;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83050d9c
	if (ctx.cr6.eq) goto loc_83050D9C;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83050D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
loc_83050D9C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,21552
	ctx.r10.s64 = ctx.r11.s64 + 21552;
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

__attribute__((alias("__imp__sub_83050DBC"))) PPC_WEAK_FUNC(sub_83050DBC);
PPC_FUNC_IMPL(__imp__sub_83050DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83050DC0"))) PPC_WEAK_FUNC(sub_83050DC0);
PPC_FUNC_IMPL(__imp__sub_83050DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83050DC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83050dec
	if (!ctx.cr6.lt) goto loc_83050DEC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83050e58
	goto loc_83050E58;
loc_83050DEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x83050e00
	if (!ctx.cr6.lt) goto loc_83050E00;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83050e58
	goto loc_83050E58;
loc_83050E00:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83050e14
	if (ctx.cr6.eq) goto loc_83050E14;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83050e58
	goto loc_83050E58;
loc_83050E14:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x83050e28
	if (!ctx.cr6.lt) goto loc_83050E28;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83050e58
	goto loc_83050E58;
loc_83050E28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83050e44
	if (!ctx.cr6.lt) goto loc_83050E44;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83050e58
	goto loc_83050E58;
loc_83050E44:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83050E58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83050e90
	if (!ctx.cr6.eq) goto loc_83050E90;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,21448
	ctx.r11.s64 = ctx.r11.s64 + 21448;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r7,r11,-192
	ctx.r7.s64 = ctx.r11.s64 + -192;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x83050E84;
	sub_82D17988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83050E90:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83050eb8
	if (ctx.cr6.eq) goto loc_83050EB8;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83050EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_83050EB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw. r29,r3,r6
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83050f68
	if (ctx.cr0.eq) goto loc_83050F68;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83050F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83050f5c
	if (!ctx.cr6.eq) goto loc_83050F5C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,21448
	ctx.r4.s64 = ctx.r11.s64 + 21448;
	// li r5,74
	ctx.r5.s64 = 74;
	// addi r7,r4,-40
	ctx.r7.s64 = ctx.r4.s64 + -40;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82d17988
	ctx.lr = 0x83050F50;
	sub_82D17988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83050F5C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82cb1160
	ctx.lr = 0x83050F68;
	sub_82CB1160(ctx, base);
loc_83050F68:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mullw. r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18268(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// beq 0x83050ff0
	if (ctx.cr0.eq) goto loc_83050FF0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_83050F9C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83050fc4
	if (!ctx.cr6.lt) goto loc_83050FC4;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_83050FC4:
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83050fd4
	if (!ctx.cr6.gt) goto loc_83050FD4;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_83050FD4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83050f9c
	if (ctx.cr6.lt) goto loc_83050F9C;
loc_83050FF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83050FFC"))) PPC_WEAK_FUNC(sub_83050FFC);
PPC_FUNC_IMPL(__imp__sub_83050FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051000"))) PPC_WEAK_FUNC(sub_83051000);
PPC_FUNC_IMPL(__imp__sub_83051000) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8305107c
	if (ctx.cr6.eq) goto loc_8305107C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// addi r10,r11,21612
	ctx.r10.s64 = ctx.r11.s64 + 21612;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83051058
	if (ctx.cr6.eq) goto loc_83051058;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_83051058:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,21552
	ctx.r10.s64 = ctx.r11.s64 + 21552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8305107C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305107C:
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

__attribute__((alias("__imp__sub_83051094"))) PPC_WEAK_FUNC(sub_83051094);
PPC_FUNC_IMPL(__imp__sub_83051094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051098"))) PPC_WEAK_FUNC(sub_83051098);
PPC_FUNC_IMPL(__imp__sub_83051098) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510A0"))) PPC_WEAK_FUNC(sub_830510A0);
PPC_FUNC_IMPL(__imp__sub_830510A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510A8"))) PPC_WEAK_FUNC(sub_830510A8);
PPC_FUNC_IMPL(__imp__sub_830510A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510B0"))) PPC_WEAK_FUNC(sub_830510B0);
PPC_FUNC_IMPL(__imp__sub_830510B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510B8"))) PPC_WEAK_FUNC(sub_830510B8);
PPC_FUNC_IMPL(__imp__sub_830510B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510C0"))) PPC_WEAK_FUNC(sub_830510C0);
PPC_FUNC_IMPL(__imp__sub_830510C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510C8"))) PPC_WEAK_FUNC(sub_830510C8);
PPC_FUNC_IMPL(__imp__sub_830510C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510D0"))) PPC_WEAK_FUNC(sub_830510D0);
PPC_FUNC_IMPL(__imp__sub_830510D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510D8"))) PPC_WEAK_FUNC(sub_830510D8);
PPC_FUNC_IMPL(__imp__sub_830510D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510E0"))) PPC_WEAK_FUNC(sub_830510E0);
PPC_FUNC_IMPL(__imp__sub_830510E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510E8"))) PPC_WEAK_FUNC(sub_830510E8);
PPC_FUNC_IMPL(__imp__sub_830510E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051104"))) PPC_WEAK_FUNC(sub_83051104);
PPC_FUNC_IMPL(__imp__sub_83051104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051108"))) PPC_WEAK_FUNC(sub_83051108);
PPC_FUNC_IMPL(__imp__sub_83051108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8305111c
	if (!ctx.cr6.lt) goto loc_8305111C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8305111C:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x83051128
	if (!ctx.cr6.lt) goto loc_83051128;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_83051128:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,6140(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83051178
	if (!ctx.cr6.gt) goto loc_83051178;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_83051178:
	// fctidz f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830511C4"))) PPC_WEAK_FUNC(sub_830511C4);
PPC_FUNC_IMPL(__imp__sub_830511C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830511C8"))) PPC_WEAK_FUNC(sub_830511C8);
PPC_FUNC_IMPL(__imp__sub_830511C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f2.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x830511e4
	if (!ctx.cr6.lt) goto loc_830511E4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_830511E4:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x830511f0
	if (!ctx.cr6.lt) goto loc_830511F0;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_830511F0:
	// fctidz f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lfs f12,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// ble cr6,0x83051234
	if (!ctx.cr6.gt) goto loc_83051234;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_83051234:
	// fctidz f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// ble cr6,0x83051270
	if (!ctx.cr6.gt) goto loc_83051270;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_83051270:
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83051398
	if (ctx.cr6.eq) goto loc_83051398;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83051320
	if (!ctx.cr6.gt) goto loc_83051320;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// mullw r3,r9,r11
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lhzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lhzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
loc_83051320:
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r4,r11,r9
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f8,-8(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f0,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
loc_83051398:
	// fadds f11,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8305141c
	if (!ctx.cr6.lt) goto loc_8305141C;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lhzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// mullw r3,r9,r11
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lhzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// blr 
	return;
loc_8305141C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lhzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514A4"))) PPC_WEAK_FUNC(sub_830514A4);
PPC_FUNC_IMPL(__imp__sub_830514A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830514A8"))) PPC_WEAK_FUNC(sub_830514A8);
PPC_FUNC_IMPL(__imp__sub_830514A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514B0"))) PPC_WEAK_FUNC(sub_830514B0);
PPC_FUNC_IMPL(__imp__sub_830514B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514B8"))) PPC_WEAK_FUNC(sub_830514B8);
PPC_FUNC_IMPL(__imp__sub_830514B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514C0"))) PPC_WEAK_FUNC(sub_830514C0);
PPC_FUNC_IMPL(__imp__sub_830514C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514C8"))) PPC_WEAK_FUNC(sub_830514C8);
PPC_FUNC_IMPL(__imp__sub_830514C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514D0"))) PPC_WEAK_FUNC(sub_830514D0);
PPC_FUNC_IMPL(__imp__sub_830514D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514D8"))) PPC_WEAK_FUNC(sub_830514D8);
PPC_FUNC_IMPL(__imp__sub_830514D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514E0"))) PPC_WEAK_FUNC(sub_830514E0);
PPC_FUNC_IMPL(__imp__sub_830514E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83051818
	if (ctx.cr6.lt) goto loc_83051818;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x83051818
	if (ctx.cr6.lt) goto loc_83051818;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bgt cr6,0x83051818
	if (ctx.cr6.gt) goto loc_83051818;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x83051818
	if (ctx.cr6.gt) goto loc_83051818;
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83051554
	if (!ctx.cr6.lt) goto loc_83051554;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_83051554:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x83051560
	if (!ctx.cr6.lt) goto loc_83051560;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_83051560:
	// fctidz f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lfs f12,6140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// ble cr6,0x830515a0
	if (!ctx.cr6.gt) goto loc_830515A0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_830515A0:
	// fctidz f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// ble cr6,0x830515d8
	if (!ctx.cr6.gt) goto loc_830515D8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_830515D8:
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83051704
	if (ctx.cr6.eq) goto loc_83051704;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83051688
	if (!ctx.cr6.gt) goto loc_83051688;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lhzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhzx r7,r8,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lhzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
loc_83051688:
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r4,r11,r9
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f8,-8(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f0,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
loc_83051704:
	// fadds f11,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8305178c
	if (!ctx.cr6.lt) goto loc_8305178C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lhzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// mullw r4,r7,r10
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lhzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhzx r3,r4,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// blr 
	return;
loc_8305178C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lhzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lhzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r7.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f2,f13,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// blr 
	return;
loc_83051818:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051820"))) PPC_WEAK_FUNC(sub_83051820);
PPC_FUNC_IMPL(__imp__sub_83051820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83051828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,21612
	ctx.r10.s64 = ctx.r11.s64 + 21612;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8305186c
	if (ctx.cr6.eq) goto loc_8305186C;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8305186C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// addi r9,r11,21552
	ctx.r9.s64 = ctx.r11.s64 + 21552;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8305189c
	if (ctx.cr6.eq) goto loc_8305189C;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305189C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305189C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830518A8"))) PPC_WEAK_FUNC(sub_830518A8);
PPC_FUNC_IMPL(__imp__sub_830518A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64)));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830518EC"))) PPC_WEAK_FUNC(sub_830518EC);
PPC_FUNC_IMPL(__imp__sub_830518EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830518F0"))) PPC_WEAK_FUNC(sub_830518F0);
PPC_FUNC_IMPL(__imp__sub_830518F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f4,f6,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f9,f3,f6,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f8,f2,f6,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f7,f1,f0,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f0,f5,f6,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f4,f8,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fsubs f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051978"))) PPC_WEAK_FUNC(sub_83051978);
PPC_FUNC_IMPL(__imp__sub_83051978) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051984"))) PPC_WEAK_FUNC(sub_83051984);
PPC_FUNC_IMPL(__imp__sub_83051984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051988"))) PPC_WEAK_FUNC(sub_83051988);
PPC_FUNC_IMPL(__imp__sub_83051988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f13,f12,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A10"))) PPC_WEAK_FUNC(sub_83051A10);
PPC_FUNC_IMPL(__imp__sub_83051A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f7,f12,f11,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f0,f5,f4,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f1.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f13,f12,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A80"))) PPC_WEAK_FUNC(sub_83051A80);
PPC_FUNC_IMPL(__imp__sub_83051A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// srawi r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051ADC"))) PPC_WEAK_FUNC(sub_83051ADC);
PPC_FUNC_IMPL(__imp__sub_83051ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051AE0"))) PPC_WEAK_FUNC(sub_83051AE0);
PPC_FUNC_IMPL(__imp__sub_83051AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051AF8"))) PPC_WEAK_FUNC(sub_83051AF8);
PPC_FUNC_IMPL(__imp__sub_83051AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B0C"))) PPC_WEAK_FUNC(sub_83051B0C);
PPC_FUNC_IMPL(__imp__sub_83051B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051B10"))) PPC_WEAK_FUNC(sub_83051B10);
PPC_FUNC_IMPL(__imp__sub_83051B10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B28"))) PPC_WEAK_FUNC(sub_83051B28);
PPC_FUNC_IMPL(__imp__sub_83051B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B38"))) PPC_WEAK_FUNC(sub_83051B38);
PPC_FUNC_IMPL(__imp__sub_83051B38) {
	PPC_FUNC_PROLOGUE();
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B44"))) PPC_WEAK_FUNC(sub_83051B44);
PPC_FUNC_IMPL(__imp__sub_83051B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051B48"))) PPC_WEAK_FUNC(sub_83051B48);
PPC_FUNC_IMPL(__imp__sub_83051B48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B50"))) PPC_WEAK_FUNC(sub_83051B50);
PPC_FUNC_IMPL(__imp__sub_83051B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r8,36
	ctx.r8.s64 = 36;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmsubs f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stfs f4,8(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f11,f2,f1,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,16(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f5,20(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,36
	ctx.r10.s64 = ctx.r9.s64 + 36;
	// divw r11,r5,r8
	ctx.r11.s32 = ctx.r5.s32 / ctx.r8.s32;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C18"))) PPC_WEAK_FUNC(sub_83051C18);
PPC_FUNC_IMPL(__imp__sub_83051C18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C30"))) PPC_WEAK_FUNC(sub_83051C30);
PPC_FUNC_IMPL(__imp__sub_83051C30) {
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

__attribute__((alias("__imp__sub_83051C54"))) PPC_WEAK_FUNC(sub_83051C54);
PPC_FUNC_IMPL(__imp__sub_83051C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051C58"))) PPC_WEAK_FUNC(sub_83051C58);
PPC_FUNC_IMPL(__imp__sub_83051C58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r3,r9,8
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C6C"))) PPC_WEAK_FUNC(sub_83051C6C);
PPC_FUNC_IMPL(__imp__sub_83051C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051C70"))) PPC_WEAK_FUNC(sub_83051C70);
PPC_FUNC_IMPL(__imp__sub_83051C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r3,r11,8
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C7C"))) PPC_WEAK_FUNC(sub_83051C7C);
PPC_FUNC_IMPL(__imp__sub_83051C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051C80"))) PPC_WEAK_FUNC(sub_83051C80);
PPC_FUNC_IMPL(__imp__sub_83051C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C88"))) PPC_WEAK_FUNC(sub_83051C88);
PPC_FUNC_IMPL(__imp__sub_83051C88) {
	PPC_FUNC_PROLOGUE();
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C94"))) PPC_WEAK_FUNC(sub_83051C94);
PPC_FUNC_IMPL(__imp__sub_83051C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051C98"))) PPC_WEAK_FUNC(sub_83051C98);
PPC_FUNC_IMPL(__imp__sub_83051C98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051CA0"))) PPC_WEAK_FUNC(sub_83051CA0);
PPC_FUNC_IMPL(__imp__sub_83051CA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r3,r10,4
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051CB0"))) PPC_WEAK_FUNC(sub_83051CB0);
PPC_FUNC_IMPL(__imp__sub_83051CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83051CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83051cec
	if (ctx.cr6.eq) goto loc_83051CEC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83051CEC:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// beq cr6,0x83051d30
	if (ctx.cr6.eq) goto loc_83051D30;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_83051D30:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83051d54
	if (ctx.cr6.eq) goto loc_83051D54;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_83051D54:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83051D60"))) PPC_WEAK_FUNC(sub_83051D60);
PPC_FUNC_IMPL(__imp__sub_83051D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83051D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83051D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x83051da0
	if (!ctx.cr6.gt) goto loc_83051DA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83051DA0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cb1160
	ctx.lr = 0x83051DD8;
	sub_82CB1160(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83051DE4"))) PPC_WEAK_FUNC(sub_83051DE4);
PPC_FUNC_IMPL(__imp__sub_83051DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051DE8"))) PPC_WEAK_FUNC(sub_83051DE8);
PPC_FUNC_IMPL(__imp__sub_83051DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83051DF0;
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
	// bl 0x83051cb0
	ctx.lr = 0x83051E04;
	sub_83051CB0(ctx, base);
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// bge cr6,0x83051e18
	if (!ctx.cr6.lt) goto loc_83051E18;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83051E18:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83051E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x83051E88;
	sub_82CB1160(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83051E94"))) PPC_WEAK_FUNC(sub_83051E94);
PPC_FUNC_IMPL(__imp__sub_83051E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051E98"))) PPC_WEAK_FUNC(sub_83051E98);
PPC_FUNC_IMPL(__imp__sub_83051E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051EAC"))) PPC_WEAK_FUNC(sub_83051EAC);
PPC_FUNC_IMPL(__imp__sub_83051EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83051EB0"))) PPC_WEAK_FUNC(sub_83051EB0);
PPC_FUNC_IMPL(__imp__sub_83051EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83051EB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83051f80
	if (ctx.cr6.eq) goto loc_83051F80;
loc_83051ED4:
	// lwz r26,24(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r26,1
	ctx.r9.u64 = ctx.r26.u32 & 0x7FFFFFFF;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// clrlwi r4,r28,1
	ctx.r4.u64 = ctx.r28.u32 & 0x7FFFFFFF;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r6,r27,1
	ctx.r6.u64 = ctx.r27.u32 & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r26,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r10,r28,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r7,255
	ctx.r7.u64 = ctx.r7.u64 | 255;
	// lwzx r5,r9,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// lwzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831bfce0
	ctx.lr = 0x83051F70;
	sub_831BFCE0(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83051ed4
	if (!ctx.cr6.eq) goto loc_83051ED4;
loc_83051F80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83051F88"))) PPC_WEAK_FUNC(sub_83051F88);
PPC_FUNC_IMPL(__imp__sub_83051F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83051F90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// stw r27,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r27.u32);
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052100
	if (ctx.cr6.eq) goto loc_83052100;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// divw r26,r7,r9
	ctx.r26.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bne cr6,0x830520c4
	if (!ctx.cr6.eq) goto loc_830520C4;
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,259
	ctx.r5.s64 = 259;
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83052010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x830520c4
	if (ctx.cr6.eq) goto loc_830520C4;
loc_83052028:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r24,16(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r8,r30,1
	ctx.r8.u64 = ctx.r30.u32 & 0x7FFFFFFF;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,20(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r6,r25,1
	ctx.r6.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// rlwinm r7,r25,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r24,1
	ctx.r4.u64 = ctx.r24.u32 & 0x7FFFFFFF;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r30,r30,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// rlwinm r8,r25,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1;
	// rlwinm r9,r24,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// add r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// addi r6,r8,3
	ctx.r6.s64 = ctx.r8.s64 + 3;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwzx r7,r3,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	// lwzx r8,r4,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r23.u32);
	// lwzx r6,r9,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// clrlwi r5,r8,8
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFFFF;
	// clrlwi r3,r6,8
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFFFF;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83052028
	if (!ctx.cr6.eq) goto loc_83052028;
loc_830520C4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r6.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
	// stw r5,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r5.u32);
loc_83052100:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052108"))) PPC_WEAK_FUNC(sub_83052108);
PPC_FUNC_IMPL(__imp__sub_83052108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x83052110;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6ad8
	ctx.lr = 0x83052118;
	__savefpr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83051cb0
	ctx.lr = 0x83052128;
	sub_83051CB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r17,-31901
	ctx.r17.s64 = -2090663936;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052168
	if (ctx.cr6.eq) goto loc_83052168;
	// lwz r3,-32308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32308);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,258
	ctx.r5.s64 = 258;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83052160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x8305216c
	goto loc_8305216C;
loc_83052168:
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
loc_8305216C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r9,r19
	ctx.r25.u64 = ctx.r9.u64 + ctx.r19.u64;
	// beq cr6,0x8305227c
	if (ctx.cr6.eq) goto loc_8305227C;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83052214
	if (ctx.cr6.eq) goto loc_83052214;
	// cmplw cr6,r19,r25
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8305227c
	if (!ctx.cr6.lt) goto loc_8305227C;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r9.s64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_830521C0:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq cr6,0x830521f8
	if (ctx.cr6.eq) goto loc_830521F8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830521f8
	if (ctx.cr6.eq) goto loc_830521F8;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x830521fc
	if (!ctx.cr6.eq) goto loc_830521FC;
loc_830521F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830521FC:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x830521c0
	if (ctx.cr6.lt) goto loc_830521C0;
	// b 0x8305227c
	goto loc_8305227C;
loc_83052214:
	// cmplw cr6,r19,r25
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8305227c
	if (!ctx.cr6.lt) goto loc_8305227C;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r9.s64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_8305222C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq cr6,0x83052264
	if (ctx.cr6.eq) goto loc_83052264;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052264
	if (ctx.cr6.eq) goto loc_83052264;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83052268
	if (!ctx.cr6.eq) goto loc_83052268;
loc_83052264:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83052268:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8305222c
	if (ctx.cr6.lt) goto loc_8305222C;
loc_8305227C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// lfs f0,6708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// bl 0x82d47cc8
	ctx.lr = 0x830522B0;
	sub_82D47CC8(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830522d4
	if (ctx.cr6.eq) goto loc_830522D4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d485f0
	ctx.lr = 0x830522C8;
	sub_82D485F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830522fc
	if (ctx.cr6.eq) goto loc_830522FC;
loc_830522D4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x83052318
	if (!ctx.cr6.gt) goto loc_83052318;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,21768
	ctx.r4.s64 = ctx.r11.s64 + 21768;
	// li r5,158
	ctx.r5.s64 = 158;
	// addi r7,r4,-44
	ctx.r7.s64 = ctx.r4.s64 + -44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17988
	ctx.lr = 0x830522FC;
	sub_82D17988(ctx, base);
loc_830522FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d47ce8
	ctx.lr = 0x83052304;
	sub_82D47CE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6b24
	ctx.lr = 0x83052314;
	__restfpr_24(ctx, base);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_83052318:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83052348
	if (ctx.cr6.eq) goto loc_83052348;
	// lwz r3,-32308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32308);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305233C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8305234c
	goto loc_8305234C;
loc_83052348:
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_8305234C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x830523a0
	if (ctx.cr6.eq) goto loc_830523A0;
loc_8305236C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83052384
	if (!ctx.cr6.eq) goto loc_83052384;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x8305238c
	goto loc_8305238C;
loc_83052384:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8305238C:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8305236c
	if (!ctx.cr6.eq) goto loc_8305236C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830523A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r3,-32308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32308);
	// li r5,259
	ctx.r5.s64 = 259;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r31,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r31.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r31,r10,28
	ctx.r31.s64 = ctx.r10.s64 * 28;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830523F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r3.u32);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r9,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r9.u32);
	// stw r9,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r9.u32);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// stw r10,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// beq cr6,0x8305245c
	if (ctx.cr6.eq) goto loc_8305245C;
loc_83052438:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82cb1160
	ctx.lr = 0x8305244C;
	sub_82CB1160(ctx, base);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83052438
	if (!ctx.cr6.eq) goto loc_83052438;
loc_8305245C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x830524a0
	if (ctx.cr6.eq) goto loc_830524A0;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83052470:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83052494
	if (ctx.cr6.eq) goto loc_83052494;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_83052494:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83052470
	if (!ctx.cr6.eq) goto loc_83052470;
loc_830524A0:
	// lwz r23,12(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r19,r25
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r25.u32, ctx.xer);
	// lwz r20,116(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bge cr6,0x830529a8
	if (!ctx.cr6.lt) goto loc_830529A8;
	// subf r11,r19,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r19.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// divwu r11,r9,r10
	ctx.r11.u32 = ctx.r9.u32 / ctx.r10.u32;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f4,6048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f4.f64 = double(temp.f32);
	// addi r26,r19,8
	ctx.r26.s64 = ctx.r19.s64 + 8;
	// lfs f29,21872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21872);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,7616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
loc_830524F0:
	// lwz r9,-4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r8,-8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052994
	if (ctx.cr6.eq) goto loc_83052994;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83052994
	if (ctx.cr6.eq) goto loc_83052994;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83052994
	if (ctx.cr6.eq) goto loc_83052994;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r5,r24
	ctx.r10.u64 = ctx.r5.u64 + ctx.r24.u64;
	// rlwinm r7,r3,2,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFFFFC;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r6,2,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FFFFFFC;
	// lwzx r30,r7,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// rlwinm r3,r5,2,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFFFFC;
	// fmuls f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lwzx r28,r4,r22
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// lwzx r29,r3,r22
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// fmuls f8,f13,f5
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// fmsubs f1,f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fmsubs f3,f13,f9,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmsubs f2,f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f6,f3,f3,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f5,f2,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fsqrts f0,f5
	ctx.f0.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// beq cr6,0x830525fc
	if (ctx.cr6.eq) goto loc_830525FC;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_830525FC:
	// stfs f3,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f1,8(r23)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stfs f2,4(r23)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f1,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fnmadds f9,f0,f3,f10
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64)));
	// stfs f9,12(r23)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
loc_83052634:
	// lwzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x830528fc
	if (!ctx.cr6.eq) goto loc_830528FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,1,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x830528f0
	if (!ctx.cr6.gt) goto loc_830528F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8305268c
	if (!ctx.cr6.eq) goto loc_8305268C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8305268C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f28,f5,f8
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmsubs f12,f6,f8,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fmsubs f0,f5,f9,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 - ctx.f11.f64));
	// fmsubs f13,f7,f10,f28
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f28.f64));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f4
	ctx.cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// beq cr6,0x83052758
	if (ctx.cr6.eq) goto loc_83052758;
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_83052758:
	// fmuls f11,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f11,f0,f3,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f13,f2,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x830527bc
	if (!ctx.cr6.gt) goto loc_830527BC;
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f4
	ctx.cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// beq cr6,0x830528fc
	if (ctx.cr6.eq) goto loc_830528FC;
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,8(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x830528fc
	goto loc_830528FC;
loc_830527BC:
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r8,8
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFF;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f28,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// lfs f28,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// lfs f26,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f27,f26,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fmuls f26,f12,f11
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f25,f28,f0
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f24,f27,f13
	ctx.f24.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmsubs f0,f27,f0,f26
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f26.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmsubs f13,f13,f11,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f25.f64));
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fmsubs f12,f28,f12,f24
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 - ctx.f24.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f4
	ctx.cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// beq cr6,0x83052864
	if (ctx.cr6.eq) goto loc_83052864;
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_83052864:
	// fadds f11,f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// fadds f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fsubs f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fsubs f6,f9,f27
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f11,f13,f7,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f10,f6,f12,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f4
	ctx.cr6.compare(ctx.f10.f64, ctx.f4.f64);
	// ble cr6,0x830528fc
	if (!ctx.cr6.gt) goto loc_830528FC;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f10,8(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// b 0x830528fc
	goto loc_830528FC;
loc_830528F0:
	// stfs f3,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f2,4(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f1,8(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_830528FC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x83052634
	if (!ctx.cr0.eq) goto loc_83052634;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,-8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83052934
	if (ctx.cr6.eq) goto loc_83052934;
	// oris r30,r30,32768
	ctx.r30.u64 = ctx.r30.u64 | 2147483648;
loc_83052934:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,-4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// add r8,r28,r10
	ctx.r8.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8305295c
	if (ctx.cr6.eq) goto loc_8305295C;
	// oris r28,r28,32768
	ctx.r28.u64 = ctx.r28.u64 | 2147483648;
loc_8305295C:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83052984
	if (ctx.cr6.eq) goto loc_83052984;
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
loc_83052984:
	// stw r30,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r30.u32);
	// stw r28,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r28.u32);
	// stw r29,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r29.u32);
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
loc_83052994:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// bne 0x830524f0
	if (!ctx.cr0.eq) goto loc_830524F0;
loc_830529A8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x830529c8
	if (ctx.cr6.eq) goto loc_830529C8;
	// lwz r3,-32308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32308);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830529C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830529C8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x830529e8
	if (ctx.cr6.eq) goto loc_830529E8;
	// lwz r3,-32308(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32308);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830529E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830529E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d47ce8
	ctx.lr = 0x830529F0;
	sub_82D47CE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6b24
	ctx.lr = 0x83052A00;
	__restfpr_24(ctx, base);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052A04"))) PPC_WEAK_FUNC(sub_83052A04);
PPC_FUNC_IMPL(__imp__sub_83052A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83052A08"))) PPC_WEAK_FUNC(sub_83052A08);
PPC_FUNC_IMPL(__imp__sub_83052A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x83052A10;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,28(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r6,20(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divw r28,r5,r10
	ctx.r28.s32 = ctx.r5.s32 / ctx.r10.s32;
	// divw r27,r11,r8
	ctx.r27.s32 = ctx.r11.s32 / ctx.r8.s32;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83052a94
	if (!ctx.cr6.lt) goto loc_83052A94;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// stw r4,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r4.u32);
	// li r5,253
	ctx.r5.s64 = 253;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83052A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r3.u32);
loc_83052A94:
	// lwz r25,36(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r24,r5,r25
	ctx.r24.u64 = ctx.r5.u64 + ctx.r25.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83052AAC;
	sub_82CB16F0(ctx, base);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83052ABC;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r20,12(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83052f7c
	if (ctx.cr6.eq) goto loc_83052F7C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,36
	ctx.r28.s64 = 36;
	// li r23,44
	ctx.r23.s64 = 44;
	// lfs f0,21720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
loc_83052AE4:
	// lfs f12,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,4(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f9,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// blt cr6,0x83052f6c
	if (ctx.cr6.lt) goto loc_83052F6C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r21,r20,16
	ctx.r21.s64 = ctx.r20.s64 + 16;
	// li r19,3
	ctx.r19.s64 = 3;
loc_83052B1C:
	// lwz r22,0(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r27,r22,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r22,1
	ctx.r11.u64 = ctx.r22.u32 & 0x7FFFFFFF;
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83052b3c
	if (ctx.cr6.eq) goto loc_83052B3C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x83052e84
	goto loc_83052E84;
loc_83052B3C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r6,12
	ctx.r5.s64 = ctx.r6.s64 + 12;
loc_83052B5C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83052b7c
	if (ctx.cr6.eq) goto loc_83052B7C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x83052ca0
	goto loc_83052CA0;
loc_83052B7C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f30,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f9,f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f8,f8,f31,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmadds f7,f7,f31,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f6,f31,f6,f9
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f5,f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f4,f4,f2,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f3,24(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fadds f2,f30,f5
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// stfs f2,28(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fadds f1,f29,f4
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// stfs f1,32(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmsubs f7,f3,f10,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmsubs f11,f5,f3,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f12.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmsubs f7,f10,f2,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 - ctx.f8.f64));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r17,24(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// subf r17,r17,r11
	ctx.r17.s64 = ctx.r11.s64 - ctx.r17.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r11,r17,r28
	ctx.r11.s32 = ctx.r17.s32 / ctx.r28.s32;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stwx r10,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r10.u32);
loc_83052CA0:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x83052b5c
	if (!ctx.cr0.eq) goto loc_83052B5C;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f11,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// fmuls f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fmadds f1,f9,f11,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f31,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f3,f3,f11,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f6,f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f5.f64));
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f9,f7,f12,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f1.f64));
	// lfs f5,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f4,f12,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f11,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmadds f5,f10,f12,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f8,f2,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 - ctx.f3.f64));
	// stfs f1,8(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,12(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f1,f8,f6,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f2.f64));
	// stfs f1,16(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f4,f12,f6,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f8.f64));
	// stfs f4,20(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmadds f10,f12,f7,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f8,24(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lfs f6,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fneg f12,f4
	ctx.f12.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fnmsubs f1,f2,f9,f6
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f9.f64 - ctx.f6.f64)));
	// fmadds f11,f12,f5,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f11,28(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fnmsubs f4,f6,f7,f10
	ctx.f4.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 - ctx.f10.f64)));
	// fnmsubs f3,f9,f5,f4
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f5.f64 - ctx.f4.f64)));
	// stfs f3,32(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// divw r11,r7,r23
	ctx.r11.s32 = ctx.r7.s32 / ctx.r23.s32;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// stwx r4,r27,r24
	PPC_STORE_U32(ctx.r27.u32 + ctx.r24.u32, ctx.r4.u32);
loc_83052E84:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r22,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80000000;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x83052b1c
	if (!ctx.cr0.eq) goto loc_83052B1C;
	// lfs f12,4(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f5,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f9,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f6,f1,f9,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lfs f30,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f12,f11,f12,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f2.f64));
	// lfs f1,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r9.u32);
	// fmadds f11,f3,f5,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f10.f64));
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// fmadds f10,f7,f5,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// fmuls f7,f4,f11
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// fmadds f6,f9,f8,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f5,f31,f10,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f4,f30,f6,f5
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsubs f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfs f3,12(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
loc_83052F6C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r20,r20,28
	ctx.r20.s64 = ctx.r20.s64 + 28;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83052ae4
	if (!ctx.cr6.eq) goto loc_83052AE4;
loc_83052F7C:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830530a8
	if (ctx.cr6.eq) goto loc_830530A8;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_83052F90:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83053094
	if (!ctx.cr6.eq) goto loc_83053094;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f7,f13,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f1,f8,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f4,f8,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f13,f2,f0,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f10,f7,f0,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fadds f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,24(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fadds f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f7,32(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmsubs f1,f9,f4,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 - ctx.f2.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmsubs f10,f13,f9,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f11.f64));
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmsubs f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// addi r5,r9,36
	ctx.r5.s64 = ctx.r9.s64 + 36;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// stw r5,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r5.u32);
loc_83053094:
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83052f90
	if (!ctx.cr6.eq) goto loc_83052F90;
loc_830530A8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830530BC"))) PPC_WEAK_FUNC(sub_830530BC);
PPC_FUNC_IMPL(__imp__sub_830530BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830530C0"))) PPC_WEAK_FUNC(sub_830530C0);
PPC_FUNC_IMPL(__imp__sub_830530C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830530C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// divw r28,r9,r10
	ctx.r28.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830531c8
	if (ctx.cr6.eq) goto loc_830531C8;
	// addi r10,r5,36
	ctx.r10.s64 = ctx.r5.s64 + 36;
loc_83053110:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f7,f6,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f7,f5,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f9.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f7,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f2,f3,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f6,f3,f1,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f5,f0,f3,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,8(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,16
	ctx.r8.s64 = ctx.r7.s64 + 16;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83053110
	if (!ctx.cr6.eq) goto loc_83053110;
loc_830531C8:
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830532f0
	if (ctx.cr6.eq) goto loc_830532F0;
loc_830531D8:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,12(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f3,16(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f12,f13,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,24(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f6,f7,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f2,28(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x830531d8
	if (!ctx.cr6.eq) goto loc_830531D8;
loc_830532F0:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830533e0
	if (ctx.cr6.eq) goto loc_830533E0;
loc_83053300:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// clrlwi r8,r11,1
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r10,1
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r6,r6,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r5,r8,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053a18
	ctx.lr = 0x830533B8;
	sub_83053A18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// addi r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 + 28;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83053300
	if (!ctx.cr6.eq) goto loc_83053300;
loc_830533E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830533E8"))) PPC_WEAK_FUNC(sub_830533E8);
PPC_FUNC_IMPL(__imp__sub_830533E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x830533F0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6ae0
	ctx.lr = 0x830533F8;
	__savefpr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r8,r11,22552
	ctx.r8.s64 = ctx.r11.s64 + 22552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lwz r30,28(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lfs f13,204(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmuls f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21720(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21720);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ori r23,r6,255
	ctx.r23.u64 = ctx.r6.u64 | 255;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x83053500
	if (ctx.cr6.eq) goto loc_83053500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lfs f30,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f30.f64 = double(temp.f32);
loc_8305345C:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f0,f6,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f10.f64));
	// lfs f29,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f5,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f4,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f5,f3,f11,f10
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f4,f3,f9,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fadds f3,f29,f6
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f6.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831c0120
	ctx.lr = 0x830534F0;
	sub_831C0120(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8305345c
	if (!ctx.cr6.eq) goto loc_8305345C;
loc_83053500:
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83053664
	if (ctx.cr6.eq) goto loc_83053664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lfs f30,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
loc_8305351C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,65280
	ctx.r6.u64 = ctx.r6.u64 | 65280;
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fadds f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f29,f29,f30
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f28,f2,f0
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f27,f2,f13
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f28,f1,f11,f28
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmadds f27,f1,f10,f27
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f27.f64));
	// fmadds f1,f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f2,f8,f29,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmadds f28,f29,f7,f27
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f27.f64));
	// fmadds f1,f29,f6,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fadds f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmadds f0,f2,f11,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f2,f10,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f2,f9,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f11,f8,f1,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f10,f1,f7,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f9,f1,f6,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fadds f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x83053654;
	sub_831BFB50(ctx, base);
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8305351c
	if (!ctx.cr6.eq) goto loc_8305351C;
loc_83053664:
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830539a8
	if (ctx.cr6.eq) goto loc_830539A8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lfs f30,-15784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15784);
	ctx.f30.f64 = double(temp.f32);
loc_83053680:
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r9,r6,1
	ctx.r9.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r7,r5,1
	ctx.r7.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r9,r4,1
	ctx.r9.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r4,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r8,r5,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// clrlwi r10,r8,8
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFFFF;
	// clrlwi r9,r4,8
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFFFF;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r3,8
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFFFF;
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f3,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r25,r8,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fadds f2,f2,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// lfsx f29,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fadds f1,f29,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fadds f3,f28,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// fadds f2,f27,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f3,f3,f30
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f28,f3,f13
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmadds f29,f2,f12,f29
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f29.f64));
	// fmadds f28,f2,f11,f28
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmadds f2,f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f3,f9,f1,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f29.f64));
	// fmadds f29,f1,f8,f28
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f28.f64));
	// fmadds f2,f1,f6,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f2.f64));
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f4,f4,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fadds f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f10,f29,f10
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f12,f2,f7,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f13,f2,f11,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f11,f9,f1,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f9,f1,f6,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f10,f1,f8,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fadds f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x831bfb50
	ctx.lr = 0x83053850;
	sub_831BFB50(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfsx f11,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f10,f4,f1
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f13,f9,f11,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f12,f8,f11,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f29,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// lfs f27,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f11,f7,f11,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f4,f6,f5,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f13,f29,f5,f12
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fadds f12,f11,f28
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f11,f1,f4
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f5,f27,f13
	ctx.f5.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f1,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f12,f1,f9,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f11,f13,f10,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f13,f4,f6,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f5,f1,f8,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f12,f7,f1,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f5,f4,f29,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f5.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fadds f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f3
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f3,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f10,f3,f9,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f9,f3,f8,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f8,f7,f3,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f7,f5,f6,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f6,f5,f29,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x831bfce0
	ctx.lr = 0x83053998;
	sub_831BFCE0(ctx, base);
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83053680
	if (!ctx.cr6.eq) goto loc_83053680;
loc_830539A8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82cb6b2c
	ctx.lr = 0x830539B4;
	__restfpr_26(ctx, base);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830539B8"))) PPC_WEAK_FUNC(sub_830539B8);
PPC_FUNC_IMPL(__imp__sub_830539B8) {
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
	// beq cr6,0x83053a00
	if (ctx.cr6.eq) goto loc_83053A00;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6704
	ctx.r10.s64 = ctx.r11.s64 + -6704;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83051cb0
	ctx.lr = 0x830539E4;
	sub_83051CB0(ctx, base);
	// lis r9,-31901
	ctx.r9.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32308);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83053A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83053A00:
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

__attribute__((alias("__imp__sub_83053A14"))) PPC_WEAK_FUNC(sub_83053A14);
PPC_FUNC_IMPL(__imp__sub_83053A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053A18"))) PPC_WEAK_FUNC(sub_83053A18);
PPC_FUNC_IMPL(__imp__sub_83053A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f10,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmsubs f0,f1,f2,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmsubs f13,f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f11.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f12,f8,f4,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 - ctx.f7.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsqrts f11,f4
	ctx.f11.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x83053abc
	if (ctx.cr6.eq) goto loc_83053ABC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_83053ABC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fnmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64)));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053AE8"))) PPC_WEAK_FUNC(sub_83053AE8);
PPC_FUNC_IMPL(__imp__sub_83053AE8) {
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
	// clrlwi r9,r4,1
	ctx.r9.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r6,1
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r8,r4,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r4,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r4.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r5,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r5.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r6.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r9,r5,1
	ctx.r9.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r4,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r8,r9,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83053a18
	ctx.lr = 0x83053B9C;
	sub_83053A18(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83053BC8"))) PPC_WEAK_FUNC(sub_83053BC8);
PPC_FUNC_IMPL(__imp__sub_83053BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r31,48
	ctx.r31.s64 = 48;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmsubs f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f3,16(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmsubs f8,f13,f12,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f6,f7,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f2,28(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r7,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// divw r11,r5,r31
	ctx.r11.s32 = ctx.r5.s32 / ctx.r31.s32;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053CDC"))) PPC_WEAK_FUNC(sub_83053CDC);
PPC_FUNC_IMPL(__imp__sub_83053CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053CE0"))) PPC_WEAK_FUNC(sub_83053CE0);
PPC_FUNC_IMPL(__imp__sub_83053CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r5,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053D34"))) PPC_WEAK_FUNC(sub_83053D34);
PPC_FUNC_IMPL(__imp__sub_83053D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053D38"))) PPC_WEAK_FUNC(sub_83053D38);
PPC_FUNC_IMPL(__imp__sub_83053D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83053d48
	if (!ctx.cr6.eq) goto loc_83053D48;
	// lis r11,256
	ctx.r11.s64 = 16777216;
loc_83053D48:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// or r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r5.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f2,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f13,f12,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,16(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,20(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fnmsubs f0,f1,f6,f4
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f6.f64 - ctx.f4.f64)));
	// fneg f13,f3
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmadds f12,f13,f5,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f6,f8,f11,f7
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f7.f64)));
	// fnmsubs f4,f5,f10,f6
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f10.f64 - ctx.f6.f64)));
	// stfs f4,32(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r6,r10,44
	ctx.r6.s64 = ctx.r10.s64 + 44;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// divw r11,r4,r5
	ctx.r11.s32 = ctx.r4.s32 / ctx.r5.s32;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053ECC"))) PPC_WEAK_FUNC(sub_83053ECC);
PPC_FUNC_IMPL(__imp__sub_83053ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83053ED0"))) PPC_WEAK_FUNC(sub_83053ED0);
PPC_FUNC_IMPL(__imp__sub_83053ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-6704
	ctx.r10.s64 = ctx.r11.s64 + -6704;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83051cb0
	sub_83051CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053EE0"))) PPC_WEAK_FUNC(sub_83053EE0);
PPC_FUNC_IMPL(__imp__sub_83053EE0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6704
	ctx.r10.s64 = ctx.r11.s64 + -6704;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83051cb0
	ctx.lr = 0x83053F0C;
	sub_83051CB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83053f34
	if (ctx.cr6.eq) goto loc_83053F34;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83053F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83053F34:
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

__attribute__((alias("__imp__sub_83053F50"))) PPC_WEAK_FUNC(sub_83053F50);
PPC_FUNC_IMPL(__imp__sub_83053F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83053F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,15108(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lfs f0,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r31,-32222
	ctx.r31.s64 = -2111700992;
	// lfs f13,-18264(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18264);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// lfs f12,10840(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,21912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21912);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,21908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21908);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f12,-18044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -18044);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,308(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 308, temp.u32);
	// stfs f0,308(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// stfs f13,308(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 308, temp.u32);
	// lfs f12,6480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6480);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,300(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 300, temp.u32);
	// stfs f0,300(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// stfs f13,300(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 300, temp.u32);
	// stfs f0,296(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 296, temp.u32);
	// stfs f0,296(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// stfs f13,296(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 296, temp.u32);
	// lfs f12,-18204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18204);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f12,-18268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18268);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f12,6140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f12,24(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f11,-17844(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -17844);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,36(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f0,40(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,44(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f13,44(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f0,48(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f13,48(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f0,52(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,52(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f0,56(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,88(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f13,88(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f0,108(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 108, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,108(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 112, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f13,112(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f0,116(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 116, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f0,132(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 132, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f13,132(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// stfs f0,136(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 136, temp.u32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f13,136(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// stfs f0,140(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 140, temp.u32);
	// stfs f0,140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f13,140(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// stfs f0,144(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 144, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f13,144(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 144, temp.u32);
	// stfs f0,148(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 148, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f13,148(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 148, temp.u32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stfs f0,152(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 152, temp.u32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f13,152(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 152, temp.u32);
	// stfs f0,156(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 156, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f13,156(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 156, temp.u32);
	// stfs f0,160(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 160, temp.u32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f13,160(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// stfs f0,164(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 164, temp.u32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f13,164(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// stfs f0,168(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 168, temp.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f13,168(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 168, temp.u32);
	// stfs f0,172(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 172, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f13,172(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 172, temp.u32);
	// stfs f0,176(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 176, temp.u32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f13,176(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 176, temp.u32);
	// stfs f0,180(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 180, temp.u32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stfs f13,180(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// stfs f0,184(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 184, temp.u32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f13,184(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// stfs f0,188(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 188, temp.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f13,188(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
	// stfs f0,192(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 192, temp.u32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// stfs f13,192(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 192, temp.u32);
	// stfs f0,196(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 196, temp.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f13,196(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 196, temp.u32);
	// stfs f0,200(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f13,200(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// stfs f0,204(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// stfs f13,204(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// stfs f12,272(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 272, temp.u32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stfs f13,272(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 272, temp.u32);
	// stfs f12,276(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 276, temp.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f12,276(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 276, temp.u32);
	// stfs f12,280(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 280, temp.u32);
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// stfs f12,280(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 280, temp.u32);
	// stfs f0,284(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 284, temp.u32);
	// stfs f0,284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// stfs f12,284(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 284, temp.u32);
	// stfs f0,288(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 288, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f12,288(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 288, temp.u32);
	// li r5,388
	ctx.r5.s64 = 388;
	// lfs f11,7712(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7712);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,292(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 292, temp.u32);
	// stfs f0,292(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// stfs f13,292(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 292, temp.u32);
	// stfs f0,384(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 384, temp.u32);
	// stfs f0,384(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// stfs f12,384(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 384, temp.u32);
	// stfs f0,208(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f13,208(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 208, temp.u32);
	// stfs f0,212(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 212, temp.u32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// stfs f13,212(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 212, temp.u32);
	// stfs f0,216(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 216, temp.u32);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stfs f13,216(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 216, temp.u32);
	// stfs f0,220(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 220, temp.u32);
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f13,220(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 220, temp.u32);
	// stfs f0,224(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 224, temp.u32);
	// stfs f0,224(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f13,224(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 224, temp.u32);
	// stfs f0,228(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 228, temp.u32);
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// stfs f13,228(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 228, temp.u32);
	// stfs f0,232(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 232, temp.u32);
	// stfs f0,232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f13,232(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 232, temp.u32);
	// stfs f0,236(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 236, temp.u32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f13,236(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 236, temp.u32);
	// stfs f0,240(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 240, temp.u32);
	// stfs f0,240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f13,240(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 240, temp.u32);
	// stfs f0,244(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 244, temp.u32);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// stfs f13,244(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 244, temp.u32);
	// stfs f0,248(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 248, temp.u32);
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// stfs f13,248(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 248, temp.u32);
	// stfs f0,360(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 360, temp.u32);
	// stfs f0,360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f13,360(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 360, temp.u32);
	// stfs f0,252(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 252, temp.u32);
	// stfs f0,252(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stfs f13,252(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 252, temp.u32);
	// stfs f0,256(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 256, temp.u32);
	// stfs f0,256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f13,256(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 256, temp.u32);
	// stfs f0,260(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 260, temp.u32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f13,260(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 260, temp.u32);
	// stfs f0,264(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 264, temp.u32);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f13,264(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 264, temp.u32);
	// stfs f0,268(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 268, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f13,268(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 268, temp.u32);
	// stfs f0,320(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 320, temp.u32);
	// stfs f0,320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// stfs f13,320(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 320, temp.u32);
	// stfs f0,324(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 324, temp.u32);
	// stfs f0,324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// stfs f13,324(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 324, temp.u32);
	// stfs f0,328(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 328, temp.u32);
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// stfs f13,328(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 328, temp.u32);
	// stfs f0,332(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 332, temp.u32);
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f13,332(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 332, temp.u32);
	// stfs f0,336(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 336, temp.u32);
	// stfs f0,336(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// stfs f13,336(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 336, temp.u32);
	// stfs f0,340(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 340, temp.u32);
	// stfs f0,340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// stfs f13,340(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 340, temp.u32);
	// stfs f0,344(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 344, temp.u32);
	// stfs f0,344(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,344(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 344, temp.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stfs f0,348(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 348, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f0,348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stfs f13,348(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 348, temp.u32);
	// stfs f0,352(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 352, temp.u32);
	// stfs f0,352(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stfs f13,352(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 352, temp.u32);
	// stfs f0,356(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 356, temp.u32);
	// stfs f0,356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stfs f13,356(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 356, temp.u32);
	// lfs f12,7640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7640);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,304(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 304, temp.u32);
	// stfs f0,304(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 304, temp.u32);
	// lfs f0,21904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,304(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 304, temp.u32);
	// stfs f0,312(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 312, temp.u32);
	// stfs f0,312(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// lfs f13,-17800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17800);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,312(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 312, temp.u32);
	// stfs f13,316(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 316, temp.u32);
	// stfs f13,316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// stfs f13,316(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 316, temp.u32);
	// bl 0x82cb1160
	ctx.lr = 0x83054398;
	sub_82CB1160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830543A0"))) PPC_WEAK_FUNC(sub_830543A0);
PPC_FUNC_IMPL(__imp__sub_830543A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r8,r11,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 16;
	// xor r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830543DC"))) PPC_WEAK_FUNC(sub_830543DC);
PPC_FUNC_IMPL(__imp__sub_830543DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830543E0"))) PPC_WEAK_FUNC(sub_830543E0);
PPC_FUNC_IMPL(__imp__sub_830543E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054410"))) PPC_WEAK_FUNC(sub_83054410);
PPC_FUNC_IMPL(__imp__sub_83054410) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305441C"))) PPC_WEAK_FUNC(sub_8305441C);
PPC_FUNC_IMPL(__imp__sub_8305441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054420"))) PPC_WEAK_FUNC(sub_83054420);
PPC_FUNC_IMPL(__imp__sub_83054420) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054430"))) PPC_WEAK_FUNC(sub_83054430);
PPC_FUNC_IMPL(__imp__sub_83054430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305444C"))) PPC_WEAK_FUNC(sub_8305444C);
PPC_FUNC_IMPL(__imp__sub_8305444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054450"))) PPC_WEAK_FUNC(sub_83054450);
PPC_FUNC_IMPL(__imp__sub_83054450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054458"))) PPC_WEAK_FUNC(sub_83054458);
PPC_FUNC_IMPL(__imp__sub_83054458) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_83054468:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83054468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83054468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054478"))) PPC_WEAK_FUNC(sub_83054478);
PPC_FUNC_IMPL(__imp__sub_83054478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054494
	if (ctx.cr6.eq) goto loc_83054494;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83054494:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305449C"))) PPC_WEAK_FUNC(sub_8305449C);
PPC_FUNC_IMPL(__imp__sub_8305449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830544A0"))) PPC_WEAK_FUNC(sub_830544A0);
PPC_FUNC_IMPL(__imp__sub_830544A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830544A8"))) PPC_WEAK_FUNC(sub_830544A8);
PPC_FUNC_IMPL(__imp__sub_830544A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,22940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22940);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830544B4"))) PPC_WEAK_FUNC(sub_830544B4);
PPC_FUNC_IMPL(__imp__sub_830544B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830544B8"))) PPC_WEAK_FUNC(sub_830544B8);
PPC_FUNC_IMPL(__imp__sub_830544B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830544C0"))) PPC_WEAK_FUNC(sub_830544C0);
PPC_FUNC_IMPL(__imp__sub_830544C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830544C8"))) PPC_WEAK_FUNC(sub_830544C8);
PPC_FUNC_IMPL(__imp__sub_830544C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r10,264(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830544e8
	if (!ctx.cr6.eq) goto loc_830544E8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x830544f0
	goto loc_830544F0;
loc_830544E8:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_830544F0:
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r3,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r6,96(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054570"))) PPC_WEAK_FUNC(sub_83054570);
PPC_FUNC_IMPL(__imp__sub_83054570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r10,264(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83054590
	if (!ctx.cr6.eq) goto loc_83054590;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x83054598
	goto loc_83054598;
loc_83054590:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_83054598:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r6,92(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r3,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830545F8"))) PPC_WEAK_FUNC(sub_830545F8);
PPC_FUNC_IMPL(__imp__sub_830545F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83054658
	if (!ctx.cr6.lt) goto loc_83054658;
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8305461C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83054634
	if (!ctx.cr6.eq) goto loc_83054634;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83054660
	if (ctx.cr6.eq) goto loc_83054660;
loc_83054634:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83054648
	if (!ctx.cr6.eq) goto loc_83054648;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83054660
	if (ctx.cr6.eq) goto loc_83054660;
loc_83054648:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8305461c
	if (ctx.cr6.lt) goto loc_8305461C;
loc_83054658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83054660:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054670"))) PPC_WEAK_FUNC(sub_83054670);
PPC_FUNC_IMPL(__imp__sub_83054670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83054678;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r10,r11,21968
	ctx.r10.s64 = ctx.r11.s64 + 21968;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8305469C;
	sub_82CB16F0(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// bl 0x82cb16f0
	ctx.lr = 0x830546AC;
	sub_82CB16F0(ctx, base);
	// lis r9,-31983
	ctx.r9.s64 = -2096037888;
	// lis r8,-31985
	ctx.r8.s64 = -2096168960;
	// lis r7,-31985
	ctx.r7.s64 = -2096168960;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// addi r9,r9,-26384
	ctx.r9.s64 = ctx.r9.s64 + -26384;
	// addi r8,r8,-10888
	ctx.r8.s64 = ctx.r8.s64 + -10888;
	// addi r7,r7,-14816
	ctx.r7.s64 = ctx.r7.s64 + -14816;
	// stw r9,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r9.u32);
	// addi r6,r6,21008
	ctx.r6.s64 = ctx.r6.s64 + 21008;
	// stw r8,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r8.u32);
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// stw r7,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r7.u32);
	// lis r4,-31985
	ctx.r4.s64 = -2096168960;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r28,-31985
	ctx.r28.s64 = -2096168960;
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// addi r5,r5,16568
	ctx.r5.s64 = ctx.r5.s64 + 16568;
	// addi r4,r4,-14912
	ctx.r4.s64 = ctx.r4.s64 + -14912;
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// addi r11,r11,3320
	ctx.r11.s64 = ctx.r11.s64 + 3320;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// addi r10,r10,-14896
	ctx.r10.s64 = ctx.r10.s64 + -14896;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r9,r30,28000
	ctx.r9.s64 = ctx.r30.s64 + 28000;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r8,r29,-17160
	ctx.r8.s64 = ctx.r29.s64 + -17160;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r7,r28,-14880
	ctx.r7.s64 = ctx.r28.s64 + -14880;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r6,r27,31496
	ctx.r6.s64 = ctx.r27.s64 + 31496;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// lis r26,-31985
	ctx.r26.s64 = -2096168960;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// lis r25,-31985
	ctx.r25.s64 = -2096168960;
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// lis r24,-31983
	ctx.r24.s64 = -2096037888;
	// lis r23,-31983
	ctx.r23.s64 = -2096037888;
	// lis r22,-31983
	ctx.r22.s64 = -2096037888;
	// lis r21,-31985
	ctx.r21.s64 = -2096168960;
	// lis r20,-31984
	ctx.r20.s64 = -2096103424;
	// lis r19,-31985
	ctx.r19.s64 = -2096168960;
	// lis r18,-31985
	ctx.r18.s64 = -2096168960;
	// addi r5,r26,22704
	ctx.r5.s64 = ctx.r26.s64 + 22704;
	// addi r4,r25,-14864
	ctx.r4.s64 = ctx.r25.s64 + -14864;
	// lis r17,-31985
	ctx.r17.s64 = -2096168960;
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// addi r3,r24,-29880
	ctx.r3.s64 = ctx.r24.s64 + -29880;
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// addi r11,r23,-26384
	ctx.r11.s64 = ctx.r23.s64 + -26384;
	// addi r10,r22,-22824
	ctx.r10.s64 = ctx.r22.s64 + -22824;
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// addi r9,r21,-14848
	ctx.r9.s64 = ctx.r21.s64 + -14848;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r8,r20,20984
	ctx.r8.s64 = ctx.r20.s64 + 20984;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// addi r7,r19,-14832
	ctx.r7.s64 = ctx.r19.s64 + -14832;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// addi r6,r18,-10888
	ctx.r6.s64 = ctx.r18.s64 + -10888;
	// stw r8,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r8.u32);
	// addi r5,r17,-14816
	ctx.r5.s64 = ctx.r17.s64 + -14816;
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// lis r4,-31985
	ctx.r4.s64 = -2096168960;
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// stw r5,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r5.u32);
	// addi r11,r4,-14800
	ctx.r11.s64 = ctx.r4.s64 + -14800;
	// addi r10,r3,-14784
	ctx.r10.s64 = ctx.r3.s64 + -14784;
	// li r5,400
	ctx.r5.s64 = 400;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// bl 0x82cb16f0
	ctx.lr = 0x830547E8;
	sub_82CB16F0(ctx, base);
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// addi r9,r9,20336
	ctx.r9.s64 = ctx.r9.s64 + 20336;
	// addi r8,r8,20144
	ctx.r8.s64 = ctx.r8.s64 + 20144;
	// addi r7,r7,19240
	ctx.r7.s64 = ctx.r7.s64 + 19240;
	// stw r9,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
	// addi r6,r6,18312
	ctx.r6.s64 = ctx.r6.s64 + 18312;
	// stw r8,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r8.u32);
	// addi r5,r5,15744
	ctx.r5.s64 = ctx.r5.s64 + 15744;
	// stw r7,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r7.u32);
	// lis r4,-31985
	ctx.r4.s64 = -2096168960;
	// stw r6,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r6.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// stw r5,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r5.u32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r30,-31984
	ctx.r30.s64 = -2096103424;
	// lis r29,-31984
	ctx.r29.s64 = -2096103424;
	// lis r28,-31984
	ctx.r28.s64 = -2096103424;
	// lis r27,-31985
	ctx.r27.s64 = -2096168960;
	// lis r26,-31984
	ctx.r26.s64 = -2096103424;
	// addi r4,r4,-16088
	ctx.r4.s64 = ctx.r4.s64 + -16088;
	// addi r3,r3,14536
	ctx.r3.s64 = ctx.r3.s64 + 14536;
	// addi r11,r11,12736
	ctx.r11.s64 = ctx.r11.s64 + 12736;
	// stw r4,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r4.u32);
	// addi r10,r10,11056
	ctx.r10.s64 = ctx.r10.s64 + 11056;
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// addi r9,r30,8704
	ctx.r9.s64 = ctx.r30.s64 + 8704;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// addi r8,r29,-3232
	ctx.r8.s64 = ctx.r29.s64 + -3232;
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// addi r7,r28,-5160
	ctx.r7.s64 = ctx.r28.s64 + -5160;
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// addi r6,r27,-12792
	ctx.r6.s64 = ctx.r27.s64 + -12792;
	// stw r8,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r8.u32);
	// addi r5,r26,-8000
	ctx.r5.s64 = ctx.r26.s64 + -8000;
	// stw r7,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r7.u32);
	// lis r25,-31984
	ctx.r25.s64 = -2096103424;
	// stw r6,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r6.u32);
	// lis r24,-31984
	ctx.r24.s64 = -2096103424;
	// stw r5,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r5.u32);
	// lis r23,-31984
	ctx.r23.s64 = -2096103424;
	// lis r22,-31984
	ctx.r22.s64 = -2096103424;
	// lis r21,-31985
	ctx.r21.s64 = -2096168960;
	// lis r20,-31985
	ctx.r20.s64 = -2096168960;
	// lis r19,-31985
	ctx.r19.s64 = -2096168960;
	// lis r18,-31985
	ctx.r18.s64 = -2096168960;
	// lis r17,-31985
	ctx.r17.s64 = -2096168960;
	// addi r4,r25,-9952
	ctx.r4.s64 = ctx.r25.s64 + -9952;
	// lis r16,-31985
	ctx.r16.s64 = -2096168960;
	// addi r3,r24,-13056
	ctx.r3.s64 = ctx.r24.s64 + -13056;
	// stw r4,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r4.u32);
	// addi r11,r23,-24392
	ctx.r11.s64 = ctx.r23.s64 + -24392;
	// addi r10,r22,-27120
	ctx.r10.s64 = ctx.r22.s64 + -27120;
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// addi r9,r21,-11896
	ctx.r9.s64 = ctx.r21.s64 + -11896;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// addi r8,r20,32136
	ctx.r8.s64 = ctx.r20.s64 + 32136;
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// addi r7,r19,28976
	ctx.r7.s64 = ctx.r19.s64 + 28976;
	// stw r9,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r9.u32);
	// addi r6,r18,12368
	ctx.r6.s64 = ctx.r18.s64 + 12368;
	// stw r8,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r8.u32);
	// addi r5,r17,10096
	ctx.r5.s64 = ctx.r17.s64 + 10096;
	// stw r7,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r7.u32);
	// addi r4,r16,-13808
	ctx.r4.s64 = ctx.r16.s64 + -13808;
	// stw r6,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r6.u32);
	// stw r5,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r5.u32);
	// lis r3,-31985
	ctx.r3.s64 = -2096168960;
	// stw r4,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r4.u32);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lis r9,-31985
	ctx.r9.s64 = -2096168960;
	// lis r8,-31985
	ctx.r8.s64 = -2096168960;
	// lis r7,-31985
	ctx.r7.s64 = -2096168960;
	// addi r6,r3,6344
	ctx.r6.s64 = ctx.r3.s64 + 6344;
	// addi r5,r11,-6680
	ctx.r5.s64 = ctx.r11.s64 + -6680;
	// addi r4,r10,-15560
	ctx.r4.s64 = ctx.r10.s64 + -15560;
	// stw r6,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r6.u32);
	// addi r3,r9,-10896
	ctx.r3.s64 = ctx.r9.s64 + -10896;
	// stw r5,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r5.u32);
	// addi r11,r8,-15912
	ctx.r11.s64 = ctx.r8.s64 + -15912;
	// stw r4,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r4.u32);
	// addi r10,r7,-15736
	ctx.r10.s64 = ctx.r7.s64 + -15736;
	// stw r3,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r3.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305495C"))) PPC_WEAK_FUNC(sub_8305495C);
PPC_FUNC_IMPL(__imp__sub_8305495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054960"))) PPC_WEAK_FUNC(sub_83054960);
PPC_FUNC_IMPL(__imp__sub_83054960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,21968
	ctx.r10.s64 = ctx.r11.s64 + 21968;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054970"))) PPC_WEAK_FUNC(sub_83054970);
PPC_FUNC_IMPL(__imp__sub_83054970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83054978;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305499C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83054d30
	if (!ctx.cr6.eq) goto loc_83054D30;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830549BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83054d30
	if (!ctx.cr6.eq) goto loc_83054D30;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830549f0
	if (ctx.cr6.eq) goto loc_830549F0;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830549f0
	if (!ctx.cr6.eq) goto loc_830549F0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x83054a14
	goto loc_83054A14;
loc_830549F0:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83054d30
	if (ctx.cr6.eq) goto loc_83054D30;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83054d30
	if (!ctx.cr6.eq) goto loc_83054D30;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83054A14:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83054af0
	if (ctx.cr6.eq) goto loc_83054AF0;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83054aec
	if (ctx.cr6.eq) goto loc_83054AEC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x83054ae0
	if (!ctx.cr6.eq) goto loc_83054AE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,336(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83054af0
	if (ctx.cr6.eq) goto loc_83054AF0;
loc_83054A78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83054ab4
	if (ctx.cr6.eq) goto loc_83054AB4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x83054aec
	if (!ctx.cr6.eq) goto loc_83054AEC;
loc_83054AB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83054aec
	if (!ctx.cr6.eq) goto loc_83054AEC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83054a78
	if (!ctx.cr6.eq) goto loc_83054A78;
	// b 0x83054af0
	goto loc_83054AF0;
loc_83054AE0:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83054a78
	goto loc_83054A78;
loc_83054AEC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_83054AF0:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83054b3c
	if (!ctx.cr6.eq) goto loc_83054B3C;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83054b3c
	if (!ctx.cr6.eq) goto loc_83054B3C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054d30
	if (ctx.cr6.eq) goto loc_83054D30;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83054b3c
	if (!ctx.cr6.eq) goto loc_83054B3C;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83054d30
	if (ctx.cr6.eq) goto loc_83054D30;
loc_83054B3C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054c98
	if (ctx.cr6.eq) goto loc_83054C98;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x83054b84
	if (!ctx.cr6.eq) goto loc_83054B84;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,336(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x83054b8c
	goto loc_83054B8C;
loc_83054B84:
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83054B8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x83054bc8
	if (!ctx.cr6.eq) goto loc_83054BC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,336(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83054bd0
	goto loc_83054BD0;
loc_83054BC8:
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83054BD0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83054d30
	if (ctx.cr6.eq) goto loc_83054D30;
loc_83054BD8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83054c84
	if (ctx.cr6.eq) goto loc_83054C84;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83054c84
	if (ctx.cr6.eq) goto loc_83054C84;
loc_83054C08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83054c78
	if (ctx.cr6.eq) goto loc_83054C78;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83054c50
	if (!ctx.cr6.eq) goto loc_83054C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83054c78
	if (ctx.cr6.eq) goto loc_83054C78;
loc_83054C50:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83062ea8
	ctx.lr = 0x83054C5C;
	sub_83062EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83054c78
	if (ctx.cr6.eq) goto loc_83054C78;
	// addi r3,r25,828
	ctx.r3.s64 = ctx.r25.s64 + 828;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83119128
	ctx.lr = 0x83054C78;
	sub_83119128(ctx, base);
loc_83054C78:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83054c08
	if (!ctx.cr6.eq) goto loc_83054C08;
loc_83054C84:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x83054bd8
	if (!ctx.cr6.eq) goto loc_83054BD8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83054C98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x83054d38
	if (!ctx.cr6.eq) goto loc_83054D38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,336(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83054d30
	if (ctx.cr6.eq) goto loc_83054D30;
loc_83054CD8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x83054d14
	if (ctx.cr6.eq) goto loc_83054D14;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x83054d24
	if (!ctx.cr6.eq) goto loc_83054D24;
loc_83054D14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r25,828
	ctx.r3.s64 = ctx.r25.s64 + 828;
	// bl 0x83118558
	ctx.lr = 0x83054D24;
	sub_83118558(ctx, base);
loc_83054D24:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83054cd8
	if (!ctx.cr6.eq) goto loc_83054CD8;
loc_83054D30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83054D38:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83054cd8
	goto loc_83054CD8;
}

__attribute__((alias("__imp__sub_83054D44"))) PPC_WEAK_FUNC(sub_83054D44);
PPC_FUNC_IMPL(__imp__sub_83054D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054D48"))) PPC_WEAK_FUNC(sub_83054D48);
PPC_FUNC_IMPL(__imp__sub_83054D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83054D50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83054d84
	if (!ctx.cr6.eq) goto loc_83054D84;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83054ecc
	if (ctx.cr6.eq) goto loc_83054ECC;
loc_83054D84:
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83054d9c
	if (!ctx.cr6.eq) goto loc_83054D9C;
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x83054ecc
	if (ctx.cr6.eq) goto loc_83054ECC;
loc_83054D9C:
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83054db4
	if (!ctx.cr6.gt) goto loc_83054DB4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83054DB4:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83054e48
	if (!ctx.cr6.eq) goto loc_83054E48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83054ecc
	if (ctx.cr6.eq) goto loc_83054ECC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83054DE4:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83054e04
	if (ctx.cr6.lt) goto loc_83054E04;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x83054e0c
	goto loc_83054E0C;
loc_83054E04:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
loc_83054E0C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83054d48
	ctx.lr = 0x83054E1C;
	sub_83054D48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83054de4
	if (ctx.cr6.lt) goto loc_83054DE4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83054E48:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83054e64
	if (!ctx.cr6.eq) goto loc_83054E64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x83054e6c
	goto loc_83054E6C;
loc_83054E64:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83054E6C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r31,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_83054ECC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83054ED4"))) PPC_WEAK_FUNC(sub_83054ED4);
PPC_FUNC_IMPL(__imp__sub_83054ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83054ED8"))) PPC_WEAK_FUNC(sub_83054ED8);
PPC_FUNC_IMPL(__imp__sub_83054ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83054EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83055274
	if (!ctx.cr6.eq) goto loc_83055274;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83055274
	if (!ctx.cr6.eq) goto loc_83055274;
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83054f2c
	if (!ctx.cr6.eq) goto loc_83054F2C;
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x83055288
	if (ctx.cr6.eq) goto loc_83055288;
loc_83054F2C:
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83054f44
	if (!ctx.cr6.gt) goto loc_83054F44;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83054F44:
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x83054fdc
	if (!ctx.cr6.eq) goto loc_83054FDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83055288
	if (ctx.cr6.eq) goto loc_83055288;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_83054F78:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83054f98
	if (ctx.cr6.lt) goto loc_83054F98;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x83054fa0
	goto loc_83054FA0;
loc_83054F98:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwzx r5,r26,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
loc_83054FA0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83054ed8
	ctx.lr = 0x83054FB0;
	sub_83054ED8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83054FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83054f78
	if (ctx.cr6.lt) goto loc_83054F78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83054FDC:
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x830550ac
	if (!ctx.cr6.eq) goto loc_830550AC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83055020
	if (!ctx.cr6.eq) goto loc_83055020;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x83055028
	goto loc_83055028;
loc_83055020:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83055028:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r31,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r29.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_830550AC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x830550c4
	if (ctx.cr6.eq) goto loc_830550C4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x83055288
	if (!ctx.cr6.eq) goto loc_83055288;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830551a0
	if (!ctx.cr6.eq) goto loc_830551A0;
loc_830550C4:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x83055288
	if (ctx.cr6.eq) goto loc_83055288;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830551a0
	if (!ctx.cr6.eq) goto loc_830551A0;
	// lwz r10,336(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// lwz r8,176(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// bne cr6,0x830551a0
	if (!ctx.cr6.eq) goto loc_830551A0;
	// addi r11,r9,201
	ctx.r11.s64 = ctx.r9.s64 + 201;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83055288
	if (!ctx.cr6.eq) goto loc_83055288;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83055114
	if (!ctx.cr6.eq) goto loc_83055114;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x8305511c
	goto loc_8305511C;
loc_83055114:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8305511C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r31,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r29.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r7,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_830551A0:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x83055288
	if (!ctx.cr6.eq) goto loc_83055288;
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x83055288
	if (!ctx.cr6.eq) goto loc_83055288;
	// addi r11,r11,201
	ctx.r11.s64 = ctx.r11.s64 + 201;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83055288
	if (!ctx.cr6.eq) goto loc_83055288;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830551e8
	if (!ctx.cr6.eq) goto loc_830551E8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// b 0x830551f0
	goto loc_830551F0;
loc_830551E8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830551F0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r31,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r29.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_83055274:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83054d48
	ctx.lr = 0x83055288;
	sub_83054D48(ctx, base);
loc_83055288:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055290"))) PPC_WEAK_FUNC(sub_83055290);
PPC_FUNC_IMPL(__imp__sub_83055290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83055298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830552c8
	if (ctx.cr6.eq) goto loc_830552C8;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830552C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830552C8:
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830552fc
	if (ctx.cr6.eq) goto loc_830552FC;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830552FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830552FC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055310"))) PPC_WEAK_FUNC(sub_83055310);
PPC_FUNC_IMPL(__imp__sub_83055310) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// srawi. r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830553b4
	if (ctx.cr0.eq) goto loc_830553B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83055340:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83055368
	if (ctx.cr6.eq) goto loc_83055368;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83055368
	if (ctx.cr6.eq) goto loc_83055368;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// b 0x830553ac
	goto loc_830553AC;
loc_83055368:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8305539c
	if (ctx.cr6.eq) goto loc_8305539C;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// add r30,r6,r10
	ctx.r30.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwx r8,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8305539C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_830553AC:
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83055340
	if (!ctx.cr6.eq) goto loc_83055340;
loc_830553B4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830553C0"))) PPC_WEAK_FUNC(sub_830553C0);
PPC_FUNC_IMPL(__imp__sub_830553C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830553F0"))) PPC_WEAK_FUNC(sub_830553F0);
PPC_FUNC_IMPL(__imp__sub_830553F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x830553F8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x83055430
	if (!ctx.cr6.gt) goto loc_83055430;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83055430:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83055560
	if (!ctx.cr6.eq) goto loc_83055560;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83055560
	if (!ctx.cr6.eq) goto loc_83055560;
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x83055494
	if (ctx.cr6.eq) goto loc_83055494;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8305553c
	if (!ctx.cr6.eq) goto loc_8305553C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830554ec
	if (!ctx.cr6.eq) goto loc_830554EC;
loc_83055494:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8305553c
	if (ctx.cr6.eq) goto loc_8305553C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x830554ec
	if (!ctx.cr6.eq) goto loc_830554EC;
	// lwz r8,336(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// lwz r7,176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// bne cr6,0x830554ec
	if (!ctx.cr6.eq) goto loc_830554EC;
	// addi r11,r10,201
	ctx.r11.s64 = ctx.r10.s64 + 201;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830554E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_830554EC:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8305553c
	if (!ctx.cr6.eq) goto loc_8305553C;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r8,176(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// bne cr6,0x8305553c
	if (!ctx.cr6.eq) goto loc_8305553C;
	// addi r11,r11,201
	ctx.r11.s64 = ctx.r11.s64 + 201;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83055530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_8305553C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83055554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_83055560:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r20,-31890
	ctx.r20.s64 = -2089943040;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x830555ac
	if (ctx.cr6.eq) goto loc_830555AC;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830555ac
	if (ctx.cr6.eq) goto loc_830555AC;
	// lwz r3,22940(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 22940);
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830555A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
loc_830555AC:
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,101
	ctx.r10.s64 = ctx.r11.s64 + 101;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830555f8
	if (!ctx.cr6.eq) goto loc_830555F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830555f8
	if (!ctx.cr6.eq) goto loc_830555F8;
	// addi r5,r23,204
	ctx.r5.s64 = ctx.r23.s64 + 204;
	// b 0x8305565c
	goto loc_8305565C;
loc_830555F8:
	// lwz r7,104(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83055658
	if (!ctx.cr6.lt) goto loc_83055658;
	// lwz r8,92(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8305561C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83055634
	if (!ctx.cr6.eq) goto loc_83055634;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83055740
	if (ctx.cr6.eq) goto loc_83055740;
loc_83055634:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83055648
	if (!ctx.cr6.eq) goto loc_83055648;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83055740
	if (ctx.cr6.eq) goto loc_83055740;
loc_83055648:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8305561c
	if (ctx.cr6.lt) goto loc_8305561C;
loc_83055658:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8305565C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83055670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83055698
	if (!ctx.cr6.eq) goto loc_83055698;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83055698:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r28,r21,68
	ctx.r28.s64 = ctx.r21.s64 + 68;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83055954
	if (!ctx.cr6.eq) goto loc_83055954;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830556BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r26,336(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83055a5c
	if (ctx.cr6.eq) goto loc_83055A5C;
	// lis r25,-31901
	ctx.r25.s64 = -2090663936;
loc_830556D0:
	// lwz r8,104(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 104);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83055764
	if (!ctx.cr6.lt) goto loc_83055764;
	// lwz r7,92(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_83055700:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83055718
	if (!ctx.cr6.eq) goto loc_83055718;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83055750
	if (ctx.cr6.eq) goto loc_83055750;
loc_83055718:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8305572c
	if (!ctx.cr6.eq) goto loc_8305572C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83055750
	if (ctx.cr6.eq) goto loc_83055750;
loc_8305572C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83055700
	if (ctx.cr6.lt) goto loc_83055700;
	// b 0x83055764
	goto loc_83055764;
loc_83055740:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// b 0x8305565c
	goto loc_8305565C;
loc_83055750:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83055768
	if (!ctx.cr6.eq) goto loc_83055768;
loc_83055764:
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_83055768:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83062ea8
	ctx.lr = 0x83055778;
	sub_83062EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055940
	if (ctx.cr6.eq) goto loc_83055940;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830557b4
	if (ctx.cr6.eq) goto loc_830557B4;
	// lwz r3,22940(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 22940);
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830557AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x83055940
	if (ctx.cr6.eq) goto loc_83055940;
loc_830557B4:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r10,288(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x830557d0
	if (!ctx.cr6.gt) goto loc_830557D0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830557D0:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r10,288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,101
	ctx.r10.s64 = ctx.r11.s64 + 101;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055940
	if (ctx.cr6.eq) goto loc_83055940;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83055814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83055940
	if (ctx.cr6.eq) goto loc_83055940;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8305583c
	if (!ctx.cr6.eq) goto loc_8305583C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8305583C:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83055928
	if (ctx.cr6.gt) goto loc_83055928;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83055878
	if (!ctx.cr6.eq) goto loc_83055878;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83055880
	goto loc_83055880;
loc_83055878:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_83055880:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83055928
	if (!ctx.cr6.lt) goto loc_83055928;
	// lwz r3,-32308(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32308);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830558A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830558e0
	if (ctx.cr6.eq) goto loc_830558E0;
loc_830558C0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830558c0
	if (!ctx.cr6.eq) goto loc_830558C0;
loc_830558E0:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055900
	if (ctx.cr6.eq) goto loc_83055900;
	// lwz r3,-32308(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83055900:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
loc_83055928:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
loc_83055940:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x830556d0
	if (!ctx.cr6.eq) goto loc_830556D0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
loc_83055954:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83055a44
	if (ctx.cr6.gt) goto loc_83055A44;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83055990
	if (!ctx.cr6.eq) goto loc_83055990;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83055998
	goto loc_83055998;
loc_83055990:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_83055998:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83055a44
	if (!ctx.cr6.lt) goto loc_83055A44;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830559C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830559fc
	if (ctx.cr6.eq) goto loc_830559FC;
loc_830559DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830559dc
	if (!ctx.cr6.eq) goto loc_830559DC;
loc_830559FC:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055a1c
	if (ctx.cr6.eq) goto loc_83055A1C;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83055A1C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
loc_83055A44:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
loc_83055A5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83055A68"))) PPC_WEAK_FUNC(sub_83055A68);
PPC_FUNC_IMPL(__imp__sub_83055A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83055A70;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r30,-31909
	ctx.r30.s64 = -2091188224;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r20,-31901
	ctx.r20.s64 = -2090663936;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// lwz r10,18340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18340);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r19,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r19.s64 = ctx.r7.s32 >> 3;
	// rlwinm r6,r19,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 31) & 0x7FFFFFFF;
	// or r5,r6,r19
	ctx.r5.u64 = ctx.r6.u64 | ctx.r19.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// or r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r6,r7,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83055b14
	if (!ctx.cr6.gt) goto loc_83055B14;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,18340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18340);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stb r22,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r22.u8);
	// b 0x83055b30
	goto loc_83055B30;
loc_83055B14:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x83055B24;
	sub_82CB8074(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r18,r1,80
	ctx.r18.s64 = ctx.r1.s64 + 80;
loc_83055B30:
	// rlwinm r11,r19,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r27,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r27.u8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83055b6c
	if (!ctx.cr6.gt) goto loc_83055B6C;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,18340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18340);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r22,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r22.u8);
	// b 0x83055b88
	goto loc_83055B88;
loc_83055B6C:
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x83055B7C;
	sub_82CB8074(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_83055B88:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r27,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r27.u8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83055bc4
	if (!ctx.cr6.gt) goto loc_83055BC4;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stb r22,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r22.u8);
	// b 0x83055bdc
	goto loc_83055BDC;
loc_83055BC4:
	// neg r11,r19
	ctx.r11.s64 = -ctx.r19.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x83055BD0;
	sub_82CB8074(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
loc_83055BDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83055bfc
	if (ctx.cr6.eq) goto loc_83055BFC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_83055BF0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83055bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83055BF0;
loc_83055BFC:
	// addi r23,r28,-1
	ctx.r23.s64 = ctx.r28.s64 + -1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83055c8c
	if (ctx.cr6.eq) goto loc_83055C8C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83055C14:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,292(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lhz r5,294(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 294);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r3,r8,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFFFF8000;
	// not r7,r3
	ctx.r7.u64 = ~ctx.r3.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r7,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 10;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// xor r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// rlwinm r5,r8,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// not r7,r5
	ctx.r7.u64 = ~ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// xor r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// and r8,r3,r23
	ctx.r8.u64 = ctx.r3.u64 & ctx.r23.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r18
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r18.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwx r10,r8,r18
	PPC_STORE_U32(ctx.r8.u32 + ctx.r18.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x83055c14
	if (ctx.cr6.lt) goto loc_83055C14;
loc_83055C8C:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r24,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 3;
	// bl 0x82cb16f0
	ctx.lr = 0x83055CB4;
	sub_82CB16F0(ctx, base);
	// li r21,12
	ctx.r21.s64 = 12;
	// li r17,4
	ctx.r17.s64 = 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83055fe0
	if (ctx.cr6.eq) goto loc_83055FE0;
loc_83055CC4:
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,292(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 292);
	// lhz r10,294(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 294);
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r11,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 10;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 6;
	// xor r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// rlwinm r5,r11,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r5
	ctx.r10.u64 = ~ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r4,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 16;
	// xor r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// and r11,r3,r23
	ctx.r11.u64 = ctx.r3.u64 & ctx.r23.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83055d80
	if (ctx.cr6.eq) goto loc_83055D80;
loc_83055D2C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + ctx.r16.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83055d50
	if (!ctx.cr6.eq) goto loc_83055D50;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x83055d54
	if (ctx.cr6.eq) goto loc_83055D54;
loc_83055D50:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83055D54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83055d78
	if (ctx.cr6.eq) goto loc_83055D78;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83055d2c
	if (!ctx.cr6.eq) goto loc_83055D2C;
	// b 0x83055d80
	goto loc_83055D80;
loc_83055D78:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83055ea0
	if (!ctx.cr6.eq) goto loc_83055EA0;
loc_83055D80:
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83055fd4
	if (ctx.cr6.eq) goto loc_83055FD4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83055e8c
	if (ctx.cr6.gt) goto loc_83055E8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r21
	ctx.r10.s32 = ctx.r10.s32 / ctx.r21.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83055dc4
	if (!ctx.cr6.eq) goto loc_83055DC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83055dcc
	goto loc_83055DCC;
loc_83055DC4:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r21
	ctx.r11.s32 = ctx.r11.s32 / ctx.r21.s32;
loc_83055DCC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83055e8c
	if (!ctx.cr6.lt) goto loc_83055E8C;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83055DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83055e3c
	if (ctx.cr6.eq) goto loc_83055E3C;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83055E14:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83055e14
	if (!ctx.cr6.eq) goto loc_83055E14;
loc_83055E3C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055e5c
	if (ctx.cr6.eq) goto loc_83055E5C;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83055E5C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r21
	ctx.r11.s32 = ctx.r8.s32 / ctx.r21.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_83055E8C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x83055fc8
	goto loc_83055FC8;
loc_83055EA0:
	// stbx r22,r11,r15
	PPC_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r22.u8);
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83055fd4
	if (ctx.cr6.eq) goto loc_83055FD4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r27,4(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83055fb8
	if (ctx.cr6.gt) goto loc_83055FB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r21
	ctx.r10.s32 = ctx.r10.s32 / ctx.r21.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83055ef0
	if (!ctx.cr6.eq) goto loc_83055EF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83055ef8
	goto loc_83055EF8;
loc_83055EF0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r21
	ctx.r11.s32 = ctx.r11.s32 / ctx.r21.s32;
loc_83055EF8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83055fb8
	if (!ctx.cr6.lt) goto loc_83055FB8;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83055F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83055f68
	if (ctx.cr6.eq) goto loc_83055F68;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83055F40:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83055f40
	if (!ctx.cr6.eq) goto loc_83055F40;
loc_83055F68:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83055f88
	if (ctx.cr6.eq) goto loc_83055F88;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83055F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83055F88:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r21
	ctx.r11.s32 = ctx.r8.s32 / ctx.r21.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_83055FB8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r17,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
loc_83055FC8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_83055FD4:
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x83055cc4
	if (!ctx.cr6.eq) goto loc_83055CC4;
loc_83055FE0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x830562a8
	if (ctx.cr6.eq) goto loc_830562A8;
loc_83055FE8:
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305629c
	if (!ctx.cr6.eq) goto loc_8305629C;
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r25,4(r16)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83056020
	if (!ctx.cr6.eq) goto loc_83056020;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_83056020:
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056040
	if (ctx.cr6.eq) goto loc_83056040;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83056170
	if (ctx.cr6.eq) goto loc_83056170;
loc_83056040:
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83056060
	if (ctx.cr6.eq) goto loc_83056060;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83056170
	if (ctx.cr6.eq) goto loc_83056170;
loc_83056060:
	// lwz r30,4(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83056150
	if (ctx.cr6.gt) goto loc_83056150;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830560a0
	if (!ctx.cr6.eq) goto loc_830560A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830560a8
	goto loc_830560A8;
loc_830560A0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_830560A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83056150
	if (!ctx.cr6.lt) goto loc_83056150;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830560D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83056108
	if (ctx.cr6.eq) goto loc_83056108;
loc_830560E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x830560e8
	if (!ctx.cr6.eq) goto loc_830560E8;
loc_83056108:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056128
	if (ctx.cr6.eq) goto loc_83056128;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056128:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83056150:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x83056174
	goto loc_83056174;
loc_83056170:
	// li r27,2
	ctx.r27.s64 = 2;
loc_83056174:
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8305629c
	if (ctx.cr6.eq) goto loc_8305629C;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83056280
	if (ctx.cr6.gt) goto loc_83056280;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r21
	ctx.r10.s32 = ctx.r10.s32 / ctx.r21.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830561b8
	if (!ctx.cr6.eq) goto loc_830561B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830561c0
	goto loc_830561C0;
loc_830561B8:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r21
	ctx.r11.s32 = ctx.r11.s32 / ctx.r21.s32;
loc_830561C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83056280
	if (!ctx.cr6.lt) goto loc_83056280;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830561F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83056230
	if (ctx.cr6.eq) goto loc_83056230;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83056208:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83056208
	if (!ctx.cr6.eq) goto loc_83056208;
loc_83056230:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056250
	if (ctx.cr6.eq) goto loc_83056250;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056250:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r21
	ctx.r11.s32 = ctx.r8.s32 / ctx.r21.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_83056280:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_8305629C:
	// addi r16,r16,8
	ctx.r16.s64 = ctx.r16.s64 + 8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x83055fe8
	if (!ctx.cr6.eq) goto loc_83055FE8;
loc_830562A8:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// stw r10,4(r14)
	PPC_STORE_U32(ctx.r14.u32 + 4, ctx.r10.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x830562f0
	if (ctx.cr6.eq) goto loc_830562F0;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830562F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830562F0:
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8305631c
	if (ctx.cr6.eq) goto loc_8305631C;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8305631c
	if (ctx.cr6.eq) goto loc_8305631C;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305631C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8305631C:
	// lbz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83056348
	if (ctx.cr6.eq) goto loc_83056348;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x83056348
	if (ctx.cr6.eq) goto loc_83056348;
	// lwz r3,-32308(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -32308);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056348:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056350"))) PPC_WEAK_FUNC(sub_83056350);
PPC_FUNC_IMPL(__imp__sub_83056350) {
	PPC_FUNC_PROLOGUE();
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r3,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r8,r11,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r8
	ctx.r10.u64 = ~ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r7,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 16;
	// xor r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056390"))) PPC_WEAK_FUNC(sub_83056390);
PPC_FUNC_IMPL(__imp__sub_83056390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830563b4
	if (!ctx.cr6.eq) goto loc_830563B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830563b8
	if (ctx.cr6.eq) goto loc_830563B8;
loc_830563B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830563B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563C0"))) PPC_WEAK_FUNC(sub_830563C0);
PPC_FUNC_IMPL(__imp__sub_830563C0) {
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

__attribute__((alias("__imp__sub_830563D4"))) PPC_WEAK_FUNC(sub_830563D4);
PPC_FUNC_IMPL(__imp__sub_830563D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830563D8"))) PPC_WEAK_FUNC(sub_830563D8);
PPC_FUNC_IMPL(__imp__sub_830563D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563EC"))) PPC_WEAK_FUNC(sub_830563EC);
PPC_FUNC_IMPL(__imp__sub_830563EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830563F0"))) PPC_WEAK_FUNC(sub_830563F0);
PPC_FUNC_IMPL(__imp__sub_830563F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056400"))) PPC_WEAK_FUNC(sub_83056400);
PPC_FUNC_IMPL(__imp__sub_83056400) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056408"))) PPC_WEAK_FUNC(sub_83056408);
PPC_FUNC_IMPL(__imp__sub_83056408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056410"))) PPC_WEAK_FUNC(sub_83056410);
PPC_FUNC_IMPL(__imp__sub_83056410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056420"))) PPC_WEAK_FUNC(sub_83056420);
PPC_FUNC_IMPL(__imp__sub_83056420) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056428"))) PPC_WEAK_FUNC(sub_83056428);
PPC_FUNC_IMPL(__imp__sub_83056428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056434"))) PPC_WEAK_FUNC(sub_83056434);
PPC_FUNC_IMPL(__imp__sub_83056434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056438"))) PPC_WEAK_FUNC(sub_83056438);
PPC_FUNC_IMPL(__imp__sub_83056438) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83056458"))) PPC_WEAK_FUNC(sub_83056458);
PPC_FUNC_IMPL(__imp__sub_83056458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305645C"))) PPC_WEAK_FUNC(sub_8305645C);
PPC_FUNC_IMPL(__imp__sub_8305645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056460"))) PPC_WEAK_FUNC(sub_83056460);
PPC_FUNC_IMPL(__imp__sub_83056460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056464"))) PPC_WEAK_FUNC(sub_83056464);
PPC_FUNC_IMPL(__imp__sub_83056464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056468"))) PPC_WEAK_FUNC(sub_83056468);
PPC_FUNC_IMPL(__imp__sub_83056468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8305647c
	if (!ctx.cr6.eq) goto loc_8305647C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8305647C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305648C"))) PPC_WEAK_FUNC(sub_8305648C);
PPC_FUNC_IMPL(__imp__sub_8305648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056490"))) PPC_WEAK_FUNC(sub_83056490);
PPC_FUNC_IMPL(__imp__sub_83056490) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8305649C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8305649c
	if (!ctx.cr6.eq) goto loc_8305649C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830564C0"))) PPC_WEAK_FUNC(sub_830564C0);
PPC_FUNC_IMPL(__imp__sub_830564C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,282
	ctx.r5.s64 = 282;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830564E0"))) PPC_WEAK_FUNC(sub_830564E0);
PPC_FUNC_IMPL(__imp__sub_830564E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830564f4
	if (!ctx.cr6.eq) goto loc_830564F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830564F4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056508"))) PPC_WEAK_FUNC(sub_83056508);
PPC_FUNC_IMPL(__imp__sub_83056508) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_83056514:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83056514
	if (!ctx.cr6.eq) goto loc_83056514;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056540"))) PPC_WEAK_FUNC(sub_83056540);
PPC_FUNC_IMPL(__imp__sub_83056540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31901
	ctx.r10.s64 = -2090663936;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32308);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83056568"))) PPC_WEAK_FUNC(sub_83056568);
PPC_FUNC_IMPL(__imp__sub_83056568) {
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

__attribute__((alias("__imp__sub_8305657C"))) PPC_WEAK_FUNC(sub_8305657C);
PPC_FUNC_IMPL(__imp__sub_8305657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056580"))) PPC_WEAK_FUNC(sub_83056580);
PPC_FUNC_IMPL(__imp__sub_83056580) {
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

__attribute__((alias("__imp__sub_83056594"))) PPC_WEAK_FUNC(sub_83056594);
PPC_FUNC_IMPL(__imp__sub_83056594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056598"))) PPC_WEAK_FUNC(sub_83056598);
PPC_FUNC_IMPL(__imp__sub_83056598) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830565A0"))) PPC_WEAK_FUNC(sub_830565A0);
PPC_FUNC_IMPL(__imp__sub_830565A0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21968
	ctx.r9.s64 = ctx.r11.s64 + 21968;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830565e8
	if (ctx.cr6.eq) goto loc_830565E8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830565E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830565E8:
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

__attribute__((alias("__imp__sub_83056600"))) PPC_WEAK_FUNC(sub_83056600);
PPC_FUNC_IMPL(__imp__sub_83056600) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056638
	if (ctx.cr6.eq) goto loc_83056638;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83056638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056638:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8305665C"))) PPC_WEAK_FUNC(sub_8305665C);
PPC_FUNC_IMPL(__imp__sub_8305665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056660"))) PPC_WEAK_FUNC(sub_83056660);
PPC_FUNC_IMPL(__imp__sub_83056660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305666C"))) PPC_WEAK_FUNC(sub_8305666C);
PPC_FUNC_IMPL(__imp__sub_8305666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056670"))) PPC_WEAK_FUNC(sub_83056670);
PPC_FUNC_IMPL(__imp__sub_83056670) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830566a4
	if (ctx.cr6.eq) goto loc_830566A4;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
loc_830566A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830566B4"))) PPC_WEAK_FUNC(sub_830566B4);
PPC_FUNC_IMPL(__imp__sub_830566B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830566B8"))) PPC_WEAK_FUNC(sub_830566B8);
PPC_FUNC_IMPL(__imp__sub_830566B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830566C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830566e0
	if (ctx.cr6.eq) goto loc_830566E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
loc_830566E0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8305678c
	if (!ctx.cr6.lt) goto loc_8305678C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305670C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83056744
	if (ctx.cr6.eq) goto loc_83056744;
loc_83056724:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83056724
	if (!ctx.cr6.eq) goto loc_83056724;
loc_83056744:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056764
	if (ctx.cr6.eq) goto loc_83056764;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056764:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8305678C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056794"))) PPC_WEAK_FUNC(sub_83056794);
PPC_FUNC_IMPL(__imp__sub_83056794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056798"))) PPC_WEAK_FUNC(sub_83056798);
PPC_FUNC_IMPL(__imp__sub_83056798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830567A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830567c4
	if (ctx.cr6.eq) goto loc_830567C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_830567C4:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83056888
	if (!ctx.cr6.lt) goto loc_83056888;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830567F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83056838
	if (ctx.cr6.eq) goto loc_83056838;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83056810:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83056810
	if (!ctx.cr6.eq) goto loc_83056810;
loc_83056838:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056858
	if (ctx.cr6.eq) goto loc_83056858;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056858:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r27
	ctx.r11.s32 = ctx.r8.s32 / ctx.r27.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83056888:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056890"))) PPC_WEAK_FUNC(sub_83056890);
PPC_FUNC_IMPL(__imp__sub_83056890) {
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

__attribute__((alias("__imp__sub_830568A4"))) PPC_WEAK_FUNC(sub_830568A4);
PPC_FUNC_IMPL(__imp__sub_830568A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830568A8"))) PPC_WEAK_FUNC(sub_830568A8);
PPC_FUNC_IMPL(__imp__sub_830568A8) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830568e0
	if (ctx.cr6.eq) goto loc_830568E0;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830568E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830568E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83056904"))) PPC_WEAK_FUNC(sub_83056904);
PPC_FUNC_IMPL(__imp__sub_83056904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056908"))) PPC_WEAK_FUNC(sub_83056908);
PPC_FUNC_IMPL(__imp__sub_83056908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83056910;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83056a04
	if (ctx.cr6.gt) goto loc_83056A04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83056950
	if (!ctx.cr6.eq) goto loc_83056950;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83056958
	goto loc_83056958;
loc_83056950:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_83056958:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83056a04
	if (!ctx.cr6.lt) goto loc_83056A04;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830569bc
	if (ctx.cr6.eq) goto loc_830569BC;
loc_8305699C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8305699c
	if (!ctx.cr6.eq) goto loc_8305699C;
loc_830569BC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830569dc
	if (ctx.cr6.eq) goto loc_830569DC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830569DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830569DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83056A04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056A2C"))) PPC_WEAK_FUNC(sub_83056A2C);
PPC_FUNC_IMPL(__imp__sub_83056A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056A30"))) PPC_WEAK_FUNC(sub_83056A30);
PPC_FUNC_IMPL(__imp__sub_83056A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83056A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83056b48
	if (ctx.cr6.gt) goto loc_83056B48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,12
	ctx.r27.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r27
	ctx.r10.s32 = ctx.r10.s32 / ctx.r27.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83056a7c
	if (!ctx.cr6.eq) goto loc_83056A7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83056a84
	goto loc_83056A84;
loc_83056A7C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r27
	ctx.r11.s32 = ctx.r11.s32 / ctx.r27.s32;
loc_83056A84:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83056b48
	if (!ctx.cr6.lt) goto loc_83056B48;
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83056AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83056af8
	if (ctx.cr6.eq) goto loc_83056AF8;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_83056AD0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83056ad0
	if (!ctx.cr6.eq) goto loc_83056AD0;
loc_83056AF8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056b18
	if (ctx.cr6.eq) goto loc_83056B18;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83056B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83056B18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// divw r11,r8,r27
	ctx.r11.s32 = ctx.r8.s32 / ctx.r27.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83056B48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83056B78"))) PPC_WEAK_FUNC(sub_83056B78);
PPC_FUNC_IMPL(__imp__sub_83056B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cb4940
	ctx.lr = 0x83056BA0;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x83056BB0;
	sub_82CB4860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056BD4"))) PPC_WEAK_FUNC(sub_83056BD4);
PPC_FUNC_IMPL(__imp__sub_83056BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056BD8"))) PPC_WEAK_FUNC(sub_83056BD8);
PPC_FUNC_IMPL(__imp__sub_83056BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83056c0c
	if (!ctx.cr6.eq) goto loc_83056C0C;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83056c0c
	if (!ctx.cr6.eq) goto loc_83056C0C;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83056c10
	if (ctx.cr6.eq) goto loc_83056C10;
loc_83056C0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83056C10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056C18"))) PPC_WEAK_FUNC(sub_83056C18);
PPC_FUNC_IMPL(__imp__sub_83056C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4940
	ctx.lr = 0x83056C4C;
	sub_82CB4940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb4860
	ctx.lr = 0x83056C5C;
	sub_82CB4860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056CA0"))) PPC_WEAK_FUNC(sub_83056CA0);
PPC_FUNC_IMPL(__imp__sub_83056CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83056cf8
	if (ctx.cr6.eq) goto loc_83056CF8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// b 0x83056d28
	goto loc_83056D28;
loc_83056CF8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f10,24(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
loc_83056D28:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f9,f5,f6,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f7,f3,f4,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f5,f2,f4,f10
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f4,f1,f4,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// fmadds f3,f0,f8,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f3,44(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// fmadds f2,f13,f6,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,36(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056DA4"))) PPC_WEAK_FUNC(sub_83056DA4);
PPC_FUNC_IMPL(__imp__sub_83056DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056DA8"))) PPC_WEAK_FUNC(sub_83056DA8);
PPC_FUNC_IMPL(__imp__sub_83056DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fabs f12,f8
	ctx.f12.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f10
	ctx.f0.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f6
	ctx.f9.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f8,f4
	ctx.f8.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f6,f2
	ctx.f6.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f4,f1
	ctx.f4.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f1,f7
	ctx.f1.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f11,f5
	ctx.f11.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fadds f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fadds f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fsubs f12,f10,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fsubs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fsubs f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056E78"))) PPC_WEAK_FUNC(sub_83056E78);
PPC_FUNC_IMPL(__imp__sub_83056E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83056edc
	if (ctx.cr6.gt) goto loc_83056EDC;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83056edc
	if (ctx.cr6.gt) goto loc_83056EDC;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83056edc
	if (ctx.cr6.gt) goto loc_83056EDC;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83056edc
	if (ctx.cr6.gt) goto loc_83056EDC;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83056edc
	if (ctx.cr6.gt) goto loc_83056EDC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_83056EDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056EE4"))) PPC_WEAK_FUNC(sub_83056EE4);
PPC_FUNC_IMPL(__imp__sub_83056EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056EE8"))) PPC_WEAK_FUNC(sub_83056EE8);
PPC_FUNC_IMPL(__imp__sub_83056EE8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056EF4"))) PPC_WEAK_FUNC(sub_83056EF4);
PPC_FUNC_IMPL(__imp__sub_83056EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056EF8"))) PPC_WEAK_FUNC(sub_83056EF8);
PPC_FUNC_IMPL(__imp__sub_83056EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F20"))) PPC_WEAK_FUNC(sub_83056F20);
PPC_FUNC_IMPL(__imp__sub_83056F20) {
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

__attribute__((alias("__imp__sub_83056F30"))) PPC_WEAK_FUNC(sub_83056F30);
PPC_FUNC_IMPL(__imp__sub_83056F30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F44"))) PPC_WEAK_FUNC(sub_83056F44);
PPC_FUNC_IMPL(__imp__sub_83056F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83056F48"))) PPC_WEAK_FUNC(sub_83056F48);
PPC_FUNC_IMPL(__imp__sub_83056F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F80"))) PPC_WEAK_FUNC(sub_83056F80);
PPC_FUNC_IMPL(__imp__sub_83056F80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F88"))) PPC_WEAK_FUNC(sub_83056F88);
PPC_FUNC_IMPL(__imp__sub_83056F88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,332
	ctx.r3.s64 = ctx.r3.s64 + 332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F90"))) PPC_WEAK_FUNC(sub_83056F90);
PPC_FUNC_IMPL(__imp__sub_83056F90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,372(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056F98"))) PPC_WEAK_FUNC(sub_83056F98);
PPC_FUNC_IMPL(__imp__sub_83056F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056FA0"))) PPC_WEAK_FUNC(sub_83056FA0);
PPC_FUNC_IMPL(__imp__sub_83056FA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056FA8"))) PPC_WEAK_FUNC(sub_83056FA8);
PPC_FUNC_IMPL(__imp__sub_83056FA8) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83056fe8
	if (ctx.cr6.eq) goto loc_83056FE8;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83056FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_83056FE8:
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

__attribute__((alias("__imp__sub_83056FFC"))) PPC_WEAK_FUNC(sub_83056FFC);
PPC_FUNC_IMPL(__imp__sub_83056FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057000"))) PPC_WEAK_FUNC(sub_83057000);
PPC_FUNC_IMPL(__imp__sub_83057000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x830571e0
	if (ctx.cr6.gt) goto loc_830571E0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f8,f11,f3,f5
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f3.f64 : ctx.f5.f64;
	// stfs f8,32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsel f9,f12,f2,f4
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f2.f64 : ctx.f4.f64;
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsel f10,f13,f0,f1
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fsubs f0,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fsubs f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsel f10,f13,f5,f7
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f5.f64 : ctx.f7.f64;
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fsel f11,f0,f4,f6
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f4.f64 : ctx.f6.f64;
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsel f12,f2,f1,f3
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f1.f64 : ctx.f3.f64;
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsel f12,f1,f7,f9
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f9.f64;
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fsel f0,f3,f4,f5
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f5.f64;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsel f13,f2,f6,f8
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f6.f64 : ctx.f8.f64;
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsel f2,f7,f8,f11
	ctx.f2.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsel f0,f3,f5,f6
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsel f1,f4,f9,f10
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fsel f4,f7,f12,f13
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fsel f2,f8,f9,f10
	ctx.f2.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsel f3,f5,f11,f6
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f6.f64;
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsel f6,f12,f6,f0
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fsel f5,f8,f10,f1
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f1.f64;
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsel f7,f9,f13,f11
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
loc_830571E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830571EC"))) PPC_WEAK_FUNC(sub_830571EC);
PPC_FUNC_IMPL(__imp__sub_830571EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830571F0"))) PPC_WEAK_FUNC(sub_830571F0);
PPC_FUNC_IMPL(__imp__sub_830571F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830571F8"))) PPC_WEAK_FUNC(sub_830571F8);
PPC_FUNC_IMPL(__imp__sub_830571F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057200"))) PPC_WEAK_FUNC(sub_83057200);
PPC_FUNC_IMPL(__imp__sub_83057200) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057208"))) PPC_WEAK_FUNC(sub_83057208);
PPC_FUNC_IMPL(__imp__sub_83057208) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057210"))) PPC_WEAK_FUNC(sub_83057210);
PPC_FUNC_IMPL(__imp__sub_83057210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83057218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// beq cr6,0x830572c0
	if (ctx.cr6.eq) goto loc_830572C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x830572ac
	if (!ctx.cr6.eq) goto loc_830572AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,452(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 452);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8305727C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830572ac
	if (ctx.cr6.eq) goto loc_830572AC;
loc_83057288:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830572A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83057288
	if (!ctx.cr6.eq) goto loc_83057288;
loc_830572AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830572C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830572C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830572C8"))) PPC_WEAK_FUNC(sub_830572C8);
PPC_FUNC_IMPL(__imp__sub_830572C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,500(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 500);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830572F0"))) PPC_WEAK_FUNC(sub_830572F0);
PPC_FUNC_IMPL(__imp__sub_830572F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830572F4"))) PPC_WEAK_FUNC(sub_830572F4);
PPC_FUNC_IMPL(__imp__sub_830572F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830572F8"))) PPC_WEAK_FUNC(sub_830572F8);
PPC_FUNC_IMPL(__imp__sub_830572F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830572FC"))) PPC_WEAK_FUNC(sub_830572FC);
PPC_FUNC_IMPL(__imp__sub_830572FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057300"))) PPC_WEAK_FUNC(sub_83057300);
PPC_FUNC_IMPL(__imp__sub_83057300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,25032
	ctx.r11.s64 = 1640497152;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r11,34375
	ctx.r11.u64 = ctx.r11.u64 | 34375;
	// rlwinm r7,r10,19,13,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r4,r10,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// xor r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r4,r6,19,13,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7FFFF;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// xor r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// subf r8,r6,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// rlwinm r6,r8,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r3,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r8,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r8.s64;
	// xor r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwinm r10,r3,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r6,r3,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r3.s64;
	// xor r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r4,r11,19,13,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r4,r6,19,13,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7FFFF;
	// subf r3,r9,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r9.s64;
	// xor r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// subf r8,r6,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// rlwinm r6,r8,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r3,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r4,r8,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r8.s64;
	// xor r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwinm r10,r3,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r6,r3,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r3.s64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// clrlwi r3,r5,23
	ctx.r3.u64 = ctx.r5.u32 & 0x1FF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057448"))) PPC_WEAK_FUNC(sub_83057448);
PPC_FUNC_IMPL(__imp__sub_83057448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305744C"))) PPC_WEAK_FUNC(sub_8305744C);
PPC_FUNC_IMPL(__imp__sub_8305744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057450"))) PPC_WEAK_FUNC(sub_83057450);
PPC_FUNC_IMPL(__imp__sub_83057450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83057458;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ori r9,r3,64
	ctx.r9.u64 = ctx.r3.u64 | 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r6,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r6.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,92(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x830574B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,64(r28)
	PPC_STORE_U16(ctx.r28.u32 + 64, ctx.r3.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830574D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,28(r28)
	PPC_STORE_U16(ctx.r28.u32 + 28, ctx.r3.u16);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830574EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r4,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r4.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r3.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8305753C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83057554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83057570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,66(r28)
	PPC_STORE_U16(ctx.r28.u32 + 66, ctx.r3.u16);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83057590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830575AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 40, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 44, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830575E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 48, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 52, temp.u32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// stfs f9,56(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8305761C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r6,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83057640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83057668
	if (!ctx.cr6.eq) goto loc_83057668;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_83057668:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057670"))) PPC_WEAK_FUNC(sub_83057670);
PPC_FUNC_IMPL(__imp__sub_83057670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83057678;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x830576A0;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830576B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// li r7,3
	ctx.r7.s64 = 3;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,172(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// rlwinm r26,r6,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830576DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830576f8
	if (ctx.cr6.eq) goto loc_830576F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// b 0x83057710
	goto loc_83057710;
loc_830576F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305770C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_83057710:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83057450
	ctx.lr = 0x8305772C;
	sub_83057450(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057734"))) PPC_WEAK_FUNC(sub_83057734);
PPC_FUNC_IMPL(__imp__sub_83057734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057738"))) PPC_WEAK_FUNC(sub_83057738);
PPC_FUNC_IMPL(__imp__sub_83057738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83057740;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83057764;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x83057450
	ctx.lr = 0x830577C0;
	sub_83057450(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830577C8"))) PPC_WEAK_FUNC(sub_830577C8);
PPC_FUNC_IMPL(__imp__sub_830577C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830577D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x830577F8;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x83057450
	ctx.lr = 0x83057850;
	sub_83057450(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057858"))) PPC_WEAK_FUNC(sub_83057858);
PPC_FUNC_IMPL(__imp__sub_83057858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83057860;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83057888;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830578A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,344(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830578C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,352(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830578DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057450
	ctx.lr = 0x830578FC;
	sub_83057450(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057904"))) PPC_WEAK_FUNC(sub_83057904);
PPC_FUNC_IMPL(__imp__sub_83057904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057908"))) PPC_WEAK_FUNC(sub_83057908);
PPC_FUNC_IMPL(__imp__sub_83057908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83057910;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83057938;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,344(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83057974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057450
	ctx.lr = 0x83057994;
	sub_83057450(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305799C"))) PPC_WEAK_FUNC(sub_8305799C);
PPC_FUNC_IMPL(__imp__sub_8305799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830579A0"))) PPC_WEAK_FUNC(sub_830579A0);
PPC_FUNC_IMPL(__imp__sub_830579A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830579A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x830579D0;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r7,72
	ctx.r7.s64 = 72;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,56(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 56);
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83057A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r5,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r5.u32);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,92(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83057A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// bgt cr6,0x83057aac
	if (ctx.cr6.gt) goto loc_83057AAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83057AAC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057AB8"))) PPC_WEAK_FUNC(sub_83057AB8);
PPC_FUNC_IMPL(__imp__sub_83057AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83057AC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83057AE8;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,392(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 392);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83057B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,400(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83057B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,408(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83057B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,416(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 416);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83057B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r3,188(r1)
	PPC_STORE_U16(ctx.r1.u32 + 188, ctx.r3.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,424(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 424);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83057B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r3,190(r1)
	PPC_STORE_U16(ctx.r1.u32 + 190, ctx.r3.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,344(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83057B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057450
	ctx.lr = 0x83057BBC;
	sub_83057450(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057BC4"))) PPC_WEAK_FUNC(sub_83057BC4);
PPC_FUNC_IMPL(__imp__sub_83057BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057BC8"))) PPC_WEAK_FUNC(sub_83057BC8);
PPC_FUNC_IMPL(__imp__sub_83057BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057BCC"))) PPC_WEAK_FUNC(sub_83057BCC);
PPC_FUNC_IMPL(__imp__sub_83057BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057BD0"))) PPC_WEAK_FUNC(sub_83057BD0);
PPC_FUNC_IMPL(__imp__sub_83057BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057BD8"))) PPC_WEAK_FUNC(sub_83057BD8);
PPC_FUNC_IMPL(__imp__sub_83057BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,22556
	ctx.r9.s64 = ctx.r11.s64 + 22556;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057BF0"))) PPC_WEAK_FUNC(sub_83057BF0);
PPC_FUNC_IMPL(__imp__sub_83057BF0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmuls f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f30,f0,f9
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f29,f0,f8
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82d5da98
	ctx.lr = 0x83057C68;
	sub_82D5DA98(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,8044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f8,f5,f31
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f6,f1,f29
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f4,f12,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f31,f5
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f11,f30,f3
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f8,f29,f1
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f7,f31,f12
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f6,f30,f10
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f5,f29,f9
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f9.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x83057000
	ctx.lr = 0x83057D14;
	sub_83057000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83057000
	ctx.lr = 0x83057D28;
	sub_83057000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83057000
	ctx.lr = 0x83057D3C;
	sub_83057000(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83057000
	ctx.lr = 0x83057D50;
	sub_83057000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_83057D74"))) PPC_WEAK_FUNC(sub_83057D74);
PPC_FUNC_IMPL(__imp__sub_83057D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83057D78"))) PPC_WEAK_FUNC(sub_83057D78);
PPC_FUNC_IMPL(__imp__sub_83057D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83057D80;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83058028
	if (ctx.cr6.eq) goto loc_83058028;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83058028
	if (ctx.cr6.eq) goto loc_83058028;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83058028
	if (ctx.cr6.eq) goto loc_83058028;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f30,6140(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x83057e08
	if (!ctx.cr6.eq) goto loc_83057E08;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83057e08
	if (!ctx.cr6.eq) goto loc_83057E08;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83057ee8
	if (ctx.cr6.eq) goto loc_83057EE8;
loc_83057E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83057ee8
	if (!ctx.cr6.eq) goto loc_83057EE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f8,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83057EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f29,f13,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83057ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f1.f64);
	// ble cr6,0x83057ee8
	if (!ctx.cr6.gt) goto loc_83057EE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83029b50
	ctx.lr = 0x83057EE8;
	sub_83029B50(ctx, base);
loc_83057EE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83057f48
	if (!ctx.cr6.eq) goto loc_83057F48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83057f48
	if (!ctx.cr6.eq) goto loc_83057F48;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83058028
	if (ctx.cr6.eq) goto loc_83058028;
loc_83057F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83058028
	if (!ctx.cr6.eq) goto loc_83058028;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83057FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f8,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83057FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f1,f0,f0
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f31,f13,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83058018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x83058028
	if (!ctx.cr6.gt) goto loc_83058028;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83029b50
	ctx.lr = 0x83058028;
	sub_83029B50(ctx, base);
loc_83058028:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305803C"))) PPC_WEAK_FUNC(sub_8305803C);
PPC_FUNC_IMPL(__imp__sub_8305803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83058040"))) PPC_WEAK_FUNC(sub_83058040);
PPC_FUNC_IMPL(__imp__sub_83058040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83058048;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ae4
	ctx.lr = 0x83058050;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83058214
	if (!ctx.cr6.eq) goto loc_83058214;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830580A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830580D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f11,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// fadds f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f10,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x830581e8
	if (ctx.cr6.eq) goto loc_830581E8;
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f28,f8,f12
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f31,f7,f9
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f30,f10,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f29,f11,f7
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb4940
	ctx.lr = 0x8305816C;
	sub_82CB4940(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb4860
	ctx.lr = 0x83058178;
	sub_82CB4860(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f27
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f13,f27
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f2,f30,f6
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f6.f64));
	// fmuls f1,f29,f6
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f10,f12,f3
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmadds f8,f12,f2,f5
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f7,f12,f1,f4
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f6,f13,f2,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmsubs f5,f12,f27,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 - ctx.f9.f64));
	// fmadds f4,f1,f11,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f12,f0,f3,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f10,f27,f11,f6
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fnmsubs f9,f0,f2,f5
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f2.f64 - ctx.f5.f64)));
	// fnmsubs f8,f13,f3,f4
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f3.f64 - ctx.f4.f64)));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f7,f2,f11,f12
	ctx.f7.f64 = double(float(-(ctx.f2.f64 * ctx.f11.f64 - ctx.f12.f64)));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fnmsubs f6,f0,f1,f10
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f10.f64)));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f5,f13,f1,f9
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f9.f64)));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_830581E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x83058210;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83058214:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8305825C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b30
	ctx.lr = 0x83058268;
	__restfpr_27(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305826C"))) PPC_WEAK_FUNC(sub_8305826C);
PPC_FUNC_IMPL(__imp__sub_8305826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83058270"))) PPC_WEAK_FUNC(sub_83058270);
PPC_FUNC_IMPL(__imp__sub_83058270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83058278;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830583a4
	if (ctx.cr6.eq) goto loc_830583A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830583a4
	if (ctx.cr6.eq) goto loc_830583A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830582A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8305837c
	if (ctx.cr6.eq) goto loc_8305837C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x83058344
	if (ctx.cr6.eq) goto loc_83058344;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x830583a4
	if (!ctx.cr6.eq) goto loc_830583A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830582D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,164(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830582E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83058300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,168(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83058310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,180(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 180);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x83058328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8305833C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83058344:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83058374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8305837C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830583A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830583A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830583AC"))) PPC_WEAK_FUNC(sub_830583AC);
PPC_FUNC_IMPL(__imp__sub_830583AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830583B0"))) PPC_WEAK_FUNC(sub_830583B0);
PPC_FUNC_IMPL(__imp__sub_830583B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830583E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,328(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,332(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,56(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8305843C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,336(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f8,348(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r8,r3,64
	ctx.r8.u64 = ctx.r3.u64 | 64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83058498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830584B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830584D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830584EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r3,354(r1)
	PPC_STORE_U16(ctx.r1.u32 + 354, ctx.r3.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stw r9,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83058528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83058538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r3,316(r1)
	PPC_STORE_U16(ctx.r1.u32 + 316, ctx.r3.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r3,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r3.u16);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,364
	ctx.r7.s64 = ctx.r1.s64 + 364;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830585AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bgt cr6,0x83058988
	if (ctx.cr6.gt) goto loc_83058988;
	// lis r12,-31994
	ctx.r12.s64 = -2096758784;
	// addi r12,r12,-31284
	ctx.r12.s64 = ctx.r12.s64 + -31284;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_830585F4;
	case 1:
		goto loc_8305867C;
	case 2:
		goto loc_83058648;
	case 3:
		goto loc_83058698;
	case 4:
		goto loc_83058988;
	case 5:
		goto loc_830586CC;
	case 6:
		goto loc_830586EC;
	case 7:
		goto loc_83058988;
	case 8:
		goto loc_83058988;
	case 9:
		goto loc_83058988;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-31244(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31244);
	// lwz r24,-31108(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31108);
	// lwz r24,-31160(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31160);
	// lwz r24,-31080(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31080);
	// lwz r24,-30328(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30328);
	// lwz r24,-31028(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31028);
	// lwz r24,-30996(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30996);
	// lwz r24,-30328(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30328);
	// lwz r24,-30328(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30328);
	// lwz r24,-30328(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30328);
loc_830585F4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305860C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8305862C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,380(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,384(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,388(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// b 0x830586f0
	goto loc_830586F0;
loc_83058648:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,380(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,388(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// b 0x830586f0
	goto loc_830586F0;
loc_8305867C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// b 0x830586f0
	goto loc_830586F0;
loc_83058698:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830586AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f1,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830586C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// b 0x830586f0
	goto loc_830586F0;
loc_830586CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830586E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// b 0x830586f0
	goto loc_830586F0;
loc_830586EC:
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
loc_830586F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83058964
	if (ctx.cr6.eq) goto loc_83058964;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83058764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83058798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830587D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x83058824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305883C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,60(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8305886C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,68(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83058888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830588B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830588D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,144(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 144);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x830588E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83058900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83058918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,152(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83058930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r4,128
	ctx.r3.u64 = ctx.r4.u64 | 128;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83058960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
loc_83058964:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8305897C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8305898c
	goto loc_8305898C;
loc_83058988:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8305898C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

