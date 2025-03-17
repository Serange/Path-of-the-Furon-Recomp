#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828FDBAC"))) PPC_WEAK_FUNC(sub_828FDBAC);
PPC_FUNC_IMPL(__imp__sub_828FDBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDBB0"))) PPC_WEAK_FUNC(sub_828FDBB0);
PPC_FUNC_IMPL(__imp__sub_828FDBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDBB4"))) PPC_WEAK_FUNC(sub_828FDBB4);
PPC_FUNC_IMPL(__imp__sub_828FDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDBB8"))) PPC_WEAK_FUNC(sub_828FDBB8);
PPC_FUNC_IMPL(__imp__sub_828FDBB8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-29128
	ctx.r9.s64 = ctx.r11.s64 + -29128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828fdbec
	if (ctx.cr6.eq) goto loc_828FDBEC;
	// bl 0x82294a58
	ctx.lr = 0x828FDBE8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FDBEC:
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

__attribute__((alias("__imp__sub_828FDC00"))) PPC_WEAK_FUNC(sub_828FDC00);
PPC_FUNC_IMPL(__imp__sub_828FDC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r9,r11,-29100
	ctx.r9.s64 = ctx.r11.s64 + -29100;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-17840
	ctx.r4.s64 = ctx.r10.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828FDC34;
	sub_82CB1160(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
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

__attribute__((alias("__imp__sub_828FDC68"))) PPC_WEAK_FUNC(sub_828FDC68);
PPC_FUNC_IMPL(__imp__sub_828FDC68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDC74"))) PPC_WEAK_FUNC(sub_828FDC74);
PPC_FUNC_IMPL(__imp__sub_828FDC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDC78"))) PPC_WEAK_FUNC(sub_828FDC78);
PPC_FUNC_IMPL(__imp__sub_828FDC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDC94"))) PPC_WEAK_FUNC(sub_828FDC94);
PPC_FUNC_IMPL(__imp__sub_828FDC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDC98"))) PPC_WEAK_FUNC(sub_828FDC98);
PPC_FUNC_IMPL(__imp__sub_828FDC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDCAC"))) PPC_WEAK_FUNC(sub_828FDCAC);
PPC_FUNC_IMPL(__imp__sub_828FDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDCB0"))) PPC_WEAK_FUNC(sub_828FDCB0);
PPC_FUNC_IMPL(__imp__sub_828FDCB0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-29128
	ctx.r9.s64 = ctx.r11.s64 + -29128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828fdce4
	if (ctx.cr6.eq) goto loc_828FDCE4;
	// bl 0x82294a58
	ctx.lr = 0x828FDCE0;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FDCE4:
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

__attribute__((alias("__imp__sub_828FDCF8"))) PPC_WEAK_FUNC(sub_828FDCF8);
PPC_FUNC_IMPL(__imp__sub_828FDCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29128
	ctx.r10.s64 = ctx.r11.s64 + -29128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDD08"))) PPC_WEAK_FUNC(sub_828FDD08);
PPC_FUNC_IMPL(__imp__sub_828FDD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29128
	ctx.r10.s64 = ctx.r11.s64 + -29128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDD18"))) PPC_WEAK_FUNC(sub_828FDD18);
PPC_FUNC_IMPL(__imp__sub_828FDD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDD24"))) PPC_WEAK_FUNC(sub_828FDD24);
PPC_FUNC_IMPL(__imp__sub_828FDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDD28"))) PPC_WEAK_FUNC(sub_828FDD28);
PPC_FUNC_IMPL(__imp__sub_828FDD28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-512
	ctx.r3.s64 = ctx.r3.s64 + -512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDD30"))) PPC_WEAK_FUNC(sub_828FDD30);
PPC_FUNC_IMPL(__imp__sub_828FDD30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r10,-29016
	ctx.r9.s64 = ctx.r10.s64 + -29016;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDD64"))) PPC_WEAK_FUNC(sub_828FDD64);
PPC_FUNC_IMPL(__imp__sub_828FDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDD68"))) PPC_WEAK_FUNC(sub_828FDD68);
PPC_FUNC_IMPL(__imp__sub_828FDD68) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29308
	ctx.r4.s64 = ctx.r11.s64 + -29308;
	// bl 0x822960c0
	ctx.lr = 0x828FDD88;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_828FDDA0"))) PPC_WEAK_FUNC(sub_828FDDA0);
PPC_FUNC_IMPL(__imp__sub_828FDDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fddb4
	if (ctx.cr6.eq) goto loc_828FDDB4;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_828FDDB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDDBC"))) PPC_WEAK_FUNC(sub_828FDDBC);
PPC_FUNC_IMPL(__imp__sub_828FDDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDDC0"))) PPC_WEAK_FUNC(sub_828FDDC0);
PPC_FUNC_IMPL(__imp__sub_828FDDC0) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x828fdea8
	ctx.lr = 0x828FDDE0;
	sub_828FDEA8(ctx, base);
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

__attribute__((alias("__imp__sub_828FDDF8"))) PPC_WEAK_FUNC(sub_828FDDF8);
PPC_FUNC_IMPL(__imp__sub_828FDDF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82832c90
	sub_82832C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDE00"))) PPC_WEAK_FUNC(sub_828FDE00);
PPC_FUNC_IMPL(__imp__sub_828FDE00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828FDE14"))) PPC_WEAK_FUNC(sub_828FDE14);
PPC_FUNC_IMPL(__imp__sub_828FDE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDE18"))) PPC_WEAK_FUNC(sub_828FDE18);
PPC_FUNC_IMPL(__imp__sub_828FDE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FDE20;
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
	// bl 0x82475b38
	ctx.lr = 0x828FDE34;
	sub_82475B38(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r9,r11,-29016
	ctx.r9.s64 = ctx.r11.s64 + -29016;
	// lwz r7,516(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r6.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// addi r11,r31,500
	ctx.r11.s64 = ctx.r31.s64 + 500;
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r4,128(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// bl 0x82902fd0
	ctx.lr = 0x828FDE88;
	sub_82902FD0(ctx, base);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDEA4"))) PPC_WEAK_FUNC(sub_828FDEA4);
PPC_FUNC_IMPL(__imp__sub_828FDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDEA8"))) PPC_WEAK_FUNC(sub_828FDEA8);
PPC_FUNC_IMPL(__imp__sub_828FDEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x82475b38
	ctx.lr = 0x828FDEC0;
	sub_82475B38(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// addi r9,r10,-29100
	ctx.r9.s64 = ctx.r10.s64 + -29100;
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r4,r8,-17840
	ctx.r4.s64 = ctx.r8.s64 + -17840;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x828FDEE4;
	sub_82CB1160(ctx, base);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// addi r3,r5,-29036
	ctx.r3.s64 = ctx.r5.s64 + -29036;
	// addi r4,r6,-29080
	ctx.r4.s64 = ctx.r6.s64 + -29080;
	// lfs f0,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_828FDF30"))) PPC_WEAK_FUNC(sub_828FDF30);
PPC_FUNC_IMPL(__imp__sub_828FDF30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// bne cr6,0x828fdf40
	if (!ctx.cr6.eq) goto loc_828FDF40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FDF40:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r10,-29128
	ctx.r9.s64 = ctx.r10.s64 + -29128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82475d80
	sub_82475D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FDF50"))) PPC_WEAK_FUNC(sub_828FDF50);
PPC_FUNC_IMPL(__imp__sub_828FDF50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828FDF90"))) PPC_WEAK_FUNC(sub_828FDF90);
PPC_FUNC_IMPL(__imp__sub_828FDF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FDF94"))) PPC_WEAK_FUNC(sub_828FDF94);
PPC_FUNC_IMPL(__imp__sub_828FDF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FDF98"))) PPC_WEAK_FUNC(sub_828FDF98);
PPC_FUNC_IMPL(__imp__sub_828FDF98) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// bne cr6,0x828fdfc4
	if (!ctx.cr6.eq) goto loc_828FDFC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828FDFC4:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-29128
	ctx.r9.s64 = ctx.r10.s64 + -29128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82475d80
	ctx.lr = 0x828FDFD8;
	sub_82475D80(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828fdff0
	if (ctx.cr6.eq) goto loc_828FDFF0;
	// bl 0x82294a58
	ctx.lr = 0x828FDFEC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FDFF0:
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

__attribute__((alias("__imp__sub_828FE008"))) PPC_WEAK_FUNC(sub_828FE008);
PPC_FUNC_IMPL(__imp__sub_828FE008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,15
	ctx.r11.s64 = 15;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lvx128 v62,r4,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// vspltw128 v62,v63,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
loc_828FE034:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// rotlwi r8,r8,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lvx128 v61,r10,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r8,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r8
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v57,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v56,v58,v59,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v53,v54,v55,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vmulfp128 v52,v57,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v51,v57,v56
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v50,v53,v56
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v49,v63,v52
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v48,v51,135
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x78));
	// vpermwi128 v47,v50,99
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x9C));
	// vpermwi128 v5,v51,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x9C));
	// vpermwi128 v4,v50,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x78));
	// vmulfp128 v3,v47,v48
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v48.f32)));
	// vnmsubfp v2,v4,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v46,v2,v49
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v49.f32), 0xEF));
	// vspltw128 v45,v46,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvewx128 v45,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x828fe034
	if (!ctx.cr0.eq) goto loc_828FE034;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE0D0"))) PPC_WEAK_FUNC(sub_828FE0D0);
PPC_FUNC_IMPL(__imp__sub_828FE0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828FE0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r4,r7,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x828c9fc0
	ctx.lr = 0x828FE10C;
	sub_828C9FC0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x828FE120;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fe160
	if (ctx.cr6.eq) goto loc_828FE160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x828fe160
	if (!ctx.cr0.eq) goto loc_828FE160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FE160:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76378
	ctx.lr = 0x828FE174;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76f10
	ctx.lr = 0x828FE188;
	sub_82E76F10(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828fe1f8
	if (!ctx.cr6.gt) goto loc_828FE1F8;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_828FE1A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x828fe1a0
	if (ctx.cr6.lt) goto loc_828FE1A0;
loc_828FE1F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x828FE204;
	sub_82E77010(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE20C"))) PPC_WEAK_FUNC(sub_828FE20C);
PPC_FUNC_IMPL(__imp__sub_828FE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE210"))) PPC_WEAK_FUNC(sub_828FE210);
PPC_FUNC_IMPL(__imp__sub_828FE210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828FE258"))) PPC_WEAK_FUNC(sub_828FE258);
PPC_FUNC_IMPL(__imp__sub_828FE258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE25C"))) PPC_WEAK_FUNC(sub_828FE25C);
PPC_FUNC_IMPL(__imp__sub_828FE25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE260"))) PPC_WEAK_FUNC(sub_828FE260);
PPC_FUNC_IMPL(__imp__sub_828FE260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FE268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-29192
	ctx.r8.s64 = ctx.r9.s64 + -29192;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r5,r7,-28984
	ctx.r5.s64 = ctx.r7.s64 + -28984;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r6,704(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r4,448(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// rlwinm r3,r4,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828fe364
	if (!ctx.cr6.gt) goto loc_828FE364;
loc_828FE2F8:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x828fe334
	if (!ctx.cr6.gt) goto loc_828FE334;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// li r4,864
	ctx.r4.s64 = 864;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x828FE334;
	sub_82294520(ctx, base);
loc_828FE334:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r29,864
	ctx.r10.s64 = ctx.r29.s64 * 864;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828fe350
	if (ctx.cr0.eq) goto loc_828FE350;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828fde18
	ctx.lr = 0x828FE350;
	sub_828FDE18(ctx, base);
loc_828FE350:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828fe2f8
	if (ctx.cr6.lt) goto loc_828FE2F8;
loc_828FE364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828fe438
	ctx.lr = 0x828FE36C;
	sub_828FE438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE378"))) PPC_WEAK_FUNC(sub_828FE378);
PPC_FUNC_IMPL(__imp__sub_828FE378) {
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
	// bl 0x828fe3c8
	ctx.lr = 0x828FE398;
	sub_828FE3C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fe3b0
	if (ctx.cr6.eq) goto loc_828FE3B0;
	// bl 0x82294a58
	ctx.lr = 0x828FE3AC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FE3B0:
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

__attribute__((alias("__imp__sub_828FE3C8"))) PPC_WEAK_FUNC(sub_828FE3C8);
PPC_FUNC_IMPL(__imp__sub_828FE3C8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-28984
	ctx.r10.s64 = ctx.r11.s64 + -28984;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fe408
	if (ctx.cr6.eq) goto loc_828FE408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FE408:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82901b18
	ctx.lr = 0x828FE410;
	sub_82901B18(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82901a48
	ctx.lr = 0x828FE418;
	sub_82901A48(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29192
	ctx.r10.s64 = ctx.r11.s64 + -29192;
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

__attribute__((alias("__imp__sub_828FE438"))) PPC_WEAK_FUNC(sub_828FE438);
PPC_FUNC_IMPL(__imp__sub_828FE438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828FE440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828fe47c
	if (!ctx.cr6.gt) goto loc_828FE47C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828FE45C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x828ffab8
	ctx.lr = 0x828FE468;
	sub_828FFAB8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828fe45c
	if (ctx.cr6.lt) goto loc_828FE45C;
loc_828FE47C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE484"))) PPC_WEAK_FUNC(sub_828FE484);
PPC_FUNC_IMPL(__imp__sub_828FE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE488"))) PPC_WEAK_FUNC(sub_828FE488);
PPC_FUNC_IMPL(__imp__sub_828FE488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828FE490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828fe4cc
	if (!ctx.cr6.gt) goto loc_828FE4CC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828FE4AC:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x828ffee8
	ctx.lr = 0x828FE4B8;
	sub_828FFEE8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828fe4ac
	if (ctx.cr6.lt) goto loc_828FE4AC;
loc_828FE4CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE4D4"))) PPC_WEAK_FUNC(sub_828FE4D4);
PPC_FUNC_IMPL(__imp__sub_828FE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE4D8"))) PPC_WEAK_FUNC(sub_828FE4D8);
PPC_FUNC_IMPL(__imp__sub_828FE4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828FE4E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822959a8
	ctx.lr = 0x828FE500;
	sub_822959A8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fe524
	if (ctx.cr6.eq) goto loc_828FE524;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82900580
	ctx.lr = 0x828FE51C;
	sub_82900580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828fe528
	goto loc_828FE528;
loc_828FE524:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_828FE528:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fe5b4
	if (ctx.cr6.eq) goto loc_828FE5B4;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-21884
	ctx.r4.s64 = ctx.r11.s64 + -21884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295070
	ctx.lr = 0x828FE54C;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fe56c
	if (ctx.cr6.eq) goto loc_828FE56C;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r9,r10,-28920
	ctx.r9.s64 = ctx.r10.s64 + -28920;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_828FE56C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fe5cc
	if (ctx.cr6.eq) goto loc_828FE5CC;
	// lwsync 
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x828FE5AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_828FE5B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FE5CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE5D4"))) PPC_WEAK_FUNC(sub_828FE5D4);
PPC_FUNC_IMPL(__imp__sub_828FE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE5D8"))) PPC_WEAK_FUNC(sub_828FE5D8);
PPC_FUNC_IMPL(__imp__sub_828FE5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r11,-28920
	ctx.r9.s64 = ctx.r11.s64 + -28920;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE5F8"))) PPC_WEAK_FUNC(sub_828FE5F8);
PPC_FUNC_IMPL(__imp__sub_828FE5F8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x828FE620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE634"))) PPC_WEAK_FUNC(sub_828FE634);
PPC_FUNC_IMPL(__imp__sub_828FE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE638"))) PPC_WEAK_FUNC(sub_828FE638);
PPC_FUNC_IMPL(__imp__sub_828FE638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE644"))) PPC_WEAK_FUNC(sub_828FE644);
PPC_FUNC_IMPL(__imp__sub_828FE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE648"))) PPC_WEAK_FUNC(sub_828FE648);
PPC_FUNC_IMPL(__imp__sub_828FE648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FE658"))) PPC_WEAK_FUNC(sub_828FE658);
PPC_FUNC_IMPL(__imp__sub_828FE658) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x828fe68c
	if (ctx.cr6.eq) goto loc_828FE68C;
	// bl 0x82294a58
	ctx.lr = 0x828FE688;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828FE68C:
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

__attribute__((alias("__imp__sub_828FE6A0"))) PPC_WEAK_FUNC(sub_828FE6A0);
PPC_FUNC_IMPL(__imp__sub_828FE6A0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828fe6dc
	if (ctx.cr6.eq) goto loc_828FE6DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FE6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FE704;
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

__attribute__((alias("__imp__sub_828FE71C"))) PPC_WEAK_FUNC(sub_828FE71C);
PPC_FUNC_IMPL(__imp__sub_828FE71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE720"))) PPC_WEAK_FUNC(sub_828FE720);
PPC_FUNC_IMPL(__imp__sub_828FE720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FE728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828fe76c
	if (!ctx.cr6.gt) goto loc_828FE76C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828FE748:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828fffc8
	ctx.lr = 0x828FE758;
	sub_828FFFC8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,864
	ctx.r30.s64 = ctx.r30.s64 + 864;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828fe748
	if (ctx.cr6.lt) goto loc_828FE748;
loc_828FE76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE774"))) PPC_WEAK_FUNC(sub_828FE774);
PPC_FUNC_IMPL(__imp__sub_828FE774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE778"))) PPC_WEAK_FUNC(sub_828FE778);
PPC_FUNC_IMPL(__imp__sub_828FE778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FE780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828fe7c4
	if (!ctx.cr6.gt) goto loc_828FE7C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828FE7A0:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82900060
	ctx.lr = 0x828FE7B0;
	sub_82900060(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,864
	ctx.r30.s64 = ctx.r30.s64 + 864;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828fe7a0
	if (ctx.cr6.lt) goto loc_828FE7A0;
loc_828FE7C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FE7CC"))) PPC_WEAK_FUNC(sub_828FE7CC);
PPC_FUNC_IMPL(__imp__sub_828FE7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FE7D0"))) PPC_WEAK_FUNC(sub_828FE7D0);
PPC_FUNC_IMPL(__imp__sub_828FE7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x828FE7D8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ad8
	ctx.lr = 0x828FE7E0;
	__savefpr_24(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r24,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r24.u32);
	// addi r9,r24,16
	ctx.r9.s64 = ctx.r24.s64 + 16;
	// rlwinm r7,r23,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r23.u32);
	// mulli r10,r23,864
	ctx.r10.s64 = ctx.r23.s64 * 864;
	// lwz r8,16(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r6,44(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r4,160(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r24,44
	ctx.r8.s64 = ctx.r24.s64 + 44;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmpw cr6,r23,r6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r6.s32, ctx.xer);
	// lwzx r26,r4,r7
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// bne cr6,0x828fe838
	if (!ctx.cr6.eq) goto loc_828FE838;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x828ffa0c
	if (ctx.cr6.eq) goto loc_828FFA0C;
loc_828FE838:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ffa0c
	if (ctx.cr6.eq) goto loc_828FFA0C;
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828ffa0c
	if (ctx.cr6.eq) goto loc_828FFA0C;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// addi r31,r24,52
	ctx.r31.s64 = ctx.r24.s64 + 52;
	// lwz r10,60(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// addi r30,r26,128
	ctx.r30.s64 = ctx.r26.s64 + 128;
	// stw r15,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r15.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828fe88c
	if (ctx.cr6.eq) goto loc_828FE88C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x828FE88C;
	sub_82294520(ctx, base);
loc_828FE88C:
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x828FE8A4;
	sub_82294AC0(ctx, base);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// bl 0x82900740
	ctx.lr = 0x828FE8D8;
	sub_82900740(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r11,38
	ctx.r11.s64 = 38;
loc_828FE8E4:
	// dcbt r0,r10
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x828fe8e4
	if (!ctx.cr0.eq) goto loc_828FE8E4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// addi r7,r11,-32444
	ctx.r7.s64 = ctx.r11.s64 + -32444;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f28,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-17776(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17776);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x828ff6fc
	if (!ctx.cr6.gt) goto loc_828FF6FC;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r10,r11,-26480
	ctx.r10.s64 = ctx.r11.s64 + -26480;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r11,r9,-6048
	ctx.r11.s64 = ctx.r9.s64 + -6048;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r8,-6016
	ctx.r10.s64 = ctx.r8.s64 + -6016;
	// addi r9,r5,-6032
	ctx.r9.s64 = ctx.r5.s64 + -6032;
	// lvx128 v7,r0,r11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,-1316
	ctx.r8.s64 = -1316;
	// lfs f1,-18108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -18108);
	ctx.f1.f64 = double(temp.f32);
	// li r5,-1332
	ctx.r5.s64 = -1332;
	// lfd f2,-18352(r3)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r3.u32 + -18352);
	// li r4,-1348
	ctx.r4.s64 = -1348;
	// li r3,-1364
	ctx.r3.s64 = -1364;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lvx128 v31,r0,r9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r7,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lvx128 v9,r7,r5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// lvx128 v8,r7,r4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-18304
	ctx.r11.s64 = ctx.r11.s64 + -18304;
	// lvx128 v0,r7,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r19,11
	ctx.r19.s64 = 11;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r30,48
	ctx.r30.s64 = 48;
	// li r17,16
	ctx.r17.s64 = 16;
	// addi r14,r10,-26544
	ctx.r14.s64 = ctx.r10.s64 + -26544;
	// addi r5,r9,-26588
	ctx.r5.s64 = ctx.r9.s64 + -26588;
	// addi r31,r8,-26628
	ctx.r31.s64 = ctx.r8.s64 + -26628;
loc_828FE9C8:
	// addi r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 + 12;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r18,28(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// dcbt r0,r18
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r18,r9
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r18,r8
	// li r7,384
	ctx.r7.s64 = 384;
	// dcbt r18,r7
	// addi r21,r20,40
	ctx.r21.s64 = ctx.r20.s64 + 40;
	// lwz r10,40(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828fea28
	if (!ctx.cr6.gt) goto loc_828FEA28;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r8,160(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// dcbt r0,r25
loc_828FEA28:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828fefc4
	if (!ctx.cr6.gt) goto loc_828FEFC4;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
loc_828FEA40:
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r25,r11
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828fea74
	if (!ctx.cr6.eq) goto loc_828FEA74;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 | 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_828FEA74:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828fee2c
	if (ctx.cr6.eq) goto loc_828FEE2C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_828FEA94:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828fea94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828FEA94;
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x828fec84
	if (!ctx.cr6.gt) goto loc_828FEC84;
	// rlwinm r26,r27,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
loc_828FEAC0:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// blt cr6,0x828fec6c
	if (ctx.cr6.lt) goto loc_828FEC6C;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x828fec6c
	if (!ctx.cr6.lt) goto loc_828FEC6C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x828fec6c
	if (!ctx.cr6.eq) goto loc_828FEC6C;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lbz r6,21(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r6,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r6.u64);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r3,23(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// fsubs f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// std r6,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r6.u64);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// std r3,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r3.u64);
	// fcmpu cr6,f4,f28
	ctx.cr6.compare(ctx.f4.f64, ctx.f28.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r3,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// lfd f3,400(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lbz r6,15(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// lbz r16,14(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// lfd f13,360(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f8,304(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// std r6,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r6.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// std r16,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r16.u64);
	// lfd f10,288(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// std r6,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r6.u64);
	// lfd f7,320(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// lfd f12,408(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfsx f4,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f13,f4,f31,f11
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fcfid f10,f8
	ctx.f10.f64 = double(ctx.f8.s64);
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fmsubs f6,f12,f30,f31
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fmsubs f0,f8,f30,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f7,f3,f30,f31
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f3,f9,f30,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f11,f5,f30,f31
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f10,f4,f30,f31
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f8,f12,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f3,f6,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f0,f4,f4,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f2,f13
	ctx.f12.f64 = ctx.f2.f64 / ctx.f13.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f6,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f10,248(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmuls f9,f11,f4
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f9,252(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x828FEC60;
	sub_8281B1A8(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_828FEC6C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x828feac0
	if (!ctx.cr0.eq) goto loc_828FEAC0;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_828FEC84:
	// lbz r6,23(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r4,13(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lbz r3,21(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r7,22(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// std r6,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r6.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfd f13,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// std r6,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r6.u64);
	// lfd f9,416(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// std r3,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r3.u64);
	// lfd f12,368(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// lfd f0,336(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// std r7,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r7.u64);
	// std r8,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r8.u64);
	// lfd f11,384(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f10,280(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fcfid f0,f10
	ctx.f0.f64 = double(ctx.f10.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fmsubs f8,f13,f30,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// frsp f5,f0
	ctx.f5.f64 = double(float(ctx.f0.f64));
	// fmsubs f10,f4,f30,f31
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// fmsubs f4,f11,f30,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f7,f12,f30,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f3,f5,f30,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmuls f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmsubs f6,f9,f30,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f13,f7,f4,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f12,f6,f3,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmuls f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fsubs f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f0,f13,f13,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x828fed98
	if (ctx.cr6.lt) goto loc_828FED98;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f2,f0
	ctx.f12.f64 = ctx.f2.f64 / ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x828fed9c
	goto loc_828FED9C;
loc_828FED98:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_828FED9C:
	// lfs f12,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8281b1a8
	ctx.lr = 0x828FEDC8;
	sub_8281B1A8(ctx, base);
	// fmuls f10,f7,f3
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmsubs f0,f5,f8,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmsubs f13,f7,f4,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f12,f3,f6,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x828fee04
	if (ctx.cr6.lt) goto loc_828FEE04;
	// fsqrt f11,f11
	ctx.f11.f64 = sqrt(ctx.f11.f64);
	// fdiv f10,f2,f11
	ctx.f10.f64 = ctx.f2.f64 / ctx.f11.f64;
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// b 0x828fee08
	goto loc_828FEE08;
loc_828FEE04:
	// fmr f11,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f28.f64;
loc_828FEE08:
	// fmuls f12,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,268(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f9,272(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x828FEE2C;
	sub_8281B1A8(ctx, base);
loc_828FEE2C:
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r19
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v5,v62,v62
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// vperm128 v4,v61,v59,v6
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// lbz r7,35(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 35);
	// li r4,20
	ctx.r4.s64 = 20;
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lvx128 v57,r11,r19
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsel v30,v4,v5,v31
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vperm128 v56,v58,v57,v3
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v55,r0,r10
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r19
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lvsl v2,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// vperm128 v53,v55,v54,v2
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v52,r8,r19
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v51,v56,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// lvx128 v50,r0,r8
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lhzx r3,r6,r18
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r18.u32);
	// vperm128 v49,v50,v52,v6
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vspltw128 v48,v53,0
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xFF));
	// rotlwi r11,r3,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 6);
	// vperm128 v47,v51,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// vspltw v4,v30,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x55));
	// vspltw128 v46,v49,0
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vperm128 v45,v48,v63,v7
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v5,v47,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vspltw v29,v30,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xAA));
	// vspltw v27,v30,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// vperm128 v44,v46,v63,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v13,r11,r29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v2,v45,0
	_mm_store_ps(ctx.v2.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v45.u32)));
	// lvx128 v12,r11,r17
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r30
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v28,v4,v13,v3
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vcuxwfp128 v26,v44,0
	_mm_store_ps(ctx.v26.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v44.u32)));
	// li r11,12
	ctx.r11.s64 = 12;
	// vmaddfp v25,v5,v8,v9
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v24,v2,v8,v9
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v23,v29,v12,v28
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v22,v26,v8,v9
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vspltw128 v43,v25,2
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0x55));
	// vspltw v21,v25,1
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0xAA));
	// vspltw v19,v25,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0xFF));
	// vspltw128 v42,v24,2
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0x55));
	// vmulfp128 v18,v43,v13
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v17,v24,1
	_mm_store_si128((__m128i*)ctx.v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0xAA));
	// vspltw v16,v24,0
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0xFF));
	// vmaddfp v20,v27,v11,v23
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v23.f32)));
	// vspltw128 v41,v22,2
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x55));
	// vmulfp128 v15,v42,v13
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v14,v22,1
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0xAA));
	// vspltw v10,v22,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0xFF));
	// vmulfp128 v6,v41,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v21,v12,v18
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v18.f32)));
	// stvx128 v20,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v4,v17,v12,v15
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v15.f32)));
	// vmaddfp v3,v14,v12,v6
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v19,v11,v5
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v12,v16,v11,v4
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v10,v11,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v2,v13,v0,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v30,v12,v0,v0
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v29,v11,v0,v0
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v40,v2,228
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x1B));
	// vpermwi128 v39,v30,228
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x1B));
	// vcfpuxws128 v38,v40,0
	ctx.v38.v4sf = vec_convert_to_float(ctx.v40.v4si);
	// vcfpuxws128 v36,v39,0
	ctx.v36.v4sf = vec_convert_to_float(ctx.v39.v4si);
	// vpkuwus128 v37,v38,v63
	ctx.v37.v8hi = vec_pack_unsigned(ctx.v38.v4si, ctx.v63.v4si);
	// vpkuhus128 v35,v37,v63
	ctx.v35.v16qi = vec_pack_unsigned(ctx.v37.v8hi, ctx.v63.v8hi);
	// vpermwi128 v32,v29,228
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// vpkuwus128 v33,v36,v63
	ctx.v33.v8hi = vec_pack_unsigned(ctx.v36.v4si, ctx.v63.v4si);
	// vspltw128 v34,v35,0
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
	// vcfpuxws128 v59,v32,0
	ctx.v59.v4sf = vec_convert_to_float(ctx.v32.v4si);
	// vpkuhus128 v61,v33,v63
	ctx.v61.v16qi = vec_pack_unsigned(ctx.v33.v8hi, ctx.v63.v8hi);
	// vspltw128 v58,v61,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// stvewx128 v34,r22,r11
	ea = (ctx.r22.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkuwus128 v57,v59,v63
	ctx.v57.v8hi = vec_pack_unsigned(ctx.v59.v4si, ctx.v63.v4si);
	// stvewx128 v58,r22,r17
	ea = (ctx.r22.u32 + ctx.r17.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkuhus128 v56,v57,v63
	ctx.v56.v16qi = vec_pack_unsigned(ctx.v57.v8hi, ctx.v63.v8hi);
	// vspltw128 v55,v56,0
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// stvewx128 v55,r22,r4
	ea = (ctx.r22.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 24, temp.u32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 28, temp.u32);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828fea40
	if (ctx.cr6.lt) goto loc_828FEA40;
loc_828FEFC4:
	// lwz r8,44(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	// addi r16,r20,44
	ctx.r16.s64 = ctx.r20.s64 + 44;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828feffc
	if (!ctx.cr6.gt) goto loc_828FEFFC;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,160(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r0,r24
loc_828FEFFC:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828ff6c4
	if (!ctx.cr6.gt) goto loc_828FF6C4;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r21,r20,48
	ctx.r21.s64 = ctx.r20.s64 + 48;
	// vupkd3d128 v54,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v54 = vTemp;
	// vspltw128 v61,v54,3
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x0));
loc_828FF018:
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r24,r11
	// rlwinm r10,r6,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828ff054
	if (!ctx.cr6.eq) goto loc_828FF054;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// ori r8,r6,2
	ctx.r8.u64 = ctx.r6.u64 | 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
loc_828FF054:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ff404
	if (ctx.cr6.eq) goto loc_828FF404;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_828FF074:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828ff074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828FF074;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x828ff264
	if (!ctx.cr6.gt) goto loc_828FF264;
	// rlwinm r26,r27,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
loc_828FF0A0:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// blt cr6,0x828ff24c
	if (ctx.cr6.lt) goto loc_828FF24C;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x828ff24c
	if (!ctx.cr6.lt) goto loc_828FF24C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x828ff24c
	if (!ctx.cr6.eq) goto loc_828FF24C;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lbz r6,22(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,23(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 23);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r6,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r6.u64);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r3,21(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// fsubs f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// std r6,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r6.u64);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// std r3,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r3.u64);
	// fcmpu cr6,f4,f28
	ctx.cr6.compare(ctx.f4.f64, ctx.f28.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// lfd f3,432(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// rlwinm r10,r3,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// lbz r20,14(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lfd f13,296(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// lfd f3,328(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// lfd f9,312(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// std r20,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r20.u64);
	// lfd f12,376(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r6,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r6.u64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfsx f12,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// addi r3,r5,20
	ctx.r3.s64 = ctx.r5.s64 + 20;
	// fsel f11,f12,f31,f11
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fcfid f13,f3
	ctx.f13.f64 = double(ctx.f3.s64);
	// fmsubs f10,f8,f30,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f9,f7
	ctx.f9.f64 = double(float(ctx.f7.f64));
	// fmsubs f7,f4,f30,f31
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// lfd f6,440(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// fmsubs f3,f9,f30,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f12,f5,f30,f31
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fadds f10,f4,f7
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f8,f30,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmuls f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmsubs f13,f6,f30,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f4,f6,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fadds f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsqrt f0,f3
	ctx.f0.f64 = sqrt(ctx.f3.f64);
	// fdiv f13,f2,f0
	ctx.f13.f64 = ctx.f2.f64 / ctx.f0.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f9,240(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x828FF240;
	sub_8281B1A8(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_828FF24C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x828ff0a0
	if (!ctx.cr0.eq) goto loc_828FF0A0;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_828FF264:
	// lbz r4,23(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 23);
	// lbz r10,13(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// lbz r7,14(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// lbz r6,21(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// lbz r3,15(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// std r4,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r4.u64);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lbz r11,22(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r10,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r10.u64);
	// lfd f12,424(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f0,392(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r11.u64);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfd f6,200(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfd f13,344(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// fmsubs f8,f4,f30,f31
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fmsubs f5,f12,f30,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f31.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// fmsubs f7,f13,f30,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f3,f9,f30,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f4,f11,f30,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmuls f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmsubs f6,f10,f30,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f13,f7,f4,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f12,f6,f3,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmuls f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f10,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fsubs f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f13,f4,f9
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fsubs f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f0,f12,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x828ff370
	if (ctx.cr6.lt) goto loc_828FF370;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f2,f0
	ctx.f12.f64 = ctx.f2.f64 / ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x828ff374
	goto loc_828FF374;
loc_828FF370:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_828FF374:
	// lfs f12,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r5,12
	ctx.r3.s64 = ctx.r5.s64 + 12;
	// bl 0x8281b1a8
	ctx.lr = 0x828FF3A0;
	sub_8281B1A8(ctx, base);
	// fmuls f10,f7,f3
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmsubs f0,f5,f8,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmsubs f13,f7,f4,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f12,f3,f6,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x828ff3dc
	if (ctx.cr6.lt) goto loc_828FF3DC;
	// fsqrt f11,f11
	ctx.f11.f64 = sqrt(ctx.f11.f64);
	// fdiv f10,f2,f11
	ctx.f10.f64 = ctx.f2.f64 / ctx.f11.f64;
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// b 0x828ff3e0
	goto loc_828FF3E0;
loc_828FF3DC:
	// fmr f11,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f28.f64;
loc_828FF3E0:
	// fmuls f12,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r5,16
	ctx.r3.s64 = ctx.r5.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x828FF404;
	sub_8281B1A8(ctx, base);
loc_828FF404:
	// lvx128 v53,r0,r9
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v13,v61,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// lvx128 v52,r9,r19
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// vperm128 v5,v53,v52,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r20,r1,448
	ctx.r20.s64 = ctx.r1.s64 + 448;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// vsel v6,v5,v13,v31
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v5,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,48
	ctx.r3.s64 = 48;
	// li r25,47
	ctx.r25.s64 = 47;
	// stvx128 v6,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r19
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r11
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltw128 v48,v49,0
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vperm128 v47,v48,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v30,v47,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v30.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmaddfp v5,v30,v8,v9
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v5,r14,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r10
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r10,r19
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v44,v46,v45,v3
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vperm128 v42,v43,v63,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v29,v42,0
	_mm_store_ps(ctx.v29.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmaddfp v4,v29,v8,v9
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r14,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r8,r19
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r8
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v39,v40,v41,v2
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vspltw128 v38,v39,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// lvx128 v2,r0,r20
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v37,v38,v63,v7
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v28,v37,0
	_mm_store_ps(ctx.v28.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmaddfp v3,v28,v8,v9
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v3,r14,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r11,35(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 35);
	// lvx128 v36,r9,r25
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lvx128 v35,r0,r7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhzx r8,r10,r18
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// vperm128 v34,v35,v36,v2
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// vspltw128 v33,v34,0
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), 0xFF));
	// lvx128 v59,r11,r30
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r17
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v33,v63,v1
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvx128 v32,r11,r29
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v55,v57,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmulfp128 v62,v55,v60
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v54,v62,3
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vmulfp128 v11,v32,v54
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v12,v56,v54
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v13,v58,v54
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v10,v59,v54
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v54.f32)));
	// ble cr6,0x828ff5d4
	if (!ctx.cr6.gt) goto loc_828FF5D4;
	// lbz r11,34(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 34);
	// vspltw128 v2,v62,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r7,r8,r18
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r18.u32);
	// rotlwi r11,r7,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r17
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r29
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r30
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
	// ble cr6,0x828ff5d4
	if (!ctx.cr6.gt) goto loc_828FF5D4;
	// lbz r11,33(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 33);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// vspltw128 v2,v62,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r18
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r17
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r29
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r30
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
	// ble cr6,0x828ff5d4
	if (!ctx.cr6.gt) goto loc_828FF5D4;
	// lbz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// vspltw128 v2,v62,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r18
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r18.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r17
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r29
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r30
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
loc_828FF5D4:
	// vspltw128 v53,v5,2
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x55));
	// li r11,12
	ctx.r11.s64 = 12;
	// vspltw128 v52,v4,2
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x55));
	// li r10,20
	ctx.r10.s64 = 20;
	// vspltw128 v51,v3,2
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x55));
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// vspltw v2,v6,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0x55));
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// vmulfp128 v30,v53,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v29,v5,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xAA));
	// vmulfp128 v28,v52,v11
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v27,v4,1
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xAA));
	// vmulfp128 v26,v51,v11
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v25,v3,1
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xAA));
	// vmaddfp v24,v2,v11,v10
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vspltw v23,v6,1
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xAA));
	// vspltw v22,v5,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// addi r24,r24,40
	ctx.r24.s64 = ctx.r24.s64 + 40;
	// vspltw v21,v4,0
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vspltw v20,v3,0
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vspltw v19,v6,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vmaddfp v18,v29,v12,v30
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v17,v27,v12,v28
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v16,v25,v12,v26
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v15,v23,v12,v24
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v12,v22,v13,v18
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v18.f32)));
	// vmaddfp v11,v21,v13,v17
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v17.f32)));
	// vmaddfp v10,v20,v13,v16
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v16.f32)));
	// vmaddfp v14,v19,v13,v15
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v15.f32)));
	// vmaddfp v13,v12,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v11,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v10,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v14,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v50,v13,228
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x1B));
	// vpermwi128 v49,v12,228
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x1B));
	// vpermwi128 v48,v11,228
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x1B));
	// vcfpuxws128 v47,v50,0
	ctx.v47.v4sf = vec_convert_to_float(ctx.v50.v4si);
	// vcfpuxws128 v46,v49,0
	ctx.v46.v4sf = vec_convert_to_float(ctx.v49.v4si);
	// vcfpuxws128 v45,v48,0
	ctx.v45.v4sf = vec_convert_to_float(ctx.v48.v4si);
	// vpkuwus128 v44,v47,v63
	ctx.v44.v8hi = vec_pack_unsigned(ctx.v47.v4si, ctx.v63.v4si);
	// vpkuwus128 v43,v46,v63
	ctx.v43.v8hi = vec_pack_unsigned(ctx.v46.v4si, ctx.v63.v4si);
	// vpkuwus128 v42,v45,v63
	ctx.v42.v8hi = vec_pack_unsigned(ctx.v45.v4si, ctx.v63.v4si);
	// vpkuhus128 v41,v44,v63
	ctx.v41.v16qi = vec_pack_unsigned(ctx.v44.v8hi, ctx.v63.v8hi);
	// vpkuhus128 v40,v43,v63
	ctx.v40.v16qi = vec_pack_unsigned(ctx.v43.v8hi, ctx.v63.v8hi);
	// vpkuhus128 v39,v42,v63
	ctx.v39.v16qi = vec_pack_unsigned(ctx.v42.v8hi, ctx.v63.v8hi);
	// vspltw128 v38,v41,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0xFF));
	// vspltw128 v37,v40,0
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v36,v39,0
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// stvewx128 v38,r22,r11
	ea = (ctx.r22.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r22,r17
	ea = (ctx.r22.u32 + ctx.r17.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r22,r10
	ea = (ctx.r22.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 24, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 28, temp.u32);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828ff018
	if (ctx.cr6.lt) goto loc_828FF018;
loc_828FF6C4:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r7,r9,52
	ctx.r7.s64 = ctx.r9.s64 + 52;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// blt cr6,0x828fe9c8
	if (ctx.cr6.lt) goto loc_828FE9C8;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r24,708(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r23,716(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_828FF6FC:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828ff734
	if (ctx.cr6.eq) goto loc_828FF734;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828ff720
	if (!ctx.cr6.eq) goto loc_828FF720;
	// bl 0x822900a0
	ctx.lr = 0x828FF71C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_828FF720:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FF734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FF734:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r25,r24,40
	ctx.r25.s64 = ctx.r24.s64 + 40;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828ff9dc
	if (!ctx.cr6.gt) goto loc_828FF9DC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x828ff9dc
	if (!ctx.cr6.eq) goto loc_828FF9DC;
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x828ff9dc
	if (!ctx.cr6.gt) goto loc_828FF9DC;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r27,r24,16
	ctx.r27.s64 = ctx.r24.s64 + 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828ff9d4
	if (!ctx.cr6.gt) goto loc_828FF9D4;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f29,-1004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1004);
	ctx.f29.f64 = double(temp.f32);
loc_828FF784:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lfs f0,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,292(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f29
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// lfs f5,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f3,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f27,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f25,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f11,f4,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f13,f10,f4,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f12,f9,f4,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f11,f8,f2,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f10,f1,f2,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f9,f7,f2,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fadds f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f5,f9,f27
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fsubs f4,f8,f25
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f25.f64));
	// fsubs f3,f7,f24
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f24.f64));
	// fsubs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmuls f1,f4,f26
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmuls f0,f3,f26
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// fmuls f13,f2,f26
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// fadds f12,f25,f1
	ctx.f12.f64 = double(float(ctx.f25.f64 + ctx.f1.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fadds f11,f24,f0
	ctx.f11.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r7,23(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lfs f9,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f8,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f9,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f7,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f7,f6,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64));
	// lfs f3,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f9,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f1,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lbz r4,21(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// fmadds f1,f7,f1,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lbz r5,22(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// fmadds f8,f10,f6,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f5,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lfs f27,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f4,200(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fmadds f5,f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfd f26,192(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f26
	ctx.f10.f64 = double(ctx.f26.s64);
	// lfs f26,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f26.f64 = double(temp.f32);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fmadds f9,f3,f6,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcfid f6,f4
	ctx.f6.f64 = double(ctx.f4.s64);
	// fmadds f3,f12,f28,f1
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmsubs f2,f0,f30,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmadds f1,f13,f7,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f9.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmadds f13,f27,f28,f5
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f5.f64));
	// fmadds f11,f11,f28,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmsubs f12,f4,f30,f31
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmsubs f10,f0,f30,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f6,f9,f26
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fmuls f5,f8,f26
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmuls f4,f7,f26
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fadds f3,f6,f2
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x828FF990;
	sub_8281B1A8(ctx, base);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823d29c0
	ctx.lr = 0x828FF9A0;
	sub_823D29C0(ctx, base);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8281b1a8
	ctx.lr = 0x828FF9AC;
	sub_8281B1A8(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x828FF9B8;
	sub_8281B1A8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r7,336(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828ff784
	if (ctx.cr6.lt) goto loc_828FF784;
loc_828FF9D4:
	// lwz r23,716(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r24,708(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
loc_828FF9DC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r23.u32);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r24,44
	ctx.r11.s64 = ctx.r24.s64 + 44;
	// stw r10,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r10.u32);
	// addi r11,r24,52
	ctx.r11.s64 = ctx.r24.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// addi r11,r26,128
	ctx.r11.s64 = ctx.r26.s64 + 128;
	// lwz r9,128(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x828fff58
	ctx.lr = 0x828FFA0C;
	sub_828FFF58(ctx, base);
loc_828FFA0C:
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ffa3c
	if (ctx.cr6.eq) goto loc_828FFA3C;
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x828ffa3c
	if (ctx.cr6.eq) goto loc_828FFA3C;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,128(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// lwz r4,52(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// bl 0x82902ec8
	ctx.lr = 0x828FFA38;
	sub_82902EC8(ctx, base);
	// stw r23,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r23.u32);
loc_828FFA3C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b24
	ctx.lr = 0x828FFA48;
	__restfpr_24(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFA4C"))) PPC_WEAK_FUNC(sub_828FFA4C);
PPC_FUNC_IMPL(__imp__sub_828FFA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFA50"))) PPC_WEAK_FUNC(sub_828FFA50);
PPC_FUNC_IMPL(__imp__sub_828FFA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r10,r4,864
	ctx.r10.s64 = ctx.r4.s64 * 864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFA60"))) PPC_WEAK_FUNC(sub_828FFA60);
PPC_FUNC_IMPL(__imp__sub_828FFA60) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r10,r4,864
	ctx.r10.s64 = ctx.r4.s64 * 864;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82900108
	ctx.lr = 0x828FFA80;
	sub_82900108(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// bne cr6,0x828ffa90
	if (!ctx.cr6.eq) goto loc_828FFA90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828FFA90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFAA0"))) PPC_WEAK_FUNC(sub_828FFAA0);
PPC_FUNC_IMPL(__imp__sub_828FFAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r10,r4,864
	ctx.r10.s64 = ctx.r4.s64 * 864;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828FFAB4"))) PPC_WEAK_FUNC(sub_828FFAB4);
PPC_FUNC_IMPL(__imp__sub_828FFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFAB8"))) PPC_WEAK_FUNC(sub_828FFAB8);
PPC_FUNC_IMPL(__imp__sub_828FFAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x828FFAC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,500
	ctx.r31.s64 = ctx.r30.s64 + 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82832990
	ctx.lr = 0x828FFAD4;
	sub_82832990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268fdb0
	ctx.lr = 0x828FFAE0;
	sub_8268FDB0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,24
	ctx.r4.s64 = 24;
	// stb r10,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r10.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r8,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// li r27,3
	ctx.r27.s64 = 3;
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stb r5,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r5.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r10,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r10.u8);
	// stb r4,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r4.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r9,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r9.u8);
	// stb r27,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r27.u8);
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r10,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r29.u8);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stw r25,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r25.u32);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// bl 0x8268fed0
	ctx.lr = 0x828FFBD4;
	sub_8268FED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82832990
	ctx.lr = 0x828FFBDC;
	sub_82832990(ctx, base);
	// lis r5,-31905
	ctx.r5.s64 = -2090926080;
	// lwz r11,-26360(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -26360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ffc14
	if (ctx.cr6.eq) goto loc_828FFC14;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828ffc0c
	if (!ctx.cr6.eq) goto loc_828FFC0C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24972);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828ffc14
	if (ctx.cr6.eq) goto loc_828FFC14;
loc_828FFC0C:
	// addi r3,r30,532
	ctx.r3.s64 = ctx.r30.s64 + 532;
	// bl 0x82832990
	ctx.lr = 0x828FFC14;
	sub_82832990(ctx, base);
loc_828FFC14:
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ffc48
	if (!ctx.cr6.gt) goto loc_828FFC48;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_828FFC24:
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828ffc78
	ctx.lr = 0x828FFC34;
	sub_828FFC78(ctx, base);
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,640
	ctx.r31.s64 = ctx.r31.s64 + 640;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ffc24
	if (ctx.cr6.lt) goto loc_828FFC24;
loc_828FFC48:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,860(r30)
	PPC_STORE_U32(ctx.r30.u32 + 860, ctx.r11.u32);
	// beq cr6,0x828ffc70
	if (ctx.cr6.eq) goto loc_828FFC70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828FFC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828FFC70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFC78"))) PPC_WEAK_FUNC(sub_828FFC78);
PPC_FUNC_IMPL(__imp__sub_828FFC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x828FFC80;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82901bc0
	ctx.lr = 0x828FFC98;
	sub_82901BC0(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r28,24
	ctx.r28.s64 = 24;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// li r27,2
	ctx.r27.s64 = 2;
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// addi r10,r30,500
	ctx.r10.s64 = ctx.r30.s64 + 500;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stb r3,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r3.u8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// stb r27,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r27.u8);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r4,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r4.u8);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r25,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r25.u32);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r28,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// bl 0x82901ce0
	ctx.lr = 0x828FFD8C;
	sub_82901CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82832990
	ctx.lr = 0x828FFD94;
	sub_82832990(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82901c70
	ctx.lr = 0x828FFD9C;
	sub_82901C70(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFDA4"))) PPC_WEAK_FUNC(sub_828FFDA4);
PPC_FUNC_IMPL(__imp__sub_828FFDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFDA8"))) PPC_WEAK_FUNC(sub_828FFDA8);
PPC_FUNC_IMPL(__imp__sub_828FFDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x828FFDB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82475bf8
	ctx.lr = 0x828FFDC4;
	sub_82475BF8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r10.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r5,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r5.u8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r4,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r4.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stb r10,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r10.u8);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// addi r11,r31,500
	ctx.r11.s64 = ctx.r31.s64 + 500;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stb r3,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r3.u8);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r31,304
	ctx.r10.s64 = ctx.r31.s64 + 304;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// add r28,r5,r3
	ctx.r28.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,140
	ctx.r5.s64 = 140;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r6,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r6.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// bl 0x82cb1160
	ctx.lr = 0x828FFEC4;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828328f8
	ctx.lr = 0x828FFECC;
	sub_828328F8(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x828FFEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFEE8"))) PPC_WEAK_FUNC(sub_828FFEE8);
PPC_FUNC_IMPL(__imp__sub_828FFEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FFEF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82832c90
	ctx.lr = 0x828FFEFC;
	sub_82832C90(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// bl 0x82832c90
	ctx.lr = 0x828FFF04;
	sub_82832C90(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x82832c90
	ctx.lr = 0x828FFF0C;
	sub_82832C90(ctx, base);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x828fff48
	if (!ctx.cr6.gt) goto loc_828FFF48;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828FFF24:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82832c90
	ctx.lr = 0x828FFF34;
	sub_82832C90(ctx, base);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,640
	ctx.r30.s64 = ctx.r30.s64 + 640;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828fff24
	if (ctx.cr6.lt) goto loc_828FFF24;
loc_828FFF48:
	// stw r28,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFF54"))) PPC_WEAK_FUNC(sub_828FFF54);
PPC_FUNC_IMPL(__imp__sub_828FFF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFF58"))) PPC_WEAK_FUNC(sub_828FFF58);
PPC_FUNC_IMPL(__imp__sub_828FFF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x828FFF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76378
	ctx.lr = 0x828FFF84;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76f10
	ctx.lr = 0x828FFF98;
	sub_82E76F10(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bea998
	ctx.lr = 0x828FFFA4;
	sub_82BEA998(ctx, base);
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x828FFFB0;
	sub_82E77010(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFFB8"))) PPC_WEAK_FUNC(sub_828FFFB8);
PPC_FUNC_IMPL(__imp__sub_828FFFB8) {
	PPC_FUNC_PROLOGUE();
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r3,r3,532
	ctx.r3.s64 = ctx.r3.s64 + 532;
	// b 0x82902ec8
	sub_82902EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828FFFC4"))) PPC_WEAK_FUNC(sub_828FFFC4);
PPC_FUNC_IMPL(__imp__sub_828FFFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828FFFC8"))) PPC_WEAK_FUNC(sub_828FFFC8);
PPC_FUNC_IMPL(__imp__sub_828FFFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x828FFFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x828fdea8
	ctx.lr = 0x828FFFE8;
	sub_828FDEA8(ctx, base);
	// addi r29,r31,848
	ctx.r29.s64 = ctx.r31.s64 + 848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829019b0
	ctx.lr = 0x828FFFF8;
	sub_829019B0(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,-29128
	ctx.r9.s64 = ctx.r10.s64 + -29128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r9.u32);
	// bl 0x82475d80
	ctx.lr = 0x82900010;
	sub_82475D80(ctx, base);
	// lwz r8,860(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82900038
	if (ctx.cr6.eq) goto loc_82900038;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828ffda8
	ctx.lr = 0x82900038;
	sub_828FFDA8(ctx, base);
loc_82900038:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900040"))) PPC_WEAK_FUNC(sub_82900040);
PPC_FUNC_IMPL(__imp__sub_82900040) {
	PPC_FUNC_PROLOGUE();
	// addic. r3,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r3.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// bne 0x82900050
	if (!ctx.cr0.eq) goto loc_82900050;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82900050:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r10,-29128
	ctx.r9.s64 = ctx.r10.s64 + -29128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82475d80
	sub_82475D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900060"))) PPC_WEAK_FUNC(sub_82900060);
PPC_FUNC_IMPL(__imp__sub_82900060) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,852(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829000a8
	if (!ctx.cr6.gt) goto loc_829000A8;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
loc_8290008C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x829000ac
	if (ctx.cr6.eq) goto loc_829000AC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8290008c
	if (ctx.cr6.lt) goto loc_8290008C;
loc_829000A8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_829000AC:
	// lwz r11,860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829000e0
	if (ctx.cr6.eq) goto loc_829000E0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829000E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829000E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,848
	ctx.r3.s64 = ctx.r30.s64 + 848;
	// bl 0x82901928
	ctx.lr = 0x829000F0;
	sub_82901928(ctx, base);
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

__attribute__((alias("__imp__sub_82900108"))) PPC_WEAK_FUNC(sub_82900108);
PPC_FUNC_IMPL(__imp__sub_82900108) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,852(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82900138
	if (!ctx.cr6.gt) goto loc_82900138;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
loc_8290011C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8290013c
	if (ctx.cr6.eq) goto loc_8290013C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,640
	ctx.r10.s64 = ctx.r10.s64 + 640;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290011c
	if (ctx.cr6.lt) goto loc_8290011C;
loc_82900138:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8290013C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900158"))) PPC_WEAK_FUNC(sub_82900158);
PPC_FUNC_IMPL(__imp__sub_82900158) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,852(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82900188
	if (!ctx.cr6.gt) goto loc_82900188;
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
loc_8290016C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82900190
	if (ctx.cr6.eq) goto loc_82900190;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8290016c
	if (ctx.cr6.lt) goto loc_8290016C;
loc_82900188:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82900190:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82900198"))) PPC_WEAK_FUNC(sub_82900198);
PPC_FUNC_IMPL(__imp__sub_82900198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x829001A0;
	__savegprlr_28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r7,15
	ctx.r7.s64 = 15;
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,3
	ctx.r6.s64 = 3;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lvx128 v62,r5,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwzx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// divw. r9,r9,r6
	ctx.r9.s32 = ctx.r9.s32 / ctx.r6.s32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x829002a8
	if (!ctx.cr0.gt) goto loc_829002A8;
	// vspltw128 v62,v63,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r4,11
	ctx.r4.s64 = 11;
loc_829001EC:
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rotlwi r5,r6,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// rotlwi r6,r3,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 5);
	// rotlwi r3,r31,5
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 5);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// add r29,r5,r10
	ctx.r29.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r28,r3,r10
	ctx.r28.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rotlwi r7,r7,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r5,r30,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 5);
	// rotlwi r3,r31,5
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 5);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvsl v0,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lvsl v7,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lvx128 v61,r7,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r6,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v57,r0,r6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r5
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v56,v57,v59,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v54,r5,r4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmulfp128 v52,v58,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// vperm128 v53,v55,v54,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vsubfp128 v51,v58,v56
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v50,v53,v56
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v49,v63,v52
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v48,v51,135
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x78));
	// vpermwi128 v5,v51,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x9C));
	// vpermwi128 v47,v50,99
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x9C));
	// vpermwi128 v4,v50,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x78));
	// vmulfp128 v3,v47,v48
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v48.f32)));
	// vnmsubfp v2,v4,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v46,v2,v49
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v49.f32), 0xEF));
	// vspltw128 v45,v46,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvewx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x829001ec
	if (!ctx.cr0.eq) goto loc_829001EC;
loc_829002A8:
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829002AC"))) PPC_WEAK_FUNC(sub_829002AC);
PPC_FUNC_IMPL(__imp__sub_829002AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829002B0"))) PPC_WEAK_FUNC(sub_829002B0);
PPC_FUNC_IMPL(__imp__sub_829002B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829002C8"))) PPC_WEAK_FUNC(sub_829002C8);
PPC_FUNC_IMPL(__imp__sub_829002C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x829002D0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ac0
	ctx.lr = 0x829002D8;
	__savefpr_18(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82900300;
	sub_82CB1160(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r8.u64);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82900570
	if (ctx.cr6.eq) goto loc_82900570;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82900570
	if (ctx.cr6.eq) goto loc_82900570;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f8,f6,f12,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f2,f11,f10,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f12,f11,f3,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f11,f1,f11,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f10,f13,f31,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fadds f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f7,f10,f6
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f24.f64 = double(temp.f32);
	// lfs f30,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f29,f30
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f27,f6,f30
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// lfs f26,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f30,f5,f30
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f25,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f28,f2,f4,f28
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f28.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f23,f6,f31
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f22,f29,f31
	ctx.f22.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f31,f5,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f21,f10,f24
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// fmadds f27,f3,f4,f27
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f27.f64));
	// fmadds f4,f1,f4,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmadds f30,f9,f13,f28
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f28,f10,f13,f27
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f27.f64));
	// lfs f27,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f4
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fadds f4,f30,f12
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fadds f30,f28,f7
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fadds f28,f13,f11
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// fmuls f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// lfs f18,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f23,f3,f26,f23
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f26.f64 + ctx.f23.f64));
	// lfs f19,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f31,f1,f26,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f31.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f22,f2,f26,f22
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f26.f64 + ctx.f22.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f13,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fdivs f18,f13,f18
	ctx.f18.f64 = double(float(ctx.f13.f64 / ctx.f18.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fdivs f19,f13,f19
	ctx.f19.f64 = double(float(ctx.f13.f64 / ctx.f19.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f6,f27,f21
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f21.f64));
	// lfs f20,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f20.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f6,f1,f25,f5
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f5.f64));
	// fmadds f13,f2,f25,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f25.f64 + ctx.f29.f64));
	// li r9,8
	ctx.r9.s64 = 8;
	// fmadds f5,f10,f20,f23
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f23.f64));
	// fmadds f10,f8,f20,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f20.f64 + ctx.f31.f64));
	// fmadds f2,f9,f20,f22
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f20.f64 + ctx.f22.f64));
	// fmuls f1,f28,f18
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f18.f64));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f3,f3,f25,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f0,f8,f24,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f6.f64));
	// fmadds f1,f9,f24,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 + ctx.f13.f64));
	// fadds f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f8,f4,f18
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f18.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f6,f18,f30
	ctx.f6.f64 = double(float(ctx.f18.f64 * ctx.f30.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f3,f1,f12
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f1,f13,f19
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f5,f19
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f19.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f9,f19
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f19.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8290055C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8290055c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8290055C;
loc_82900570:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b0c
	ctx.lr = 0x8290057C;
	__restfpr_18(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900580"))) PPC_WEAK_FUNC(sub_82900580);
PPC_FUNC_IMPL(__imp__sub_82900580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82900588;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-29104
	ctx.r10.s64 = ctx.r11.s64 + -29104;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// bl 0x829017a8
	ctx.lr = 0x829005D4;
	sub_829017A8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r27,r31,124
	ctx.r27.s64 = ctx.r31.s64 + 124;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8292fae8
	ctx.lr = 0x82900610;
	sub_8292FAE8(ctx, base);
	// addi r4,r29,752
	ctx.r4.s64 = ctx.r29.s64 + 752;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825ea938
	ctx.lr = 0x8290061C;
	sub_825EA938(ctx, base);
	// addi r4,r29,304
	ctx.r4.s64 = ctx.r29.s64 + 304;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x8290062C;
	sub_82CB1160(ctx, base);
	// lwz r8,988(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82900680
	if (ctx.cr6.eq) goto loc_82900680;
	// lwz r11,944(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 944);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82900680
	if (!ctx.cr6.eq) goto loc_82900680;
	// lwz r11,1000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82900680
	if (!ctx.cr6.gt) goto loc_82900680;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82900680
	if (!ctx.cr6.eq) goto loc_82900680;
	// addi r4,r29,996
	ctx.r4.s64 = ctx.r29.s64 + 996;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263e0d8
	ctx.lr = 0x8290066C;
	sub_8263E0D8(ctx, base);
	// addi r4,r29,1008
	ctx.r4.s64 = ctx.r29.s64 + 1008;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8263e0d8
	ctx.lr = 0x82900678;
	sub_8263E0D8(ctx, base);
	// lfs f0,984(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_82900680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290068C"))) PPC_WEAK_FUNC(sub_8290068C);
PPC_FUNC_IMPL(__imp__sub_8290068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900690"))) PPC_WEAK_FUNC(sub_82900690);
PPC_FUNC_IMPL(__imp__sub_82900690) {
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
	// bl 0x829006e0
	ctx.lr = 0x829006B0;
	sub_829006E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829006c8
	if (ctx.cr6.eq) goto loc_829006C8;
	// bl 0x82294a58
	ctx.lr = 0x829006C4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829006C8:
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

__attribute__((alias("__imp__sub_829006E0"))) PPC_WEAK_FUNC(sub_829006E0);
PPC_FUNC_IMPL(__imp__sub_829006E0) {
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
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x823721d0
	ctx.lr = 0x829006FC;
	sub_823721D0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823721d0
	ctx.lr = 0x82900704;
	sub_823721D0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x825ece10
	ctx.lr = 0x8290070C;
	sub_825ECE10(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x824305e0
	ctx.lr = 0x82900714;
	sub_824305E0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824305e0
	ctx.lr = 0x8290071C;
	sub_824305E0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29108
	ctx.r10.s64 = ctx.r11.s64 + -29108;
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

__attribute__((alias("__imp__sub_8290073C"))) PPC_WEAK_FUNC(sub_8290073C);
PPC_FUNC_IMPL(__imp__sub_8290073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900740"))) PPC_WEAK_FUNC(sub_82900740);
PPC_FUNC_IMPL(__imp__sub_82900740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82900748;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82900858
	if (!ctx.cr6.gt) goto loc_82900858;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// lis r24,-32246
	ctx.r24.s64 = -2113273856;
	// lis r21,-32246
	ctx.r21.s64 = -2113273856;
loc_82900780:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829007f4
	if (ctx.cr6.eq) goto loc_829007F4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31900(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 31900);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829007f4
	if (ctx.cr6.lt) goto loc_829007F4;
	// lfs f13,31564(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 31564);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829007f4
	if (ctx.cr6.gt) goto loc_829007F4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x829007f4
	if (ctx.cr6.lt) goto loc_829007F4;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829007f4
	if (!ctx.cr6.lt) goto loc_829007F4;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829007f4
	if (ctx.cr6.eq) goto loc_829007F4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ab8c0
	ctx.lr = 0x829007EC;
	sub_822AB8C0(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82900844
	goto loc_82900844;
loc_829007F4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82900830
	if (!ctx.cr6.gt) goto loc_82900830;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82900830;
	sub_82294520(ctx, base);
loc_82900830:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82900844
	if (ctx.cr0.eq) goto loc_82900844;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_82900844:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82900780
	if (ctx.cr6.lt) goto loc_82900780;
loc_82900858:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82900864"))) PPC_WEAK_FUNC(sub_82900864);
PPC_FUNC_IMPL(__imp__sub_82900864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82900868"))) PPC_WEAK_FUNC(sub_82900868);
PPC_FUNC_IMPL(__imp__sub_82900868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,11
	ctx.r11.s64 = 11;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-6048
	ctx.r8.s64 = ctx.r10.s64 + -6048;
	// addi r7,r9,31744
	ctx.r7.s64 = ctx.r9.s64 + 31744;
	// lvx128 v61,r3,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vperm128 v60,v63,v61,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v13,r7,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v58,v59,v62,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcuxwfp128 v11,v58,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmaddfp v1,v11,v12,v13
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829008B4"))) PPC_WEAK_FUNC(sub_829008B4);
PPC_FUNC_IMPL(__imp__sub_829008B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829008B8"))) PPC_WEAK_FUNC(sub_829008B8);
PPC_FUNC_IMPL(__imp__sub_829008B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,31728
	ctx.r10.s64 = ctx.r11.s64 + 31728;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v1,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v62,v0,228
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x1B));
	// vcfpuxws128 v61,v62,0
	ctx.v61.v4sf = vec_convert_to_float(ctx.v62.v4si);
	// vpkuwus128 v60,v61,v63
	ctx.v60.v8hi = vec_pack_unsigned(ctx.v61.v4si, ctx.v63.v4si);
	// vpkuhus128 v59,v60,v63
	ctx.v59.v16qi = vec_pack_unsigned(ctx.v60.v8hi, ctx.v63.v8hi);
	// vspltw128 v58,v59,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// stvewx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829008E8"))) PPC_WEAK_FUNC(sub_829008E8);
PPC_FUNC_IMPL(__imp__sub_829008E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x829008F0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r7,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r29,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82900740
	ctx.lr = 0x8290093C;
	sub_82900740(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// li r11,38
	ctx.r11.s64 = 38;
loc_82900948:
	// dcbt r0,r10
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bne 0x82900948
	if (!ctx.cr0.eq) goto loc_82900948;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82901754
	if (!ctx.cr6.gt) goto loc_82901754;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r11,-26480
	ctx.r10.s64 = ctx.r11.s64 + -26480;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r4,r9,-32444
	ctx.r4.s64 = ctx.r9.s64 + -32444;
	// lfs f8,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f30,-18108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -18108);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-6048
	ctx.r8.s64 = ctx.r8.s64 + -6048;
	// lfd f31,-18352(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// addi r5,r5,-6032
	ctx.r5.s64 = ctx.r5.s64 + -6032;
	// lfs f29,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// li r31,-1332
	ctx.r31.s64 = -1332;
	// lfs f7,-17776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17776);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r6,-6016
	ctx.r6.s64 = ctx.r6.s64 + -6016;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,-1316
	ctx.r3.s64 = -1316;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r28,-1348
	ctx.r28.s64 = -1348;
	// li r27,-1364
	ctx.r27.s64 = -1364;
	// lvx128 v31,r0,r5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lvx128 v9,r4,r31
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lvx128 v1,r0,r6
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lvx128 v60,r4,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-31881
	ctx.r8.s64 = -2089353216;
	// lvx128 v8,r4,r28
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-18304
	ctx.r11.s64 = ctx.r11.s64 + -18304;
	// lvx128 v0,r4,r27
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r22,11
	ctx.r22.s64 = 11;
	// li r16,32
	ctx.r16.s64 = 32;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r17,48
	ctx.r17.s64 = 48;
	// li r20,16
	ctx.r20.s64 = 16;
	// addi r14,r10,-26544
	ctx.r14.s64 = ctx.r10.s64 + -26544;
	// addi r5,r9,-26588
	ctx.r5.s64 = ctx.r9.s64 + -26588;
	// addi r31,r8,-26628
	ctx.r31.s64 = ctx.r8.s64 + -26628;
loc_82900A28:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r21,28(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// dcbt r0,r21
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r21,r9
	// li r8,256
	ctx.r8.s64 = 256;
	// dcbt r21,r8
	// li r6,384
	ctx.r6.s64 = 384;
	// dcbt r21,r6
	// addi r24,r23,40
	ctx.r24.s64 = ctx.r23.s64 + 40;
	// lwz r10,40(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82900a88
	if (!ctx.cr6.gt) goto loc_82900A88;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// dcbt r0,r28
loc_82900A88:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82901024
	if (!ctx.cr6.gt) goto loc_82901024;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
loc_82900AA0:
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r28,r11
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82900ad4
	if (!ctx.cr6.eq) goto loc_82900AD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 | 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82900AD4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82900e8c
	if (ctx.cr6.eq) goto loc_82900E8C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82900AF4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82900af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82900AF4;
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82900ce4
	if (!ctx.cr6.gt) goto loc_82900CE4;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82900B20:
	// lwz r10,692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// blt cr6,0x82900ccc
	if (ctx.cr6.lt) goto loc_82900CCC;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82900ccc
	if (!ctx.cr6.lt) goto loc_82900CCC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x82900ccc
	if (!ctx.cr6.eq) goto loc_82900CCC;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lbz r6,22(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r6,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r6.u64);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r3,21(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// fsubs f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// std r6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r6.u64);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// std r3,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r3.u64);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r3,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// lfd f1,288(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// lbz r19,15(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// lfd f13,296(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f6,344(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// std r19,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r19.u64);
	// lfd f10,328(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// std r6,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r6.u64);
	// lfd f5,360(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// lfd f12,312(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfsx f2,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f13,f2,f8,f11
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fcfid f10,f6
	ctx.f10.f64 = double(ctx.f6.s64);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmsubs f4,f12,f7,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// fmsubs f12,f5,f7,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f1,f9,f7,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f6,f3,f7,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// fmsubs f10,f2,f7,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmsubs f11,f3,f7,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f9,f0,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fmuls f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fmadds f1,f3,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f0,f2,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f31,f13
	ctx.f12.f64 = ctx.f31.f64 / ctx.f13.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x82900CC0;
	sub_8281B1A8(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82900CCC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82900b20
	if (!ctx.cr0.eq) goto loc_82900B20;
	// lwz r29,676(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r30,684(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
loc_82900CE4:
	// lbz r6,21(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lbz r3,22(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r7,23(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// std r6,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r6.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfd f13,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// std r6,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r6.u64);
	// lfd f9,272(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// std r3,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r3.u64);
	// lfd f12,408(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// lbz r8,15(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// std r8,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r8.u64);
	// lfd f11,424(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// lfd f10,352(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fcfid f0,f10
	ctx.f0.f64 = double(ctx.f10.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmsubs f6,f13,f7,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// fmsubs f10,f2,f7,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmsubs f2,f11,f7,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f5,f12,f7,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f1,f3,f7,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmsubs f4,f9,f7,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmadds f13,f5,f2,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f12,f4,f1,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmuls f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fsubs f12,f2,f9
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f0,f13,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82900df8
	if (ctx.cr6.lt) goto loc_82900DF8;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 / ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x82900dfc
	goto loc_82900DFC;
loc_82900DF8:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_82900DFC:
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8281b1a8
	ctx.lr = 0x82900E28;
	sub_8281B1A8(ctx, base);
	// fmuls f10,f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f9,f6,f3
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f12,f2,f5
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmsubs f0,f5,f3,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f10.f64));
	// fmsubs f13,f2,f4,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f12,f1,f6,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// blt cr6,0x82900e64
	if (ctx.cr6.lt) goto loc_82900E64;
	// fsqrt f11,f11
	ctx.f11.f64 = sqrt(ctx.f11.f64);
	// fdiv f10,f31,f11
	ctx.f10.f64 = ctx.f31.f64 / ctx.f11.f64;
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// b 0x82900e68
	goto loc_82900E68;
loc_82900E64:
	// fmr f11,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f29.f64;
loc_82900E68:
	// fmuls f12,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x82900E8C;
	sub_8281B1A8(ctx, base);
loc_82900E8C:
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r22
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v5,v62,v62
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// vperm128 v4,v61,v59,v6
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// lbz r7,35(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 35);
	// li r4,20
	ctx.r4.s64 = 20;
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lvx128 v57,r11,r22
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r6,r7,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsel v30,v4,v5,v31
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vperm128 v56,v58,v57,v3
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v55,r0,r10
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r22
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lvsl v2,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// vperm128 v53,v55,v54,v2
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v52,r8,r22
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v51,v56,0
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// lvx128 v50,r0,r8
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lhzx r3,r6,r21
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r21.u32);
	// vperm128 v49,v50,v52,v6
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vspltw128 v48,v53,0
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xFF));
	// rotlwi r11,r3,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 6);
	// vperm128 v47,v51,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// vspltw v4,v30,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x55));
	// vspltw128 v46,v49,0
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vperm128 v45,v48,v63,v7
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v5,v47,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vspltw v29,v30,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xAA));
	// vspltw v27,v30,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// vperm128 v44,v46,v63,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v13,r11,r16
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v2,v45,0
	_mm_store_ps(ctx.v2.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v45.u32)));
	// lvx128 v12,r11,r20
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r17
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v28,v4,v13,v3
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)));
	// vcuxwfp128 v26,v44,0
	_mm_store_ps(ctx.v26.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v44.u32)));
	// li r11,12
	ctx.r11.s64 = 12;
	// vmaddfp v25,v5,v8,v9
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v24,v2,v8,v9
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v23,v29,v12,v28
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v22,v26,v8,v9
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vspltw128 v43,v25,2
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0x55));
	// vspltw v21,v25,1
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0xAA));
	// vspltw v19,v25,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0xFF));
	// vspltw128 v42,v24,2
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0x55));
	// vmulfp128 v18,v43,v13
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v17,v24,1
	_mm_store_si128((__m128i*)ctx.v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0xAA));
	// vspltw v16,v24,0
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0xFF));
	// vmaddfp v20,v27,v11,v23
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v23.f32)));
	// vspltw128 v41,v22,2
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x55));
	// vmulfp128 v15,v42,v13
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v14,v22,1
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0xAA));
	// vspltw v10,v22,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0xFF));
	// vmulfp128 v6,v41,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v5,v21,v12,v18
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v18.f32)));
	// stvx128 v20,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v4,v17,v12,v15
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v15.f32)));
	// vmaddfp v3,v14,v12,v6
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v19,v11,v5
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v12,v16,v11,v4
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v10,v11,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v2,v13,v0,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v30,v12,v0,v0
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v29,v11,v0,v0
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v40,v2,228
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x1B));
	// vpermwi128 v39,v30,228
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x1B));
	// vcfpuxws128 v38,v40,0
	ctx.v38.v4sf = vec_convert_to_float(ctx.v40.v4si);
	// vcfpuxws128 v36,v39,0
	ctx.v36.v4sf = vec_convert_to_float(ctx.v39.v4si);
	// vpkuwus128 v37,v38,v63
	ctx.v37.v8hi = vec_pack_unsigned(ctx.v38.v4si, ctx.v63.v4si);
	// vpkuhus128 v35,v37,v63
	ctx.v35.v16qi = vec_pack_unsigned(ctx.v37.v8hi, ctx.v63.v8hi);
	// vpermwi128 v32,v29,228
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// vpkuwus128 v33,v36,v63
	ctx.v33.v8hi = vec_pack_unsigned(ctx.v36.v4si, ctx.v63.v4si);
	// vspltw128 v34,v35,0
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), 0xFF));
	// vcfpuxws128 v59,v32,0
	ctx.v59.v4sf = vec_convert_to_float(ctx.v32.v4si);
	// vpkuhus128 v61,v33,v63
	ctx.v61.v16qi = vec_pack_unsigned(ctx.v33.v8hi, ctx.v63.v8hi);
	// vspltw128 v58,v61,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// stvewx128 v34,r25,r11
	ea = (ctx.r25.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkuwus128 v57,v59,v63
	ctx.v57.v8hi = vec_pack_unsigned(ctx.v59.v4si, ctx.v63.v4si);
	// stvewx128 v58,r25,r20
	ea = (ctx.r25.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkuhus128 v56,v57,v63
	ctx.v56.v16qi = vec_pack_unsigned(ctx.v57.v8hi, ctx.v63.v8hi);
	// vspltw128 v55,v56,0
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// stvewx128 v55,r25,r4
	ea = (ctx.r25.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 24, temp.u32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 28, temp.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82900aa0
	if (ctx.cr6.lt) goto loc_82900AA0;
loc_82901024:
	// lwz r8,44(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// addi r19,r23,44
	ctx.r19.s64 = ctx.r23.s64 + 44;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8290105c
	if (!ctx.cr6.gt) goto loc_8290105C;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r0,r27
loc_8290105C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82901724
	if (!ctx.cr6.gt) goto loc_82901724;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r24,r23,48
	ctx.r24.s64 = ctx.r23.s64 + 48;
	// vupkd3d128 v54,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v54 = vTemp;
	// vspltw128 v61,v54,3
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x0));
loc_82901078:
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r27,r11
	// rlwinm r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829010b4
	if (!ctx.cr6.eq) goto loc_829010B4;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// ori r8,r7,2
	ctx.r8.u64 = ctx.r7.u64 | 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
loc_829010B4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82901464
	if (ctx.cr6.eq) goto loc_82901464;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_829010D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829010d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829010D4;
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x829012c4
	if (!ctx.cr6.gt) goto loc_829012C4;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901100:
	// lwz r10,692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// blt cr6,0x829012ac
	if (ctx.cr6.lt) goto loc_829012AC;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x829012ac
	if (!ctx.cr6.lt) goto loc_829012AC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x829012ac
	if (!ctx.cr6.eq) goto loc_829012AC;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lbz r6,21(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,22(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r6,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r6.u64);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lbz r3,23(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 23);
	// fsubs f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// std r6,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r6.u64);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// std r3,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r3.u64);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// lfd f1,400(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// rlwinm r10,r3,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// lbz r6,15(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// lbz r23,13(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lfd f13,248(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// lfd f1,320(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// std r6,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r6.u64);
	// lfd f9,304(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// std r23,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r23.u64);
	// lfd f12,368(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r6,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r6.u64);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lfsx f12,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// addi r3,r5,20
	ctx.r3.s64 = ctx.r5.s64 + 20;
	// fsel f11,f12,f8,f11
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// fmsubs f10,f6,f7,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f5,f2,f7,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// lfd f4,432(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// fmsubs f1,f9,f7,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fcfid f0,f4
	ctx.f0.f64 = double(ctx.f4.s64);
	// fmuls f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f12,f3,f7,f8
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f6,f7,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fadds f10,f2,f5
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmsubs f13,f4,f7,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fadds f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f2,f4,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrt f0,f1
	ctx.f0.f64 = sqrt(ctx.f1.f64);
	// fdiv f13,f31,f0
	ctx.f13.f64 = ctx.f31.f64 / ctx.f0.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f9,236(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x829012A0;
	sub_8281B1A8(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_829012AC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82901100
	if (!ctx.cr0.eq) goto loc_82901100;
	// lwz r29,676(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r30,684(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
loc_829012C4:
	// lbz r4,23(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 23);
	// lbz r10,13(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// lbz r7,14(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// lbz r6,21(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// lbz r3,15(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// std r4,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r4.u64);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lbz r11,22(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// std r4,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r4.u64);
	// std r10,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r10.u64);
	// lfd f12,416(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// std r7,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r7.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f0,384(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// std r8,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r8.u64);
	// lfd f11,256(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r11.u64);
	// lfd f9,264(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfd f4,280(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfd f13,336(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// fmsubs f6,f2,f7,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmsubs f3,f12,f7,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fmsubs f5,f13,f7,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f1,f9,f7,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f2,f11,f7,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmsubs f4,f10,f7,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmadds f13,f5,f2,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f12,f4,f1,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmuls f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fsubs f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// fsubs f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// fmadds f2,f13,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f0,f12,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x829013d0
	if (ctx.cr6.lt) goto loc_829013D0;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 / ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x829013d4
	goto loc_829013D4;
loc_829013D0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_829013D4:
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r5,12
	ctx.r3.s64 = ctx.r5.s64 + 12;
	// bl 0x8281b1a8
	ctx.lr = 0x82901400;
	sub_8281B1A8(ctx, base);
	// fmuls f10,f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmsubs f0,f5,f2,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 - ctx.f10.f64));
	// fmsubs f13,f1,f4,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f12,f3,f6,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// blt cr6,0x8290143c
	if (ctx.cr6.lt) goto loc_8290143C;
	// fsqrt f11,f11
	ctx.f11.f64 = sqrt(ctx.f11.f64);
	// fdiv f10,f31,f11
	ctx.f10.f64 = ctx.f31.f64 / ctx.f11.f64;
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// b 0x82901440
	goto loc_82901440;
loc_8290143C:
	// fmr f11,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f29.f64;
loc_82901440:
	// fmuls f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,224(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r5,16
	ctx.r3.s64 = ctx.r5.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x82901464;
	sub_8281B1A8(ctx, base);
loc_82901464:
	// lvx128 v53,r0,r9
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v13,v61,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// lvx128 v52,r9,r22
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r9,36
	ctx.r7.s64 = ctx.r9.s64 + 36;
	// vperm128 v5,v53,v52,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r23,r1,448
	ctx.r23.s64 = ctx.r1.s64 + 448;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// vsel v6,v5,v13,v31
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v5,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,48
	ctx.r3.s64 = 48;
	// li r28,47
	ctx.r28.s64 = 47;
	// stvx128 v6,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r22
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r11
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltw128 v48,v49,0
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vperm128 v47,v48,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v30,v47,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v30.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmaddfp v5,v30,v8,v9
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v5,r14,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r10
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r10,r22
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v44,v46,v45,v3
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vspltw128 v43,v44,0
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), 0xFF));
	// vperm128 v42,v43,v63,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v29,v42,0
	_mm_store_ps(ctx.v29.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmaddfp v4,v29,v8,v9
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r14,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r8,r22
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v40,r0,r8
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v39,v40,v41,v2
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vspltw128 v38,v39,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// lvx128 v2,r0,r23
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v37,v38,v63,v7
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v28,v37,0
	_mm_store_ps(ctx.v28.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmaddfp v3,v28,v8,v9
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v3,r14,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r11,35(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 35);
	// lvx128 v36,r9,r28
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lvx128 v35,r0,r7
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhzx r8,r10,r21
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r21.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// vperm128 v34,v35,v36,v2
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// vspltw128 v33,v34,0
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), 0xFF));
	// lvx128 v59,r11,r17
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r20
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v57,v33,v63,v1
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvx128 v32,r11,r16
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v55,v57,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmulfp128 v62,v55,v60
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v54,v62,3
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vmulfp128 v11,v32,v54
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v12,v56,v54
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v13,v58,v54
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v10,v59,v54
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v54.f32)));
	// ble cr6,0x82901634
	if (!ctx.cr6.gt) goto loc_82901634;
	// lbz r11,34(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 34);
	// vspltw128 v2,v62,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r7,r8,r21
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r21.u32);
	// rotlwi r11,r7,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r20
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r16
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r17
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
	// ble cr6,0x82901634
	if (!ctx.cr6.gt) goto loc_82901634;
	// lbz r11,33(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 33);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// vspltw128 v2,v62,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r21
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r21.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r20
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r16
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r17
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
	// ble cr6,0x82901634
	if (!ctx.cr6.gt) goto loc_82901634;
	// lbz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 32);
	// vspltw128 v2,v62,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r21
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r21.u32);
	// rotlwi r11,r8,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lvx128 v30,r0,r11
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r11,r20
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v30,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v28,r11,r16
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v29,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v27,r11,r17
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v28,v2,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v27,v2,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v10.f32)));
loc_82901634:
	// vspltw128 v53,v5,2
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x55));
	// li r11,12
	ctx.r11.s64 = 12;
	// vspltw128 v52,v4,2
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x55));
	// li r10,20
	ctx.r10.s64 = 20;
	// vspltw128 v51,v3,2
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x55));
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// vspltw v2,v6,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0x55));
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// vmulfp128 v30,v53,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v29,v5,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xAA));
	// vmulfp128 v28,v52,v11
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v27,v4,1
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xAA));
	// vmulfp128 v26,v51,v11
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v25,v3,1
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xAA));
	// vmaddfp v24,v2,v11,v10
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vspltw v23,v6,1
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xAA));
	// vspltw v22,v5,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// vspltw v21,v4,0
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// vspltw v20,v3,0
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vspltw v19,v6,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vmaddfp v18,v29,v12,v30
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v17,v27,v12,v28
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v16,v25,v12,v26
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v15,v23,v12,v24
	_mm_store_ps(ctx.v15.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v12,v22,v13,v18
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v18.f32)));
	// vmaddfp v11,v21,v13,v17
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v17.f32)));
	// vmaddfp v10,v20,v13,v16
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v16.f32)));
	// vmaddfp v14,v19,v13,v15
	_mm_store_ps(ctx.v14.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v15.f32)));
	// vmaddfp v13,v12,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v11,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v10,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v14,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v50,v13,228
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x1B));
	// vpermwi128 v49,v12,228
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x1B));
	// vpermwi128 v48,v11,228
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x1B));
	// vcfpuxws128 v47,v50,0
	ctx.v47.v4sf = vec_convert_to_float(ctx.v50.v4si);
	// vcfpuxws128 v46,v49,0
	ctx.v46.v4sf = vec_convert_to_float(ctx.v49.v4si);
	// vcfpuxws128 v45,v48,0
	ctx.v45.v4sf = vec_convert_to_float(ctx.v48.v4si);
	// vpkuwus128 v44,v47,v63
	ctx.v44.v8hi = vec_pack_unsigned(ctx.v47.v4si, ctx.v63.v4si);
	// vpkuwus128 v43,v46,v63
	ctx.v43.v8hi = vec_pack_unsigned(ctx.v46.v4si, ctx.v63.v4si);
	// vpkuwus128 v42,v45,v63
	ctx.v42.v8hi = vec_pack_unsigned(ctx.v45.v4si, ctx.v63.v4si);
	// vpkuhus128 v41,v44,v63
	ctx.v41.v16qi = vec_pack_unsigned(ctx.v44.v8hi, ctx.v63.v8hi);
	// vpkuhus128 v40,v43,v63
	ctx.v40.v16qi = vec_pack_unsigned(ctx.v43.v8hi, ctx.v63.v8hi);
	// vpkuhus128 v39,v42,v63
	ctx.v39.v16qi = vec_pack_unsigned(ctx.v42.v8hi, ctx.v63.v8hi);
	// vspltw128 v38,v41,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), 0xFF));
	// vspltw128 v37,v40,0
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v36,v39,0
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// stvewx128 v38,r25,r11
	ea = (ctx.r25.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r25,r20
	ea = (ctx.r25.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 24, temp.u32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 28, temp.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82901078
	if (ctx.cr6.lt) goto loc_82901078;
loc_82901724:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r6,r9,52
	ctx.r6.s64 = ctx.r9.s64 + 52;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// blt cr6,0x82900a28
	if (ctx.cr6.lt) goto loc_82900A28;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82901754:
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8290178c
	if (ctx.cr6.eq) goto loc_8290178C;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82901778
	if (!ctx.cr6.eq) goto loc_82901778;
	// bl 0x822900a0
	ctx.lr = 0x82901774;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82901778:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8290178C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8290178C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829017A0"))) PPC_WEAK_FUNC(sub_829017A0);
PPC_FUNC_IMPL(__imp__sub_829017A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829017A8"))) PPC_WEAK_FUNC(sub_829017A8);
PPC_FUNC_IMPL(__imp__sub_829017A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82901818
	if (ctx.cr6.eq) goto loc_82901818;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8290181c
	if (!ctx.cr6.gt) goto loc_8290181C;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82294520
	ctx.lr = 0x829017FC;
	sub_82294520(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82901810;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82901818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8290181C:
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

__attribute__((alias("__imp__sub_82901834"))) PPC_WEAK_FUNC(sub_82901834);
PPC_FUNC_IMPL(__imp__sub_82901834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901838"))) PPC_WEAK_FUNC(sub_82901838);
PPC_FUNC_IMPL(__imp__sub_82901838) {
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

__attribute__((alias("__imp__sub_82901848"))) PPC_WEAK_FUNC(sub_82901848);
PPC_FUNC_IMPL(__imp__sub_82901848) {
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

__attribute__((alias("__imp__sub_8290185C"))) PPC_WEAK_FUNC(sub_8290185C);
PPC_FUNC_IMPL(__imp__sub_8290185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901860"))) PPC_WEAK_FUNC(sub_82901860);
PPC_FUNC_IMPL(__imp__sub_82901860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82901868;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829018c4
	if (!ctx.cr6.gt) goto loc_829018C4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r28,r11,-29128
	ctx.r28.s64 = ctx.r11.s64 + -29128;
loc_82901890:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r3,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r3.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// bne 0x829018a8
	if (!ctx.cr0.eq) goto loc_829018A8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_829018A8:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x82475d80
	ctx.lr = 0x829018B0;
	sub_82475D80(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,640
	ctx.r31.s64 = ctx.r31.s64 + 640;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82901890
	if (ctx.cr6.lt) goto loc_82901890;
loc_829018C4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829018fc
	if (ctx.cr6.eq) goto loc_829018FC;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829018e8
	if (!ctx.cr6.eq) goto loc_829018E8;
	// bl 0x822900a0
	ctx.lr = 0x829018E4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_829018E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829018FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829018FC:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901910"))) PPC_WEAK_FUNC(sub_82901910);
PPC_FUNC_IMPL(__imp__sub_82901910) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901928"))) PPC_WEAK_FUNC(sub_82901928);
PPC_FUNC_IMPL(__imp__sub_82901928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82901930;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8290198c
	if (!ctx.cr6.lt) goto loc_8290198C;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r31,r11,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r29,r11,-29128
	ctx.r29.s64 = ctx.r11.s64 + -29128;
loc_82901960:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r3,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r3.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// bne 0x82901978
	if (!ctx.cr0.eq) goto loc_82901978;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82901978:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x82475d80
	ctx.lr = 0x82901980;
	sub_82475D80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,640
	ctx.r31.s64 = ctx.r31.s64 + 640;
	// bne 0x82901960
	if (!ctx.cr0.eq) goto loc_82901960;
loc_8290198C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,640
	ctx.r6.s64 = 640;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d180
	ctx.lr = 0x829019A4;
	sub_8232D180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829019AC"))) PPC_WEAK_FUNC(sub_829019AC);
PPC_FUNC_IMPL(__imp__sub_829019AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829019B0"))) PPC_WEAK_FUNC(sub_829019B0);
PPC_FUNC_IMPL(__imp__sub_829019B0) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x829019E0;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82901a0c
	if (ctx.cr0.eq) goto loc_82901A0C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82901e08
	ctx.lr = 0x82901A0C;
	sub_82901E08(ctx, base);
loc_82901A0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82901A2C"))) PPC_WEAK_FUNC(sub_82901A2C);
PPC_FUNC_IMPL(__imp__sub_82901A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901A30"))) PPC_WEAK_FUNC(sub_82901A30);
PPC_FUNC_IMPL(__imp__sub_82901A30) {
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

__attribute__((alias("__imp__sub_82901A44"))) PPC_WEAK_FUNC(sub_82901A44);
PPC_FUNC_IMPL(__imp__sub_82901A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901A48"))) PPC_WEAK_FUNC(sub_82901A48);
PPC_FUNC_IMPL(__imp__sub_82901A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82901A50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82901a90
	if (!ctx.cr6.gt) goto loc_82901A90;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82901A70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82901eb8
	ctx.lr = 0x82901A7C;
	sub_82901EB8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82901a70
	if (ctx.cr6.lt) goto loc_82901A70;
loc_82901A90:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82901ac8
	if (ctx.cr6.eq) goto loc_82901AC8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82901ab4
	if (!ctx.cr6.eq) goto loc_82901AB4;
	// bl 0x822900a0
	ctx.lr = 0x82901AB0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82901AB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901AC8:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901ADC"))) PPC_WEAK_FUNC(sub_82901ADC);
PPC_FUNC_IMPL(__imp__sub_82901ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901AE0"))) PPC_WEAK_FUNC(sub_82901AE0);
PPC_FUNC_IMPL(__imp__sub_82901AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,864
	ctx.r10.s64 = ctx.r4.s64 * 864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901AF0"))) PPC_WEAK_FUNC(sub_82901AF0);
PPC_FUNC_IMPL(__imp__sub_82901AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,864
	ctx.r10.s64 = ctx.r4.s64 * 864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901B00"))) PPC_WEAK_FUNC(sub_82901B00);
PPC_FUNC_IMPL(__imp__sub_82901B00) {
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

__attribute__((alias("__imp__sub_82901B14"))) PPC_WEAK_FUNC(sub_82901B14);
PPC_FUNC_IMPL(__imp__sub_82901B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901B18"))) PPC_WEAK_FUNC(sub_82901B18);
PPC_FUNC_IMPL(__imp__sub_82901B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82901B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82901b60
	if (ctx.cr6.eq) goto loc_82901B60;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82901b4c
	if (!ctx.cr6.eq) goto loc_82901B4C;
	// bl 0x822900a0
	ctx.lr = 0x82901B48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82901B4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901B60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901B78"))) PPC_WEAK_FUNC(sub_82901B78);
PPC_FUNC_IMPL(__imp__sub_82901B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901B88"))) PPC_WEAK_FUNC(sub_82901B88);
PPC_FUNC_IMPL(__imp__sub_82901B88) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901B98"))) PPC_WEAK_FUNC(sub_82901B98);
PPC_FUNC_IMPL(__imp__sub_82901B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901BBC"))) PPC_WEAK_FUNC(sub_82901BBC);
PPC_FUNC_IMPL(__imp__sub_82901BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901BC0"))) PPC_WEAK_FUNC(sub_82901BC0);
PPC_FUNC_IMPL(__imp__sub_82901BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82901BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82901c14
	if (ctx.cr6.eq) goto loc_82901C14;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822959a8
	ctx.lr = 0x82901BF0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901c08
	if (ctx.cr6.eq) goto loc_82901C08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829022e0
	ctx.lr = 0x82901C00;
	sub_829022E0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// b 0x82901c4c
	goto loc_82901C4C;
loc_82901C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// b 0x82901c4c
	goto loc_82901C4C;
loc_82901C14:
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822959a8
	ctx.lr = 0x82901C1C;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82901c44
	if (ctx.cr6.eq) goto loc_82901C44;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,-28892
	ctx.r10.s64 = ctx.r11.s64 + -28892;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82475bf8
	ctx.lr = 0x82901C40;
	sub_82475BF8(ctx, base);
	// b 0x82901c48
	goto loc_82901C48;
loc_82901C44:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82901C48:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82901C4C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82901C70"))) PPC_WEAK_FUNC(sub_82901C70);
PPC_FUNC_IMPL(__imp__sub_82901C70) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901cc0
	if (ctx.cr6.eq) goto loc_82901CC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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
loc_82901CC0:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82901CDC"))) PPC_WEAK_FUNC(sub_82901CDC);
PPC_FUNC_IMPL(__imp__sub_82901CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901CE0"))) PPC_WEAK_FUNC(sub_82901CE0);
PPC_FUNC_IMPL(__imp__sub_82901CE0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82901d2c
	if (ctx.cr6.eq) goto loc_82901D2C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82901d2c
	if (ctx.cr6.eq) goto loc_82901D2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82901D2C:
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

__attribute__((alias("__imp__sub_82901D40"))) PPC_WEAK_FUNC(sub_82901D40);
PPC_FUNC_IMPL(__imp__sub_82901D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82901D48"))) PPC_WEAK_FUNC(sub_82901D48);
PPC_FUNC_IMPL(__imp__sub_82901D48) {
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
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// bne 0x82901d6c
	if (!ctx.cr0.eq) goto loc_82901D6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82901D6C:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r10,-29128
	ctx.r9.s64 = ctx.r10.s64 + -29128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82475d80
	ctx.lr = 0x82901D7C;
	sub_82475D80(ctx, base);
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

__attribute__((alias("__imp__sub_82901D94"))) PPC_WEAK_FUNC(sub_82901D94);
PPC_FUNC_IMPL(__imp__sub_82901D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901D98"))) PPC_WEAK_FUNC(sub_82901D98);
PPC_FUNC_IMPL(__imp__sub_82901D98) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82901e08
	ctx.lr = 0x82901DC0;
	sub_82901E08(ctx, base);
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

__attribute__((alias("__imp__sub_82901DD8"))) PPC_WEAK_FUNC(sub_82901DD8);
PPC_FUNC_IMPL(__imp__sub_82901DD8) {
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
	// bl 0x82901eb8
	ctx.lr = 0x82901DF0;
	sub_82901EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82901E08"))) PPC_WEAK_FUNC(sub_82901E08);
PPC_FUNC_IMPL(__imp__sub_82901E08) {
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
	// bl 0x82901f38
	ctx.lr = 0x82901E28;
	sub_82901F38(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// bne cr6,0x82901e38
	if (!ctx.cr6.eq) goto loc_82901E38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82901E38:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// addi r9,r10,-29100
	ctx.r9.s64 = ctx.r10.s64 + -29100;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82901E58;
	sub_82CB1160(ctx, base);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r6,r8,-29080
	ctx.r6.s64 = ctx.r8.s64 + -29080;
	// addi r5,r7,-29036
	ctx.r5.s64 = ctx.r7.s64 + -29036;
	// stw r4,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r8,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r8.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82901EB4"))) PPC_WEAK_FUNC(sub_82901EB4);
PPC_FUNC_IMPL(__imp__sub_82901EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82901EB8"))) PPC_WEAK_FUNC(sub_82901EB8);
PPC_FUNC_IMPL(__imp__sub_82901EB8) {
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
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x82901860
	ctx.lr = 0x82901ED4;
	sub_82901860(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x827096d0
	ctx.lr = 0x82901EDC;
	sub_827096D0(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82901f1c
	if (ctx.cr6.eq) goto loc_82901F1C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82901f1c
	if (!ctx.cr0.eq) goto loc_82901F1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82901F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82901F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82475d80
	ctx.lr = 0x82901F24;
	sub_82475D80(ctx, base);
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

__attribute__((alias("__imp__sub_82901F38"))) PPC_WEAK_FUNC(sub_82901F38);
PPC_FUNC_IMPL(__imp__sub_82901F38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829020c0
	ctx.lr = 0x82901F58;
	sub_829020C0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r31,268
	ctx.r10.s64 = ctx.r31.s64 + 268;
	// addi r9,r11,-3272
	ctx.r9.s64 = ctx.r11.s64 + -3272;
	// addi r11,r30,268
	ctx.r11.s64 = ctx.r30.s64 + 268;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r7,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r6,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82901F8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82901f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82901F8C;
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// li r5,140
	ctx.r5.s64 = 140;
	// bl 0x82cb1160
	ctx.lr = 0x82901FB0;
	sub_82CB1160(ctx, base);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r10,448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// lwz r9,452(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r8,456(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r8,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r8.u32);
	// lwz r7,460(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r7,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r7.u32);
	// lwz r6,464(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r6,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r6.u32);
	// lwz r5,468(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r5,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r5.u32);
	// lwz r4,472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stw r4,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r4.u32);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lfs f0,480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// lfs f13,484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lfs f12,488(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,488(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// lfs f11,492(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,492(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// lfs f10,496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,496(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
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

__attribute__((alias("__imp__sub_8290203C"))) PPC_WEAK_FUNC(sub_8290203C);
PPC_FUNC_IMPL(__imp__sub_8290203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902040"))) PPC_WEAK_FUNC(sub_82902040);
PPC_FUNC_IMPL(__imp__sub_82902040) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-29100
	ctx.r10.s64 = ctx.r11.s64 + -29100;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82cb1160
	ctx.lr = 0x82902078;
	sub_82CB1160(ctx, base);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_829020BC"))) PPC_WEAK_FUNC(sub_829020BC);
PPC_FUNC_IMPL(__imp__sub_829020BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829020C0"))) PPC_WEAK_FUNC(sub_829020C0);
PPC_FUNC_IMPL(__imp__sub_829020C0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r8,r11,-18816
	ctx.r8.s64 = ctx.r11.s64 + -18816;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r7,r9,-3424
	ctx.r7.s64 = ctx.r9.s64 + -3424;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// li r5,196
	ctx.r5.s64 = 196;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r8,r10,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82cb1160
	ctx.lr = 0x8290212C;
	sub_82CB1160(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// beq cr6,0x82902140
	if (ctx.cr6.eq) goto loc_82902140;
	// bl 0x82e76d00
	ctx.lr = 0x82902140;
	sub_82E76D00(ctx, base);
loc_82902140:
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// beq cr6,0x82902154
	if (ctx.cr6.eq) goto loc_82902154;
	// bl 0x82e76d00
	ctx.lr = 0x82902154;
	sub_82E76D00(ctx, base);
loc_82902154:
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// beq cr6,0x82902168
	if (ctx.cr6.eq) goto loc_82902168;
	// bl 0x82e76d00
	ctx.lr = 0x82902168;
	sub_82E76D00(ctx, base);
loc_82902168:
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// beq cr6,0x8290217c
	if (ctx.cr6.eq) goto loc_8290217C;
	// bl 0x82e76d00
	ctx.lr = 0x8290217C;
	sub_82E76D00(ctx, base);
loc_8290217C:
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// beq cr6,0x82902190
	if (ctx.cr6.eq) goto loc_82902190;
	// bl 0x82e76d00
	ctx.lr = 0x82902190;
	sub_82E76D00(ctx, base);
loc_82902190:
	// lwz r3,236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// beq cr6,0x829021a4
	if (ctx.cr6.eq) goto loc_829021A4;
	// bl 0x82e76d00
	ctx.lr = 0x829021A4;
	sub_82E76D00(ctx, base);
loc_829021A4:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r10,r30,240
	ctx.r10.s64 = ctx.r30.s64 + 240;
	// addi r9,r31,240
	ctx.r9.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r8,244(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// lwz r7,248(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r7,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// lwz r6,252(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_829021E8"))) PPC_WEAK_FUNC(sub_829021E8);
PPC_FUNC_IMPL(__imp__sub_829021E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29128
	ctx.r10.s64 = ctx.r11.s64 + -29128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829021F8"))) PPC_WEAK_FUNC(sub_829021F8);
PPC_FUNC_IMPL(__imp__sub_829021F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,-18816
	ctx.r9.s64 = ctx.r11.s64 + -18816;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r5,r10,0,1,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902230"))) PPC_WEAK_FUNC(sub_82902230);
PPC_FUNC_IMPL(__imp__sub_82902230) {
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
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x829022c8
	if (ctx.cr6.eq) goto loc_829022C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829022a4
	if (!ctx.cr6.gt) goto loc_829022A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82902284
	if (ctx.cr6.eq) goto loc_82902284;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82294520
	ctx.lr = 0x82902284;
	sub_82294520(ctx, base);
loc_82902284:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82902298;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x829022c8
	goto loc_829022C8;
loc_829022A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x829022c8
	if (ctx.cr6.eq) goto loc_829022C8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x829022C8;
	sub_82294520(ctx, base);
loc_829022C8:
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

__attribute__((alias("__imp__sub_829022E0"))) PPC_WEAK_FUNC(sub_829022E0);
PPC_FUNC_IMPL(__imp__sub_829022E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x829022E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-28900
	ctx.r9.s64 = ctx.r11.s64 + -28900;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-21884
	ctx.r4.s64 = ctx.r10.s64 + -21884;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82295070
	ctx.lr = 0x82902314;
	sub_82295070(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82902348
	if (ctx.cr6.eq) goto loc_82902348;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r10,r11,-28884
	ctx.r10.s64 = ctx.r11.s64 + -28884;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82475bf8
	ctx.lr = 0x82902338;
	sub_82475BF8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82902348:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8290235C"))) PPC_WEAK_FUNC(sub_8290235C);
PPC_FUNC_IMPL(__imp__sub_8290235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902360"))) PPC_WEAK_FUNC(sub_82902360);
PPC_FUNC_IMPL(__imp__sub_82902360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82902368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r10,r11,-28900
	ctx.r10.s64 = ctx.r11.s64 + -28900;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829023c4
	if (ctx.cr6.eq) goto loc_829023C4;
	// lwsync 
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x829023C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_829023C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82902404
	if (ctx.cr6.eq) goto loc_82902404;
	// lwsync 
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82902404;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82902404:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-28908
	ctx.r10.s64 = ctx.r11.s64 + -28908;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902418"))) PPC_WEAK_FUNC(sub_82902418);
PPC_FUNC_IMPL(__imp__sub_82902418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902424"))) PPC_WEAK_FUNC(sub_82902424);
PPC_FUNC_IMPL(__imp__sub_82902424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902428"))) PPC_WEAK_FUNC(sub_82902428);
PPC_FUNC_IMPL(__imp__sub_82902428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-28908
	ctx.r10.s64 = ctx.r11.s64 + -28908;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902438"))) PPC_WEAK_FUNC(sub_82902438);
PPC_FUNC_IMPL(__imp__sub_82902438) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,-28892
	ctx.r10.s64 = ctx.r11.s64 + -28892;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82475bf8
	ctx.lr = 0x82902464;
	sub_82475BF8(ctx, base);
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

__attribute__((alias("__imp__sub_8290247C"))) PPC_WEAK_FUNC(sub_8290247C);
PPC_FUNC_IMPL(__imp__sub_8290247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902480"))) PPC_WEAK_FUNC(sub_82902480);
PPC_FUNC_IMPL(__imp__sub_82902480) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,-28892
	ctx.r10.s64 = ctx.r11.s64 + -28892;
	// li r5,140
	ctx.r5.s64 = 140;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r30,304
	ctx.r3.s64 = ctx.r30.s64 + 304;
	// bl 0x82cb1160
	ctx.lr = 0x829024B8;
	sub_82CB1160(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828328f8
	ctx.lr = 0x829024C0;
	sub_828328F8(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r9,-28908
	ctx.r8.s64 = ctx.r9.s64 + -28908;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_829024E4"))) PPC_WEAK_FUNC(sub_829024E4);
PPC_FUNC_IMPL(__imp__sub_829024E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829024E8"))) PPC_WEAK_FUNC(sub_829024E8);
PPC_FUNC_IMPL(__imp__sub_829024E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829024F0"))) PPC_WEAK_FUNC(sub_829024F0);
PPC_FUNC_IMPL(__imp__sub_829024F0) {
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
	// bl 0x82902360
	ctx.lr = 0x82902510;
	sub_82902360(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82902528
	if (ctx.cr6.eq) goto loc_82902528;
	// bl 0x82294a58
	ctx.lr = 0x82902524;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82902528:
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

__attribute__((alias("__imp__sub_82902540"))) PPC_WEAK_FUNC(sub_82902540);
PPC_FUNC_IMPL(__imp__sub_82902540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-28908
	ctx.r10.s64 = ctx.r11.s64 + -28908;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902550"))) PPC_WEAK_FUNC(sub_82902550);
PPC_FUNC_IMPL(__imp__sub_82902550) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-28908
	ctx.r9.s64 = ctx.r11.s64 + -28908;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82902584
	if (ctx.cr6.eq) goto loc_82902584;
	// bl 0x82294a58
	ctx.lr = 0x82902580;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82902584:
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

__attribute__((alias("__imp__sub_82902598"))) PPC_WEAK_FUNC(sub_82902598);
PPC_FUNC_IMPL(__imp__sub_82902598) {
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
	// bl 0x82902480
	ctx.lr = 0x829025B8;
	sub_82902480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829025d0
	if (ctx.cr6.eq) goto loc_829025D0;
	// bl 0x82294a58
	ctx.lr = 0x829025CC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829025D0:
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

__attribute__((alias("__imp__sub_829025E8"))) PPC_WEAK_FUNC(sub_829025E8);
PPC_FUNC_IMPL(__imp__sub_829025E8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,-28884
	ctx.r10.s64 = ctx.r11.s64 + -28884;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82475bf8
	ctx.lr = 0x82902614;
	sub_82475BF8(ctx, base);
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

__attribute__((alias("__imp__sub_8290262C"))) PPC_WEAK_FUNC(sub_8290262C);
PPC_FUNC_IMPL(__imp__sub_8290262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902630"))) PPC_WEAK_FUNC(sub_82902630);
PPC_FUNC_IMPL(__imp__sub_82902630) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82cb1160
	ctx.lr = 0x82902654;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828328f8
	ctx.lr = 0x8290265C;
	sub_828328F8(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
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

__attribute__((alias("__imp__sub_82902674"))) PPC_WEAK_FUNC(sub_82902674);
PPC_FUNC_IMPL(__imp__sub_82902674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902678"))) PPC_WEAK_FUNC(sub_82902678);
PPC_FUNC_IMPL(__imp__sub_82902678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-9212
	ctx.r3.s64 = ctx.r11.s64 + -9212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902684"))) PPC_WEAK_FUNC(sub_82902684);
PPC_FUNC_IMPL(__imp__sub_82902684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902688"))) PPC_WEAK_FUNC(sub_82902688);
PPC_FUNC_IMPL(__imp__sub_82902688) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x829026bc
	if (ctx.cr6.eq) goto loc_829026BC;
	// bl 0x82294a58
	ctx.lr = 0x829026B8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829026BC:
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

__attribute__((alias("__imp__sub_829026D0"))) PPC_WEAK_FUNC(sub_829026D0);
PPC_FUNC_IMPL(__imp__sub_829026D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829026E0"))) PPC_WEAK_FUNC(sub_829026E0);
PPC_FUNC_IMPL(__imp__sub_829026E0) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,864
	ctx.r5.s64 = 864;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8290270C;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,864
	ctx.r10.s64 = ctx.r3.s64 * 864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_8290272C"))) PPC_WEAK_FUNC(sub_8290272C);
PPC_FUNC_IMPL(__imp__sub_8290272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902730"))) PPC_WEAK_FUNC(sub_82902730);
PPC_FUNC_IMPL(__imp__sub_82902730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82902738;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82902758:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82902758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82902758;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f8,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f1,-18352(r5)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18352);
	// lfs f31,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,-17776(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -17776);
	ctx.f7.f64 = double(temp.f32);
	// ble cr6,0x8290297c
	if (!ctx.cr6.gt) goto loc_8290297C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// rlwinm r30,r7,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-18304
	ctx.r29.s64 = ctx.r11.s64 + -18304;
loc_829027B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r7,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// blt cr6,0x82902964
	if (ctx.cr6.lt) goto loc_82902964;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82902964
	if (!ctx.cr6.lt) goto loc_82902964;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82902964
	if (!ctx.cr6.eq) goto loc_82902964;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,20
	ctx.r3.s64 = ctx.r9.s64 + 20;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lfs f2,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fadds f12,f3,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f11,f2,f5
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fadds f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lbz r5,13(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r26,r10,27,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// lbz r25,21(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// lbz r24,15(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// or r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 | ctx.r10.u64;
	// lbz r26,22(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// lbz r23,23(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f9
	ctx.f13.f64 = double(ctx.f9.s64);
	// lfsx f12,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fcfid f10,f2
	ctx.f10.f64 = double(ctx.f2.s64);
	// fsel f9,f12,f8,f0
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// fcfid f13,f4
	ctx.f13.f64 = double(ctx.f4.s64);
	// fmsubs f2,f11,f7,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fmsubs f10,f3,f7,f8
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// fmuls f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmsubs f5,f0,f7,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f3,f12,f7,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f2,f11,f7,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f12,f4,f7,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fadds f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f10,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsqrt f3,f4
	ctx.f3.f64 = sqrt(ctx.f4.f64);
	// fdiv f2,f1,f3
	ctx.f2.f64 = ctx.f1.f64 / ctx.f3.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x82902954;
	sub_8281B1A8(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stwx r4,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u32);
loc_82902964:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829027b0
	if (ctx.cr6.lt) goto loc_829027B0;
loc_8290297C:
	// lbz r7,14(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lbz r5,21(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// lbz r11,13(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// lbz r4,23(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lbz r5,15(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 15);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lbz r4,22(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// lfs f2,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f2.f64 = double(temp.f32);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f9,120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f11,f7,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f6,f4,f7,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// fmsubs f5,f10,f7,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// fmsubs f13,f9,f7,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmsubs f4,f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f11,f3,f7,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmadds f9,f5,f13,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f4,f11,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmuls f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f10,f8,f4
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f0,f13,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x82902a88
	if (ctx.cr6.lt) goto loc_82902A88;
	// fsqrt f0,f0
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 / ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x82902a8c
	goto loc_82902A8C;
loc_82902A88:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82902A8C:
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x82902AB4;
	sub_8281B1A8(ctx, base);
	// fmuls f10,f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f12,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmsubs f0,f5,f8,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmsubs f13,f7,f4,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f9.f64));
	// fmsubs f12,f3,f6,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// blt cr6,0x82902af0
	if (ctx.cr6.lt) goto loc_82902AF0;
	// fsqrt f11,f11
	ctx.f11.f64 = sqrt(ctx.f11.f64);
	// fdiv f10,f1,f11
	ctx.f10.f64 = ctx.f1.f64 / ctx.f11.f64;
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// b 0x82902af4
	goto loc_82902AF4;
loc_82902AF0:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
loc_82902AF4:
	// fmuls f12,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x82902B18;
	sub_8281B1A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902B24"))) PPC_WEAK_FUNC(sub_82902B24);
PPC_FUNC_IMPL(__imp__sub_82902B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902B28"))) PPC_WEAK_FUNC(sub_82902B28);
PPC_FUNC_IMPL(__imp__sub_82902B28) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82902B54;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82902B7C"))) PPC_WEAK_FUNC(sub_82902B7C);
PPC_FUNC_IMPL(__imp__sub_82902B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902B80"))) PPC_WEAK_FUNC(sub_82902B80);
PPC_FUNC_IMPL(__imp__sub_82902B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lfs f0,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,-18304
	ctx.r6.s64 = ctx.r8.s64 + -18304;
	// fsubs f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f5,f8
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,-17776(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17776);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// lbz r10,13(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// rlwinm r9,r5,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// rlwinm r7,r5,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lbz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r31,21(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r5,23(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lbz r4,15(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f8
	ctx.f11.f64 = double(ctx.f8.s64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfsx f4,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fcfid f12,f9
	ctx.f12.f64 = double(ctx.f9.s64);
	// fsel f9,f4,f0,f1
	ctx.f9.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// frsp f4,f11
	ctx.f4.f64 = double(float(ctx.f11.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// fmsubs f2,f8,f13,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmsubs f1,f7,f13,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f0.f64));
	// frsp f5,f12
	ctx.f5.f64 = double(float(ctx.f12.f64));
	// fmsubs f3,f10,f13,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmsubs f12,f6,f13,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmuls f7,f2,f9
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmsubs f10,f4,f13,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmsubs f11,f5,f13,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmuls f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f8,f9,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfd f0,-18352(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// fmadds f13,f5,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fsqrt f12,f13
	ctx.f12.f64 = sqrt(ctx.f13.f64);
	// fdiv f11,f0,f12
	ctx.f11.f64 = ctx.f0.f64 / ctx.f12.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f4,f10
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x82902D08;
	sub_8281B1A8(ctx, base);
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

__attribute__((alias("__imp__sub_82902D1C"))) PPC_WEAK_FUNC(sub_82902D1C);
PPC_FUNC_IMPL(__imp__sub_82902D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902D20"))) PPC_WEAK_FUNC(sub_82902D20);
PPC_FUNC_IMPL(__imp__sub_82902D20) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6ae8
	ctx.lr = 0x82902D38;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lbz r7,23(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lfs f0,-17776(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17776);
	ctx.f0.f64 = double(temp.f32);
	// lbz r3,21(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lfs f13,-32444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lfs f31,-18108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
	// lbz r6,22(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r5,15(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// fcfid f12,f9
	ctx.f12.f64 = double(ctx.f9.s64);
	// fcfid f11,f8
	ctx.f11.f64 = double(ctx.f8.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fmsubs f30,f10,f0,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fmsubs f7,f2,f0,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f29,f8,f0,f13
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f4,f9,f0,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f3,f6,f0,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f28,f5,f0,f13
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f2,f30,f7
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// fmadds f0,f29,f4,f2
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f13,f28,f3,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fsubs f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f9,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82382590
	ctx.lr = 0x82902E40;
	sub_82382590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8281b1a8
	ctx.lr = 0x82902E4C;
	sub_8281B1A8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f0,f29
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f4,f28,f12
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmsubs f3,f13,f28,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 - ctx.f6.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f2,f29,f12,f5
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f1,f0,f30,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f4.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82382590
	ctx.lr = 0x82902E88;
	sub_82382590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8281b1a8
	ctx.lr = 0x82902E94;
	sub_8281B1A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b34
	ctx.lr = 0x82902EA0;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_82902EB4"))) PPC_WEAK_FUNC(sub_82902EB4);
PPC_FUNC_IMPL(__imp__sub_82902EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902EB8"))) PPC_WEAK_FUNC(sub_82902EB8);
PPC_FUNC_IMPL(__imp__sub_82902EB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-512
	ctx.r3.s64 = ctx.r3.s64 + -512;
	// b 0x828fdf98
	sub_828FDF98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902EC0"))) PPC_WEAK_FUNC(sub_82902EC0);
PPC_FUNC_IMPL(__imp__sub_82902EC0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902EC8"))) PPC_WEAK_FUNC(sub_82902EC8);
PPC_FUNC_IMPL(__imp__sub_82902EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82902ED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e76378
	ctx.lr = 0x82902EF8;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e76f10
	ctx.lr = 0x82902F0C;
	sub_82E76F10(ctx, base);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82902f84
	if (ctx.cr6.eq) goto loc_82902F84;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f13,-32444(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82902F38:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82902f38
	if (!ctx.cr0.eq) goto loc_82902F38;
loc_82902F84:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x82902F90;
	sub_82E77010(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82902F98"))) PPC_WEAK_FUNC(sub_82902F98);
PPC_FUNC_IMPL(__imp__sub_82902F98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902FA0"))) PPC_WEAK_FUNC(sub_82902FA0);
PPC_FUNC_IMPL(__imp__sub_82902FA0) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v61,v63,135
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vpermwi128 v60,v62,99
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// vpermwi128 v0,v63,99
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vpermwi128 v13,v62,135
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// vmulfp128 v12,v60,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vnmsubfp v1,v13,v0,v12
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902FC4"))) PPC_WEAK_FUNC(sub_82902FC4);
PPC_FUNC_IMPL(__imp__sub_82902FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82902FC8"))) PPC_WEAK_FUNC(sub_82902FC8);
PPC_FUNC_IMPL(__imp__sub_82902FC8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82902FD0"))) PPC_WEAK_FUNC(sub_82902FD0);
PPC_FUNC_IMPL(__imp__sub_82902FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,-28824
	ctx.r8.s64 = ctx.r10.s64 + -28824;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82696a38
	ctx.lr = 0x82903020;
	sub_82696A38(ctx, base);
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

__attribute__((alias("__imp__sub_82903038"))) PPC_WEAK_FUNC(sub_82903038);
PPC_FUNC_IMPL(__imp__sub_82903038) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x828c9fc0
	ctx.lr = 0x82903064;
	sub_828C9FC0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82903074;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829030b4
	if (ctx.cr6.eq) goto loc_829030B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x829030b4
	if (!ctx.cr0.eq) goto loc_829030B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829030B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829030B4:
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

__attribute__((alias("__imp__sub_829030C8"))) PPC_WEAK_FUNC(sub_829030C8);
PPC_FUNC_IMPL(__imp__sub_829030C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82832788
	ctx.lr = 0x829030E4;
	sub_82832788(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// addi r10,r30,256
	ctx.r10.s64 = ctx.r30.s64 + 256;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82903150:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82903150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82903150;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828328f8
	ctx.lr = 0x8290316C;
	sub_828328F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82903198"))) PPC_WEAK_FUNC(sub_82903198);
PPC_FUNC_IMPL(__imp__sub_82903198) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829031C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82832848
	ctx.lr = 0x829031C8;
	sub_82832848(ctx, base);
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

__attribute__((alias("__imp__sub_829031DC"))) PPC_WEAK_FUNC(sub_829031DC);
PPC_FUNC_IMPL(__imp__sub_829031DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829031E0"))) PPC_WEAK_FUNC(sub_829031E0);
PPC_FUNC_IMPL(__imp__sub_829031E0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// bl 0x822960c0
	ctx.lr = 0x82903200;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_82903218"))) PPC_WEAK_FUNC(sub_82903218);
PPC_FUNC_IMPL(__imp__sub_82903218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290327C"))) PPC_WEAK_FUNC(sub_8290327C);
PPC_FUNC_IMPL(__imp__sub_8290327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903280"))) PPC_WEAK_FUNC(sub_82903280);
PPC_FUNC_IMPL(__imp__sub_82903280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290328C"))) PPC_WEAK_FUNC(sub_8290328C);
PPC_FUNC_IMPL(__imp__sub_8290328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903290"))) PPC_WEAK_FUNC(sub_82903290);
PPC_FUNC_IMPL(__imp__sub_82903290) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,75
	ctx.r10.s64 = 75;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82294520
	ctx.lr = 0x829032C4;
	sub_82294520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x82294ac0
	ctx.lr = 0x829032DC;
	sub_82294AC0(ctx, base);
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

__attribute__((alias("__imp__sub_829032F4"))) PPC_WEAK_FUNC(sub_829032F4);
PPC_FUNC_IMPL(__imp__sub_829032F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829032F8"))) PPC_WEAK_FUNC(sub_829032F8);
PPC_FUNC_IMPL(__imp__sub_829032F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x82903308
	if (ctx.cr6.gt) goto loc_82903308;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
loc_82903308:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903314"))) PPC_WEAK_FUNC(sub_82903314);
PPC_FUNC_IMPL(__imp__sub_82903314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903318"))) PPC_WEAK_FUNC(sub_82903318);
PPC_FUNC_IMPL(__imp__sub_82903318) {
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
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82cb1160
	ctx.lr = 0x82903338;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828328f8
	ctx.lr = 0x82903340;
	sub_828328F8(ctx, base);
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

__attribute__((alias("__imp__sub_82903354"))) PPC_WEAK_FUNC(sub_82903354);
PPC_FUNC_IMPL(__imp__sub_82903354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903358"))) PPC_WEAK_FUNC(sub_82903358);
PPC_FUNC_IMPL(__imp__sub_82903358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,380
	ctx.r3.s64 = ctx.r3.s64 + 380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903360"))) PPC_WEAK_FUNC(sub_82903360);
PPC_FUNC_IMPL(__imp__sub_82903360) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903368"))) PPC_WEAK_FUNC(sub_82903368);
PPC_FUNC_IMPL(__imp__sub_82903368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,396(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903370"))) PPC_WEAK_FUNC(sub_82903370);
PPC_FUNC_IMPL(__imp__sub_82903370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,396(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903378"))) PPC_WEAK_FUNC(sub_82903378);
PPC_FUNC_IMPL(__imp__sub_82903378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-3920
	ctx.r3.s64 = ctx.r11.s64 + -3920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903384"))) PPC_WEAK_FUNC(sub_82903384);
PPC_FUNC_IMPL(__imp__sub_82903384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903388"))) PPC_WEAK_FUNC(sub_82903388);
PPC_FUNC_IMPL(__imp__sub_82903388) {
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
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82cb1160
	ctx.lr = 0x829033A8;
	sub_82CB1160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828328f8
	ctx.lr = 0x829033B0;
	sub_828328F8(ctx, base);
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

__attribute__((alias("__imp__sub_829033C4"))) PPC_WEAK_FUNC(sub_829033C4);
PPC_FUNC_IMPL(__imp__sub_829033C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829033C8"))) PPC_WEAK_FUNC(sub_829033C8);
PPC_FUNC_IMPL(__imp__sub_829033C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-3872
	ctx.r3.s64 = ctx.r11.s64 + -3872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829033D4"))) PPC_WEAK_FUNC(sub_829033D4);
PPC_FUNC_IMPL(__imp__sub_829033D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829033D8"))) PPC_WEAK_FUNC(sub_829033D8);
PPC_FUNC_IMPL(__imp__sub_829033D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-400
	ctx.r3.s64 = ctx.r3.s64 + -400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829033E0"))) PPC_WEAK_FUNC(sub_829033E0);
PPC_FUNC_IMPL(__imp__sub_829033E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829033EC"))) PPC_WEAK_FUNC(sub_829033EC);
PPC_FUNC_IMPL(__imp__sub_829033EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829033F0"))) PPC_WEAK_FUNC(sub_829033F0);
PPC_FUNC_IMPL(__imp__sub_829033F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-560
	ctx.r3.s64 = ctx.r3.s64 + -560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829033F8"))) PPC_WEAK_FUNC(sub_829033F8);
PPC_FUNC_IMPL(__imp__sub_829033F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r10,-28520
	ctx.r9.s64 = ctx.r10.s64 + -28520;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290342C"))) PPC_WEAK_FUNC(sub_8290342C);
PPC_FUNC_IMPL(__imp__sub_8290342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903430"))) PPC_WEAK_FUNC(sub_82903430);
PPC_FUNC_IMPL(__imp__sub_82903430) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28796
	ctx.r4.s64 = ctx.r11.s64 + -28796;
	// bl 0x822960c0
	ctx.lr = 0x82903450;
	sub_822960C0(ctx, base);
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

__attribute__((alias("__imp__sub_82903468"))) PPC_WEAK_FUNC(sub_82903468);
PPC_FUNC_IMPL(__imp__sub_82903468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290347c
	if (ctx.cr6.eq) goto loc_8290347C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_8290347C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903484"))) PPC_WEAK_FUNC(sub_82903484);
PPC_FUNC_IMPL(__imp__sub_82903484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903488"))) PPC_WEAK_FUNC(sub_82903488);
PPC_FUNC_IMPL(__imp__sub_82903488) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lfs f1,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r4,128(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// bl 0x82902fd0
	ctx.lr = 0x829034D0;
	sub_82902FD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// addi r10,r31,328
	ctx.r10.s64 = ctx.r31.s64 + 328;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r5,r6,-28520
	ctx.r5.s64 = ctx.r6.s64 + -28520;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// clrlwi r3,r4,1
	ctx.r3.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r5,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r5.u32);
	// stw r7,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r7.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82903554"))) PPC_WEAK_FUNC(sub_82903554);
PPC_FUNC_IMPL(__imp__sub_82903554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903558"))) PPC_WEAK_FUNC(sub_82903558);
PPC_FUNC_IMPL(__imp__sub_82903558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82903598"))) PPC_WEAK_FUNC(sub_82903598);
PPC_FUNC_IMPL(__imp__sub_82903598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290359C"))) PPC_WEAK_FUNC(sub_8290359C);
PPC_FUNC_IMPL(__imp__sub_8290359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829035A0"))) PPC_WEAK_FUNC(sub_829035A0);
PPC_FUNC_IMPL(__imp__sub_829035A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,15
	ctx.r11.s64 = 15;
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lvx128 v62,r4,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// ble cr6,0x82903680
	if (!ctx.cr6.gt) goto loc_82903680;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// vspltw128 v62,v63,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
loc_829035D0:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r31,r9,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lvx128 v61,r10,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r8,r4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r8
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v57,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v56,v58,v59,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v53,v54,v55,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vmulfp128 v52,v57,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v51,v57,v56
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v50,v53,v56
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v49,v63,v52
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v48,v51,135
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x78));
	// vpermwi128 v47,v50,99
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x9C));
	// vpermwi128 v5,v51,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0x9C));
	// vpermwi128 v4,v50,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0x78));
	// vmulfp128 v3,v47,v48
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v48.f32)));
	// vnmsubfp v2,v4,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v46,v2,v49
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v49.f32), 0xEF));
	// vspltw128 v45,v46,0
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xFF));
	// stvewx128 v45,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x829035d0
	if (!ctx.cr0.eq) goto loc_829035D0;
loc_82903680:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903688"))) PPC_WEAK_FUNC(sub_82903688);
PPC_FUNC_IMPL(__imp__sub_82903688) {
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
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829036B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82903724
	if (ctx.cr6.eq) goto loc_82903724;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9fc0
	ctx.lr = 0x829036D4;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x829036E4;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903724
	if (ctx.cr6.eq) goto loc_82903724;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82903724
	if (!ctx.cr0.eq) goto loc_82903724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82903724:
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

__attribute__((alias("__imp__sub_8290373C"))) PPC_WEAK_FUNC(sub_8290373C);
PPC_FUNC_IMPL(__imp__sub_8290373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903740"))) PPC_WEAK_FUNC(sub_82903740);
PPC_FUNC_IMPL(__imp__sub_82903740) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829037f8
	if (ctx.cr6.eq) goto loc_829037F8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24972);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829037f8
	if (ctx.cr6.eq) goto loc_829037F8;
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829037f8
	if (!ctx.cr6.eq) goto loc_829037F8;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829037f0
	if (!ctx.cr6.gt) goto loc_829037F0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82903794:
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lbz r7,35(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 35);
	// lbz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// stb r7,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r7.u8);
	// stb r6,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r6.u8);
	// lbz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r4,39(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// stb r4,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r4.u8);
	// stb r5,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r5.u8);
	// lbz r3,33(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lbz r7,34(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// stb r7,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r7.u8);
	// stb r3,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r3.u8);
	// lbz r6,37(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// stb r5,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r5.u8);
	// stb r6,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r6.u8);
	// lwz r4,32(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82903794
	if (ctx.cr6.lt) goto loc_82903794;
loc_829037F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
loc_829037F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r8,24
	ctx.r3.s64 = ctx.r8.s64 + 24;
	// bl 0x829062f0
	ctx.lr = 0x82903804;
	sub_829062F0(ctx, base);
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

__attribute__((alias("__imp__sub_8290381C"))) PPC_WEAK_FUNC(sub_8290381C);
PPC_FUNC_IMPL(__imp__sub_8290381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903820"))) PPC_WEAK_FUNC(sub_82903820);
PPC_FUNC_IMPL(__imp__sub_82903820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82903828;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r4,128(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// rlwinm r30,r4,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828c9fc0
	ctx.lr = 0x82903860;
	sub_828C9FC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82903874;
	sub_82473550(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829038b4
	if (ctx.cr6.eq) goto loc_829038B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x829038b4
	if (!ctx.cr0.eq) goto loc_829038B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829038B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829038B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76378
	ctx.lr = 0x829038C8;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e76f10
	ctx.lr = 0x829038DC;
	sub_82E76F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x829038E8;
	sub_82CB16F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x829038F4;
	sub_82E77010(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829038FC"))) PPC_WEAK_FUNC(sub_829038FC);
PPC_FUNC_IMPL(__imp__sub_829038FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903900"))) PPC_WEAK_FUNC(sub_82903900);
PPC_FUNC_IMPL(__imp__sub_82903900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82903948"))) PPC_WEAK_FUNC(sub_82903948);
PPC_FUNC_IMPL(__imp__sub_82903948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8290394C"))) PPC_WEAK_FUNC(sub_8290394C);
PPC_FUNC_IMPL(__imp__sub_8290394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903950"))) PPC_WEAK_FUNC(sub_82903950);
PPC_FUNC_IMPL(__imp__sub_82903950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82903958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-29192
	ctx.r8.s64 = ctx.r9.s64 + -29192;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r5,r7,-28488
	ctx.r5.s64 = ctx.r7.s64 + -28488;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r6,704(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,448(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// rlwinm r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r7,164(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82903a58
	if (!ctx.cr6.gt) goto loc_82903A58;
loc_829039E8:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82903a24
	if (!ctx.cr6.gt) goto loc_82903A24;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// li r4,408
	ctx.r4.s64 = 408;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82903A24;
	sub_82294520(ctx, base);
loc_82903A24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r29,408
	ctx.r10.s64 = ctx.r29.s64 * 408;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82903a44
	if (ctx.cr0.eq) goto loc_82903A44;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82903488
	ctx.lr = 0x82903A44;
	sub_82903488(ctx, base);
loc_82903A44:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829039e8
	if (ctx.cr6.lt) goto loc_829039E8;
loc_82903A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82903b30
	ctx.lr = 0x82903A60;
	sub_82903B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903A6C"))) PPC_WEAK_FUNC(sub_82903A6C);
PPC_FUNC_IMPL(__imp__sub_82903A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903A70"))) PPC_WEAK_FUNC(sub_82903A70);
PPC_FUNC_IMPL(__imp__sub_82903A70) {
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
	// bl 0x82903ac0
	ctx.lr = 0x82903A90;
	sub_82903AC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903aa8
	if (ctx.cr6.eq) goto loc_82903AA8;
	// bl 0x82294a58
	ctx.lr = 0x82903AA4;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82903AA8:
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

__attribute__((alias("__imp__sub_82903AC0"))) PPC_WEAK_FUNC(sub_82903AC0);
PPC_FUNC_IMPL(__imp__sub_82903AC0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-28488
	ctx.r10.s64 = ctx.r11.s64 + -28488;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903b00
	if (ctx.cr6.eq) goto loc_82903B00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82903B00:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823721d0
	ctx.lr = 0x82903B08;
	sub_823721D0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x829069e8
	ctx.lr = 0x82903B10;
	sub_829069E8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-29192
	ctx.r10.s64 = ctx.r11.s64 + -29192;
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

__attribute__((alias("__imp__sub_82903B30"))) PPC_WEAK_FUNC(sub_82903B30);
PPC_FUNC_IMPL(__imp__sub_82903B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82903B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82903b74
	if (!ctx.cr6.gt) goto loc_82903B74;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82903B54:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x829045e0
	ctx.lr = 0x82903B60;
	sub_829045E0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,408
	ctx.r31.s64 = ctx.r31.s64 + 408;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82903b54
	if (ctx.cr6.lt) goto loc_82903B54;
loc_82903B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903B7C"))) PPC_WEAK_FUNC(sub_82903B7C);
PPC_FUNC_IMPL(__imp__sub_82903B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903B80"))) PPC_WEAK_FUNC(sub_82903B80);
PPC_FUNC_IMPL(__imp__sub_82903B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82903B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82903bc4
	if (!ctx.cr6.gt) goto loc_82903BC4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82903BA4:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82904e90
	ctx.lr = 0x82903BB0;
	sub_82904E90(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,408
	ctx.r31.s64 = ctx.r31.s64 + 408;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82903ba4
	if (ctx.cr6.lt) goto loc_82903BA4;
loc_82903BC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82903c40
	ctx.lr = 0x82903BCC;
	sub_82903C40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903BD4"))) PPC_WEAK_FUNC(sub_82903BD4);
PPC_FUNC_IMPL(__imp__sub_82903BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903BD8"))) PPC_WEAK_FUNC(sub_82903BD8);
PPC_FUNC_IMPL(__imp__sub_82903BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82903BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903bf8
	if (ctx.cr6.eq) goto loc_82903BF8;
	// bl 0x82903c40
	ctx.lr = 0x82903BF8;
	sub_82903C40(ctx, base);
loc_82903BF8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82903c2c
	if (!ctx.cr6.gt) goto loc_82903C2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82903C0C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82904f18
	ctx.lr = 0x82903C18;
	sub_82904F18(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,408
	ctx.r31.s64 = ctx.r31.s64 + 408;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82903c0c
	if (ctx.cr6.lt) goto loc_82903C0C;
loc_82903C2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903C3C"))) PPC_WEAK_FUNC(sub_82903C3C);
PPC_FUNC_IMPL(__imp__sub_82903C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903C40"))) PPC_WEAK_FUNC(sub_82903C40);
PPC_FUNC_IMPL(__imp__sub_82903C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82903C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82903c88
	if (!ctx.cr6.gt) goto loc_82903C88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82903C68:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x829057a0
	ctx.lr = 0x82903C74;
	sub_829057A0(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,408
	ctx.r31.s64 = ctx.r31.s64 + 408;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82903c68
	if (ctx.cr6.lt) goto loc_82903C68;
loc_82903C88:
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903C94"))) PPC_WEAK_FUNC(sub_82903C94);
PPC_FUNC_IMPL(__imp__sub_82903C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903C98"))) PPC_WEAK_FUNC(sub_82903C98);
PPC_FUNC_IMPL(__imp__sub_82903C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82903CA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82903cd0
	if (!ctx.cr6.eq) goto loc_82903CD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82903cd0
	if (!ctx.cr6.gt) goto loc_82903CD0;
	// bl 0x82903bd8
	ctx.lr = 0x82903CD0;
	sub_82903BD8(ctx, base);
loc_82903CD0:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822959a8
	ctx.lr = 0x82903CDC;
	sub_822959A8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82903d00
	if (ctx.cr6.eq) goto loc_82903D00;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82906090
	ctx.lr = 0x82903CF8;
	sub_82906090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82903d04
	goto loc_82903D04;
loc_82903D00:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82903D04:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903d90
	if (ctx.cr6.eq) goto loc_82903D90;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-21884
	ctx.r4.s64 = ctx.r11.s64 + -21884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295070
	ctx.lr = 0x82903D28;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903d48
	if (ctx.cr6.eq) goto loc_82903D48;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r9,r10,-28424
	ctx.r9.s64 = ctx.r10.s64 + -28424;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82903D48:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82903da8
	if (ctx.cr6.eq) goto loc_82903DA8;
	// lwsync 
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77f4
	ctx.lr = 0x82903D88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82903D90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82903DA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82903DB0"))) PPC_WEAK_FUNC(sub_82903DB0);
PPC_FUNC_IMPL(__imp__sub_82903DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r11,-28424
	ctx.r9.s64 = ctx.r11.s64 + -28424;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903DD0"))) PPC_WEAK_FUNC(sub_82903DD0);
PPC_FUNC_IMPL(__imp__sub_82903DD0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82903DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903E0C"))) PPC_WEAK_FUNC(sub_82903E0C);
PPC_FUNC_IMPL(__imp__sub_82903E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903E10"))) PPC_WEAK_FUNC(sub_82903E10);
PPC_FUNC_IMPL(__imp__sub_82903E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903E1C"))) PPC_WEAK_FUNC(sub_82903E1C);
PPC_FUNC_IMPL(__imp__sub_82903E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82903E20"))) PPC_WEAK_FUNC(sub_82903E20);
PPC_FUNC_IMPL(__imp__sub_82903E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82903E30"))) PPC_WEAK_FUNC(sub_82903E30);
PPC_FUNC_IMPL(__imp__sub_82903E30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82903e64
	if (ctx.cr6.eq) goto loc_82903E64;
	// bl 0x82294a58
	ctx.lr = 0x82903E60;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82903E64:
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

__attribute__((alias("__imp__sub_82903E78"))) PPC_WEAK_FUNC(sub_82903E78);
PPC_FUNC_IMPL(__imp__sub_82903E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82903E80;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,56(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82903eb0
	if (ctx.cr6.eq) goto loc_82903EB0;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82906268
	ctx.lr = 0x82903EA4;
	sub_82906268(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r16,r11,27,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82903eb4
	goto loc_82903EB4;
loc_82903EB0:
	// li r16,1
	ctx.r16.s64 = 1;
loc_82903EB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82903ed4
	if (ctx.cr6.eq) goto loc_82903ED4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82903ED4:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r31,56(r21)
	PPC_STORE_U32(ctx.r21.u32 + 56, ctx.r31.u32);
	// lis r20,-31885
	ctx.r20.s64 = -2089615360;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mulli r10,r10,408
	ctx.r10.s64 = ctx.r10.s64 * 408;
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// add r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r19,r8,r9
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,16(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x829040b8
	if (!ctx.cr6.gt) goto loc_829040B8;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_82903F18:
	// lwz r10,56(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82903f38
	if (!ctx.cr6.gt) goto loc_82903F38;
	// lwz r11,384(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 384);
	// b 0x82903f3c
	goto loc_82903F3C;
loc_82903F38:
	// lwz r11,360(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 360);
loc_82903F3C:
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r31,r11,380
	ctx.r31.s64 = ctx.r11.s64 + 380;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290408c
	if (!ctx.cr6.gt) goto loc_8290408C;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82903F60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82903ff4
	if (!ctx.cr0.gt) goto loc_82903FF4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82903ff4
	if (!ctx.cr6.gt) goto loc_82903FF4;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82903fb0
	if (!ctx.cr6.eq) goto loc_82903FB0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82903ff4
	if (ctx.cr6.eq) goto loc_82903FF4;
loc_82903FB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82903fd4
	if (!ctx.cr6.eq) goto loc_82903FD4;
	// bl 0x822900a0
	ctx.lr = 0x82903FD0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82903FD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82903FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82903FF4:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,56(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// rotlwi r10,r8,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f5,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f4,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f3,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r7,32(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82903f60
	if (ctx.cr6.lt) goto loc_82903F60;
loc_8290408C:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8290409c
	if (!ctx.cr6.gt) goto loc_8290409C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8290409C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// addi r23,r23,52
	ctx.r23.s64 = ctx.r23.s64 + 52;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82903f18
	if (ctx.cr6.lt) goto loc_82903F18;
loc_829040B8:
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8290427c
	if (ctx.cr6.eq) goto loc_8290427C;
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8290427c
	if (!ctx.cr6.gt) goto loc_8290427C;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_829040DC:
	// lwz r10,56(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x829040fc
	if (!ctx.cr6.gt) goto loc_829040FC;
	// lwz r11,396(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 396);
	// b 0x82904100
	goto loc_82904100;
loc_829040FC:
	// lwz r11,372(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 372);
loc_82904100:
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addi r31,r11,380
	ctx.r31.s64 = ctx.r11.s64 + 380;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82904250
	if (!ctx.cr6.gt) goto loc_82904250;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82904124:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829041b8
	if (!ctx.cr0.gt) goto loc_829041B8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x829041b8
	if (!ctx.cr6.gt) goto loc_829041B8;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82904174
	if (!ctx.cr6.eq) goto loc_82904174;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829041b8
	if (ctx.cr6.eq) goto loc_829041B8;
loc_82904174:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82904198
	if (!ctx.cr6.eq) goto loc_82904198;
	// bl 0x822900a0
	ctx.lr = 0x82904194;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28888);
loc_82904198:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829041B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_829041B8:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,56(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// rotlwi r10,r8,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
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
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f5,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f4,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f3,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r7,32(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82904124
	if (ctx.cr6.lt) goto loc_82904124;
loc_82904250:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82904260
	if (!ctx.cr6.gt) goto loc_82904260;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82904260:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// addi r23,r23,52
	ctx.r23.s64 = ctx.r23.s64 + 52;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829040dc
	if (ctx.cr6.lt) goto loc_829040DC;
loc_8290427C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r11,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r11.u32);
	// beq cr6,0x829042a8
	if (ctx.cr6.eq) goto loc_829042A8;
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829042a8
	if (!ctx.cr6.gt) goto loc_829042A8;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x829042b0
	ctx.lr = 0x829042A8;
	sub_829042B0(ctx, base);
loc_829042A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829042B0"))) PPC_WEAK_FUNC(sub_829042B0);
PPC_FUNC_IMPL(__imp__sub_829042B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x829042B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829044fc
	if (ctx.cr6.eq) goto loc_829044FC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,160(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,128(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// rlwinm r28,r5,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82e76378
	ctx.lr = 0x829042FC;
	sub_82E76378(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76f10
	ctx.lr = 0x82904310;
	sub_82E76F10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82904320;
	sub_82CB16F0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x829044f0
	if (!ctx.cr6.gt) goto loc_829044F0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f8,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f8.f64 = double(temp.f32);
	// addi r28,r11,-18304
	ctx.r28.s64 = ctx.r11.s64 + -18304;
	// lfs f7,-17776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17776);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f5.f64 = double(temp.f32);
loc_82904354:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r3,r4,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r4,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 | ctx.r10.u64;
	// lfsx f12,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f6,f12,f8,f0
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// ble cr6,0x829044dc
	if (!ctx.cr6.gt) goto loc_829044DC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_829043A8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r26,13(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lbz r25,15(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// lbz r24,14(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r23,13(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r11,15(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f3,104(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f10
	ctx.f0.f64 = double(ctx.f10.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// fcfid f9,f3
	ctx.f9.f64 = double(ctx.f3.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// fcfid f4,f1
	ctx.f4.f64 = double(ctx.f1.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// fmsubs f1,f13,f7,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fmsubs f11,f3,f7,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmsubs f0,f10,f7,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f8.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// fmsubs f10,f2,f7,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f9,f1,f6
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmsubs f3,f13,f7,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fmuls f1,f11,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmsubs f2,f12,f7,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f8.f64));
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8281b1a8
	ctx.lr = 0x829044C8;
	sub_8281B1A8(ctx, base);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x829043a8
	if (ctx.cr6.lt) goto loc_829043A8;
loc_829044DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82904354
	if (ctx.cr6.lt) goto loc_82904354;
loc_829044F0:
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82e77010
	ctx.lr = 0x829044FC;
	sub_82E77010(ctx, base);
loc_829044FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82904504"))) PPC_WEAK_FUNC(sub_82904504);
PPC_FUNC_IMPL(__imp__sub_82904504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82904508"))) PPC_WEAK_FUNC(sub_82904508);
PPC_FUNC_IMPL(__imp__sub_82904508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82904570
	if (!ctx.cr6.lt) goto loc_82904570;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82904548
	if (ctx.cr6.eq) goto loc_82904548;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82904548
	if (!ctx.cr6.gt) goto loc_82904548;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r4,408
	ctx.r11.s64 = ctx.r4.s64 * 408;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,384(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82904548:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r4,408
	ctx.r11.s64 = ctx.r4.s64 * 408;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82904570
	if (!ctx.cr6.lt) goto loc_82904570;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82904570:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

