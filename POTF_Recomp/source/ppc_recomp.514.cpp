#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830432B4"))) PPC_WEAK_FUNC(sub_830432B4);
PPC_FUNC_IMPL(__imp__sub_830432B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830432B8"))) PPC_WEAK_FUNC(sub_830432B8);
PPC_FUNC_IMPL(__imp__sub_830432B8) {
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
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830432EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043300
	if (ctx.cr6.eq) goto loc_83043300;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83083df8
	ctx.lr = 0x830432FC;
	sub_83083DF8(ctx, base);
	// b 0x83043304
	goto loc_83043304;
loc_83043300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83043304:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83043330"))) PPC_WEAK_FUNC(sub_83043330);
PPC_FUNC_IMPL(__imp__sub_83043330) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x83043370
	if (ctx.cr6.eq) goto loc_83043370;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x83043370
	if (ctx.cr6.eq) goto loc_83043370;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
loc_83043370:
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043384"))) PPC_WEAK_FUNC(sub_83043384);
PPC_FUNC_IMPL(__imp__sub_83043384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043388"))) PPC_WEAK_FUNC(sub_83043388);
PPC_FUNC_IMPL(__imp__sub_83043388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,203
	ctx.r7.s64 = ctx.r11.s64 + 203;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r11,r6,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// ldx r8,r5,r4
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r4.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rldicl r6,r7,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830433F8"))) PPC_WEAK_FUNC(sub_830433F8);
PPC_FUNC_IMPL(__imp__sub_830433F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043408"))) PPC_WEAK_FUNC(sub_83043408);
PPC_FUNC_IMPL(__imp__sub_83043408) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043410"))) PPC_WEAK_FUNC(sub_83043410);
PPC_FUNC_IMPL(__imp__sub_83043410) {
	PPC_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r3,r3,1624
	ctx.r3.s64 = ctx.r3.s64 + 1624;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043420"))) PPC_WEAK_FUNC(sub_83043420);
PPC_FUNC_IMPL(__imp__sub_83043420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1624
	ctx.r3.s64 = ctx.r3.s64 + 1624;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043428"))) PPC_WEAK_FUNC(sub_83043428);
PPC_FUNC_IMPL(__imp__sub_83043428) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8304343c
	if (!ctx.cr6.eq) goto loc_8304343C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8304343C:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304344C"))) PPC_WEAK_FUNC(sub_8304344C);
PPC_FUNC_IMPL(__imp__sub_8304344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043450"))) PPC_WEAK_FUNC(sub_83043450);
PPC_FUNC_IMPL(__imp__sub_83043450) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x831c45a0
	ctx.lr = 0x83043470;
	sub_831C45A0(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83043490"))) PPC_WEAK_FUNC(sub_83043490);
PPC_FUNC_IMPL(__imp__sub_83043490) {
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
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// bl 0x831c44a8
	ctx.lr = 0x830434A4;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830434c0
	if (ctx.cr6.eq) goto loc_830434C0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830434C0:
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

__attribute__((alias("__imp__sub_830434D4"))) PPC_WEAK_FUNC(sub_830434D4);
PPC_FUNC_IMPL(__imp__sub_830434D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830434D8"))) PPC_WEAK_FUNC(sub_830434D8);
PPC_FUNC_IMPL(__imp__sub_830434D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830434E0"))) PPC_WEAK_FUNC(sub_830434E0);
PPC_FUNC_IMPL(__imp__sub_830434E0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,584(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83043518
	if (ctx.cr6.lt) goto loc_83043518;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8304354c
	goto loc_8304354C;
loc_83043518:
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x83043528
	if (!ctx.cr6.lt) goto loc_83043528;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_83043528:
	// lwz r10,596(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 596);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8304353C;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8304354C:
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

__attribute__((alias("__imp__sub_83043564"))) PPC_WEAK_FUNC(sub_83043564);
PPC_FUNC_IMPL(__imp__sub_83043564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043568"))) PPC_WEAK_FUNC(sub_83043568);
PPC_FUNC_IMPL(__imp__sub_83043568) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 + 112;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r5,112
	ctx.r8.s64 = ctx.r5.s64 + 112;
	// slw r7,r11,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r11,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// beq cr6,0x830435b8
	if (ctx.cr6.eq) goto loc_830435B8;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 | ctx.r11.u64;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
loc_830435B8:
	// andc r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// andc r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830435DC"))) PPC_WEAK_FUNC(sub_830435DC);
PPC_FUNC_IMPL(__imp__sub_830435DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830435E0"))) PPC_WEAK_FUNC(sub_830435E0);
PPC_FUNC_IMPL(__imp__sub_830435E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// stw r4,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r4.u32);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r5,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r5.u32);
	// stw r6,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r6.u32);
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830435FC"))) PPC_WEAK_FUNC(sub_830435FC);
PPC_FUNC_IMPL(__imp__sub_830435FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043600"))) PPC_WEAK_FUNC(sub_83043600);
PPC_FUNC_IMPL(__imp__sub_83043600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// stb r4,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r4.u8);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043614"))) PPC_WEAK_FUNC(sub_83043614);
PPC_FUNC_IMPL(__imp__sub_83043614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043618"))) PPC_WEAK_FUNC(sub_83043618);
PPC_FUNC_IMPL(__imp__sub_83043618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,600
	ctx.r10.s64 = ctx.r3.s64 + 600;
	// lwz r9,768(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r11,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 604, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 608, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r5.u32);
	// stw r8,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304364C"))) PPC_WEAK_FUNC(sub_8304364C);
PPC_FUNC_IMPL(__imp__sub_8304364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043650"))) PPC_WEAK_FUNC(sub_83043650);
PPC_FUNC_IMPL(__imp__sub_83043650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,616
	ctx.r10.s64 = ctx.r3.s64 + 616;
	// lwz r9,768(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r11,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, ctx.r11.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r5.u32);
	// stw r8,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043684"))) PPC_WEAK_FUNC(sub_83043684);
PPC_FUNC_IMPL(__imp__sub_83043684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043688"))) PPC_WEAK_FUNC(sub_83043688);
PPC_FUNC_IMPL(__imp__sub_83043688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,636(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,640(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830436A4"))) PPC_WEAK_FUNC(sub_830436A4);
PPC_FUNC_IMPL(__imp__sub_830436A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830436A8"))) PPC_WEAK_FUNC(sub_830436A8);
PPC_FUNC_IMPL(__imp__sub_830436A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,644(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 644);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830436B0"))) PPC_WEAK_FUNC(sub_830436B0);
PPC_FUNC_IMPL(__imp__sub_830436B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,600(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	// addi r11,r4,600
	ctx.r11.s64 = ctx.r4.s64 + 600;
	// lwz r9,604(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 604);
	// lwz r8,608(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	// lwz r7,612(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 612);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830436D8"))) PPC_WEAK_FUNC(sub_830436D8);
PPC_FUNC_IMPL(__imp__sub_830436D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,616(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 616);
	// addi r11,r4,616
	ctx.r11.s64 = ctx.r4.s64 + 616;
	// lwz r9,620(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 620);
	// lwz r8,624(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 624);
	// lwz r7,628(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 628);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043700"))) PPC_WEAK_FUNC(sub_83043700);
PPC_FUNC_IMPL(__imp__sub_83043700) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// b 0x83085548
	sub_83085548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043714"))) PPC_WEAK_FUNC(sub_83043714);
PPC_FUNC_IMPL(__imp__sub_83043714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043718"))) PPC_WEAK_FUNC(sub_83043718);
PPC_FUNC_IMPL(__imp__sub_83043718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// b 0x83084ea8
	sub_83084EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043720"))) PPC_WEAK_FUNC(sub_83043720);
PPC_FUNC_IMPL(__imp__sub_83043720) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// b 0x83084ed0
	sub_83084ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043728"))) PPC_WEAK_FUNC(sub_83043728);
PPC_FUNC_IMPL(__imp__sub_83043728) {
	PPC_FUNC_PROLOGUE();
	// stw r4,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043730"))) PPC_WEAK_FUNC(sub_83043730);
PPC_FUNC_IMPL(__imp__sub_83043730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043734"))) PPC_WEAK_FUNC(sub_83043734);
PPC_FUNC_IMPL(__imp__sub_83043734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043738"))) PPC_WEAK_FUNC(sub_83043738);
PPC_FUNC_IMPL(__imp__sub_83043738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// b 0x831c2720
	sub_831C2720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043740"))) PPC_WEAK_FUNC(sub_83043740);
PPC_FUNC_IMPL(__imp__sub_83043740) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// b 0x830744b8
	sub_830744B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043748"))) PPC_WEAK_FUNC(sub_83043748);
PPC_FUNC_IMPL(__imp__sub_83043748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304374C"))) PPC_WEAK_FUNC(sub_8304374C);
PPC_FUNC_IMPL(__imp__sub_8304374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043750"))) PPC_WEAK_FUNC(sub_83043750);
PPC_FUNC_IMPL(__imp__sub_83043750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043754"))) PPC_WEAK_FUNC(sub_83043754);
PPC_FUNC_IMPL(__imp__sub_83043754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043758"))) PPC_WEAK_FUNC(sub_83043758);
PPC_FUNC_IMPL(__imp__sub_83043758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83043778
	if (!ctx.cr6.eq) goto loc_83043778;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x83043784
	goto loc_83043784;
loc_83043778:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83043788
	if (!ctx.cr6.eq) goto loc_83043788;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_83043784:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83043788:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830437a0
	if (!ctx.cr6.eq) goto loc_830437A0;
	// lwz r11,280(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830437A0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,100(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830437B4"))) PPC_WEAK_FUNC(sub_830437B4);
PPC_FUNC_IMPL(__imp__sub_830437B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830437B8"))) PPC_WEAK_FUNC(sub_830437B8);
PPC_FUNC_IMPL(__imp__sub_830437B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830437C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830437f4
	if (!ctx.cr6.eq) goto loc_830437F4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830437f8
	if (!ctx.cr6.eq) goto loc_830437F8;
loc_830437F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830437F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304381c
	if (!ctx.cr6.eq) goto loc_8304381C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x83043814
	if (!ctx.cr6.eq) goto loc_83043814;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83043814:
	// addi r3,r29,1160
	ctx.r3.s64 = ctx.r29.s64 + 1160;
	// bl 0x831f1d78
	ctx.lr = 0x8304381C;
	sub_831F1D78(ctx, base);
loc_8304381C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83043840
	if (!ctx.cr6.eq) goto loc_83043840;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83043844
	if (!ctx.cr6.eq) goto loc_83043844;
loc_83043840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83043844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83043864
	if (ctx.cr6.eq) goto loc_83043864;
	// addi r3,r29,1160
	ctx.r3.s64 = ctx.r29.s64 + 1160;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x831f09e8
	ctx.lr = 0x8304385C;
	sub_831F09E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83043864:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043870"))) PPC_WEAK_FUNC(sub_83043870);
PPC_FUNC_IMPL(__imp__sub_83043870) {
	PPC_FUNC_PROLOGUE();
	// stw r4,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043878"))) PPC_WEAK_FUNC(sub_83043878);
PPC_FUNC_IMPL(__imp__sub_83043878) {
	PPC_FUNC_PROLOGUE();
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r8,r3,1624
	ctx.r8.s64 = ctx.r3.s64 + 1624;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8304388C:
	// rldicr r7,r9,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r6,r10,1,62
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// ori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 | 1;
	// rldicr r9,r9,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bne 0x8304388c
	if (!ctx.cr0.eq) goto loc_8304388C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830438B4"))) PPC_WEAK_FUNC(sub_830438B4);
PPC_FUNC_IMPL(__imp__sub_830438B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830438B8"))) PPC_WEAK_FUNC(sub_830438B8);
PPC_FUNC_IMPL(__imp__sub_830438B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x830438C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x830438EC;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043910
	if (ctx.cr6.eq) goto loc_83043910;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x831c4990
	ctx.lr = 0x83043910;
	sub_831C4990(ctx, base);
loc_83043910:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c45a0
	ctx.lr = 0x83043930;
	sub_831C45A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043938"))) PPC_WEAK_FUNC(sub_83043938);
PPC_FUNC_IMPL(__imp__sub_83043938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83043940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8304395c
	if (ctx.cr6.eq) goto loc_8304395C;
	// bl 0x830438b8
	ctx.lr = 0x83043958;
	sub_830438B8(ctx, base);
	// b 0x8304399c
	goto loc_8304399C;
loc_8304395C:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x831c44a8
	ctx.lr = 0x83043978;
	sub_831C44A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304399c
	if (ctx.cr6.eq) goto loc_8304399C;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x831c4990
	ctx.lr = 0x8304399C;
	sub_831C4990(ctx, base);
loc_8304399C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83089e10
	ctx.lr = 0x830439AC;
	sub_83089E10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830439B4"))) PPC_WEAK_FUNC(sub_830439B4);
PPC_FUNC_IMPL(__imp__sub_830439B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830439B8"))) PPC_WEAK_FUNC(sub_830439B8);
PPC_FUNC_IMPL(__imp__sub_830439B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x830439C0;
	__savegprlr_22(ctx, base);
	// lis r12,-5
	ctx.r12.s64 = -327680;
	// ori r12,r12,65360
	ctx.r12.u64 = ctx.r12.u64 | 65360;
	// bl 0x82cb8074
	ctx.lr = 0x830439CC;
	sub_82CB8074(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65532
	ctx.r5.u64 = ctx.r5.u64 | 65532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x830439F4;
	sub_82CB16F0(ctx, base);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x83043b24
	if (ctx.cr6.eq) goto loc_83043B24;
loc_83043A08:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83043a30
	if (!ctx.cr6.eq) goto loc_83043A30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83043a28
	if (!ctx.cr6.eq) goto loc_83043A28;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83043A28:
	// lwz r31,284(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x83043a3c
	goto loc_83043A3C;
loc_83043A30:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83043b18
	if (!ctx.cr6.eq) goto loc_83043B18;
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_83043A3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83043b18
	if (ctx.cr6.eq) goto loc_83043B18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x83043b08
	if (!ctx.cr6.eq) goto loc_83043B08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043b08
	if (ctx.cr6.eq) goto loc_83043B08;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_83043A84:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83043aa4
	if (ctx.cr6.lt) goto loc_83043AA4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x83043aac
	goto loc_83043AAC;
loc_83043AA4:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_83043AAC:
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83043ad0
	if (ctx.cr6.lt) goto loc_83043AD0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x83043ad8
	goto loc_83043AD8;
loc_83043AD0:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_83043AD8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,460(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83043B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83043a84
	if (ctx.cr6.lt) goto loc_83043A84;
loc_83043B08:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
loc_83043B18:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83043a08
	if (!ctx.cr6.eq) goto loc_83043A08;
loc_83043B24:
	// lwz r8,60(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83043be0
	if (ctx.cr6.eq) goto loc_83043BE0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83043B38:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83043b58
	if (ctx.cr6.eq) goto loc_83043B58;
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// b 0x83043b5c
	goto loc_83043B5C;
loc_83043B58:
	// stw r24,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r24.u32);
loc_83043B5C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r9,r5,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r6,r3,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lwz r5,288(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 288);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x83043bac
	if (ctx.cr6.eq) goto loc_83043BAC;
	// lwz r9,288(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x83043bac
	if (ctx.cr6.eq) goto loc_83043BAC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83043bb8
	if (ctx.cr6.eq) goto loc_83043BB8;
loc_83043BAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r6,r9,32768
	ctx.r6.u64 = ctx.r9.u64 | 2147483648;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_83043BB8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// beq 0x83043be0
	if (ctx.cr0.eq) goto loc_83043BE0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83043b38
	if (!ctx.cr6.eq) goto loc_83043B38;
loc_83043BE0:
	// subf r11,r22,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r22.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043BF4"))) PPC_WEAK_FUNC(sub_83043BF4);
PPC_FUNC_IMPL(__imp__sub_83043BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043BF8"))) PPC_WEAK_FUNC(sub_83043BF8);
PPC_FUNC_IMPL(__imp__sub_83043BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83043C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r29,320
	ctx.r25.s64 = ctx.r29.s64 + 320;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x83043C1C;
	sub_82D5EC30(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,248
	ctx.r3.s64 = ctx.r29.s64 + 248;
	// bl 0x830855b0
	ctx.lr = 0x83043C2C;
	sub_830855B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// lwz r3,308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// bl 0x83074540
	ctx.lr = 0x83043C4C;
	sub_83074540(ctx, base);
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r29,772
	ctx.r11.s64 = ctx.r29.s64 + 772;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83043ce8
	if (ctx.cr6.eq) goto loc_83043CE8;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
loc_83043C60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043c60
	if (!ctx.cr0.eq) goto loc_83043C60;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwsync 
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
loc_83043C88:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83043c9c
	if (ctx.cr6.gt) goto loc_83043C9C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83043C9C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83043cc0
	if (!ctx.cr6.eq) goto loc_83043CC0;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043c9c
	if (!ctx.cr0.eq) goto loc_83043C9C;
	// b 0x83043cc8
	goto loc_83043CC8;
loc_83043CC0:
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83043CC8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83043c88
	if (!ctx.cr6.eq) goto loc_83043C88;
	// lwsync 
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 352, ctx.r11.u32);
	// b 0x83043d70
	goto loc_83043D70;
loc_83043CE8:
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
loc_83043CEC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043cec
	if (!ctx.cr0.eq) goto loc_83043CEC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwsync 
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_83043D14:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x83043d28
	if (ctx.cr6.gt) goto loc_83043D28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83043D28:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83043d4c
	if (!ctx.cr6.eq) goto loc_83043D4C;
	// stwcx. r10,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043d28
	if (!ctx.cr0.eq) goto loc_83043D28;
	// b 0x83043d54
	goto loc_83043D54;
loc_83043D4C:
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83043D54:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83043d14
	if (!ctx.cr6.eq) goto loc_83043D14;
	// lwsync 
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
loc_83043D70:
	// lwz r11,288(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83043dc4
	if (!ctx.cr6.eq) goto loc_83043DC4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,336(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043dd4
	if (ctx.cr6.eq) goto loc_83043DD4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83043DA4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83043078
	ctx.lr = 0x83043DB4;
	sub_83043078(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83043da4
	if (!ctx.cr0.eq) goto loc_83043DA4;
	// b 0x83043dd4
	goto loc_83043DD4;
loc_83043DC4:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r11.u32);
loc_83043DD4:
	// stb r26,263(r27)
	PPC_STORE_U8(ctx.r27.u32 + 263, ctx.r26.u8);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r31,r27,224
	ctx.r31.s64 = ctx.r27.s64 + 224;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831c69a8
	ctx.lr = 0x83043DF4;
	sub_831C69A8(ctx, base);
	// lwz r9,312(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83043e10
	if (!ctx.cr6.eq) goto loc_83043E10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,288
	ctx.r3.s64 = ctx.r29.s64 + 288;
	// bl 0x831c6de0
	ctx.lr = 0x83043E10;
	sub_831C6DE0(ctx, base);
loc_83043E10:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83043E18;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043E20"))) PPC_WEAK_FUNC(sub_83043E20);
PPC_FUNC_IMPL(__imp__sub_83043E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83043E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r31,320
	ctx.r27.s64 = ctx.r31.s64 + 320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x83043E40;
	sub_82D5EC30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83043e94
	if (ctx.cr6.eq) goto loc_83043E94;
	// addi r11,r31,820
	ctx.r11.s64 = ctx.r31.s64 + 820;
loc_83043E64:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043e64
	if (!ctx.cr0.eq) goto loc_83043E64;
	// lwsync 
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r8.u32);
	// b 0x83043ec4
	goto loc_83043EC4;
loc_83043E94:
	// addi r11,r31,812
	ctx.r11.s64 = ctx.r31.s64 + 812;
loc_83043E98:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83043e98
	if (!ctx.cr0.eq) goto loc_83043E98;
	// lwsync 
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
loc_83043EC4:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83043ee0
	if (!ctx.cr6.eq) goto loc_83043EE0;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x831c6e88
	ctx.lr = 0x83043EE0;
	sub_831C6E88(ctx, base);
loc_83043EE0:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83043f6c
	if (!ctx.cr6.eq) goto loc_83043F6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83043F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,336(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83043f78
	if (ctx.cr6.eq) goto loc_83043F78;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83043F10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d5ec30
	ctx.lr = 0x83043F1C;
	sub_82D5EC30(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83043f44
	if (!ctx.cr6.eq) goto loc_83043F44;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x831c6e88
	ctx.lr = 0x83043F44;
	sub_831C6E88(ctx, base);
loc_83043F44:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83043F4C;
	sub_82D5ED58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83043f10
	if (!ctx.cr0.eq) goto loc_83043F10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83043F60;
	sub_82D5ED58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83043F6C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
loc_83043F78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83043F80;
	sub_82D5ED58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83043F8C"))) PPC_WEAK_FUNC(sub_83043F8C);
PPC_FUNC_IMPL(__imp__sub_83043F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83043F90"))) PPC_WEAK_FUNC(sub_83043F90);
PPC_FUNC_IMPL(__imp__sub_83043F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83043F98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// bl 0x831c6b28
	ctx.lr = 0x83043FC4;
	sub_831C6B28(ctx, base);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83044004
	if (ctx.cr6.eq) goto loc_83044004;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_83044004:
	// addi r9,r31,300
	ctx.r9.s64 = ctx.r31.s64 + 300;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83042bb8
	ctx.lr = 0x83044014;
	sub_83042BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304402c
	if (ctx.cr6.eq) goto loc_8304402C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x83042bb8
	ctx.lr = 0x8304402C;
	sub_83042BB8(ctx, base);
loc_8304402C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x831c6d10
	ctx.lr = 0x83044058;
	sub_831C6D10(ctx, base);
	// addi r30,r31,732
	ctx.r30.s64 = ctx.r31.s64 + 732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8300b480
	ctx.lr = 0x83044064;
	sub_8300B480(ctx, base);
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8300b480
	ctx.lr = 0x83044070;
	sub_8300B480(ctx, base);
	// stw r3,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8300b480
	ctx.lr = 0x8304407C;
	sub_8300B480(ctx, base);
	// stw r3,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304408C"))) PPC_WEAK_FUNC(sub_8304408C);
PPC_FUNC_IMPL(__imp__sub_8304408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044090"))) PPC_WEAK_FUNC(sub_83044090);
PPC_FUNC_IMPL(__imp__sub_83044090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// lwz r10,1160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// b 0x83074540
	sub_83074540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830440A8"))) PPC_WEAK_FUNC(sub_830440A8);
PPC_FUNC_IMPL(__imp__sub_830440A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// lwz r8,160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// lwz r10,748(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 748);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x830440e4
	if (ctx.cr6.eq) goto loc_830440E4;
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r10,748(r7)
	PPC_STORE_U32(ctx.r7.u32 + 748, ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
loc_830440E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830440F4"))) PPC_WEAK_FUNC(sub_830440F4);
PPC_FUNC_IMPL(__imp__sub_830440F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830440F8"))) PPC_WEAK_FUNC(sub_830440F8);
PPC_FUNC_IMPL(__imp__sub_830440F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,160(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83044140
	if (ctx.cr6.eq) goto loc_83044140;
loc_83044120:
	// lfs f2,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8308d660
	ctx.lr = 0x83044130;
	sub_8308D660(ctx, base);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83044120
	if (!ctx.cr6.eq) goto loc_83044120;
loc_83044140:
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

__attribute__((alias("__imp__sub_83044158"))) PPC_WEAK_FUNC(sub_83044158);
PPC_FUNC_IMPL(__imp__sub_83044158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83044160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// lwz r31,1188(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x830441c8
	if (ctx.cr6.eq) goto loc_830441C8;
loc_83044180:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830441b4
	if (ctx.cr6.eq) goto loc_830441B4;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830441b4
	if (ctx.cr6.eq) goto loc_830441B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309e470
	ctx.lr = 0x830441A8;
	sub_8309E470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83098bb8
	ctx.lr = 0x830441B4;
	sub_83098BB8(ctx, base);
loc_830441B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830985d8
	ctx.lr = 0x830441BC;
	sub_830985D8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83044180
	if (!ctx.cr6.eq) goto loc_83044180;
loc_830441C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830441D0"))) PPC_WEAK_FUNC(sub_830441D0);
PPC_FUNC_IMPL(__imp__sub_830441D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830441D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,1164(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,1160(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83044310
	if (ctx.cr6.eq) goto loc_83044310;
loc_830441F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83044210
	if (!ctx.cr6.eq) goto loc_83044210;
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x8304422c
	goto loc_8304422C;
loc_83044210:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83044304
	if (!ctx.cr6.eq) goto loc_83044304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83044228
	if (!ctx.cr6.eq) goto loc_83044228;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83044228:
	// lwz r31,284(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
loc_8304422C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83044304
	if (ctx.cr6.eq) goto loc_83044304;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83044304
	if (ctx.cr6.eq) goto loc_83044304;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304425c
	if (ctx.cr6.eq) goto loc_8304425C;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x83044304
	if (!ctx.cr6.eq) goto loc_83044304;
loc_8304425C:
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83044288
	if (!ctx.cr6.eq) goto loc_83044288;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830442bc
	if (ctx.cr6.eq) goto loc_830442BC;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830442bc
	if (ctx.cr6.eq) goto loc_830442BC;
loc_83044288:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304429c
	if (ctx.cr6.eq) goto loc_8304429C;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_8304429C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830442BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830442BC:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f13,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f10,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x831c0028
	ctx.lr = 0x83044304;
	sub_831C0028(ctx, base);
loc_83044304:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x830441f8
	if (!ctx.cr6.eq) goto loc_830441F8;
loc_83044310:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83044318"))) PPC_WEAK_FUNC(sub_83044318);
PPC_FUNC_IMPL(__imp__sub_83044318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83044320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,1164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,1160(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83044394
	if (ctx.cr6.eq) goto loc_83044394;
loc_83044338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83044350
	if (!ctx.cr6.eq) goto loc_83044350;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x8304436c
	goto loc_8304436C;
loc_83044350:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83044388
	if (!ctx.cr6.eq) goto loc_83044388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83044368
	if (!ctx.cr6.eq) goto loc_83044368;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83044368:
	// lwz r3,284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
loc_8304436C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83044388
	if (ctx.cr6.eq) goto loc_83044388;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83044388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83044388:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83044338
	if (!ctx.cr6.eq) goto loc_83044338;
loc_83044394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304439C"))) PPC_WEAK_FUNC(sub_8304439C);
PPC_FUNC_IMPL(__imp__sub_8304439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830443A0"))) PPC_WEAK_FUNC(sub_830443A0);
PPC_FUNC_IMPL(__imp__sub_830443A0) {
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
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83044404
	if (ctx.cr6.eq) goto loc_83044404;
	// bl 0x8307f6b8
	ctx.lr = 0x830443C4;
	sub_8307F6B8(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x83044404
	if (!ctx.cr6.eq) goto loc_83044404;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83044404
	if (ctx.cr6.eq) goto loc_83044404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830443FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
loc_83044404:
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

__attribute__((alias("__imp__sub_83044418"))) PPC_WEAK_FUNC(sub_83044418);
PPC_FUNC_IMPL(__imp__sub_83044418) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,428(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r8,424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8304443c
	if (ctx.cr6.lt) goto loc_8304443C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8304443C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r4,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044460"))) PPC_WEAK_FUNC(sub_83044460);
PPC_FUNC_IMPL(__imp__sub_83044460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044480"))) PPC_WEAK_FUNC(sub_83044480);
PPC_FUNC_IMPL(__imp__sub_83044480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83044488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83044510
	if (ctx.cr6.eq) goto loc_83044510;
loc_830444A8:
	// lwz r10,428(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// lwz r9,424(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83044510
	if (!ctx.cr6.lt) goto loc_83044510;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x830444fc
	if (!ctx.cr6.eq) goto loc_830444FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830444F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_830444FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne cr6,0x830444a8
	if (!ctx.cr6.eq) goto loc_830444A8;
loc_83044510:
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83044520"))) PPC_WEAK_FUNC(sub_83044520);
PPC_FUNC_IMPL(__imp__sub_83044520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83044528;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r26,r30,320
	ctx.r26.s64 = ctx.r30.s64 + 320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x83044540;
	sub_82D5EC30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bgt cr6,0x830449e4
	if (ctx.cr6.gt) goto loc_830449E4;
	// lis r12,-31996
	ctx.r12.s64 = -2096889856;
	// addi r12,r12,17772
	ctx.r12.s64 = ctx.r12.s64 + 17772;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83044594;
	case 1:
		goto loc_830445E4;
	case 2:
		goto loc_83044634;
	case 3:
		goto loc_83044684;
	case 4:
		goto loc_83044724;
	case 5:
		goto loc_830446D4;
	case 6:
		goto loc_83044774;
	case 7:
		goto loc_830447C4;
	case 8:
		goto loc_830449E4;
	case 9:
		goto loc_83044814;
	default:
		__builtin_unreachable();
	}
	// lwz r24,17812(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17812);
	// lwz r24,17892(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17892);
	// lwz r24,17972(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17972);
	// lwz r24,18052(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18052);
	// lwz r24,18212(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18212);
	// lwz r24,18132(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18132);
	// lwz r24,18292(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18292);
	// lwz r24,18372(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18372);
	// lwz r24,18916(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18916);
	// lwz r24,18452(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18452);
loc_83044594:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,380
	ctx.r4.s64 = 380;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830445B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x830445C8;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830cffd8
	ctx.lr = 0x830445DC;
	sub_830CFFD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_830445E4:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,340
	ctx.r4.s64 = 340;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x83044618;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830cd7b0
	ctx.lr = 0x8304462C;
	sub_830CD7B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044634:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,664
	ctx.r4.s64 = 664;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x83044668;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830cac40
	ctx.lr = 0x8304467C;
	sub_830CAC40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044684:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,348
	ctx.r4.s64 = 348;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830446A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x830446B8;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830c75a8
	ctx.lr = 0x830446CC;
	sub_830C75A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_830446D4:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,344
	ctx.r4.s64 = 344;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830446F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x83044708;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830c3cb8
	ctx.lr = 0x8304471C;
	sub_830C3CB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044724:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,772
	ctx.r4.s64 = 772;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x83044758;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308ca88
	ctx.lr = 0x8304476C;
	sub_8308CA88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044774:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,372
	ctx.r4.s64 = 372;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x830447A8;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830c1270
	ctx.lr = 0x830447BC;
	sub_830C1270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_830447C4:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,372
	ctx.r4.s64 = 372;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830447E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x830447F8;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab680
	ctx.lr = 0x8304480C;
	sub_830AB680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044814:
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,376
	ctx.r4.s64 = 376;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83044864
	if (ctx.cr6.eq) goto loc_83044864;
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// bl 0x8300b480
	ctx.lr = 0x83044848;
	sub_8300B480(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a4d60
	ctx.lr = 0x8304485C;
	sub_830A4D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83044868
	goto loc_83044868;
loc_83044864:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83044868:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83044880
	if (ctx.cr6.eq) goto loc_83044880;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83044964
	if (ctx.cr6.eq) goto loc_83044964;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830886e0
	ctx.lr = 0x83044880;
	sub_830886E0(ctx, base);
loc_83044880:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8304498c
	if (!ctx.cr6.eq) goto loc_8304498C;
loc_83044888:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8304489c
	if (ctx.cr6.eq) goto loc_8304489C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830792b0
	ctx.lr = 0x8304489C;
	sub_830792B0(ctx, base);
loc_8304489C:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 ^ 1;
	// bl 0x83043bf8
	ctx.lr = 0x830448B4;
	sub_83043BF8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,152(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830448C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,19632
	ctx.r29.s64 = ctx.r11.s64 + 19632;
	// beq cr6,0x8304491c
	if (ctx.cr6.eq) goto loc_8304491C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830448EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8304491c
	if (!ctx.cr6.eq) goto loc_8304491C;
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304491c
	if (!ctx.cr6.eq) goto loc_8304491C;
	// addi r7,r29,-168
	ctx.r7.s64 = ctx.r29.s64 + -168;
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3370
	ctx.r5.s64 = 3370;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x8304491C;
	sub_82D17988(ctx, base);
loc_8304491C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83044930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830449b0
	if (ctx.cr6.eq) goto loc_830449B0;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830449b0
	if (ctx.cr6.eq) goto loc_830449B0;
	// addi r7,r29,-32
	ctx.r7.s64 = ctx.r29.s64 + -32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3372
	ctx.r5.s64 = 3372;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x83044960;
	sub_82D17988(ctx, base);
	// b 0x830449b0
	goto loc_830449B0;
loc_83044964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304497C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83079c88
	ctx.lr = 0x83044988;
	sub_83079C88(ctx, base);
	// b 0x83044888
	goto loc_83044888;
loc_8304498C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830a4f48
	ctx.lr = 0x83044998;
	sub_830A4F48(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 ^ 1;
	// bl 0x83043078
	ctx.lr = 0x830449B0;
	sub_83043078(ctx, base);
loc_830449B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830449C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830449f8
	if (!ctx.cr6.eq) goto loc_830449F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830449E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830449E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x830449EC;
	sub_82D5ED58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_830449F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x83044A00;
	sub_82D5ED58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83044A0C"))) PPC_WEAK_FUNC(sub_83044A0C);
PPC_FUNC_IMPL(__imp__sub_83044A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044A10"))) PPC_WEAK_FUNC(sub_83044A10);
PPC_FUNC_IMPL(__imp__sub_83044A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83044A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,636
	ctx.r4.s64 = 636;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83044a68
	if (ctx.cr6.eq) goto loc_83044A68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8307ddf0
	ctx.lr = 0x83044A60;
	sub_8307DDF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83044a6c
	goto loc_83044A6C;
loc_83044A68:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83044A6C:
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lwz r10,1160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x83074540
	ctx.lr = 0x83044A84;
	sub_83074540(ctx, base);
	// lwz r8,184(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83044ab0
	if (!ctx.cr6.eq) goto loc_83044AB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83044AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83044AB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83044ABC"))) PPC_WEAK_FUNC(sub_83044ABC);
PPC_FUNC_IMPL(__imp__sub_83044ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044AC0"))) PPC_WEAK_FUNC(sub_83044AC0);
PPC_FUNC_IMPL(__imp__sub_83044AC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r8,r10,112
	ctx.r8.s64 = ctx.r10.s64 + 112;
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x83044b18
	if (ctx.cr6.eq) goto loc_83044B18;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r4,r9,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
loc_83044B18:
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r9,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r5.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// andc r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044B54"))) PPC_WEAK_FUNC(sub_83044B54);
PPC_FUNC_IMPL(__imp__sub_83044B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044B58"))) PPC_WEAK_FUNC(sub_83044B58);
PPC_FUNC_IMPL(__imp__sub_83044B58) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// addi r11,r11,203
	ctx.r11.s64 = ctx.r11.s64 + 203;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x83044bb0
	if (ctx.cr6.eq) goto loc_83044BB0;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// b 0x83044bc4
	goto loc_83044BC4;
loc_83044BB0:
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 & ctx.r7.u64;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
loc_83044BC4:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r9,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// bne cr6,0x83044be0
	if (!ctx.cr6.eq) goto loc_83044BE0;
	// andc r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r5.u64;
loc_83044BE0:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r10,203
	ctx.r11.s64 = ctx.r10.s64 + 203;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x83044c28
	if (ctx.cr6.eq) goto loc_83044C28;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// b 0x83044c3c
	goto loc_83044C3C;
loc_83044C28:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
loc_83044C3C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bne cr6,0x83044c58
	if (!ctx.cr6.eq) goto loc_83044C58;
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
loc_83044C58:
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// lwz r31,1228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	// lwz r9,1296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83044cb4
	if (ctx.cr6.eq) goto loc_83044CB4;
loc_83044C90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83044CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83044c90
	if (!ctx.cr6.eq) goto loc_83044C90;
loc_83044CB4:
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

__attribute__((alias("__imp__sub_83044CCC"))) PPC_WEAK_FUNC(sub_83044CCC);
PPC_FUNC_IMPL(__imp__sub_83044CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044CD0"))) PPC_WEAK_FUNC(sub_83044CD0);
PPC_FUNC_IMPL(__imp__sub_83044CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,203
	ctx.r7.s64 = ctx.r11.s64 + 203;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r11,r6,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// ldx r8,r5,r4
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r4.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rldicl r6,r7,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044D40"))) PPC_WEAK_FUNC(sub_83044D40);
PPC_FUNC_IMPL(__imp__sub_83044D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// li r9,56
	ctx.r9.s64 = 56;
	// lwz r8,1140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// addi r11,r3,1140
	ctx.r11.s64 = ctx.r3.s64 + 1140;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044D6C"))) PPC_WEAK_FUNC(sub_83044D6C);
PPC_FUNC_IMPL(__imp__sub_83044D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044D70"))) PPC_WEAK_FUNC(sub_83044D70);
PPC_FUNC_IMPL(__imp__sub_83044D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83044D78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83044db8
	if (!ctx.cr6.eq) goto loc_83044DB8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83044dbc
	if (!ctx.cr6.eq) goto loc_83044DBC;
loc_83044DB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83044DBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83044de0
	if (!ctx.cr6.eq) goto loc_83044DE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x83044dd8
	if (!ctx.cr6.eq) goto loc_83044DD8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83044DD8:
	// addi r3,r29,1160
	ctx.r3.s64 = ctx.r29.s64 + 1160;
	// bl 0x831f1d78
	ctx.lr = 0x83044DE0;
	sub_831F1D78(ctx, base);
loc_83044DE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83044e04
	if (!ctx.cr6.eq) goto loc_83044E04;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83044e08
	if (!ctx.cr6.eq) goto loc_83044E08;
loc_83044E04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83044E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83044e54
	if (!ctx.cr6.eq) goto loc_83044E54;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83044e48
	if (ctx.cr6.eq) goto loc_83044E48;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83044e48
	if (!ctx.cr6.eq) goto loc_83044E48;
	// lwz r11,568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83044E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83044E54:
	// lwz r8,1332(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1332);
	// addi r10,r29,1160
	ctx.r10.s64 = ctx.r29.s64 + 1160;
	// lwz r7,1328(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1328);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r11,r10,168
	ctx.r11.s64 = ctx.r10.s64 + 168;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 2;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83044ea0
	if (!ctx.cr6.eq) goto loc_83044EA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r8,152(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83044ec8
	goto loc_83044EC8;
loc_83044EA0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83044EC8:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83044ee0
	if (!ctx.cr6.gt) goto loc_83044EE0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83044EE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83044f3c
	if (ctx.cr6.eq) goto loc_83044F3C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_83044EEC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83044f3c
	if (ctx.cr6.eq) goto loc_83044F3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x83044f24
	if (ctx.cr6.eq) goto loc_83044F24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x83044f14
	if (!ctx.cr6.eq) goto loc_83044F14;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83044F14:
	// lwz r10,568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_83044F24:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// blt cr6,0x83044eec
	if (ctx.cr6.lt) goto loc_83044EEC;
loc_83044F3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83044F44"))) PPC_WEAK_FUNC(sub_83044F44);
PPC_FUNC_IMPL(__imp__sub_83044F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83044F48"))) PPC_WEAK_FUNC(sub_83044F48);
PPC_FUNC_IMPL(__imp__sub_83044F48) {
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83044fdc
	if (!ctx.cr6.eq) goto loc_83044FDC;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83044f8c
	if (!ctx.cr6.eq) goto loc_83044F8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// b 0x830450d0
	goto loc_830450D0;
loc_83044F8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83044fac
	if (ctx.cr6.eq) goto loc_83044FAC;
loc_83044F94:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83044fd0
	if (ctx.cr6.eq) goto loc_83044FD0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83044f94
	if (!ctx.cr6.eq) goto loc_83044F94;
loc_83044FAC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,18192
	ctx.r11.s64 = ctx.r11.s64 + 18192;
	// li r5,1535
	ctx.r5.s64 = 1535;
	// addi r7,r11,-192
	ctx.r7.s64 = ctx.r11.s64 + -192;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x83044FCC;
	sub_82D17988(ctx, base);
	// b 0x830450d0
	goto loc_830450D0;
loc_83044FD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830450d0
	goto loc_830450D0;
loc_83044FDC:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045000
	if (!ctx.cr6.eq) goto loc_83045000;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045010
	if (ctx.cr6.eq) goto loc_83045010;
loc_83045000:
	// addi r5,r30,128
	ctx.r5.s64 = ctx.r30.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8307e0a0
	ctx.lr = 0x83045010;
	sub_8307E0A0(ctx, base);
loc_83045010:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830450a8
	if (ctx.cr0.eq) goto loc_830450A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83045030:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83045088
	if (!ctx.cr6.eq) goto loc_83045088;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r8,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 2;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8304507c
	if (ctx.cr6.eq) goto loc_8304507C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,-4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8304507C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83045088:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83045030
	if (ctx.cr6.lt) goto loc_83045030;
loc_830450A8:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830450e8
	if (!ctx.cr6.eq) goto loc_830450E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
loc_830450BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83081370
	ctx.lr = 0x830450D0;
	sub_83081370(ctx, base);
loc_830450D0:
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
loc_830450E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83045108
	if (ctx.cr6.eq) goto loc_83045108;
loc_830450F0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83045128
	if (ctx.cr6.eq) goto loc_83045128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830450f0
	if (!ctx.cr6.eq) goto loc_830450F0;
loc_83045108:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18192
	ctx.r4.s64 = ctx.r11.s64 + 18192;
	// li r5,1596
	ctx.r5.s64 = 1596;
	// addi r7,r4,-48
	ctx.r7.s64 = ctx.r4.s64 + -48;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83045124;
	sub_82D17988(ctx, base);
	// b 0x830450d0
	goto loc_830450D0;
loc_83045128:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830450bc
	goto loc_830450BC;
}

__attribute__((alias("__imp__sub_83045134"))) PPC_WEAK_FUNC(sub_83045134);
PPC_FUNC_IMPL(__imp__sub_83045134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045138"))) PPC_WEAK_FUNC(sub_83045138);
PPC_FUNC_IMPL(__imp__sub_83045138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83045140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830451ec
	if (ctx.cr6.eq) goto loc_830451EC;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830451a8
	if (ctx.cr6.eq) goto loc_830451A8;
loc_83045174:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,288(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045190
	if (!ctx.cr6.eq) goto loc_83045190;
	// lwz r11,292(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045198
	if (ctx.cr6.eq) goto loc_83045198;
loc_83045190:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8307b398
	ctx.lr = 0x83045198;
	sub_8307B398(ctx, base);
loc_83045198:
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83045174
	if (!ctx.cr6.eq) goto loc_83045174;
loc_830451A8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830451e4
	if (ctx.cr6.eq) goto loc_830451E4;
loc_830451B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830451cc
	if (!ctx.cr6.eq) goto loc_830451CC;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_830451CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83079488
	ctx.lr = 0x830451D4;
	sub_83079488(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830451b8
	if (!ctx.cr6.eq) goto loc_830451B8;
loc_830451E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_830451EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830451F4"))) PPC_WEAK_FUNC(sub_830451F4);
PPC_FUNC_IMPL(__imp__sub_830451F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830451F8"))) PPC_WEAK_FUNC(sub_830451F8);
PPC_FUNC_IMPL(__imp__sub_830451F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83045200;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,1180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	// addi r10,r3,788
	ctx.r10.s64 = ctx.r3.s64 + 788;
loc_83045210:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_83045218:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8304523c
	if (!ctx.cr6.eq) goto loc_8304523C;
	// stwcx. r6,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83045218
	if (!ctx.cr0.eq) goto loc_83045218;
	// b 0x83045244
	goto loc_83045244;
loc_8304523C:
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83045244:
	// mr r9,r9
	ctx.r9.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83045210
	if (!ctx.cr6.eq) goto loc_83045210;
	// lwsync 
	// lwz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	// lwz r10,1512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	// addi r31,r3,1512
	ctx.r31.s64 = ctx.r3.s64 + 1512;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x830453f8
	if (ctx.cr0.eq) goto loc_830453F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f31.f64 = double(temp.f32);
loc_8304527C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83045298
	if (!ctx.cr6.eq) goto loc_83045298;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83045298:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83045354
	if (ctx.cr6.eq) goto loc_83045354;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830452bc
	if (!ctx.cr6.eq) goto loc_830452BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830452BC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83045354
	if (ctx.cr6.eq) goto loc_83045354;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830452f0
	if (!ctx.cr6.eq) goto loc_830452F0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830453d8
	if (ctx.cr6.eq) goto loc_830453D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045320
	if (ctx.cr6.eq) goto loc_83045320;
loc_830452F0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83045320
	if (ctx.cr6.eq) goto loc_83045320;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r7,88(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x830453d8
	if (ctx.cr6.eq) goto loc_830453D8;
loc_83045320:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83045338
	if (!ctx.cr6.eq) goto loc_83045338;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83045338;
	sub_8307A200(ctx, base);
loc_83045338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x830453cc
	goto loc_830453CC;
loc_83045354:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83045368
	if (!ctx.cr6.eq) goto loc_83045368;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83045368:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83045390
	if (ctx.cr6.eq) goto loc_83045390;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83045390
	if (!ctx.cr6.eq) goto loc_83045390;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83045390;
	sub_8307A200(ctx, base);
loc_83045390:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x830453b0
	if (!ctx.cr6.eq) goto loc_830453B0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_830453B0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x830453d8
	if (ctx.cr6.eq) goto loc_830453D8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_830453CC:
	// bne cr6,0x830453d8
	if (!ctx.cr6.eq) goto loc_830453D8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x830453D8;
	sub_8307A200(ctx, base);
loc_830453D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8304527c
	if (ctx.cr6.lt) goto loc_8304527C;
loc_830453F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304540C"))) PPC_WEAK_FUNC(sub_8304540C);
PPC_FUNC_IMPL(__imp__sub_8304540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045410"))) PPC_WEAK_FUNC(sub_83045410);
PPC_FUNC_IMPL(__imp__sub_83045410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83045418;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,22552
	ctx.r27.s64 = ctx.r11.s64 + 22552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83045598
	if (ctx.cr6.eq) goto loc_83045598;
	// addi r29,r30,648
	ctx.r29.s64 = ctx.r30.s64 + 648;
	// addi r3,r30,248
	ctx.r3.s64 = ctx.r30.s64 + 248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83085480
	ctx.lr = 0x83045450;
	sub_83085480(ctx, base);
	// lwz r28,1164(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	// lwz r31,1160(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83045494
	if (ctx.cr6.eq) goto loc_83045494;
loc_83045460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83045488
	if (!ctx.cr6.eq) goto loc_83045488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83045480
	if (!ctx.cr6.eq) goto loc_83045480;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83045480:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83079ce8
	ctx.lr = 0x83045488;
	sub_83079CE8(ctx, base);
loc_83045488:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83045460
	if (!ctx.cr6.eq) goto loc_83045460;
loc_83045494:
	// lwz r31,148(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830454c4
	if (ctx.cr6.eq) goto loc_830454C4;
loc_830454A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830454B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830454a0
	if (!ctx.cr6.eq) goto loc_830454A0;
loc_830454C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r3,308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// bl 0x830747c8
	ctx.lr = 0x830454D4;
	sub_830747C8(ctx, base);
	// lfs f0,152(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830454f4
	if (ctx.cr6.eq) goto loc_830454F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-256
	ctx.r5.s64 = -256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830441d0
	ctx.lr = 0x830454F4;
	sub_830441D0(ctx, base);
loc_830454F4:
	// lfs f0,164(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83045518
	if (ctx.cr6.eq) goto loc_83045518;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830441d0
	ctx.lr = 0x83045518;
	sub_830441D0(ctx, base);
loc_83045518:
	// lfs f0,156(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,160(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,180(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,168(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,172(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,176(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,288(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x83045578
	if (!ctx.cr6.eq) goto loc_83045578;
	// lfs f0,204(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83045584
	if (ctx.cr6.eq) goto loc_83045584;
loc_83045578:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83044318
	ctx.lr = 0x83045584;
	sub_83044318(ctx, base);
loc_83045584:
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83045598
	if (ctx.cr6.eq) goto loc_83045598;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8307f380
	ctx.lr = 0x83045598;
	sub_8307F380(ctx, base);
loc_83045598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830455A4"))) PPC_WEAK_FUNC(sub_830455A4);
PPC_FUNC_IMPL(__imp__sub_830455A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830455A8"))) PPC_WEAK_FUNC(sub_830455A8);
PPC_FUNC_IMPL(__imp__sub_830455A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x830455B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,12
	ctx.r31.s64 = 12;
	// addi r28,r29,1572
	ctx.r28.s64 = ctx.r29.s64 + 1572;
	// lwz r11,1576(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1576);
	// lwz r10,1572(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1572);
	// lwz r9,332(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// divw r5,r8,r31
	ctx.r5.s32 = ctx.r8.s32 / ctx.r31.s32;
	// beq cr6,0x830457ec
	if (ctx.cr6.eq) goto loc_830457EC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830457ec
	if (ctx.cr6.eq) goto loc_830457EC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830455FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r31
	ctx.r6.s32 = ctx.r7.s32 / ctx.r31.s32;
	// addic. r25,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r25.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x830457ec
	if (ctx.cr0.lt) goto loc_830457EC;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r25,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83045624:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,1592(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r31,r26,r10
	ctx.r31.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304570c
	if (ctx.cr6.eq) goto loc_8304570C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830897d8
	ctx.lr = 0x83045648;
	sub_830897D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304570c
	if (!ctx.cr6.eq) goto loc_8304570C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830897d8
	ctx.lr = 0x8304565C;
	sub_830897D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304570c
	if (!ctx.cr6.eq) goto loc_8304570C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8304568c
	if (!ctx.cr6.eq) goto loc_8304568C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// bl 0x83073fc0
	ctx.lr = 0x83045688;
	sub_83073FC0(ctx, base);
	// b 0x830457bc
	goto loc_830457BC;
loc_8304568C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x830456e8
	if (!ctx.cr6.eq) goto loc_830456E8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83043758
	ctx.lr = 0x830456AC;
	sub_83043758(ctx, base);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// lwz r4,16(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// b 0x830457bc
	goto loc_830457BC;
loc_830456E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830457bc
	if (!ctx.cr6.eq) goto loc_830457BC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// bl 0x83073ed0
	ctx.lr = 0x83045708;
	sub_83073ED0(ctx, base);
	// b 0x830457bc
	goto loc_830457BC;
loc_8304570C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83045754
	if (!ctx.cr6.eq) goto loc_83045754;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// bne cr6,0x83045734
	if (!ctx.cr6.eq) goto loc_83045734;
	// rlwinm r10,r11,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
loc_83045734:
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309abf0
	ctx.lr = 0x83045740;
	sub_8309ABF0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// b 0x830457bc
	goto loc_830457BC;
loc_83045754:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83045788
	if (!ctx.cr6.eq) goto loc_83045788;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83043758
	ctx.lr = 0x83045774;
	sub_83043758(ctx, base);
	// lwz r3,308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// bl 0x830755f8
	ctx.lr = 0x8304577C;
	sub_830755F8(ctx, base);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x830457a8
	goto loc_830457A8;
loc_83045788:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830457bc
	if (!ctx.cr6.eq) goto loc_830457BC;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// bl 0x83073e48
	ctx.lr = 0x830457A0;
	sub_83073E48(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_830457A8:
	// beq cr6,0x830457bc
	if (ctx.cr6.eq) goto loc_830457BC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// oris r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 8388608;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bl 0x8309abf0
	ctx.lr = 0x830457BC;
	sub_8309ABF0(ctx, base);
loc_830457BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// addi r26,r26,-16
	ctx.r26.s64 = ctx.r26.s64 + -16;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,308(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r6,r7,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r6,308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 308, ctx.r6.u32);
	// bge 0x83045624
	if (!ctx.cr0.lt) goto loc_83045624;
loc_830457EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r10,1592(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// stw r10,1596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1596, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83045804"))) PPC_WEAK_FUNC(sub_83045804);
PPC_FUNC_IMPL(__imp__sub_83045804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045808"))) PPC_WEAK_FUNC(sub_83045808);
PPC_FUNC_IMPL(__imp__sub_83045808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83045810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r30,r28,200
	ctx.r30.s64 = ctx.r28.s64 + 200;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// lwz r9,200(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// lwz r8,324(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// divw r29,r7,r10
	ctx.r29.s32 = ctx.r7.s32 / ctx.r10.s32;
	// beq cr6,0x830458b8
	if (ctx.cr6.eq) goto loc_830458B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830458b8
	if (ctx.cr6.eq) goto loc_830458B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83045848:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83045860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83045880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,324(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830458AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x83045848
	if (!ctx.cr0.eq) goto loc_83045848;
loc_830458B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x83042e80
	ctx.lr = 0x830458C8;
	sub_83042E80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830458D0"))) PPC_WEAK_FUNC(sub_830458D0);
PPC_FUNC_IMPL(__imp__sub_830458D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x830458D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
loc_830458E8:
	// lwz r31,180(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83045910
	if (ctx.cr6.eq) goto loc_83045910;
loc_830458F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8308d908
	ctx.lr = 0x83045900;
	sub_8308D908(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830458f4
	if (!ctx.cr6.eq) goto loc_830458F4;
loc_83045910:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x830458e8
	if (ctx.cr6.lt) goto loc_830458E8;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304592C"))) PPC_WEAK_FUNC(sub_8304592C);
PPC_FUNC_IMPL(__imp__sub_8304592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045930"))) PPC_WEAK_FUNC(sub_83045930);
PPC_FUNC_IMPL(__imp__sub_83045930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83045938;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r11,21764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21764);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83045ad0
	if (ctx.cr6.eq) goto loc_83045AD0;
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,22552
	ctx.r30.s64 = ctx.r11.s64 + 22552;
	// beq cr6,0x83045984
	if (ctx.cr6.eq) goto loc_83045984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83045978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83045ab8
	if (ctx.cr6.eq) goto loc_83045AB8;
loc_83045984:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83045aac
	if (ctx.cr6.eq) goto loc_83045AAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830459AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x830459f0
	if (!ctx.cr6.eq) goto loc_830459F0;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830459f0
	if (!ctx.cr6.eq) goto loc_830459F0;
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r11,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r4,r10,19808
	ctx.r4.s64 = ctx.r10.s64 + 19808;
	// stw r9,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r9.u32);
	// li r5,3972
	ctx.r5.s64 = 3972;
	// addi r7,r4,-80
	ctx.r7.s64 = ctx.r4.s64 + -80;
	// li r3,206
	ctx.r3.s64 = 206;
	// bl 0x82d17988
	ctx.lr = 0x830459EC;
	sub_82D17988(ctx, base);
	// b 0x83045ab8
	goto loc_83045AB8;
loc_830459F0:
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r9,r11,128
	ctx.r9.u64 = ctx.r11.u64 | 128;
	// stw r9,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r9.u32);
	// lwz r4,21368(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21368);
	// bl 0x82ff4c10
	ctx.lr = 0x83045A0C;
	sub_82FF4C10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83045aa0
	if (!ctx.cr6.lt) goto loc_83045AA0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045aa0
	if (ctx.cr6.eq) goto loc_83045AA0;
loc_83045A48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045a68
	if (!ctx.cr6.eq) goto loc_83045A68;
	// bl 0x82d532d0
	ctx.lr = 0x83045A60;
	sub_82D532D0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83045A68:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x83045aa0
	if (!ctx.cr6.lt) goto loc_83045AA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045a48
	if (!ctx.cr6.eq) goto loc_83045A48;
loc_83045AA0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d5ed58
	ctx.lr = 0x83045AA8;
	sub_82D5ED58(ctx, base);
	// b 0x83045ab8
	goto loc_83045AB8;
loc_83045AAC:
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
loc_83045AB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x8315e158
	ctx.lr = 0x83045AC8;
	sub_8315E158(ctx, base);
	// lwz r11,21764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21764);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_83045AD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83045AD8"))) PPC_WEAK_FUNC(sub_83045AD8);
PPC_FUNC_IMPL(__imp__sub_83045AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1476(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1476);
	// addi r11,r3,1472
	ctx.r11.s64 = ctx.r3.s64 + 1472;
	// lwz r8,1472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83045b24
	if (ctx.cr0.eq) goto loc_83045B24;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83045AF8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x83045b2c
	if (ctx.cr6.eq) goto loc_83045B2C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83045af8
	if (ctx.cr6.lt) goto loc_83045AF8;
loc_83045B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83045B2C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83045b50
	if (ctx.cr6.eq) goto loc_83045B50;
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83045B50:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r8,r9,0,11,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045B70"))) PPC_WEAK_FUNC(sub_83045B70);
PPC_FUNC_IMPL(__imp__sub_83045B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1496(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// addi r11,r3,1492
	ctx.r11.s64 = ctx.r3.s64 + 1492;
	// lwz r8,1492(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x83045bc8
	if (ctx.cr0.eq) goto loc_83045BC8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83045B94:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83045bd0
	if (ctx.cr6.eq) goto loc_83045BD0;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83045bd0
	if (ctx.cr6.eq) goto loc_83045BD0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83045b94
	if (ctx.cr6.lt) goto loc_83045B94;
loc_83045BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83045BD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83045bf8
	if (ctx.cr6.eq) goto loc_83045BF8;
	// lwz r8,-4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83045BF8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045C24"))) PPC_WEAK_FUNC(sub_83045C24);
PPC_FUNC_IMPL(__imp__sub_83045C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045C28"))) PPC_WEAK_FUNC(sub_83045C28);
PPC_FUNC_IMPL(__imp__sub_83045C28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1452
	ctx.r11.s64 = ctx.r3.s64 + 1452;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83045C4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83045c94
	if (!ctx.cr6.eq) goto loc_83045C94;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83045c80
	if (ctx.cr6.eq) goto loc_83045C80;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83045C80:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83045c9c
	goto loc_83045C9C;
loc_83045C94:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83045C9C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83045c4c
	if (ctx.cr6.lt) goto loc_83045C4C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045CB8"))) PPC_WEAK_FUNC(sub_83045CB8);
PPC_FUNC_IMPL(__imp__sub_83045CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1532
	ctx.r11.s64 = ctx.r3.s64 + 1532;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83045CDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83045d24
	if (!ctx.cr6.eq) goto loc_83045D24;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83045d10
	if (ctx.cr6.eq) goto loc_83045D10;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83045D10:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83045d2c
	goto loc_83045D2C;
loc_83045D24:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83045D2C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83045cdc
	if (ctx.cr6.lt) goto loc_83045CDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045D48"))) PPC_WEAK_FUNC(sub_83045D48);
PPC_FUNC_IMPL(__imp__sub_83045D48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1552
	ctx.r11.s64 = ctx.r3.s64 + 1552;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83045D6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x83045dc0
	if (!ctx.cr6.eq) goto loc_83045DC0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83045da0
	if (ctx.cr6.eq) goto loc_83045DA0;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83045DA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r8.u32);
	// b 0x83045dc8
	goto loc_83045DC8;
loc_83045DC0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83045DC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83045d6c
	if (ctx.cr6.lt) goto loc_83045D6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045DE4"))) PPC_WEAK_FUNC(sub_83045DE4);
PPC_FUNC_IMPL(__imp__sub_83045DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045DE8"))) PPC_WEAK_FUNC(sub_83045DE8);
PPC_FUNC_IMPL(__imp__sub_83045DE8) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// beq cr6,0x83045ecc
	if (ctx.cr6.eq) goto loc_83045ECC;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// stw r8,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,21368(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21368);
	// bl 0x82ff4c10
	ctx.lr = 0x83045E20;
	sub_82FF4C10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83045eb4
	if (!ctx.cr6.lt) goto loc_83045EB4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045eb4
	if (ctx.cr6.eq) goto loc_83045EB4;
loc_83045E5C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045e7c
	if (!ctx.cr6.eq) goto loc_83045E7C;
	// bl 0x82d532d0
	ctx.lr = 0x83045E74;
	sub_82D532D0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83045E7C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x83045eb4
	if (!ctx.cr6.lt) goto loc_83045EB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83045e5c
	if (!ctx.cr6.eq) goto loc_83045E5C;
loc_83045EB4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d5ed58
	ctx.lr = 0x83045EBC;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83045ECC:
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r9,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045EE4"))) PPC_WEAK_FUNC(sub_83045EE4);
PPC_FUNC_IMPL(__imp__sub_83045EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83045EE8"))) PPC_WEAK_FUNC(sub_83045EE8);
PPC_FUNC_IMPL(__imp__sub_83045EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83045EF0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// bl 0x830744b8
	ctx.lr = 0x83045F08;
	sub_830744B8(ctx, base);
	// addi r3,r28,732
	ctx.r3.s64 = ctx.r28.s64 + 732;
	// lwz r4,292(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 292);
	// bl 0x8300e0f8
	ctx.lr = 0x83045F14;
	sub_8300E0F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83045F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,164(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// lwz r31,160(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83045fb4
	if (ctx.cr6.eq) goto loc_83045FB4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-18264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18264);
	ctx.f31.f64 = double(temp.f32);
loc_83045F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83045fa4
	if (!ctx.cr6.eq) goto loc_83045FA4;
	// stw r29,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,520(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 520, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,420(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 420, temp.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83045f9c
	if (ctx.cr6.eq) goto loc_83045F9C;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83045f9c
	if (ctx.cr6.eq) goto loc_83045F9C;
	// addi r4,r30,436
	ctx.r4.s64 = ctx.r30.s64 + 436;
	// addi r3,r30,336
	ctx.r3.s64 = ctx.r30.s64 + 336;
	// bl 0x830424f0
	ctx.lr = 0x83045F9C;
	sub_830424F0(ctx, base);
loc_83045F9C:
	// lfs f0,512(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 412, temp.u32);
loc_83045FA4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83045f48
	if (!ctx.cr6.eq) goto loc_83045F48;
loc_83045FB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83045FC0"))) PPC_WEAK_FUNC(sub_83045FC0);
PPC_FUNC_IMPL(__imp__sub_83045FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83045FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r27,128
	ctx.r31.s64 = ctx.r27.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8307e0a0
	ctx.lr = 0x83045FE8;
	sub_8307E0A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307ad30
	ctx.lr = 0x83045FF4;
	sub_8307AD30(ctx, base);
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// lwz r10,128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8304605c
	if (ctx.cr0.eq) goto loc_8304605C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83046010:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83081938
	ctx.lr = 0x83046024;
	sub_83081938(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304603c
	if (ctx.cr6.eq) goto loc_8304603C;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8304603C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83046010
	if (ctx.cr6.lt) goto loc_83046010;
loc_8304605C:
	// lwz r10,1104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// addi r11,r27,1100
	ctx.r11.s64 = ctx.r27.s64 + 1100;
	// lwz r9,1100(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1100);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,568(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 568);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830460e4
	if (ctx.cr0.eq) goto loc_830460E4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83046080:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x830460c4
	if (!ctx.cr6.eq) goto loc_830460C4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830460b4
	if (ctx.cr6.eq) goto loc_830460B4;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_830460B4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x830460cc
	goto loc_830460CC;
loc_830460C4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_830460CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83046080
	if (ctx.cr6.lt) goto loc_83046080;
loc_830460E4:
	// lwz r10,1124(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1124);
	// addi r11,r27,1120
	ctx.r11.s64 = ctx.r27.s64 + 1120;
	// lwz r9,1120(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1120);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83046168
	if (ctx.cr0.eq) goto loc_83046168;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83046104:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83046148
	if (!ctx.cr6.eq) goto loc_83046148;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83046138
	if (ctx.cr6.eq) goto loc_83046138;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83046138:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83046150
	goto loc_83046150;
loc_83046148:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83046150:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83046104
	if (ctx.cr6.lt) goto loc_83046104;
loc_83046168:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83045c28
	ctx.lr = 0x83046174;
	sub_83045C28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304617C"))) PPC_WEAK_FUNC(sub_8304617C);
PPC_FUNC_IMPL(__imp__sub_8304617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83046180"))) PPC_WEAK_FUNC(sub_83046180);
PPC_FUNC_IMPL(__imp__sub_83046180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83046188;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stw r8,748(r27)
	PPC_STORE_U32(ctx.r27.u32 + 748, ctx.r8.u32);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83046288
	if (ctx.cr6.gt) goto loc_83046288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830461dc
	if (!ctx.cr6.eq) goto loc_830461DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830461e4
	goto loc_830461E4;
loc_830461DC:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830461E4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83046288
	if (!ctx.cr6.lt) goto loc_83046288;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83046210;
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
	// beq cr6,0x83046240
	if (ctx.cr6.eq) goto loc_83046240;
loc_83046228:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83046228
	if (!ctx.cr6.eq) goto loc_83046228;
loc_83046240:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83046260
	if (ctx.cr6.eq) goto loc_83046260;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83046260:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83046288:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830462A4"))) PPC_WEAK_FUNC(sub_830462A4);
PPC_FUNC_IMPL(__imp__sub_830462A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830462A8"))) PPC_WEAK_FUNC(sub_830462A8);
PPC_FUNC_IMPL(__imp__sub_830462A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830462B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r31,r3,180
	ctx.r31.s64 = ctx.r3.s64 + 180;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8304639c
	if (ctx.cr6.gt) goto loc_8304639C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830462f0
	if (!ctx.cr6.eq) goto loc_830462F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830462f8
	goto loc_830462F8;
loc_830462F0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830462F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8304639c
	if (!ctx.cr6.lt) goto loc_8304639C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83046324;
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
	// beq cr6,0x83046354
	if (ctx.cr6.eq) goto loc_83046354;
loc_8304633C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8304633c
	if (!ctx.cr6.eq) goto loc_8304633C;
loc_83046354:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83046374
	if (ctx.cr6.eq) goto loc_83046374;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83046374:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8304639C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830463B8"))) PPC_WEAK_FUNC(sub_830463B8);
PPC_FUNC_IMPL(__imp__sub_830463B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x830463C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r28,1160
	ctx.r29.s64 = ctx.r28.s64 + 1160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f0a48
	ctx.lr = 0x830463D4;
	sub_831F0A48(ctx, base);
	// lwz r11,1296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1296);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,1228(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1228);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83046408
	if (ctx.cr6.eq) goto loc_83046408;
loc_830463EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x83082d18
	ctx.lr = 0x830463FC;
	sub_83082D18(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x830463ec
	if (!ctx.cr6.eq) goto loc_830463EC;
loc_83046408:
	// lwz r11,1348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1348);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83046520
	if (!ctx.cr6.gt) goto loc_83046520;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8304641C:
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83046450
	if (!ctx.cr6.eq) goto loc_83046450;
	// lwzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r30,152(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83046468
	goto loc_83046468;
loc_83046450:
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83046468:
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1352);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lbzx r27,r11,r25
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// beq cr6,0x8304650c
	if (ctx.cr6.eq) goto loc_8304650C;
loc_8304647C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x830464b0
	if (!ctx.cr6.lt) goto loc_830464B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r11
	// li r8,384
	ctx.r8.s64 = 384;
	// dcbt r8,r11
	// li r7,512
	ctx.r7.s64 = 512;
	// dcbt r7,r11
loc_830464B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046500
	if (!ctx.cr6.eq) goto loc_83046500;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x830464d0
	if (!ctx.cr6.eq) goto loc_830464D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830464D0:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046500
	if (!ctx.cr6.eq) goto loc_83046500;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f2,100(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f1,96(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 ^ 1;
	// bl 0x830794d8
	ctx.lr = 0x83046500;
	sub_830794D8(ctx, base);
loc_83046500:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8304647c
	if (!ctx.cr6.eq) goto loc_8304647C;
loc_8304650C:
	// lwz r11,1348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1348);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8304641c
	if (ctx.cr6.lt) goto loc_8304641C;
loc_83046520:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r11.u32);
	// bl 0x830458d0
	ctx.lr = 0x83046530;
	sub_830458D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83046538"))) PPC_WEAK_FUNC(sub_83046538);
PPC_FUNC_IMPL(__imp__sub_83046538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83046540;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r25,-31909
	ctx.r25.s64 = -2091188224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r23,r21,1160
	ctx.r23.s64 = ctx.r21.s64 + 1160;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r11,1180(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1180);
	// lis r18,-31901
	ctx.r18.s64 = -2090663936;
	// lwz r30,1160(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,18340(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18340);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r9,r30,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r30.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830465bc
	if (!ctx.cr6.gt) goto loc_830465BC;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830465B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stb r15,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r15.u8);
	// b 0x830465d8
	goto loc_830465D8;
loc_830465BC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x830465CC;
	sub_82CB8074(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r14,r1,80
	ctx.r14.s64 = ctx.r1.s64 + 80;
loc_830465D8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8304682c
	if (ctx.cr6.eq) goto loc_8304682C;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_830465E8:
	// addi r11,r26,32
	ctx.r11.s64 = ctx.r26.s64 + 32;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x83046614
	if (!ctx.cr6.lt) goto loc_83046614;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r11
	// li r8,384
	ctx.r8.s64 = 384;
	// dcbt r8,r11
loc_83046614:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830467cc
	if (!ctx.cr6.eq) goto loc_830467CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83046634
	if (!ctx.cr6.eq) goto loc_83046634;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83046634:
	// lfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r6,52
	ctx.r6.s64 = 52;
	// stfs f0,188(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lfs f13,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stfs f13,192(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 192, temp.u32);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// lfs f12,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// stfs f12,196(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 196, temp.u32);
	// lfs f11,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// lfs f10,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,204(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// lfs f9,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,208(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// lfs f8,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,212(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// bl 0x8315bec8
	ctx.lr = 0x83046688;
	sub_8315BEC8(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lfs f7,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r11,r15,13,17,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 13) & 0x6000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF9FFF);
	// lfs f5,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// lfs f2,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// stfs f7,168(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// stfs f6,172(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// stfs f5,176(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// stfs f4,152(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// stfs f3,156(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// stfs f2,160(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// stfs f1,164(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f13,132(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// stfs f12,136(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// stfs f11,140(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 140, temp.u32);
	// stfs f10,144(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// stfs f9,148(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// bl 0x8307a2c8
	ctx.lr = 0x83046708;
	sub_8307A2C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,100(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307ccd8
	ctx.lr = 0x83046718;
	sub_8307CCD8(ctx, base);
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r9,r10,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830467cc
	if (!ctx.cr6.eq) goto loc_830467CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83079360
	ctx.lr = 0x83046730;
	sub_83079360(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83046768
	if (!ctx.cr6.eq) goto loc_83046768;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83046754
	if (!ctx.cr6.eq) goto loc_83046754;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830467cc
	if (ctx.cr6.eq) goto loc_830467CC;
loc_83046754:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r10.u32);
	// b 0x830467c4
	goto loc_830467C4;
loc_83046768:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046790
	if (ctx.cr6.eq) goto loc_83046790;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r10,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r10.u32);
loc_83046790:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830467cc
	if (ctx.cr6.eq) goto loc_830467CC;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830467cc
	if (!ctx.cr6.eq) goto loc_830467CC;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830467cc
	if (ctx.cr6.eq) goto loc_830467CC;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
loc_830467C4:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830467CC:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x830465e8
	if (!ctx.cr6.eq) goto loc_830465E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8304682c
	if (ctx.cr6.eq) goto loc_8304682C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r14
	ctx.r30.u64 = ctx.r11.u64 + ctx.r14.u64;
loc_830467E8:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83046804
	if (ctx.cr6.eq) goto loc_83046804;
	// bl 0x830775d0
	ctx.lr = 0x83046804;
	sub_830775D0(ctx, base);
loc_83046804:
	// lfs f2,100(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,96(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830798c0
	ctx.lr = 0x83046814;
	sub_830798C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r9,r10,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// bne cr6,0x830467e8
	if (!ctx.cr6.eq) goto loc_830467E8;
loc_8304682C:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// lwz r3,1412(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1412);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x8315ee50
	ctx.lr = 0x8304683C;
	sub_8315EE50(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,18340(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18340);
	// li r16,0
	ctx.r16.s64 = 0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83046880
	if (!ctx.cr6.gt) goto loc_83046880;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,18340(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18340);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// b 0x8304689c
	goto loc_8304689C;
loc_83046880:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x83046890;
	sub_82CB8074(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
loc_8304689C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r17,0
	ctx.r17.s64 = 0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830468d8
	if (!ctx.cr6.gt) goto loc_830468D8;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830468CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// b 0x830468f4
	goto loc_830468F4;
loc_830468D8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x830468E8;
	sub_82CB8074(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
loc_830468F4:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r3,1412(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1412);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8315eea0
	ctx.lr = 0x83046904;
	sub_8315EEA0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830469d8
	if (!ctx.cr6.gt) goto loc_830469D8;
	// addi r6,r19,4
	ctx.r6.s64 = ctx.r19.s64 + 4;
loc_83046918:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830469c4
	if (!ctx.cr6.eq) goto loc_830469C4;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830469ac
	if (!ctx.cr6.eq) goto loc_830469AC;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r8,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r8.u32);
	// bne cr6,0x830469ac
	if (!ctx.cr6.eq) goto loc_830469AC;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r9,264(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83046aac
	if (ctx.cr6.eq) goto loc_83046AAC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8304698c
	if (!ctx.cr6.eq) goto loc_8304698C;
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
loc_8304698C:
	// lwz r8,520(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r8.u32);
loc_83046998:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830469ac
	if (ctx.cr6.eq) goto loc_830469AC;
	// lwz r11,520(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 520, ctx.r11.u32);
loc_830469AC:
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// ori r7,r9,16388
	ctx.r7.u64 = ctx.r9.u64 | 16388;
	// stw r8,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r8.u32);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
loc_830469C4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83046918
	if (ctx.cr6.lt) goto loc_83046918;
loc_830469D8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-18136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18136);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x83046c38
	if (!ctx.cr6.gt) goto loc_83046C38;
	// addi r25,r20,4
	ctx.r25.s64 = ctx.r20.s64 + 4;
loc_830469F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83046af0
	if (ctx.cr6.eq) goto loc_83046AF0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,192(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r11.u32);
	// bne 0x83046af0
	if (!ctx.cr0.eq) goto loc_83046AF0;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r7.u32);
	// bne cr6,0x83046af0
	if (!ctx.cr6.eq) goto loc_83046AF0;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r30,264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r29,264(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83046ac8
	if (ctx.cr6.eq) goto loc_83046AC8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83046a84
	if (!ctx.cr6.eq) goto loc_83046A84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83046A74;
	sub_8307A200(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
loc_83046A84:
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
loc_83046A90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83046aa4
	if (ctx.cr6.eq) goto loc_83046AA4;
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 520, ctx.r11.u32);
loc_83046AA4:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x83046af4
	goto loc_83046AF4;
loc_83046AAC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830469ac
	if (ctx.cr6.eq) goto loc_830469AC;
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r11.u32);
	// b 0x83046998
	goto loc_83046998;
loc_83046AC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83046aa4
	if (ctx.cr6.eq) goto loc_83046AA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83046ADC;
	sub_8307A200(ctx, base);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// b 0x83046a90
	goto loc_83046A90;
loc_83046AF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83046AF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83046c24
	if (ctx.cr6.eq) goto loc_83046C24;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r26,264(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83046c24
	if (ctx.cr6.eq) goto loc_83046C24;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r27,264(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83046c24
	if (ctx.cr6.eq) goto loc_83046C24;
	// lwz r9,1520(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1520);
	// addi r30,r21,1512
	ctx.r30.s64 = ctx.r21.s64 + 1512;
	// lwz r10,1516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83046c08
	if (ctx.cr6.gt) goto loc_83046C08;
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
	// bne cr6,0x83046b58
	if (!ctx.cr6.eq) goto loc_83046B58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83046b60
	goto loc_83046B60;
loc_83046B58:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_83046B60:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83046c08
	if (!ctx.cr6.lt) goto loc_83046C08;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83046bc0
	if (ctx.cr6.eq) goto loc_83046BC0;
loc_83046BA0:
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
	// bne cr6,0x83046ba0
	if (!ctx.cr6.eq) goto loc_83046BA0;
loc_83046BC0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83046be0
	if (ctx.cr6.eq) goto loc_83046BE0;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83046BE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83046C08:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,1516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// stw r26,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r26.u32);
	// lwz r9,1516(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// stw r27,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r27.u32);
loc_83046C24:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830469f4
	if (ctx.cr6.lt) goto loc_830469F4;
loc_83046C38:
	// lwz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lwz r23,28(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// add r22,r11,r23
	ctx.r22.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x83046f80
	if (ctx.cr6.eq) goto loc_83046F80;
loc_83046C54:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83046cb0
	if (!ctx.cr6.eq) goto loc_83046CB0;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046c9c
	if (ctx.cr6.eq) goto loc_83046C9C;
	// lwz r7,48(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83046cb0
	if (!ctx.cr6.eq) goto loc_83046CB0;
	// lwz r7,200(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83046cb0
	if (ctx.cr6.eq) goto loc_83046CB0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046e54
	if (!ctx.cr6.eq) goto loc_83046E54;
loc_83046C9C:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83046e54
	if (!ctx.cr6.eq) goto loc_83046E54;
loc_83046CB0:
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83046e54
	if (!ctx.cr6.eq) goto loc_83046E54;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r27,264(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r26,264(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83046ce0
	if (ctx.cr6.eq) goto loc_83046CE0;
	// lwz r11,520(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r27)
	PPC_STORE_U32(ctx.r27.u32 + 520, ctx.r11.u32);
loc_83046CE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83046cf4
	if (ctx.cr6.eq) goto loc_83046CF4;
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,520(r26)
	PPC_STORE_U32(ctx.r26.u32 + 520, ctx.r11.u32);
loc_83046CF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83046e2c
	if (ctx.cr6.eq) goto loc_83046E2C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83046e0c
	if (ctx.cr6.eq) goto loc_83046E0C;
	// lwz r9,1520(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1520);
	// addi r30,r21,1512
	ctx.r30.s64 = ctx.r21.s64 + 1512;
	// lwz r10,1516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83046dec
	if (ctx.cr6.gt) goto loc_83046DEC;
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
	// bne cr6,0x83046d3c
	if (!ctx.cr6.eq) goto loc_83046D3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83046d44
	goto loc_83046D44;
loc_83046D3C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_83046D44:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83046dec
	if (!ctx.cr6.lt) goto loc_83046DEC;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83046da4
	if (ctx.cr6.eq) goto loc_83046DA4;
loc_83046D84:
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
	// bne cr6,0x83046d84
	if (!ctx.cr6.eq) goto loc_83046D84;
loc_83046DA4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83046dc4
	if (ctx.cr6.eq) goto loc_83046DC4;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83046DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83046DC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83046DEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,1516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// stw r27,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r27.u32);
	// lwz r9,1516(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1516);
	// stw r26,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r26.u32);
	// b 0x83046f24
	goto loc_83046F24;
loc_83046E0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83046E18;
	sub_8307A200(ctx, base);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x83046f24
	goto loc_83046F24;
loc_83046E2C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83046f24
	if (ctx.cr6.eq) goto loc_83046F24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8307a200
	ctx.lr = 0x83046E40;
	sub_8307A200(ctx, base);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r11.u32);
	// b 0x83046f24
	goto loc_83046F24;
loc_83046E54:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83046f24
	if (!ctx.cr6.eq) goto loc_83046F24;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046e90
	if (ctx.cr6.eq) goto loc_83046E90;
	// lwz r8,48(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// lwz r7,116(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83046f24
	if (!ctx.cr6.eq) goto loc_83046F24;
	// lwz r8,200(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83046f24
	if (ctx.cr6.eq) goto loc_83046F24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046ea4
	if (!ctx.cr6.eq) goto loc_83046EA4;
loc_83046E90:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83046f24
	if (ctx.cr6.eq) goto loc_83046F24;
loc_83046EA4:
	// rlwinm r11,r9,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83046f24
	if (ctx.cr6.eq) goto loc_83046F24;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83046ed4
	if (ctx.cr6.eq) goto loc_83046ED4;
	// lwz r9,520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r9.u32);
loc_83046ED4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046ee8
	if (ctx.cr6.eq) goto loc_83046EE8;
	// lwz r9,520(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r9.u32);
loc_83046EE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83046f0c
	if (ctx.cr6.eq) goto loc_83046F0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046f24
	if (!ctx.cr6.eq) goto loc_83046F24;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// b 0x83046f24
	goto loc_83046F24;
loc_83046F0C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046f24
	if (ctx.cr6.eq) goto loc_83046F24;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
loc_83046F24:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83046f74
	if (ctx.cr6.eq) goto loc_83046F74;
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83046f5c
	if (ctx.cr6.eq) goto loc_83046F5C;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046f5c
	if (!ctx.cr6.eq) goto loc_83046F5C;
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x83046f60
	if (!ctx.cr6.eq) goto loc_83046F60;
loc_83046F5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83046F60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83046f74
	if (ctx.cr6.eq) goto loc_83046F74;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83099180
	ctx.lr = 0x83046F74;
	sub_83099180(ctx, base);
loc_83046F74:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83046c54
	if (!ctx.cr6.eq) goto loc_83046C54;
loc_83046F80:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83046fc0
	if (!ctx.cr6.eq) goto loc_83046FC0;
	// lfs f13,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83046fc0
	if (!ctx.cr6.eq) goto loc_83046FC0;
	// lfs f13,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83046fc0
	if (!ctx.cr6.eq) goto loc_83046FC0;
	// lfs f13,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8304701c
	if (ctx.cr6.eq) goto loc_8304701C;
loc_83046FC0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8304701c
	if (ctx.cr6.eq) goto loc_8304701C;
loc_83046FCC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83046ffc
	if (ctx.cr6.eq) goto loc_83046FFC;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83046ffc
	if (!ctx.cr6.eq) goto loc_83046FFC;
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x83047000
	if (!ctx.cr6.eq) goto loc_83047000;
loc_83046FFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83047000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83047010
	if (ctx.cr6.eq) goto loc_83047010;
	// bl 0x83099180
	ctx.lr = 0x83047010;
	sub_83099180(ctx, base);
loc_83047010:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83046fcc
	if (!ctx.cr6.eq) goto loc_83046FCC;
loc_8304701C:
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83047048
	if (ctx.cr6.eq) goto loc_83047048;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x83047048
	if (ctx.cr6.eq) goto loc_83047048;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047048:
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83047074
	if (ctx.cr6.eq) goto loc_83047074;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83047074
	if (ctx.cr6.eq) goto loc_83047074;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047074:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830470a0
	if (ctx.cr6.eq) goto loc_830470A0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x830470a0
	if (ctx.cr6.eq) goto loc_830470A0;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830470A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830470A0:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830470AC"))) PPC_WEAK_FUNC(sub_830470AC);
PPC_FUNC_IMPL(__imp__sub_830470AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830470B0"))) PPC_WEAK_FUNC(sub_830470B0);
PPC_FUNC_IMPL(__imp__sub_830470B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x830470B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 444);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83047158
	if (ctx.cr6.eq) goto loc_83047158;
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lhz r5,54(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// sth r5,444(r3)
	PPC_STORE_U16(ctx.r3.u32 + 444, ctx.r5.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r30.u16);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304714C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83047158:
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// addi r31,r3,424
	ctx.r31.s64 = ctx.r3.s64 + 424;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// blt cr6,0x83047180
	if (ctx.cr6.lt) goto loc_83047180;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83047180:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,-31901
	ctx.r28.s64 = -2090663936;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,60
	ctx.r4.s64 = 60;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830471B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830471d0
	if (ctx.cr6.eq) goto loc_830471D0;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x8307ecb0
	ctx.lr = 0x830471C8;
	sub_8307ECB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x830471d4
	goto loc_830471D4;
loc_830471D0:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_830471D4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x830472a8
	if (ctx.cr6.gt) goto loc_830472A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x83047208
	if (ctx.cr6.eq) goto loc_83047208;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_83047208:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830472a8
	if (!ctx.cr6.lt) goto loc_830472A8;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047230;
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
	// beq cr6,0x83047260
	if (ctx.cr6.eq) goto loc_83047260;
loc_83047248:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047248
	if (!ctx.cr6.eq) goto loc_83047248;
loc_83047260:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047280
	if (ctx.cr6.eq) goto loc_83047280;
	// lwz r3,-32308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047280:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_830472A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830472D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830472E0"))) PPC_WEAK_FUNC(sub_830472E0);
PPC_FUNC_IMPL(__imp__sub_830472E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830472E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83047310
	if (ctx.cr6.eq) goto loc_83047310;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83047314
	if (ctx.cr6.lt) goto loc_83047314;
loc_83047310:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83047314:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304732c
	if (!ctx.cr6.eq) goto loc_8304732C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8304732C:
	// lis r27,-31901
	ctx.r27.s64 = -2090663936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304734C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83047374
	if (ctx.cr6.eq) goto loc_83047374;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,20560
	ctx.r10.s64 = ctx.r11.s64 + 20560;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d62918
	ctx.lr = 0x8304736C;
	sub_82D62918(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x83047378
	goto loc_83047378;
loc_83047374:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83047378:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// addi r31,r29,1432
	ctx.r31.s64 = ctx.r29.s64 + 1432;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// lwz r9,1440(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1440);
	// lwz r10,1436(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8304746c
	if (ctx.cr6.gt) goto loc_8304746C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830473c4
	if (!ctx.cr6.eq) goto loc_830473C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830473cc
	goto loc_830473CC;
loc_830473C4:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830473CC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8304746c
	if (!ctx.cr6.lt) goto loc_8304746C;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830473F4;
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
	// beq cr6,0x83047424
	if (ctx.cr6.eq) goto loc_83047424;
loc_8304740C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8304740c
	if (!ctx.cr6.eq) goto loc_8304740C;
loc_83047424:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047444
	if (ctx.cr6.eq) goto loc_83047444;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047444:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8304746C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304748C"))) PPC_WEAK_FUNC(sub_8304748C);
PPC_FUNC_IMPL(__imp__sub_8304748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047490"))) PPC_WEAK_FUNC(sub_83047490);
PPC_FUNC_IMPL(__imp__sub_83047490) {
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
	// addi r7,r11,1432
	ctx.r7.s64 = ctx.r11.s64 + 1432;
	// lwz r8,1432(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830474e8
	if (ctx.cr6.eq) goto loc_830474E8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830474CC:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83047520
	if (ctx.cr6.eq) goto loc_83047520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830474cc
	if (ctx.cr6.lt) goto loc_830474CC;
loc_830474E8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830474EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83047508
	if (ctx.cr6.eq) goto loc_83047508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047508:
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
loc_83047520:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83047538
	if (ctx.cr6.eq) goto loc_83047538;
	// lwz r10,-4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_83047538:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// b 0x830474ec
	goto loc_830474EC;
}

__attribute__((alias("__imp__sub_8304754C"))) PPC_WEAK_FUNC(sub_8304754C);
PPC_FUNC_IMPL(__imp__sub_8304754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047550"))) PPC_WEAK_FUNC(sub_83047550);
PPC_FUNC_IMPL(__imp__sub_83047550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83047558;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,568(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 568);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83047660
	if (ctx.cr6.eq) goto loc_83047660;
	// lwz r9,1108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// addi r31,r3,1100
	ctx.r31.s64 = ctx.r3.s64 + 1100;
	// lwz r10,1104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8304764c
	if (ctx.cr6.gt) goto loc_8304764C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830475a0
	if (!ctx.cr6.eq) goto loc_830475A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830475a8
	goto loc_830475A8;
loc_830475A0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830475A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8304764c
	if (!ctx.cr6.lt) goto loc_8304764C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x830475D4;
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
	// beq cr6,0x83047604
	if (ctx.cr6.eq) goto loc_83047604;
loc_830475EC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x830475ec
	if (!ctx.cr6.eq) goto loc_830475EC;
loc_83047604:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047624
	if (ctx.cr6.eq) goto loc_83047624;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047624:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8304764C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83047660:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047668"))) PPC_WEAK_FUNC(sub_83047668);
PPC_FUNC_IMPL(__imp__sub_83047668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83047670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,568(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 568);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83047778
	if (ctx.cr6.eq) goto loc_83047778;
	// lwz r9,1128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// addi r31,r3,1120
	ctx.r31.s64 = ctx.r3.s64 + 1120;
	// lwz r10,1124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83047764
	if (ctx.cr6.gt) goto loc_83047764;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830476b8
	if (!ctx.cr6.eq) goto loc_830476B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830476c0
	goto loc_830476C0;
loc_830476B8:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_830476C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83047764
	if (!ctx.cr6.lt) goto loc_83047764;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x830476EC;
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
	// beq cr6,0x8304771c
	if (ctx.cr6.eq) goto loc_8304771C;
loc_83047704:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047704
	if (!ctx.cr6.eq) goto loc_83047704;
loc_8304771C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304773c
	if (ctx.cr6.eq) goto loc_8304773C;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304773C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304773C:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83047764:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83047778:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047780"))) PPC_WEAK_FUNC(sub_83047780);
PPC_FUNC_IMPL(__imp__sub_83047780) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830477a8
	if (ctx.cr6.eq) goto loc_830477A8;
	// bl 0x83045ad8
	ctx.lr = 0x830477A8;
	sub_83045AD8(ctx, base);
loc_830477A8:
	// lbz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830478b8
	if (ctx.cr6.eq) goto loc_830478B8;
	// lwz r9,1596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r11,r31,1592
	ctx.r11.s64 = ctx.r31.s64 + 1592;
	// lwz r8,1592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x830478b8
	if (ctx.cr0.eq) goto loc_830478B8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_830477DC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8304780c
	if (ctx.cr6.eq) goto loc_8304780C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x830477dc
	if (ctx.cr6.lt) goto loc_830477DC;
	// b 0x830478b8
	goto loc_830478B8;
loc_8304780C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83047854
	if (ctx.cr6.eq) goto loc_83047854;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,-16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// addi r7,r9,-16
	ctx.r7.s64 = ctx.r9.s64 + -16;
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stwx r5,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r8,-12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,-4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_83047854:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r31,1572
	ctx.r7.s64 = ctx.r31.s64 + 1572;
	// addi r6,r9,-16
	ctx.r6.s64 = ctx.r9.s64 + -16;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,1572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r8,r5,r8
	ctx.r8.s32 = ctx.r5.s32 / ctx.r8.s32;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x830478ac
	if (ctx.cr6.eq) goto loc_830478AC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_830478AC:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_830478B8:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x83075948
	ctx.lr = 0x830478C0;
	sub_83075948(ctx, base);
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

__attribute__((alias("__imp__sub_830478D4"))) PPC_WEAK_FUNC(sub_830478D4);
PPC_FUNC_IMPL(__imp__sub_830478D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830478D8"))) PPC_WEAK_FUNC(sub_830478D8);
PPC_FUNC_IMPL(__imp__sub_830478D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x830478E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830479fc
	if (!ctx.cr6.eq) goto loc_830479FC;
	// lwz r9,1480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1480);
	// addi r31,r3,1472
	ctx.r31.s64 = ctx.r3.s64 + 1472;
	// lwz r10,1476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1476);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x830479dc
	if (ctx.cr6.gt) goto loc_830479DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83047930
	if (!ctx.cr6.eq) goto loc_83047930;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83047938
	goto loc_83047938;
loc_83047930:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83047938:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830479dc
	if (!ctx.cr6.lt) goto loc_830479DC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83047964;
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
	// beq cr6,0x83047994
	if (ctx.cr6.eq) goto loc_83047994;
loc_8304797C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8304797c
	if (!ctx.cr6.eq) goto loc_8304797C;
loc_83047994:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830479b4
	if (ctx.cr6.eq) goto loc_830479B4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830479B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830479B4:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_830479DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// oris r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 2097152;
	// stw r8,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r8.u32);
loc_830479FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047A04"))) PPC_WEAK_FUNC(sub_83047A04);
PPC_FUNC_IMPL(__imp__sub_83047A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047A08"))) PPC_WEAK_FUNC(sub_83047A08);
PPC_FUNC_IMPL(__imp__sub_83047A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83047A10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83047b3c
	if (!ctx.cr6.eq) goto loc_83047B3C;
	// lwz r9,1500(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// addi r31,r3,1492
	ctx.r31.s64 = ctx.r3.s64 + 1492;
	// lwz r10,1496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83047b0c
	if (ctx.cr6.gt) goto loc_83047B0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83047a60
	if (!ctx.cr6.eq) goto loc_83047A60;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83047a68
	goto loc_83047A68;
loc_83047A60:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83047A68:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83047b0c
	if (!ctx.cr6.lt) goto loc_83047B0C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83047A94;
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
	// beq cr6,0x83047ac4
	if (ctx.cr6.eq) goto loc_83047AC4;
loc_83047AAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047aac
	if (!ctx.cr6.eq) goto loc_83047AAC;
loc_83047AC4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047ae4
	if (ctx.cr6.eq) goto loc_83047AE4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047AE4:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83047B0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r7,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r7.u32);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stw r5,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
loc_83047B3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047B44"))) PPC_WEAK_FUNC(sub_83047B44);
PPC_FUNC_IMPL(__imp__sub_83047B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047B48"))) PPC_WEAK_FUNC(sub_83047B48);
PPC_FUNC_IMPL(__imp__sub_83047B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83047B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,272(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83047c6c
	if (!ctx.cr6.eq) goto loc_83047C6C;
	// lwz r9,1460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// addi r31,r3,1452
	ctx.r31.s64 = ctx.r3.s64 + 1452;
	// lwz r10,1456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83047c4c
	if (ctx.cr6.gt) goto loc_83047C4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83047ba0
	if (!ctx.cr6.eq) goto loc_83047BA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83047ba8
	goto loc_83047BA8;
loc_83047BA0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83047BA8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83047c4c
	if (!ctx.cr6.lt) goto loc_83047C4C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83047BD4;
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
	// beq cr6,0x83047c04
	if (ctx.cr6.eq) goto loc_83047C04;
loc_83047BEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047bec
	if (!ctx.cr6.eq) goto loc_83047BEC;
loc_83047C04:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047c24
	if (ctx.cr6.eq) goto loc_83047C24;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047C24:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83047C4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,272(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 272);
	// oris r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 131072;
	// stw r8,272(r27)
	PPC_STORE_U32(ctx.r27.u32 + 272, ctx.r8.u32);
loc_83047C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047C74"))) PPC_WEAK_FUNC(sub_83047C74);
PPC_FUNC_IMPL(__imp__sub_83047C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047C78"))) PPC_WEAK_FUNC(sub_83047C78);
PPC_FUNC_IMPL(__imp__sub_83047C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83047C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,1560(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,1556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// addi r31,r3,1552
	ctx.r31.s64 = ctx.r3.s64 + 1552;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83047d6c
	if (ctx.cr6.gt) goto loc_83047D6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83047cc0
	if (!ctx.cr6.eq) goto loc_83047CC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83047cc8
	goto loc_83047CC8;
loc_83047CC0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83047CC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83047d6c
	if (!ctx.cr6.lt) goto loc_83047D6C;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83047CF4;
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
	// beq cr6,0x83047d24
	if (ctx.cr6.eq) goto loc_83047D24;
loc_83047D0C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047d0c
	if (!ctx.cr6.eq) goto loc_83047D0C;
loc_83047D24:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047d44
	if (ctx.cr6.eq) goto loc_83047D44;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047D44:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83047D6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047D94"))) PPC_WEAK_FUNC(sub_83047D94);
PPC_FUNC_IMPL(__imp__sub_83047D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83047D98"))) PPC_WEAK_FUNC(sub_83047D98);
PPC_FUNC_IMPL(__imp__sub_83047D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83047DA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83047de0
	if (ctx.cr6.eq) goto loc_83047DE0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,17904
	ctx.r4.s64 = ctx.r11.s64 + 17904;
	// li r5,1485
	ctx.r5.s64 = 1485;
	// addi r7,r4,-52
	ctx.r7.s64 = ctx.r4.s64 + -52;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d17988
	ctx.lr = 0x83047DD8;
	sub_82D17988(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83047DE0:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// lwz r9,148(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r27,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r27.u32);
	// lwz r9,136(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// lwz r10,132(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83047edc
	if (ctx.cr6.gt) goto loc_83047EDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83047e30
	if (!ctx.cr6.eq) goto loc_83047E30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83047e38
	goto loc_83047E38;
loc_83047E30:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_83047E38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83047edc
	if (!ctx.cr6.lt) goto loc_83047EDC;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83047E64;
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
	// beq cr6,0x83047e94
	if (ctx.cr6.eq) goto loc_83047E94;
loc_83047E7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83047e7c
	if (!ctx.cr6.eq) goto loc_83047E7C;
loc_83047E94:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83047eb4
	if (ctx.cr6.eq) goto loc_83047EB4;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83047EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83047EB4:
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
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83047EDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x83081370
	ctx.lr = 0x83047EFC;
	sub_83081370(ctx, base);
	// lwz r11,340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 340);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,340(r26)
	PPC_STORE_U32(ctx.r26.u32 + 340, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047F10"))) PPC_WEAK_FUNC(sub_83047F10);
PPC_FUNC_IMPL(__imp__sub_83047F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83047F18;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r22,r23,320
	ctx.r22.s64 = ctx.r23.s64 + 320;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d5ec30
	ctx.lr = 0x83047F34;
	sub_82D5EC30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83047f44
	if (ctx.cr6.eq) goto loc_83047F44;
	// lwz r11,1616(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1616);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83047F44:
	// lwz r10,1180(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1180);
	// lwz r11,1160(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1160);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83048048
	if (ctx.cr6.eq) goto loc_83048048;
loc_83047F60:
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83047f8c
	if (!ctx.cr6.lt) goto loc_83047F8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r8,r11
	// li r6,384
	ctx.r6.s64 = 384;
	// dcbt r6,r11
loc_83047F8C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304803c
	if (ctx.cr6.eq) goto loc_8304803C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304803c
	if (ctx.cr6.eq) goto loc_8304803C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304803c
	if (!ctx.cr6.eq) goto loc_8304803C;
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stfs f0,392(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// lfs f13,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,244
	ctx.r8.s64 = ctx.r10.s64 + 244;
	// stfs f13,396(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// addi r10,r10,396
	ctx.r10.s64 = ctx.r10.s64 + 396;
	// lfs f12,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,400(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 400, temp.u32);
	// lfs f11,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,404(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// lfs f10,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,408(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// lfs f9,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,412(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// lfs f8,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,416(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// lfs f7,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,364(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// lfs f6,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,368(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// lfs f5,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,372(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 372, temp.u32);
	// lfs f4,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,376(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 376, temp.u32);
	// lfs f3,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,380(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// lfs f2,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,384(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// lbz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r5,388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 388, ctx.r5.u8);
loc_8304803C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83047f60
	if (!ctx.cr6.eq) goto loc_83047F60;
loc_83048048:
	// lwz r11,1104(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1104);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,1100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1100);
	// addi r28,r23,1100
	ctx.r28.s64 = ctx.r23.s64 + 1100;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83048230
	if (ctx.cr0.eq) goto loc_83048230;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_83048078:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r31,32(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83048210
	if (!ctx.cr6.eq) goto loc_83048210;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x83047b48
	ctx.lr = 0x8304809C;
	sub_83047B48(ctx, base);
	// stb r25,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r25.u8);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// stfs f31,136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lbz r11,181(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83048130
	if (ctx.cr6.eq) goto loc_83048130;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r3,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8315c0a8
	ctx.lr = 0x8304812C;
	sub_8315C0A8(ctx, base);
	// stb r24,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r24.u8);
loc_83048130:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83048184
	if (ctx.cr6.eq) goto loc_83048184;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,24
	ctx.r6.s64 = 24;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8315bd60
	ctx.lr = 0x83048180;
	sub_8315BD60(ctx, base);
	// stb r24,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r24.u8);
loc_83048184:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lfs f11,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f10,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,412(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f9,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,416(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f8,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,420(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,368(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,372(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,376(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,380(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,384(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,388(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r8.u8);
loc_83048210:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83048078
	if (ctx.cr6.lt) goto loc_83048078;
loc_83048230:
	// lwz r3,236(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048240
	if (ctx.cr6.eq) goto loc_83048240;
	// bl 0x8307f3e0
	ctx.lr = 0x83048240;
	sub_8307F3E0(ctx, base);
loc_83048240:
	// lwz r26,20(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83048344
	if (ctx.cr6.eq) goto loc_83048344;
	// addi r25,r23,288
	ctx.r25.s64 = ctx.r23.s64 + 288;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
loc_83048260:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8304828c
	if (!ctx.cr6.lt) goto loc_8304828C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r11
	// li r8,384
	ctx.r8.s64 = 384;
	// dcbt r8,r11
loc_8304828C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r30,224
	ctx.r31.s64 = ctx.r30.s64 + 224;
	// lhz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 260);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x830482d0
	if (ctx.cr6.eq) goto loc_830482D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x830482D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830482D0:
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lwz r8,252(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x83048328
	if (ctx.cr6.eq) goto loc_83048328;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x83048328
	if (!ctx.cr6.eq) goto loc_83048328;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,24264(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83048328
	if (ctx.cr6.eq) goto loc_83048328;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,24264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24264);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83048328:
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// stw r10,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r10.u32);
	// blt cr6,0x83048260
	if (ctx.cr6.lt) goto loc_83048260;
loc_83048344:
	// lwz r10,20(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// addi r11,r23,16
	ctx.r11.s64 = ctx.r23.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83048358
	if (ctx.cr6.eq) goto loc_83048358;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
loc_83048358:
	// addi r3,r23,288
	ctx.r3.s64 = ctx.r23.s64 + 288;
	// bl 0x831c6f30
	ctx.lr = 0x83048360;
	sub_831C6F30(ctx, base);
	// lwz r10,160(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 160);
	// lwz r11,164(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83048474
	if (ctx.cr6.eq) goto loc_83048474;
loc_83048370:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8304845c
	if (ctx.cr6.eq) goto loc_8304845C;
	// lbz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304845c
	if (ctx.cr6.eq) goto loc_8304845C;
	// lfs f0,436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,436
	ctx.r9.s64 = ctx.r11.s64 + 436;
	// stfs f0,336(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// addi r9,r11,336
	ctx.r9.s64 = ctx.r11.s64 + 336;
	// lfs f13,440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,340(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// lfs f12,444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,344(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// lfs f11,448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,348(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// lfs f10,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,352(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// lfs f9,456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,356(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// lfs f8,460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,360(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// lfs f7,464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,364(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// lfs f6,468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,368(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// lfs f5,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,372(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 372, temp.u32);
	// lfs f4,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,376(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 376, temp.u32);
	// lfs f3,480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,380(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// lfs f2,484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,384(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// stw r9,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r9.u32);
	// lhz r8,492(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 492);
	// sth r8,392(r11)
	PPC_STORE_U16(ctx.r11.u32 + 392, ctx.r8.u16);
	// lfs f1,496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,396(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// lfs f0,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 400, temp.u32);
	// lfs f13,504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,404(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 404, temp.u32);
	// lfs f12,508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,408(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// lfs f11,512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,412(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// lwz r7,516(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r7,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r7.u32);
	// lfs f10,520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,420(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// lfs f9,524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,424(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// lfs f8,528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,428(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// lfs f7,532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,432(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 432, temp.u32);
loc_8304845C:
	// lfs f0,512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,412(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// lwz r11,164(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83048370
	if (!ctx.cr6.eq) goto loc_83048370;
loc_83048474:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d5ed58
	ctx.lr = 0x8304847C;
	sub_82D5ED58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048488"))) PPC_WEAK_FUNC(sub_83048488);
PPC_FUNC_IMPL(__imp__sub_83048488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,77
	ctx.r5.s64 = 77;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,340
	ctx.r4.s64 = 340;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830484C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830484f8
	if (ctx.cr6.eq) goto loc_830484F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d15e8
	ctx.lr = 0x830484D4;
	sub_830D15E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830484ec
	if (ctx.cr6.eq) goto loc_830484EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x830484EC;
	sub_83047D98(ctx, base);
loc_830484EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830484F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048504"))) PPC_WEAK_FUNC(sub_83048504);
PPC_FUNC_IMPL(__imp__sub_83048504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048508"))) PPC_WEAK_FUNC(sub_83048508);
PPC_FUNC_IMPL(__imp__sub_83048508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,79
	ctx.r5.s64 = 79;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,312
	ctx.r4.s64 = 312;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048578
	if (ctx.cr6.eq) goto loc_83048578;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d3560
	ctx.lr = 0x83048554;
	sub_830D3560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304856c
	if (ctx.cr6.eq) goto loc_8304856C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x8304856C;
	sub_83047D98(ctx, base);
loc_8304856C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83048578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048584"))) PPC_WEAK_FUNC(sub_83048584);
PPC_FUNC_IMPL(__imp__sub_83048584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048588"))) PPC_WEAK_FUNC(sub_83048588);
PPC_FUNC_IMPL(__imp__sub_83048588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,81
	ctx.r5.s64 = 81;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,304
	ctx.r4.s64 = 304;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830485C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830485f8
	if (ctx.cr6.eq) goto loc_830485F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d5218
	ctx.lr = 0x830485D4;
	sub_830D5218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830485ec
	if (ctx.cr6.eq) goto loc_830485EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x830485EC;
	sub_83047D98(ctx, base);
loc_830485EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830485F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048604"))) PPC_WEAK_FUNC(sub_83048604);
PPC_FUNC_IMPL(__imp__sub_83048604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048608"))) PPC_WEAK_FUNC(sub_83048608);
PPC_FUNC_IMPL(__imp__sub_83048608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,82
	ctx.r5.s64 = 82;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,300
	ctx.r4.s64 = 300;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048678
	if (ctx.cr6.eq) goto loc_83048678;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d5f48
	ctx.lr = 0x83048654;
	sub_830D5F48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304866c
	if (ctx.cr6.eq) goto loc_8304866C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x8304866C;
	sub_83047D98(ctx, base);
loc_8304866C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83048678:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048684"))) PPC_WEAK_FUNC(sub_83048684);
PPC_FUNC_IMPL(__imp__sub_83048684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048688"))) PPC_WEAK_FUNC(sub_83048688);
PPC_FUNC_IMPL(__imp__sub_83048688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,85
	ctx.r5.s64 = 85;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,356
	ctx.r4.s64 = 356;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830486C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830486f8
	if (ctx.cr6.eq) goto loc_830486F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d7930
	ctx.lr = 0x830486D4;
	sub_830D7930(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830486ec
	if (ctx.cr6.eq) goto loc_830486EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x830486EC;
	sub_83047D98(ctx, base);
loc_830486EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830486F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048704"))) PPC_WEAK_FUNC(sub_83048704);
PPC_FUNC_IMPL(__imp__sub_83048704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048708"))) PPC_WEAK_FUNC(sub_83048708);
PPC_FUNC_IMPL(__imp__sub_83048708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,78
	ctx.r5.s64 = 78;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,368
	ctx.r4.s64 = 368;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048778
	if (ctx.cr6.eq) goto loc_83048778;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d97d8
	ctx.lr = 0x83048754;
	sub_830D97D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304876c
	if (ctx.cr6.eq) goto loc_8304876C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x8304876C;
	sub_83047D98(ctx, base);
loc_8304876C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83048778:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048784"))) PPC_WEAK_FUNC(sub_83048784);
PPC_FUNC_IMPL(__imp__sub_83048784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048788"))) PPC_WEAK_FUNC(sub_83048788);
PPC_FUNC_IMPL(__imp__sub_83048788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,420
	ctx.r4.s64 = 420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830487C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830487f8
	if (ctx.cr6.eq) goto loc_830487F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830d9fd0
	ctx.lr = 0x830487D4;
	sub_830D9FD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830487ec
	if (ctx.cr6.eq) goto loc_830487EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x830487EC;
	sub_83047D98(ctx, base);
loc_830487EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830487F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048804"))) PPC_WEAK_FUNC(sub_83048804);
PPC_FUNC_IMPL(__imp__sub_83048804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048808"))) PPC_WEAK_FUNC(sub_83048808);
PPC_FUNC_IMPL(__imp__sub_83048808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,83
	ctx.r5.s64 = 83;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,324
	ctx.r4.s64 = 324;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048878
	if (ctx.cr6.eq) goto loc_83048878;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830dc390
	ctx.lr = 0x83048854;
	sub_830DC390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304886c
	if (ctx.cr6.eq) goto loc_8304886C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x8304886C;
	sub_83047D98(ctx, base);
loc_8304886C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83048878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048884"))) PPC_WEAK_FUNC(sub_83048884);
PPC_FUNC_IMPL(__imp__sub_83048884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048888"))) PPC_WEAK_FUNC(sub_83048888);
PPC_FUNC_IMPL(__imp__sub_83048888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,364
	ctx.r4.s64 = 364;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830488C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830488f8
	if (ctx.cr6.eq) goto loc_830488F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830dcf58
	ctx.lr = 0x830488D4;
	sub_830DCF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830488ec
	if (ctx.cr6.eq) goto loc_830488EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x830488EC;
	sub_83047D98(ctx, base);
loc_830488EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_830488F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048904"))) PPC_WEAK_FUNC(sub_83048904);
PPC_FUNC_IMPL(__imp__sub_83048904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048908"))) PPC_WEAK_FUNC(sub_83048908);
PPC_FUNC_IMPL(__imp__sub_83048908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83048910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,86
	ctx.r5.s64 = 86;
	// lwz r3,-32308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32308);
	// li r4,636
	ctx.r4.s64 = 636;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83048978
	if (ctx.cr6.eq) goto loc_83048978;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830df9a0
	ctx.lr = 0x83048954;
	sub_830DF9A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8304896c
	if (ctx.cr6.eq) goto loc_8304896C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83047d98
	ctx.lr = 0x8304896C;
	sub_83047D98(ctx, base);
loc_8304896C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83048978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048984"))) PPC_WEAK_FUNC(sub_83048984);
PPC_FUNC_IMPL(__imp__sub_83048984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83048988"))) PPC_WEAK_FUNC(sub_83048988);
PPC_FUNC_IMPL(__imp__sub_83048988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83048990;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// addi r31,r3,1140
	ctx.r31.s64 = ctx.r3.s64 + 1140;
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r11.u32);
	// lwz r11,1160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// lwz r10,1180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x83048bf4
	if (ctx.cr6.eq) goto loc_83048BF4;
	// lis r27,-31901
	ctx.r27.s64 = -2090663936;
	// li r28,56
	ctx.r28.s64 = 56;
loc_830489D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83048be8
	if (!ctx.cr6.eq) goto loc_83048BE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x830489f0
	if (!ctx.cr6.eq) goto loc_830489F0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_830489F0:
	// lwz r10,568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83048be8
	if (ctx.cr6.eq) goto loc_83048BE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x83048a0c
	if (!ctx.cr6.eq) goto loc_83048A0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83048A0C:
	// lwz r4,568(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83048A40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83048a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83048A40;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f30,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bgt cr6,0x83048b94
	if (ctx.cr6.gt) goto loc_83048B94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r28
	ctx.r10.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83048aa0
	if (!ctx.cr6.eq) goto loc_83048AA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83048aa8
	goto loc_83048AA8;
loc_83048AA0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
loc_83048AA8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83048b94
	if (!ctx.cr6.lt) goto loc_83048B94;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// mulli r29,r10,56
	ctx.r29.s64 = ctx.r10.s64 * 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83048AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83048b4c
	if (ctx.cr6.eq) goto loc_83048B4C;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
loc_83048AEC:
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,-44
	ctx.r8.s64 = ctx.r10.s64 + -44;
	// addi r7,r11,-44
	ctx.r7.s64 = ctx.r11.s64 + -44;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r4,-52(r11)
	PPC_STORE_U32(ctx.r11.u32 + -52, ctx.r4.u32);
	// lwz r3,-48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// stw r3,-48(r11)
	PPC_STORE_U32(ctx.r11.u32 + -48, ctx.r3.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_83048B0C:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x83048b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83048B0C;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 + 56;
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bne cr6,0x83048aec
	if (!ctx.cr6.eq) goto loc_83048AEC;
loc_83048B4C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83048b6c
	if (ctx.cr6.eq) goto loc_83048B6C;
	// lwz r3,-32308(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83048B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83048B6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// divw r7,r8,r28
	ctx.r7.s32 = ctx.r8.s32 / ctx.r28.s32;
	// mulli r11,r7,56
	ctx.r11.s64 = ctx.r7.s64 * 56;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_83048B94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83048BBC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83048bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83048BBC;
	// stfs f31,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f29,44(r8)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// stfs f30,40(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83048BE8:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x830489d0
	if (!ctx.cr6.eq) goto loc_830489D0;
loc_83048BF4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048C08"))) PPC_WEAK_FUNC(sub_83048C08);
PPC_FUNC_IMPL(__imp__sub_83048C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83048C10;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,332(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83048f2c
	if (ctx.cr6.eq) goto loc_83048F2C;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83048c50
	if (!ctx.cr6.eq) goto loc_83048C50;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83048f2c
	if (ctx.cr6.eq) goto loc_83048F2C;
loc_83048C50:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// rlwinm r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// stw r11,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83048fe8
	if (!ctx.cr6.eq) goto loc_83048FE8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r25,0
	ctx.r25.s64 = 0;
	// oris r7,r11,256
	ctx.r7.u64 = ctx.r11.u64 | 16777216;
	// addi r31,r24,1572
	ctx.r31.s64 = ctx.r24.s64 + 1572;
	// stw r7,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r7.u32);
	// lis r26,-31901
	ctx.r26.s64 = -2090663936;
	// std r25,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r25.u64);
	// lwz r9,1580(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1580);
	// lwz r10,1576(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1576);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r25,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r25.u32);
	// bgt cr6,0x83048d88
	if (ctx.cr6.gt) goto loc_83048D88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,12
	ctx.r28.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r28
	ctx.r10.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83048cc0
	if (!ctx.cr6.eq) goto loc_83048CC0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x83048cc8
	goto loc_83048CC8;
loc_83048CC0:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
loc_83048CC8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83048d88
	if (!ctx.cr6.lt) goto loc_83048D88;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83048CF8;
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
	// beq cr6,0x83048d38
	if (ctx.cr6.eq) goto loc_83048D38;
loc_83048D10:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83048d10
	if (!ctx.cr6.eq) goto loc_83048D10;
loc_83048D38:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83048d58
	if (ctx.cr6.eq) goto loc_83048D58;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83048D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83048D58:
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
	// divw r11,r8,r28
	ctx.r11.s32 = ctx.r8.s32 / ctx.r28.s32;
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
loc_83048D88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r24,1592
	ctx.r30.s64 = ctx.r24.s64 + 1592;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r25,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r25.u64);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r5,40(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,1576(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1576);
	// lwz r4,188(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 188);
	// stw r4,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r4.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stb r25,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r25.u8);
	// lwz r9,1600(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1600);
	// lwz r11,1596(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1596);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// bgt cr6,0x83048ed4
	if (ctx.cr6.gt) goto loc_83048ED4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83048e14
	if (!ctx.cr6.eq) goto loc_83048E14;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x83048e1c
	goto loc_83048E1C;
loc_83048E14:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_83048E1C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83048ed4
	if (!ctx.cr6.lt) goto loc_83048ED4;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83048E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83048e8c
	if (ctx.cr6.eq) goto loc_83048E8C;
loc_83048E5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83048e5c
	if (!ctx.cr6.eq) goto loc_83048E5C;
loc_83048E8C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83048eac
	if (ctx.cr6.eq) goto loc_83048EAC;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83048EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83048EAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83048ED4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,1596(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1596);
	// stw r27,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r27.u32);
	// stw r25,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r25.u32);
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_83048F2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8309abf0
	ctx.lr = 0x83048F34;
	sub_8309ABF0(ctx, base);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83048f7c
	if (ctx.cr6.eq) goto loc_83048F7C;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83048f6c
	if (ctx.cr6.eq) goto loc_83048F6C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83073fc0
	ctx.lr = 0x83048F64;
	sub_83073FC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_83048F6C:
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_83048F7C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,44(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x830630c0
	ctx.lr = 0x83048F8C;
	sub_830630C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83048fdc
	if (!ctx.cr6.eq) goto loc_83048FDC;
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x830897d8
	ctx.lr = 0x83048FA0;
	sub_830897D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83048fdc
	if (!ctx.cr6.eq) goto loc_83048FDC;
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x830897d8
	ctx.lr = 0x83048FB4;
	sub_830897D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83048fdc
	if (!ctx.cr6.eq) goto loc_83048FDC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83073fc0
	ctx.lr = 0x83048FD4;
	sub_83073FC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_83048FDC:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r10.u32);
loc_83048FE8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048FF0"))) PPC_WEAK_FUNC(sub_83048FF0);
PPC_FUNC_IMPL(__imp__sub_83048FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83048FF8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83049024
	if (!ctx.cr6.eq) goto loc_83049024;
	// lwz r22,280(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x83049038
	goto loc_83049038;
loc_83049024:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83049034
	if (!ctx.cr6.eq) goto loc_83049034;
	// lwz r22,100(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x83049038
	goto loc_83049038;
loc_83049034:
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83049038:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304904c
	if (!ctx.cr6.eq) goto loc_8304904C;
	// lwz r23,280(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 280);
	// b 0x83049060
	goto loc_83049060;
loc_8304904C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8304905c
	if (!ctx.cr6.eq) goto loc_8304905C;
	// lwz r23,100(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// b 0x83049060
	goto loc_83049060;
loc_8304905C:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83049060:
	// lwz r11,332(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304937c
	if (ctx.cr6.eq) goto loc_8304937C;
	// lwz r11,308(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 308);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304908c
	if (!ctx.cr6.eq) goto loc_8304908C;
	// lwz r11,308(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 308);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304937c
	if (ctx.cr6.eq) goto loc_8304937C;
loc_8304908C:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83049408
	if (!ctx.cr6.eq) goto loc_83049408;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r24,1572
	ctx.r31.s64 = ctx.r24.s64 + 1572;
	// lis r26,-31901
	ctx.r26.s64 = -2090663936;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// std r28,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r28.u64);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// lwz r9,1580(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1580);
	// lwz r10,1576(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1576);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// bgt cr6,0x830491e4
	if (ctx.cr6.gt) goto loc_830491E4;
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
	// bne cr6,0x8304911c
	if (!ctx.cr6.eq) goto loc_8304911C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x83049124
	goto loc_83049124;
loc_8304911C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r27
	ctx.r11.s32 = ctx.r11.s32 / ctx.r27.s32;
loc_83049124:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830491e4
	if (!ctx.cr6.lt) goto loc_830491E4;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83049154;
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
	// beq cr6,0x83049194
	if (ctx.cr6.eq) goto loc_83049194;
loc_8304916C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8304916c
	if (!ctx.cr6.eq) goto loc_8304916C;
loc_83049194:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830491b4
	if (ctx.cr6.eq) goto loc_830491B4;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830491B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830491B4:
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
loc_830491E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r24,1592
	ctx.r30.s64 = ctx.r24.s64 + 1592;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// std r28,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r28.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,1576(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1576);
	// lwz r5,188(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 188);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// lwz r4,188(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 188);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// stb r28,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r28.u8);
	// lwz r9,1600(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1600);
	// lwz r11,1596(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1596);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83049328
	if (ctx.cr6.gt) goto loc_83049328;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83049268
	if (!ctx.cr6.eq) goto loc_83049268;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x83049270
	goto loc_83049270;
loc_83049268:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_83049270:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83049328
	if (!ctx.cr6.lt) goto loc_83049328;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830492e0
	if (ctx.cr6.eq) goto loc_830492E0;
loc_830492B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830492b0
	if (!ctx.cr6.eq) goto loc_830492B0;
loc_830492E0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83049300
	if (ctx.cr6.eq) goto loc_83049300;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83049300:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83049328:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r11,1596(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1596);
	// stw r25,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r25.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r22,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r22.u32);
	// stw r23,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r23.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_8304937C:
	// lwz r11,300(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830493f0
	if (!ctx.cr6.eq) goto loc_830493F0;
	// lwz r11,300(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 300);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830493f0
	if (!ctx.cr6.eq) goto loc_830493F0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830630c0
	ctx.lr = 0x830493AC;
	sub_830630C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830493cc
	if (ctx.cr6.eq) goto loc_830493CC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,308(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// bl 0x830755f8
	ctx.lr = 0x830493C4;
	sub_830755F8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_830493CC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_830493F0:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
loc_83049408:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049410"))) PPC_WEAK_FUNC(sub_83049410);
PPC_FUNC_IMPL(__imp__sub_83049410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83049418;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r9,1580(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1580);
	// addi r31,r25,1572
	ctx.r31.s64 = ctx.r25.s64 + 1572;
	// lwz r10,1576(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1576);
	// lis r26,-31901
	ctx.r26.s64 = -2090663936;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// bgt cr6,0x83049540
	if (ctx.cr6.gt) goto loc_83049540;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,12
	ctx.r28.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divw r10,r10,r28
	ctx.r10.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83049478
	if (!ctx.cr6.eq) goto loc_83049478;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83049480
	goto loc_83049480;
loc_83049478:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
loc_83049480:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83049540
	if (!ctx.cr6.lt) goto loc_83049540;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,282
	ctx.r5.s64 = 282;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830494B0;
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
	// beq cr6,0x830494f0
	if (ctx.cr6.eq) goto loc_830494F0;
loc_830494C8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830494c8
	if (!ctx.cr6.eq) goto loc_830494C8;
loc_830494F0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83049510
	if (ctx.cr6.eq) goto loc_83049510;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83049510:
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
	// divw r11,r8,r28
	ctx.r11.s32 = ctx.r8.s32 / ctx.r28.s32;
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
loc_83049540:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r25,1592
	ctx.r30.s64 = ctx.r25.s64 + 1592;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,1576(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1576);
	// lwz r5,188(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// lwz r4,188(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 188);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// stb r27,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r27.u8);
	// lwz r9,1600(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1600);
	// lwz r11,1596(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1596);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r27,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r27.u64);
	// bgt cr6,0x83049684
	if (ctx.cr6.gt) goto loc_83049684;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x830495c4
	if (!ctx.cr6.eq) goto loc_830495C4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x830495cc
	goto loc_830495CC;
loc_830495C4:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_830495CC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83049684
	if (!ctx.cr6.lt) goto loc_83049684;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830495F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304963c
	if (ctx.cr6.eq) goto loc_8304963C;
loc_8304960C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8304960c
	if (!ctx.cr6.eq) goto loc_8304960C;
loc_8304963C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304965c
	if (ctx.cr6.eq) goto loc_8304965C;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304965C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304965C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_83049684:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// lwz r11,1596(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1596);
	// stw r27,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r27.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r24,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r24.u32);
	// stw r23,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830496D8"))) PPC_WEAK_FUNC(sub_830496D8);
PPC_FUNC_IMPL(__imp__sub_830496D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x830496E0;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,20640
	ctx.r10.s64 = ctx.r11.s64 + 20640;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82d62ee0
	ctx.lr = 0x83049714;
	sub_82D62EE0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r21,r31,32
	ctx.r21.s64 = ctx.r31.s64 + 32;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x831c43e8
	ctx.lr = 0x83049734;
	sub_831C43E8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// stw r20,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r20.u32);
	// lfs f31,6048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// bl 0x82d62918
	ctx.lr = 0x830497A4;
	sub_82D62918(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// bl 0x83084df0
	ctx.lr = 0x830497B8;
	sub_83084DF0(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x831c6b80
	ctx.lr = 0x830497C0;
	sub_831C6B80(ctx, base);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// lwz r8,152(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bl 0x82d5eb78
	ctx.lr = 0x830497D8;
	sub_82D5EB78(ctx, base);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// addi r19,r31,364
	ctx.r19.s64 = ctx.r31.s64 + 364;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// lwz r7,88(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// stw r7,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r7.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// bl 0x8307ecb0
	ctx.lr = 0x83049814;
	sub_8307ECB0(ctx, base);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// addi r27,r31,424
	ctx.r27.s64 = ctx.r31.s64 + 424;
	// bl 0x831c43e8
	ctx.lr = 0x8304982C;
	sub_831C43E8(ctx, base);
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x831bf9c8
	ctx.lr = 0x83049834;
	sub_831BF9C8(ctx, base);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// addi r3,r31,772
	ctx.r3.s64 = ctx.r31.s64 + 772;
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// addi r11,r31,708
	ctx.r11.s64 = ctx.r31.s64 + 708;
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// addi r11,r31,732
	ctx.r11.s64 = ctx.r31.s64 + 732;
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// stw r20,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r20.u32);
	// bl 0x83083cd0
	ctx.lr = 0x83049868;
	sub_83083CD0(ctx, base);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// addi r22,r31,1024
	ctx.r22.s64 = ctx.r31.s64 + 1024;
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// addi r11,r31,828
	ctx.r11.s64 = ctx.r31.s64 + 828;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// stw r30,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r30.u32);
	// stw r30,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r30.u32);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// stw r30,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r30.u32);
	// stw r30,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r30.u32);
	// stw r30,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r30.u32);
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// stw r30,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r30.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r30.u32);
	// stw r30,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r30.u32);
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// bl 0x82d5eb78
	ctx.lr = 0x830498F0;
	sub_82D5EB78(ctx, base);
	// stw r30,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r30.u32);
	// stw r30,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// bl 0x833b7f54
	ctx.lr = 0x83049918;
	__imp__KeTlsAlloc(ctx, base);
	// stw r3,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r3.u32);
	// stw r30,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// addi r28,r31,1160
	ctx.r28.s64 = ctx.r31.s64 + 1160;
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// stw r30,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r30.u32);
	// stw r30,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r30.u32);
	// stw r30,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r30.u32);
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// lwz r6,160(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 ^ 1;
	// bl 0x831f0f20
	ctx.lr = 0x8304995C;
	sub_831F0F20(ctx, base);
	// stw r30,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// addi r29,r31,1492
	ctx.r29.s64 = ctx.r31.s64 + 1492;
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// lwz r3,160(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// bne cr6,0x830499ec
	if (!ctx.cr6.eq) goto loc_830499EC;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_830499EC:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,21764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21764);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// lwz r9,96(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83049a24
	if (!ctx.cr6.eq) goto loc_83049A24;
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83049a24
	if (ctx.cr6.eq) goto loc_83049A24;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_83049A24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,160(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// bl 0x831f0700
	ctx.lr = 0x83049A30;
	sub_831F0700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83049b38
	if (!ctx.cr6.eq) goto loc_83049B38;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83049b14
	if (ctx.cr6.gt) goto loc_83049B14;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x83049a70
	if (ctx.cr6.eq) goto loc_83049A70;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_83049A70:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83049b14
	if (!ctx.cr6.lt) goto loc_83049B14;
	// lis r29,-31901
	ctx.r29.s64 = -2090663936;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x83049A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049acc
	if (ctx.cr6.eq) goto loc_83049ACC;
loc_83049AB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83049ab4
	if (!ctx.cr6.eq) goto loc_83049AB4;
loc_83049ACC:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83049aec
	if (ctx.cr6.eq) goto loc_83049AEC;
	// lwz r3,-32308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83049AEC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
loc_83049B14:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_83049B38:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lis r18,-31901
	ctx.r18.s64 = -2090663936;
	// li r5,126
	ctx.r5.s64 = 126;
	// li r4,104
	ctx.r4.s64 = 104;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83049B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83049b80
	if (ctx.cr6.eq) goto loc_83049B80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830883d8
	ctx.lr = 0x83049B7C;
	sub_830883D8(ctx, base);
	// b 0x83049b84
	goto loc_83049B84;
loc_83049B80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83049B84:
	// stw r3,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r3.u32);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83049d08
	if (ctx.cr6.eq) goto loc_83049D08;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83049d00
	if (ctx.cr6.eq) goto loc_83049D00;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// lwz r24,152(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// lwz r23,1412(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5eb78
	ctx.lr = 0x83049BD4;
	sub_82D5EB78(ctx, base);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// std r30,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r30.u64);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83049c4c
	if (ctx.cr6.eq) goto loc_83049C4C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x83049ce0
	if (!ctx.cr6.lt) goto loc_83049CE0;
loc_83049C4C:
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// li r5,282
	ctx.r5.s64 = 282;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049c98
	if (ctx.cr6.eq) goto loc_83049C98;
loc_83049C80:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83049c80
	if (!ctx.cr6.eq) goto loc_83049C80;
loc_83049C98:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83049cb8
	if (ctx.cr6.eq) goto loc_83049CB8;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83049CB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r25,64
	ctx.r10.s64 = ctx.r25.s64 + 64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
loc_83049CE0:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2432
	ctx.r4.s64 = ctx.r11.s64 + 2432;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8315efe0
	ctx.lr = 0x83049CFC;
	sub_8315EFE0(ctx, base);
	// b 0x83049d04
	goto loc_83049D04;
loc_83049D00:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83049D04:
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
loc_83049D08:
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// li r5,107
	ctx.r5.s64 = 107;
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83049d38
	if (ctx.cr6.eq) goto loc_83049D38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83075550
	ctx.lr = 0x83049D34;
	sub_83075550(ctx, base);
	// b 0x83049d3c
	goto loc_83049D3C;
loc_83049D38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83049D3C:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stb r30,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r30.u8);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83049D80:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049D80;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r8,r31,1624
	ctx.r8.s64 = ctx.r31.s64 + 1624;
	// li r11,32
	ctx.r11.s64 = 32;
loc_83049D98:
	// rldicr r7,r9,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r6,r10,1,62
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// ori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 | 1;
	// rldicr r9,r9,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bne 0x83049d98
	if (!ctx.cr0.eq) goto loc_83049D98;
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r25,r31,80
	ctx.r25.s64 = ctx.r31.s64 + 80;
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r4,r26,100
	ctx.r4.s64 = ctx.r26.s64 + 100;
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83049ec0
	if (ctx.cr6.gt) goto loc_83049EC0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83049e18
	if (!ctx.cr6.eq) goto loc_83049E18;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x83049e20
	goto loc_83049E20;
loc_83049E18:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_83049E20:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83049ec0
	if (!ctx.cr6.lt) goto loc_83049EC0;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,282
	ctx.r5.s64 = 282;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049e78
	if (ctx.cr6.eq) goto loc_83049E78;
loc_83049E60:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x83049e60
	if (!ctx.cr6.eq) goto loc_83049E60;
loc_83049E78:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83049e98
	if (ctx.cr6.eq) goto loc_83049E98;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83049E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83049E98:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
loc_83049EC0:
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r26,52
	ctx.r11.s64 = ctx.r26.s64 + 52;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r19,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r19.u32);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// stw r7,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// sth r30,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r30.u16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049EE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83049ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049EE8;
	// lfs f0,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r26,28
	ctx.r4.s64 = ctx.r26.s64 + 28;
	// lfs f13,40(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83049f38
	if (ctx.cr6.lt) goto loc_83049F38;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83049f38
	if (ctx.cr6.lt) goto loc_83049F38;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83049f38
	if (ctx.cr6.lt) goto loc_83049F38;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83049F38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83049f48
	if (ctx.cr6.eq) goto loc_83049F48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83049F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r7,84(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r6,76(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// lwz r5,72(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// bl 0x83043f90
	ctx.lr = 0x83049F60;
	sub_83043F90(ctx, base);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83049f98
	if (ctx.cr6.eq) goto loc_83049F98;
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
loc_83049F98:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83049fb4
	if (ctx.cr6.eq) goto loc_83049FB4;
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
loc_83049FB4:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r22,24
	ctx.r29.s64 = ctx.r22.s64 + 24;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// lwz r9,24(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// cmplwi cr6,r8,31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 31, ctx.xer);
	// bge cr6,0x8304a158
	if (!ctx.cr6.lt) goto loc_8304A158;
	// subfic r25,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r25.s64 = 31 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8304a174
	if (ctx.cr6.eq) goto loc_8304A174;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8304a010
	if (!ctx.cr6.eq) goto loc_8304A010;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x8304a01c
	goto loc_8304A01C;
loc_8304A010:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
loc_8304A01C:
	// add r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 + ctx.r25.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8304a0fc
	if (!ctx.cr6.lt) goto loc_8304A0FC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8304a044
	if (!ctx.cr6.eq) goto loc_8304A044;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8304a050
	goto loc_8304A050;
loc_8304A044:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
loc_8304A050:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8304a0f0
	if (!ctx.cr6.lt) goto loc_8304A0F0;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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
	ctx.lr = 0x8304A078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a0a8
	if (ctx.cr6.eq) goto loc_8304A0A8;
loc_8304A090:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8304a090
	if (!ctx.cr6.eq) goto loc_8304A090;
loc_8304A0A8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a0c8
	if (ctx.cr6.eq) goto loc_8304A0C8;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A0C8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
loc_8304A0F0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8304A0FC:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r7,r25,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a12c
	if (ctx.cr6.eq) goto loc_8304A12C;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8304A118:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8304a118
	if (!ctx.cr6.eq) goto loc_8304A118;
loc_8304A12C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8304a148
	if (ctx.cr6.eq) goto loc_8304A148;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_8304A13C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8304a13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A13C;
loc_8304A148:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x8304a174
	goto loc_8304A174;
loc_8304A158:
	// ble cr6,0x8304a174
	if (!ctx.cr6.gt) goto loc_8304A174;
	// addi r10,r9,124
	ctx.r10.s64 = ctx.r9.s64 + 124;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
loc_8304A174:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8304a1ac
	if (!ctx.cr6.eq) goto loc_8304A1AC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a1a0
	if (ctx.cr6.eq) goto loc_8304A1A0;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A1A0:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
loc_8304A1AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8304a1f4
	if (!ctx.cr6.gt) goto loc_8304A1F4;
	// lwz r3,-32308(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -32308);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8304A1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8304A1F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8304a238
	if (ctx.cr0.eq) goto loc_8304A238;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8304A210:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8304a210
	if (ctx.cr6.lt) goto loc_8304A210;
loc_8304A238:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,17840
	ctx.r9.s64 = ctx.r10.s64 + 17840;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304A258"))) PPC_WEAK_FUNC(sub_8304A258);
PPC_FUNC_IMPL(__imp__sub_8304A258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8304A260;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r10,20640
	ctx.r8.s64 = ctx.r10.s64 + 20640;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r9.u32);
	// beq cr6,0x8304a2a8
	if (ctx.cr6.eq) goto loc_8304A2A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r31.u32);
loc_8304A2A8:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lis r26,-31901
	ctx.r26.s64 = -2090663936;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304a2ec
	if (ctx.cr6.eq) goto loc_8304A2EC;
loc_8304A2B8:
	// lwz r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
	// beq cr6,0x8304a2e0
	if (ctx.cr6.eq) goto loc_8304A2E0;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A2E0:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304a2b8
	if (!ctx.cr6.eq) goto loc_8304A2B8;
loc_8304A2EC:
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// addi r25,r30,424
	ctx.r25.s64 = ctx.r30.s64 + 424;
	// lwz r27,428(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r31,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r31.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8304a340
	if (ctx.cr6.eq) goto loc_8304A340;
loc_8304A308:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8304a334
	if (ctx.cr6.eq) goto loc_8304A334;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307eb00
	ctx.lr = 0x8304A31C;
	sub_8307EB00(ctx, base);
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A334:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8304a308
	if (!ctx.cr6.eq) goto loc_8304A308;
loc_8304A340:
	// addi r24,r30,576
	ctx.r24.s64 = ctx.r30.s64 + 576;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831c4408
	ctx.lr = 0x8304A34C;
	sub_831C4408(ctx, base);
	// lwz r29,308(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8304a37c
	if (ctx.cr6.eq) goto loc_8304A37C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83074998
	ctx.lr = 0x8304A360;
	sub_83074998(ctx, base);
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r31.u32);
loc_8304A37C:
	// lwz r3,1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304a398
	if (ctx.cr6.eq) goto loc_8304A398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A398:
	// lwz r29,316(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8304a3c8
	if (ctx.cr6.eq) goto loc_8304A3C8;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x830505b0
	ctx.lr = 0x8304A3AC;
	sub_830505B0(ctx, base);
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r31.u32);
loc_8304A3C8:
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// addi r27,r30,1432
	ctx.r27.s64 = ctx.r30.s64 + 1432;
	// lwz r10,1432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8304a40c
	if (ctx.cr6.eq) goto loc_8304A40C;
loc_8304A3E4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83047490
	ctx.lr = 0x8304A3F4;
	sub_83047490(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8304a3e4
	if (!ctx.cr6.eq) goto loc_8304A3E4;
loc_8304A40C:
	// lwz r4,1592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// addi r29,r30,1592
	ctx.r29.s64 = ctx.r30.s64 + 1592;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a430
	if (ctx.cr6.eq) goto loc_8304A430;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A430:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r28,r30,1572
	ctx.r28.s64 = ctx.r30.s64 + 1572;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r4,1572(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a460
	if (ctx.cr6.eq) goto loc_8304A460;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A460:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r30,1552
	ctx.r29.s64 = ctx.r30.s64 + 1552;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r4,1552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a490
	if (ctx.cr6.eq) goto loc_8304A490;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A490:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r28,r30,1532
	ctx.r28.s64 = ctx.r30.s64 + 1532;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r4,1532(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a4c0
	if (ctx.cr6.eq) goto loc_8304A4C0;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A4C0:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r30,1512
	ctx.r29.s64 = ctx.r30.s64 + 1512;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r4,1512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a4f0
	if (ctx.cr6.eq) goto loc_8304A4F0;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A4F0:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r28,r30,1492
	ctx.r28.s64 = ctx.r30.s64 + 1492;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r4,1492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a520
	if (ctx.cr6.eq) goto loc_8304A520;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A520:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r30,1472
	ctx.r29.s64 = ctx.r30.s64 + 1472;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r4,1472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a550
	if (ctx.cr6.eq) goto loc_8304A550;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A550:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r28,r30,1452
	ctx.r28.s64 = ctx.r30.s64 + 1452;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r4,1452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a580
	if (ctx.cr6.eq) goto loc_8304A580;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A580:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a5ac
	if (ctx.cr6.eq) goto loc_8304A5AC;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A5AC:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r3,r30,1160
	ctx.r3.s64 = ctx.r30.s64 + 1160;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// bl 0x831f0fe0
	ctx.lr = 0x8304A5C0;
	sub_831F0FE0(ctx, base);
	// lwz r4,1140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	// addi r29,r30,1140
	ctx.r29.s64 = ctx.r30.s64 + 1140;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a5e4
	if (ctx.cr6.eq) goto loc_8304A5E4;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A5E4:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r28,r30,1120
	ctx.r28.s64 = ctx.r30.s64 + 1120;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r4,1120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a614
	if (ctx.cr6.eq) goto loc_8304A614;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A614:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r30,1100
	ctx.r29.s64 = ctx.r30.s64 + 1100;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r4,1100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a644
	if (ctx.cr6.eq) goto loc_8304A644;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A644:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r3,r30,1024
	ctx.r3.s64 = ctx.r30.s64 + 1024;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// bl 0x82ffc828
	ctx.lr = 0x8304A658;
	sub_82FFC828(ctx, base);
	// addi r3,r30,828
	ctx.r3.s64 = ctx.r30.s64 + 828;
	// bl 0x83042690
	ctx.lr = 0x8304A660;
	sub_83042690(ctx, base);
	// lwz r4,736(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// addi r28,r30,736
	ctx.r28.s64 = ctx.r30.s64 + 736;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a684
	if (ctx.cr6.eq) goto loc_8304A684;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A684:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r29,r30,712
	ctx.r29.s64 = ctx.r30.s64 + 712;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lwz r4,712(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a6b4
	if (ctx.cr6.eq) goto loc_8304A6B4;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A6B4:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r3,r30,648
	ctx.r3.s64 = ctx.r30.s64 + 648;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// bl 0x831bf8f8
	ctx.lr = 0x8304A6C8;
	sub_831BF8F8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831c44a0
	ctx.lr = 0x8304A6D0;
	sub_831C44A0(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a6f0
	if (ctx.cr6.eq) goto loc_8304A6F0;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A6F0:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// bl 0x8307eb00
	ctx.lr = 0x8304A704;
	sub_8307EB00(ctx, base);
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// bl 0x82d5ebd8
	ctx.lr = 0x8304A70C;
	sub_82D5EBD8(ctx, base);
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// bl 0x831c6b98
	ctx.lr = 0x8304A714;
	sub_831C6B98(ctx, base);
	// addi r3,r30,248
	ctx.r3.s64 = ctx.r30.s64 + 248;
	// bl 0x83084e48
	ctx.lr = 0x8304A71C;
	sub_83084E48(ctx, base);
	// addi r3,r30,220
	ctx.r3.s64 = ctx.r30.s64 + 220;
	// bl 0x82d632a0
	ctx.lr = 0x8304A724;
	sub_82D632A0(ctx, base);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// addi r29,r30,200
	ctx.r29.s64 = ctx.r30.s64 + 200;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a748
	if (ctx.cr6.eq) goto loc_8304A748;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A748:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,180
	ctx.r28.s64 = ctx.r30.s64 + 180;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a778
	if (ctx.cr6.eq) goto loc_8304A778;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A778:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r30,160
	ctx.r29.s64 = ctx.r30.s64 + 160;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a7a8
	if (ctx.cr6.eq) goto loc_8304A7A8;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A7A8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r28,r30,128
	ctx.r28.s64 = ctx.r30.s64 + 128;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304a7d8
	if (ctx.cr6.eq) goto loc_8304A7D8;
	// lwz r3,-32308(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304A7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304A7D8:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// bl 0x831c44a0
	ctx.lr = 0x8304A7EC;
	sub_831C44A0(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82d632e0
	ctx.lr = 0x8304A7F4;
	sub_82D632E0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r11,19912
	ctx.r10.s64 = ctx.r11.s64 + 19912;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304A808"))) PPC_WEAK_FUNC(sub_8304A808);
PPC_FUNC_IMPL(__imp__sub_8304A808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8304A810;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// lfs f13,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r8,r10,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stfs f12,112(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// clrlwi r7,r9,1
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r8,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r8.u32);
	// stw r7,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r7.u32);
	// bl 0x83042d40
	ctx.lr = 0x8304A848;
	sub_83042D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83045138
	ctx.lr = 0x8304A850;
	sub_83045138(ctx, base);
	// lwz r6,1456(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// lwz r5,1452(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r30,1452
	ctx.r29.s64 = ctx.r30.s64 + 1452;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// srawi. r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8304a9d0
	if (ctx.cr0.eq) goto loc_8304A9D0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8304A874:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8304a8bc
	if (!ctx.cr6.lt) goto loc_8304A8BC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// dcbt r0,r10
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r10
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r8,r10
	// li r7,384
	ctx.r7.s64 = 384;
	// dcbt r7,r10
	// li r6,512
	ctx.r6.s64 = 512;
	// dcbt r6,r10
loc_8304A8BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f2,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8307b528
	ctx.lr = 0x8304A8D0;
	sub_8307B528(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lbz r9,181(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 181);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304a948
	if (ctx.cr6.eq) goto loc_8304A948;
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r3,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x8315c0a8
	ctx.lr = 0x8304A944;
	sub_8315C0A8(ctx, base);
	// stb r26,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r26.u8);
loc_8304A948:
	// lbz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304a99c
	if (ctx.cr6.eq) goto loc_8304A99C;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r6,24
	ctx.r6.s64 = 24;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8315bd60
	ctx.lr = 0x8304A998;
	sub_8315BD60(ctx, base);
	// stb r26,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r26.u8);
loc_8304A99C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// rlwinm r8,r9,0,15,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r8,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r27,r4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8304a874
	if (ctx.cr6.lt) goto loc_8304A874;
loc_8304A9D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8304aaa4
	if (ctx.cr6.eq) goto loc_8304AAA4;
	// lwz r11,1188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1188);
	// addi r29,r30,1160
	ctx.r29.s64 = ctx.r30.s64 + 1160;
	// lwz r10,1192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8304aa1c
	if (ctx.cr6.eq) goto loc_8304AA1C;
loc_8304AA04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83048c08
	ctx.lr = 0x8304AA10;
	sub_83048C08(ctx, base);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8304aa04
	if (!ctx.cr6.eq) goto loc_8304AA04;
loc_8304AA1C:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8304aa50
	if (ctx.cr6.eq) goto loc_8304AA50;
loc_8304AA38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83048c08
	ctx.lr = 0x8304AA44;
	sub_83048C08(ctx, base);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8304aa38
	if (!ctx.cr6.eq) goto loc_8304AA38;
loc_8304AA50:
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8304aa94
	if (ctx.cr6.eq) goto loc_8304AA94;
loc_8304AA60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8304aa88
	if (ctx.cr6.eq) goto loc_8304AA88;
loc_8304AA70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x83048ff0
	ctx.lr = 0x8304AA7C;
	sub_83048FF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8304aa70
	if (!ctx.cr6.eq) goto loc_8304AA70;
loc_8304AA88:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8304aa60
	if (!ctx.cr6.eq) goto loc_8304AA60;
loc_8304AA94:
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r10.u32);
	// b 0x8304ab98
	goto loc_8304AB98;
loc_8304AAA4:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,22552
	ctx.r11.s64 = ctx.r11.s64 + 22552;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8304aae4
	if (!ctx.cr6.eq) goto loc_8304AAE4;
	// lfs f13,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8304aae4
	if (!ctx.cr6.eq) goto loc_8304AAE4;
	// lfs f13,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8304aae4
	if (!ctx.cr6.eq) goto loc_8304AAE4;
	// lfs f13,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8304ab20
	if (ctx.cr6.eq) goto loc_8304AB20;
loc_8304AAE4:
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// lwz r31,1208(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1208);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8304ab20
	if (ctx.cr6.eq) goto loc_8304AB20;
loc_8304AAFC:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8309abf0
	ctx.lr = 0x8304AB08;
	sub_8309ABF0(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// bne cr6,0x8304aafc
	if (!ctx.cr6.eq) goto loc_8304AAFC;
loc_8304AB20:
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// addi r28,r30,1472
	ctx.r28.s64 = ctx.r30.s64 + 1472;
	// lwz r10,1472(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addic. r31,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r31.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8304ab5c
	if (ctx.cr0.lt) goto loc_8304AB5C;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8304AB40:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x83048c08
	ctx.lr = 0x8304AB50;
	sub_83048C08(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x8304ab40
	if (!ctx.cr0.lt) goto loc_8304AB40;
loc_8304AB5C:
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// addi r28,r30,1492
	ctx.r28.s64 = ctx.r30.s64 + 1492;
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addic. r31,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r31.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8304ab98
	if (ctx.cr0.lt) goto loc_8304AB98;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8304AB7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x83048ff0
	ctx.lr = 0x8304AB8C;
	sub_83048FF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x8304ab7c
	if (!ctx.cr0.lt) goto loc_8304AB7C;
loc_8304AB98:
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// addi r31,r30,1552
	ctx.r31.s64 = ctx.r30.s64 + 1552;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r11.u32);
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r10,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r10.u32);
	// lwz r9,1556(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// lwz r8,1552(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8304ac0c
	if (ctx.cr0.eq) goto loc_8304AC0C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8304ABC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x830bf750
	ctx.lr = 0x8304ABD8;
	sub_830BF750(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r7,r8,0,29,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r7,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8304abc8
	if (ctx.cr6.lt) goto loc_8304ABC8;
loc_8304AC0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1532
	ctx.r30.s64 = ctx.r30.s64 + 1532;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8304ac60
	if (ctx.cr0.eq) goto loc_8304AC60;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8304AC34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x830c0b58
	ctx.lr = 0x8304AC40;
	sub_830C0B58(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8304ac34
	if (ctx.cr6.lt) goto loc_8304AC34;
loc_8304AC60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304AC70"))) PPC_WEAK_FUNC(sub_8304AC70);
PPC_FUNC_IMPL(__imp__sub_8304AC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8304AC78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r31,772
	ctx.r25.s64 = ctx.r31.s64 + 772;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83083d10
	ctx.lr = 0x8304AC8C;
	sub_83083D10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8304af3c
	if (ctx.cr6.eq) goto loc_8304AF3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304a808
	ctx.lr = 0x8304ACA8;
	sub_8304A808(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x830740a8
	ctx.lr = 0x8304ACB0;
	sub_830740A8(ctx, base);
	// addi r26,r31,248
	ctx.r26.s64 = ctx.r31.s64 + 248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830860b0
	ctx.lr = 0x8304ACC0;
	sub_830860B0(ctx, base);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8304acdc
	if (ctx.cr6.eq) goto loc_8304ACDC;
	// bl 0x8315f750
	ctx.lr = 0x8304ACD8;
	sub_8315F750(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8304ACDC:
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x8315f750
	ctx.lr = 0x8304ACE4;
	sub_8315F750(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830440f8
	ctx.lr = 0x8304ACF0;
	sub_830440F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f060
	ctx.lr = 0x8304ACF8;
	sub_8315F060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// addi r29,r11,19104
	ctx.r29.s64 = ctx.r11.s64 + 19104;
	// beq cr6,0x8304ad38
	if (ctx.cr6.eq) goto loc_8304AD38;
	// addi r7,r29,-664
	ctx.r7.s64 = ctx.r29.s64 + -664;
	// addi r4,r29,-608
	ctx.r4.s64 = ctx.r29.s64 + -608;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1799
	ctx.r5.s64 = 1799;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8304AD28;
	sub_82D17988(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304ad38
	if (!ctx.cr6.eq) goto loc_8304AD38;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
loc_8304AD38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f108
	ctx.lr = 0x8304AD40;
	sub_8315F108(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8304ad90
	if (ctx.cr6.eq) goto loc_8304AD90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8315f060
	ctx.lr = 0x8304AD50;
	sub_8315F060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8304ad88
	if (ctx.cr6.eq) goto loc_8304AD88;
	// addi r7,r29,-512
	ctx.r7.s64 = ctx.r29.s64 + -512;
	// addi r4,r29,-456
	ctx.r4.s64 = ctx.r29.s64 + -456;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1810
	ctx.r5.s64 = 1810;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8304AD78;
	sub_82D17988(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304ad88
	if (!ctx.cr6.eq) goto loc_8304AD88;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
loc_8304AD88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8315f108
	ctx.lr = 0x8304AD90;
	sub_8315F108(ctx, base);
loc_8304AD90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83084fa8
	ctx.lr = 0x8304AD9C;
	sub_83084FA8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// bl 0x831f14e0
	ctx.lr = 0x8304ADB4;
	sub_831F14E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830451f8
	ctx.lr = 0x8304ADBC;
	sub_830451F8(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x83075b78
	ctx.lr = 0x8304ADC4;
	sub_83075B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830463b8
	ctx.lr = 0x8304ADCC;
	sub_830463B8(ctx, base);
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x8315ee10
	ctx.lr = 0x8304ADD8;
	sub_8315EE10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8315f060
	ctx.lr = 0x8304ADE0;
	sub_8315F060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8304ae18
	if (ctx.cr6.eq) goto loc_8304AE18;
	// addi r7,r29,-360
	ctx.r7.s64 = ctx.r29.s64 + -360;
	// addi r4,r29,-304
	ctx.r4.s64 = ctx.r29.s64 + -304;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1859
	ctx.r5.s64 = 1859;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8304AE08;
	sub_82D17988(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304ae18
	if (!ctx.cr6.eq) goto loc_8304AE18;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
loc_8304AE18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f108
	ctx.lr = 0x8304AE20;
	sub_8315F108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83044158
	ctx.lr = 0x8304AE28;
	sub_83044158(ctx, base);
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x8315e0c8
	ctx.lr = 0x8304AE34;
	sub_8315E0C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8315f060
	ctx.lr = 0x8304AE3C;
	sub_8315F060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8304ae74
	if (ctx.cr6.eq) goto loc_8304AE74;
	// addi r7,r29,-208
	ctx.r7.s64 = ctx.r29.s64 + -208;
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1882
	ctx.r5.s64 = 1882;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8304AE64;
	sub_82D17988(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304ae74
	if (!ctx.cr6.eq) goto loc_8304AE74;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
loc_8304AE74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f108
	ctx.lr = 0x8304AE7C;
	sub_8315F108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83046538
	ctx.lr = 0x8304AE84;
	sub_83046538(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304af0c
	if (ctx.cr6.eq) goto loc_8304AF0C;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x830740b8
	ctx.lr = 0x8304AE9C;
	sub_830740B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830860b0
	ctx.lr = 0x8304AEA8;
	sub_830860B0(ctx, base);
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x8315f750
	ctx.lr = 0x8304AEB0;
	sub_8315F750(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8315f060
	ctx.lr = 0x8304AEB8;
	sub_8315F060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8304aef0
	if (ctx.cr6.eq) goto loc_8304AEF0;
	// addi r7,r29,-56
	ctx.r7.s64 = ctx.r29.s64 + -56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1914
	ctx.r5.s64 = 1914;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82d17988
	ctx.lr = 0x8304AEE0;
	sub_82D17988(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304aef0
	if (!ctx.cr6.eq) goto loc_8304AEF0;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
loc_8304AEF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8315f108
	ctx.lr = 0x8304AEF8;
	sub_8315F108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83084fa8
	ctx.lr = 0x8304AF04;
	sub_83084FA8(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x83074648
	ctx.lr = 0x8304AF0C;
	sub_83074648(ctx, base);
loc_8304AF0C:
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8304af2c
	if (ctx.cr6.eq) goto loc_8304AF2C;
loc_8304AF18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83081dc8
	ctx.lr = 0x8304AF20;
	sub_83081DC8(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8304af18
	if (!ctx.cr6.eq) goto loc_8304AF18;
loc_8304AF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83042d90
	ctx.lr = 0x8304AF34;
	sub_83042D90(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83083d28
	ctx.lr = 0x8304AF3C;
	sub_83083D28(ctx, base);
loc_8304AF3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304AF44"))) PPC_WEAK_FUNC(sub_8304AF44);
PPC_FUNC_IMPL(__imp__sub_8304AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304AF48"))) PPC_WEAK_FUNC(sub_8304AF48);
PPC_FUNC_IMPL(__imp__sub_8304AF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8304AF50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r31,1024
	ctx.r27.s64 = ctx.r31.s64 + 1024;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x833b7f64
	ctx.lr = 0x8304AF68;
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304af80
	if (!ctx.cr6.eq) goto loc_8304AF80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c2d18
	ctx.lr = 0x8304AF7C;
	sub_831C2D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8304AF80:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r26,56
	ctx.r26.s64 = 56;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r26
	ctx.r7.s32 = ctx.r8.s32 / ctx.r26.s32;
	// addic. r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8304b030
	if (ctx.cr0.eq) goto loc_8304B030;
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8304b030
	if (ctx.cr6.eq) goto loc_8304B030;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8304afe8
	if (!ctx.cr6.eq) goto loc_8304AFE8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x8304b004
	goto loc_8304B004;
loc_8304AFE8:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8304b004
	if (ctx.cr6.eq) goto loc_8304B004;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8304B004:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// bl 0x82bea278
	ctx.lr = 0x8304B028;
	sub_82BEA278(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r8.u64);
loc_8304B030:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// beq cr6,0x8304b060
	if (ctx.cr6.eq) goto loc_8304B060;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// b 0x8304b068
	goto loc_8304B068;
loc_8304B060:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_8304B068:
	// stfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x831bf9a8
	ctx.lr = 0x8304B074;
	sub_831BF9A8(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304b0b8
	if (ctx.cr6.eq) goto loc_8304B0B8;
	// lis r30,-31901
	ctx.r30.s64 = -2090663936;
loc_8304B084:
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// beq cr6,0x8304b0ac
	if (ctx.cr6.eq) goto loc_8304B0AC;
	// lwz r3,-32308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8304B0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8304B0AC:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8304b084
	if (!ctx.cr6.eq) goto loc_8304B084;
loc_8304B0B8:
	// stw r28,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83062e10
	ctx.lr = 0x8304B0C4;
	sub_83062E10(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
	// bl 0x83062e28
	ctx.lr = 0x8304B0D8;
	sub_83062E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83045930
	ctx.lr = 0x8304B0E0;
	sub_83045930(ctx, base);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8304b128
	if (!ctx.cr6.gt) goto loc_8304B128;
loc_8304B0F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8304ac70
	ctx.lr = 0x8304B0F8;
	sub_8304AC70(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8304b10c
	if (ctx.cr6.eq) goto loc_8304B10C;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8307ef38
	ctx.lr = 0x8304B10C;
	sub_8307EF38(ctx, base);
loc_8304B10C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8304b0f0
	if (ctx.cr6.lt) goto loc_8304B0F0;
loc_8304B128:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x83045410
	ctx.lr = 0x8304B140;
	sub_83045410(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83062e20
	ctx.lr = 0x8304B148;
	sub_83062E20(ctx, base);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x833b7f64
	ctx.lr = 0x8304B150;
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8304b160
	if (!ctx.cr6.eq) goto loc_8304B160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c2d18
	ctx.lr = 0x8304B160;
	sub_831C2D18(ctx, base);
loc_8304B160:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = ctx.r9.s32 / ctx.r26.s32;
	// addic. r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8304b200
	if (ctx.cr0.eq) goto loc_8304B200;
	// lwz r31,72(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8304b200
	if (ctx.cr6.eq) goto loc_8304B200;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// bl 0x82bea278
	ctx.lr = 0x8304B198;
	sub_82BEA278(ctx, base);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r9,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r9.u64);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// std r6,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r6.u64);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r11,r5,56
	ctx.r11.s64 = ctx.r5.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r4,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r4.u64);
loc_8304B200:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8304B208"))) PPC_WEAK_FUNC(sub_8304B208);
PPC_FUNC_IMPL(__imp__sub_8304B208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B20C"))) PPC_WEAK_FUNC(sub_8304B20C);
PPC_FUNC_IMPL(__imp__sub_8304B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B210"))) PPC_WEAK_FUNC(sub_8304B210);
PPC_FUNC_IMPL(__imp__sub_8304B210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B258"))) PPC_WEAK_FUNC(sub_8304B258);
PPC_FUNC_IMPL(__imp__sub_8304B258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B25C"))) PPC_WEAK_FUNC(sub_8304B25C);
PPC_FUNC_IMPL(__imp__sub_8304B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B260"))) PPC_WEAK_FUNC(sub_8304B260);
PPC_FUNC_IMPL(__imp__sub_8304B260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B278"))) PPC_WEAK_FUNC(sub_8304B278);
PPC_FUNC_IMPL(__imp__sub_8304B278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B28C"))) PPC_WEAK_FUNC(sub_8304B28C);
PPC_FUNC_IMPL(__imp__sub_8304B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B290"))) PPC_WEAK_FUNC(sub_8304B290);
PPC_FUNC_IMPL(__imp__sub_8304B290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2A0"))) PPC_WEAK_FUNC(sub_8304B2A0);
PPC_FUNC_IMPL(__imp__sub_8304B2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2B0"))) PPC_WEAK_FUNC(sub_8304B2B0);
PPC_FUNC_IMPL(__imp__sub_8304B2B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2B8"))) PPC_WEAK_FUNC(sub_8304B2B8);
PPC_FUNC_IMPL(__imp__sub_8304B2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2C0"))) PPC_WEAK_FUNC(sub_8304B2C0);
PPC_FUNC_IMPL(__imp__sub_8304B2C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2D0"))) PPC_WEAK_FUNC(sub_8304B2D0);
PPC_FUNC_IMPL(__imp__sub_8304B2D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2DC"))) PPC_WEAK_FUNC(sub_8304B2DC);
PPC_FUNC_IMPL(__imp__sub_8304B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B2E0"))) PPC_WEAK_FUNC(sub_8304B2E0);
PPC_FUNC_IMPL(__imp__sub_8304B2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B304"))) PPC_WEAK_FUNC(sub_8304B304);
PPC_FUNC_IMPL(__imp__sub_8304B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B308"))) PPC_WEAK_FUNC(sub_8304B308);
PPC_FUNC_IMPL(__imp__sub_8304B308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B31C"))) PPC_WEAK_FUNC(sub_8304B31C);
PPC_FUNC_IMPL(__imp__sub_8304B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B320"))) PPC_WEAK_FUNC(sub_8304B320);
PPC_FUNC_IMPL(__imp__sub_8304B320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r11
	// li r8,384
	ctx.r8.s64 = 384;
	// dcbt r8,r11
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B35C"))) PPC_WEAK_FUNC(sub_8304B35C);
PPC_FUNC_IMPL(__imp__sub_8304B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B360"))) PPC_WEAK_FUNC(sub_8304B360);
PPC_FUNC_IMPL(__imp__sub_8304B360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbt r9,r11
	// li r8,384
	ctx.r8.s64 = 384;
	// dcbt r8,r11
	// li r7,512
	ctx.r7.s64 = 512;
	// dcbt r7,r11
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3A4"))) PPC_WEAK_FUNC(sub_8304B3A4);
PPC_FUNC_IMPL(__imp__sub_8304B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B3A8"))) PPC_WEAK_FUNC(sub_8304B3A8);
PPC_FUNC_IMPL(__imp__sub_8304B3A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3B8"))) PPC_WEAK_FUNC(sub_8304B3B8);
PPC_FUNC_IMPL(__imp__sub_8304B3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3C8"))) PPC_WEAK_FUNC(sub_8304B3C8);
PPC_FUNC_IMPL(__imp__sub_8304B3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3D0"))) PPC_WEAK_FUNC(sub_8304B3D0);
PPC_FUNC_IMPL(__imp__sub_8304B3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3D8"))) PPC_WEAK_FUNC(sub_8304B3D8);
PPC_FUNC_IMPL(__imp__sub_8304B3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3E4"))) PPC_WEAK_FUNC(sub_8304B3E4);
PPC_FUNC_IMPL(__imp__sub_8304B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B3E8"))) PPC_WEAK_FUNC(sub_8304B3E8);
PPC_FUNC_IMPL(__imp__sub_8304B3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3FC"))) PPC_WEAK_FUNC(sub_8304B3FC);
PPC_FUNC_IMPL(__imp__sub_8304B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B400"))) PPC_WEAK_FUNC(sub_8304B400);
PPC_FUNC_IMPL(__imp__sub_8304B400) {
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

__attribute__((alias("__imp__sub_8304B414"))) PPC_WEAK_FUNC(sub_8304B414);
PPC_FUNC_IMPL(__imp__sub_8304B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B418"))) PPC_WEAK_FUNC(sub_8304B418);
PPC_FUNC_IMPL(__imp__sub_8304B418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B42C"))) PPC_WEAK_FUNC(sub_8304B42C);
PPC_FUNC_IMPL(__imp__sub_8304B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B430"))) PPC_WEAK_FUNC(sub_8304B430);
PPC_FUNC_IMPL(__imp__sub_8304B430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B440"))) PPC_WEAK_FUNC(sub_8304B440);
PPC_FUNC_IMPL(__imp__sub_8304B440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B448"))) PPC_WEAK_FUNC(sub_8304B448);
PPC_FUNC_IMPL(__imp__sub_8304B448) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B450"))) PPC_WEAK_FUNC(sub_8304B450);
PPC_FUNC_IMPL(__imp__sub_8304B450) {
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

__attribute__((alias("__imp__sub_8304B464"))) PPC_WEAK_FUNC(sub_8304B464);
PPC_FUNC_IMPL(__imp__sub_8304B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B468"))) PPC_WEAK_FUNC(sub_8304B468);
PPC_FUNC_IMPL(__imp__sub_8304B468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B47C"))) PPC_WEAK_FUNC(sub_8304B47C);
PPC_FUNC_IMPL(__imp__sub_8304B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B480"))) PPC_WEAK_FUNC(sub_8304B480);
PPC_FUNC_IMPL(__imp__sub_8304B480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B490"))) PPC_WEAK_FUNC(sub_8304B490);
PPC_FUNC_IMPL(__imp__sub_8304B490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4A0"))) PPC_WEAK_FUNC(sub_8304B4A0);
PPC_FUNC_IMPL(__imp__sub_8304B4A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4A8"))) PPC_WEAK_FUNC(sub_8304B4A8);
PPC_FUNC_IMPL(__imp__sub_8304B4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4B0"))) PPC_WEAK_FUNC(sub_8304B4B0);
PPC_FUNC_IMPL(__imp__sub_8304B4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4BC"))) PPC_WEAK_FUNC(sub_8304B4BC);
PPC_FUNC_IMPL(__imp__sub_8304B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B4C0"))) PPC_WEAK_FUNC(sub_8304B4C0);
PPC_FUNC_IMPL(__imp__sub_8304B4C0) {
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

__attribute__((alias("__imp__sub_8304B4D4"))) PPC_WEAK_FUNC(sub_8304B4D4);
PPC_FUNC_IMPL(__imp__sub_8304B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B4D8"))) PPC_WEAK_FUNC(sub_8304B4D8);
PPC_FUNC_IMPL(__imp__sub_8304B4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4F0"))) PPC_WEAK_FUNC(sub_8304B4F0);
PPC_FUNC_IMPL(__imp__sub_8304B4F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B508"))) PPC_WEAK_FUNC(sub_8304B508);
PPC_FUNC_IMPL(__imp__sub_8304B508) {
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

__attribute__((alias("__imp__sub_8304B51C"))) PPC_WEAK_FUNC(sub_8304B51C);
PPC_FUNC_IMPL(__imp__sub_8304B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B520"))) PPC_WEAK_FUNC(sub_8304B520);
PPC_FUNC_IMPL(__imp__sub_8304B520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B534"))) PPC_WEAK_FUNC(sub_8304B534);
PPC_FUNC_IMPL(__imp__sub_8304B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B538"))) PPC_WEAK_FUNC(sub_8304B538);
PPC_FUNC_IMPL(__imp__sub_8304B538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B548"))) PPC_WEAK_FUNC(sub_8304B548);
PPC_FUNC_IMPL(__imp__sub_8304B548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B550"))) PPC_WEAK_FUNC(sub_8304B550);
PPC_FUNC_IMPL(__imp__sub_8304B550) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B558"))) PPC_WEAK_FUNC(sub_8304B558);
PPC_FUNC_IMPL(__imp__sub_8304B558) {
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

__attribute__((alias("__imp__sub_8304B56C"))) PPC_WEAK_FUNC(sub_8304B56C);
PPC_FUNC_IMPL(__imp__sub_8304B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B570"))) PPC_WEAK_FUNC(sub_8304B570);
PPC_FUNC_IMPL(__imp__sub_8304B570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B584"))) PPC_WEAK_FUNC(sub_8304B584);
PPC_FUNC_IMPL(__imp__sub_8304B584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B588"))) PPC_WEAK_FUNC(sub_8304B588);
PPC_FUNC_IMPL(__imp__sub_8304B588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B598"))) PPC_WEAK_FUNC(sub_8304B598);
PPC_FUNC_IMPL(__imp__sub_8304B598) {
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

__attribute__((alias("__imp__sub_8304B5AC"))) PPC_WEAK_FUNC(sub_8304B5AC);
PPC_FUNC_IMPL(__imp__sub_8304B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B5B0"))) PPC_WEAK_FUNC(sub_8304B5B0);
PPC_FUNC_IMPL(__imp__sub_8304B5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B5C8"))) PPC_WEAK_FUNC(sub_8304B5C8);
PPC_FUNC_IMPL(__imp__sub_8304B5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B5D0"))) PPC_WEAK_FUNC(sub_8304B5D0);
PPC_FUNC_IMPL(__imp__sub_8304B5D0) {
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

__attribute__((alias("__imp__sub_8304B5E4"))) PPC_WEAK_FUNC(sub_8304B5E4);
PPC_FUNC_IMPL(__imp__sub_8304B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B5E8"))) PPC_WEAK_FUNC(sub_8304B5E8);
PPC_FUNC_IMPL(__imp__sub_8304B5E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B5FC"))) PPC_WEAK_FUNC(sub_8304B5FC);
PPC_FUNC_IMPL(__imp__sub_8304B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B600"))) PPC_WEAK_FUNC(sub_8304B600);
PPC_FUNC_IMPL(__imp__sub_8304B600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B610"))) PPC_WEAK_FUNC(sub_8304B610);
PPC_FUNC_IMPL(__imp__sub_8304B610) {
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

__attribute__((alias("__imp__sub_8304B624"))) PPC_WEAK_FUNC(sub_8304B624);
PPC_FUNC_IMPL(__imp__sub_8304B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B628"))) PPC_WEAK_FUNC(sub_8304B628);
PPC_FUNC_IMPL(__imp__sub_8304B628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B63C"))) PPC_WEAK_FUNC(sub_8304B63C);
PPC_FUNC_IMPL(__imp__sub_8304B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B640"))) PPC_WEAK_FUNC(sub_8304B640);
PPC_FUNC_IMPL(__imp__sub_8304B640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B650"))) PPC_WEAK_FUNC(sub_8304B650);
PPC_FUNC_IMPL(__imp__sub_8304B650) {
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

__attribute__((alias("__imp__sub_8304B664"))) PPC_WEAK_FUNC(sub_8304B664);
PPC_FUNC_IMPL(__imp__sub_8304B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B668"))) PPC_WEAK_FUNC(sub_8304B668);
PPC_FUNC_IMPL(__imp__sub_8304B668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B67C"))) PPC_WEAK_FUNC(sub_8304B67C);
PPC_FUNC_IMPL(__imp__sub_8304B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B680"))) PPC_WEAK_FUNC(sub_8304B680);
PPC_FUNC_IMPL(__imp__sub_8304B680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B690"))) PPC_WEAK_FUNC(sub_8304B690);
PPC_FUNC_IMPL(__imp__sub_8304B690) {
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

__attribute__((alias("__imp__sub_8304B6A4"))) PPC_WEAK_FUNC(sub_8304B6A4);
PPC_FUNC_IMPL(__imp__sub_8304B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B6A8"))) PPC_WEAK_FUNC(sub_8304B6A8);
PPC_FUNC_IMPL(__imp__sub_8304B6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B6BC"))) PPC_WEAK_FUNC(sub_8304B6BC);
PPC_FUNC_IMPL(__imp__sub_8304B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8304B6C0"))) PPC_WEAK_FUNC(sub_8304B6C0);
PPC_FUNC_IMPL(__imp__sub_8304B6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B6D0"))) PPC_WEAK_FUNC(sub_8304B6D0);
PPC_FUNC_IMPL(__imp__sub_8304B6D0) {
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

