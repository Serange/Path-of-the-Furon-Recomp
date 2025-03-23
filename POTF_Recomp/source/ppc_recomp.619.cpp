#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833B36E4"))) PPC_WEAK_FUNC(sub_833B36E4);
PPC_FUNC_IMPL(__imp__sub_833B36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B36E8"))) PPC_WEAK_FUNC(sub_833B36E8);
PPC_FUNC_IMPL(__imp__sub_833B36E8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,3220
	ctx.r31.s64 = ctx.r11.s64 + 3220;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3708;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3710;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3728;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B373C"))) PPC_WEAK_FUNC(sub_833B373C);
PPC_FUNC_IMPL(__imp__sub_833B373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3740"))) PPC_WEAK_FUNC(sub_833B3740);
PPC_FUNC_IMPL(__imp__sub_833B3740) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,3128
	ctx.r31.s64 = ctx.r11.s64 + 3128;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3760;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3768;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3780;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3794"))) PPC_WEAK_FUNC(sub_833B3794);
PPC_FUNC_IMPL(__imp__sub_833B3794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3798"))) PPC_WEAK_FUNC(sub_833B3798);
PPC_FUNC_IMPL(__imp__sub_833B3798) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,3036
	ctx.r31.s64 = ctx.r11.s64 + 3036;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B37B8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B37C0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B37D8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B37EC"))) PPC_WEAK_FUNC(sub_833B37EC);
PPC_FUNC_IMPL(__imp__sub_833B37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B37F0"))) PPC_WEAK_FUNC(sub_833B37F0);
PPC_FUNC_IMPL(__imp__sub_833B37F0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2944
	ctx.r31.s64 = ctx.r11.s64 + 2944;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3810;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3818;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3830;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3844"))) PPC_WEAK_FUNC(sub_833B3844);
PPC_FUNC_IMPL(__imp__sub_833B3844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3848"))) PPC_WEAK_FUNC(sub_833B3848);
PPC_FUNC_IMPL(__imp__sub_833B3848) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2852
	ctx.r31.s64 = ctx.r11.s64 + 2852;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3868;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3870;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3888;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B389C"))) PPC_WEAK_FUNC(sub_833B389C);
PPC_FUNC_IMPL(__imp__sub_833B389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B38A0"))) PPC_WEAK_FUNC(sub_833B38A0);
PPC_FUNC_IMPL(__imp__sub_833B38A0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2760
	ctx.r31.s64 = ctx.r11.s64 + 2760;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B38C0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B38C8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B38E0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B38F4"))) PPC_WEAK_FUNC(sub_833B38F4);
PPC_FUNC_IMPL(__imp__sub_833B38F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B38F8"))) PPC_WEAK_FUNC(sub_833B38F8);
PPC_FUNC_IMPL(__imp__sub_833B38F8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2668
	ctx.r31.s64 = ctx.r11.s64 + 2668;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3918;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3920;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3938;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B394C"))) PPC_WEAK_FUNC(sub_833B394C);
PPC_FUNC_IMPL(__imp__sub_833B394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3950"))) PPC_WEAK_FUNC(sub_833B3950);
PPC_FUNC_IMPL(__imp__sub_833B3950) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2576
	ctx.r31.s64 = ctx.r11.s64 + 2576;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3970;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3978;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3990;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B39A4"))) PPC_WEAK_FUNC(sub_833B39A4);
PPC_FUNC_IMPL(__imp__sub_833B39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B39A8"))) PPC_WEAK_FUNC(sub_833B39A8);
PPC_FUNC_IMPL(__imp__sub_833B39A8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2484
	ctx.r31.s64 = ctx.r11.s64 + 2484;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B39C8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B39D0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B39E8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B39FC"))) PPC_WEAK_FUNC(sub_833B39FC);
PPC_FUNC_IMPL(__imp__sub_833B39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3A00"))) PPC_WEAK_FUNC(sub_833B3A00);
PPC_FUNC_IMPL(__imp__sub_833B3A00) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2392
	ctx.r31.s64 = ctx.r11.s64 + 2392;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3A20;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3A28;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3A40;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3A54"))) PPC_WEAK_FUNC(sub_833B3A54);
PPC_FUNC_IMPL(__imp__sub_833B3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3A58"))) PPC_WEAK_FUNC(sub_833B3A58);
PPC_FUNC_IMPL(__imp__sub_833B3A58) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2300
	ctx.r31.s64 = ctx.r11.s64 + 2300;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3A78;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3A80;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3A98;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3AAC"))) PPC_WEAK_FUNC(sub_833B3AAC);
PPC_FUNC_IMPL(__imp__sub_833B3AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3AB0"))) PPC_WEAK_FUNC(sub_833B3AB0);
PPC_FUNC_IMPL(__imp__sub_833B3AB0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2208
	ctx.r31.s64 = ctx.r11.s64 + 2208;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3AD0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3AD8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3AF0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3B04"))) PPC_WEAK_FUNC(sub_833B3B04);
PPC_FUNC_IMPL(__imp__sub_833B3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3B08"))) PPC_WEAK_FUNC(sub_833B3B08);
PPC_FUNC_IMPL(__imp__sub_833B3B08) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2116
	ctx.r31.s64 = ctx.r11.s64 + 2116;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3B28;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3B30;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3B48;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3B5C"))) PPC_WEAK_FUNC(sub_833B3B5C);
PPC_FUNC_IMPL(__imp__sub_833B3B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3B60"))) PPC_WEAK_FUNC(sub_833B3B60);
PPC_FUNC_IMPL(__imp__sub_833B3B60) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,2024
	ctx.r31.s64 = ctx.r11.s64 + 2024;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3B80;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3B88;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3BA0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3BB4"))) PPC_WEAK_FUNC(sub_833B3BB4);
PPC_FUNC_IMPL(__imp__sub_833B3BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3BB8"))) PPC_WEAK_FUNC(sub_833B3BB8);
PPC_FUNC_IMPL(__imp__sub_833B3BB8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1932
	ctx.r31.s64 = ctx.r11.s64 + 1932;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3BD8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3BE0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3BF8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3C0C"))) PPC_WEAK_FUNC(sub_833B3C0C);
PPC_FUNC_IMPL(__imp__sub_833B3C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3C10"))) PPC_WEAK_FUNC(sub_833B3C10);
PPC_FUNC_IMPL(__imp__sub_833B3C10) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1840
	ctx.r31.s64 = ctx.r11.s64 + 1840;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3C30;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3C38;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3C50;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3C64"))) PPC_WEAK_FUNC(sub_833B3C64);
PPC_FUNC_IMPL(__imp__sub_833B3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3C68"))) PPC_WEAK_FUNC(sub_833B3C68);
PPC_FUNC_IMPL(__imp__sub_833B3C68) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1748
	ctx.r31.s64 = ctx.r11.s64 + 1748;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3C88;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3C90;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3CA8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3CBC"))) PPC_WEAK_FUNC(sub_833B3CBC);
PPC_FUNC_IMPL(__imp__sub_833B3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3CC0"))) PPC_WEAK_FUNC(sub_833B3CC0);
PPC_FUNC_IMPL(__imp__sub_833B3CC0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1656
	ctx.r31.s64 = ctx.r11.s64 + 1656;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3CE0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3CE8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3D00;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3D14"))) PPC_WEAK_FUNC(sub_833B3D14);
PPC_FUNC_IMPL(__imp__sub_833B3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3D18"))) PPC_WEAK_FUNC(sub_833B3D18);
PPC_FUNC_IMPL(__imp__sub_833B3D18) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1564
	ctx.r31.s64 = ctx.r11.s64 + 1564;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3D38;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3D40;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3D58;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3D6C"))) PPC_WEAK_FUNC(sub_833B3D6C);
PPC_FUNC_IMPL(__imp__sub_833B3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3D70"))) PPC_WEAK_FUNC(sub_833B3D70);
PPC_FUNC_IMPL(__imp__sub_833B3D70) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1472
	ctx.r31.s64 = ctx.r11.s64 + 1472;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3D90;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3D98;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3DB0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3DC4"))) PPC_WEAK_FUNC(sub_833B3DC4);
PPC_FUNC_IMPL(__imp__sub_833B3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3DC8"))) PPC_WEAK_FUNC(sub_833B3DC8);
PPC_FUNC_IMPL(__imp__sub_833B3DC8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1380
	ctx.r31.s64 = ctx.r11.s64 + 1380;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3DE8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3DF0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3E08;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3E1C"))) PPC_WEAK_FUNC(sub_833B3E1C);
PPC_FUNC_IMPL(__imp__sub_833B3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3E20"))) PPC_WEAK_FUNC(sub_833B3E20);
PPC_FUNC_IMPL(__imp__sub_833B3E20) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,1288
	ctx.r31.s64 = ctx.r11.s64 + 1288;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3E40;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3E48;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3E60;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3E74"))) PPC_WEAK_FUNC(sub_833B3E74);
PPC_FUNC_IMPL(__imp__sub_833B3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3E78"))) PPC_WEAK_FUNC(sub_833B3E78);
PPC_FUNC_IMPL(__imp__sub_833B3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-20060
	ctx.r3.s64 = ctx.r11.s64 + -20060;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3E84"))) PPC_WEAK_FUNC(sub_833B3E84);
PPC_FUNC_IMPL(__imp__sub_833B3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3E88"))) PPC_WEAK_FUNC(sub_833B3E88);
PPC_FUNC_IMPL(__imp__sub_833B3E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-20044
	ctx.r3.s64 = ctx.r11.s64 + -20044;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3E94"))) PPC_WEAK_FUNC(sub_833B3E94);
PPC_FUNC_IMPL(__imp__sub_833B3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3E98"))) PPC_WEAK_FUNC(sub_833B3E98);
PPC_FUNC_IMPL(__imp__sub_833B3E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-20028
	ctx.r3.s64 = ctx.r11.s64 + -20028;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3EA4"))) PPC_WEAK_FUNC(sub_833B3EA4);
PPC_FUNC_IMPL(__imp__sub_833B3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3EA8"))) PPC_WEAK_FUNC(sub_833B3EA8);
PPC_FUNC_IMPL(__imp__sub_833B3EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-20012
	ctx.r3.s64 = ctx.r11.s64 + -20012;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3EB4"))) PPC_WEAK_FUNC(sub_833B3EB4);
PPC_FUNC_IMPL(__imp__sub_833B3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3EB8"))) PPC_WEAK_FUNC(sub_833B3EB8);
PPC_FUNC_IMPL(__imp__sub_833B3EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19996
	ctx.r3.s64 = ctx.r11.s64 + -19996;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3EC4"))) PPC_WEAK_FUNC(sub_833B3EC4);
PPC_FUNC_IMPL(__imp__sub_833B3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3EC8"))) PPC_WEAK_FUNC(sub_833B3EC8);
PPC_FUNC_IMPL(__imp__sub_833B3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19980
	ctx.r3.s64 = ctx.r11.s64 + -19980;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3ED4"))) PPC_WEAK_FUNC(sub_833B3ED4);
PPC_FUNC_IMPL(__imp__sub_833B3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3ED8"))) PPC_WEAK_FUNC(sub_833B3ED8);
PPC_FUNC_IMPL(__imp__sub_833B3ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19964
	ctx.r3.s64 = ctx.r11.s64 + -19964;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3EE4"))) PPC_WEAK_FUNC(sub_833B3EE4);
PPC_FUNC_IMPL(__imp__sub_833B3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3EE8"))) PPC_WEAK_FUNC(sub_833B3EE8);
PPC_FUNC_IMPL(__imp__sub_833B3EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19948
	ctx.r3.s64 = ctx.r11.s64 + -19948;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3EF4"))) PPC_WEAK_FUNC(sub_833B3EF4);
PPC_FUNC_IMPL(__imp__sub_833B3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3EF8"))) PPC_WEAK_FUNC(sub_833B3EF8);
PPC_FUNC_IMPL(__imp__sub_833B3EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19932
	ctx.r3.s64 = ctx.r11.s64 + -19932;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F04"))) PPC_WEAK_FUNC(sub_833B3F04);
PPC_FUNC_IMPL(__imp__sub_833B3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F08"))) PPC_WEAK_FUNC(sub_833B3F08);
PPC_FUNC_IMPL(__imp__sub_833B3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19916
	ctx.r3.s64 = ctx.r11.s64 + -19916;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F14"))) PPC_WEAK_FUNC(sub_833B3F14);
PPC_FUNC_IMPL(__imp__sub_833B3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F18"))) PPC_WEAK_FUNC(sub_833B3F18);
PPC_FUNC_IMPL(__imp__sub_833B3F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19900
	ctx.r3.s64 = ctx.r11.s64 + -19900;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F24"))) PPC_WEAK_FUNC(sub_833B3F24);
PPC_FUNC_IMPL(__imp__sub_833B3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F28"))) PPC_WEAK_FUNC(sub_833B3F28);
PPC_FUNC_IMPL(__imp__sub_833B3F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19884
	ctx.r3.s64 = ctx.r11.s64 + -19884;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F34"))) PPC_WEAK_FUNC(sub_833B3F34);
PPC_FUNC_IMPL(__imp__sub_833B3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F38"))) PPC_WEAK_FUNC(sub_833B3F38);
PPC_FUNC_IMPL(__imp__sub_833B3F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19868
	ctx.r3.s64 = ctx.r11.s64 + -19868;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F44"))) PPC_WEAK_FUNC(sub_833B3F44);
PPC_FUNC_IMPL(__imp__sub_833B3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F48"))) PPC_WEAK_FUNC(sub_833B3F48);
PPC_FUNC_IMPL(__imp__sub_833B3F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19852
	ctx.r3.s64 = ctx.r11.s64 + -19852;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F54"))) PPC_WEAK_FUNC(sub_833B3F54);
PPC_FUNC_IMPL(__imp__sub_833B3F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F58"))) PPC_WEAK_FUNC(sub_833B3F58);
PPC_FUNC_IMPL(__imp__sub_833B3F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19836
	ctx.r3.s64 = ctx.r11.s64 + -19836;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F64"))) PPC_WEAK_FUNC(sub_833B3F64);
PPC_FUNC_IMPL(__imp__sub_833B3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F68"))) PPC_WEAK_FUNC(sub_833B3F68);
PPC_FUNC_IMPL(__imp__sub_833B3F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-19820
	ctx.r3.s64 = ctx.r11.s64 + -19820;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F74"))) PPC_WEAK_FUNC(sub_833B3F74);
PPC_FUNC_IMPL(__imp__sub_833B3F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F78"))) PPC_WEAK_FUNC(sub_833B3F78);
PPC_FUNC_IMPL(__imp__sub_833B3F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-27800
	ctx.r3.s64 = ctx.r11.s64 + -27800;
	// b 0x827dcf00
	sub_827DCF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B3F84"))) PPC_WEAK_FUNC(sub_833B3F84);
PPC_FUNC_IMPL(__imp__sub_833B3F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3F88"))) PPC_WEAK_FUNC(sub_833B3F88);
PPC_FUNC_IMPL(__imp__sub_833B3F88) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5680
	ctx.r31.s64 = ctx.r11.s64 + -5680;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B3FA8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B3FB0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B3FC8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B3FDC"))) PPC_WEAK_FUNC(sub_833B3FDC);
PPC_FUNC_IMPL(__imp__sub_833B3FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B3FE0"))) PPC_WEAK_FUNC(sub_833B3FE0);
PPC_FUNC_IMPL(__imp__sub_833B3FE0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5936
	ctx.r31.s64 = ctx.r11.s64 + -5936;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4000;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4008;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4020;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4034"))) PPC_WEAK_FUNC(sub_833B4034);
PPC_FUNC_IMPL(__imp__sub_833B4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4038"))) PPC_WEAK_FUNC(sub_833B4038);
PPC_FUNC_IMPL(__imp__sub_833B4038) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5844
	ctx.r31.s64 = ctx.r11.s64 + -5844;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4058;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4060;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4078;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B408C"))) PPC_WEAK_FUNC(sub_833B408C);
PPC_FUNC_IMPL(__imp__sub_833B408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4090"))) PPC_WEAK_FUNC(sub_833B4090);
PPC_FUNC_IMPL(__imp__sub_833B4090) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5060
	ctx.r31.s64 = ctx.r11.s64 + 5060;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B40B0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B40B8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B40D0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B40E4"))) PPC_WEAK_FUNC(sub_833B40E4);
PPC_FUNC_IMPL(__imp__sub_833B40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B40E8"))) PPC_WEAK_FUNC(sub_833B40E8);
PPC_FUNC_IMPL(__imp__sub_833B40E8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4968
	ctx.r31.s64 = ctx.r11.s64 + 4968;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4108;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4110;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4128;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B413C"))) PPC_WEAK_FUNC(sub_833B413C);
PPC_FUNC_IMPL(__imp__sub_833B413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4140"))) PPC_WEAK_FUNC(sub_833B4140);
PPC_FUNC_IMPL(__imp__sub_833B4140) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4876
	ctx.r31.s64 = ctx.r11.s64 + 4876;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4160;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4168;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4180;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4194"))) PPC_WEAK_FUNC(sub_833B4194);
PPC_FUNC_IMPL(__imp__sub_833B4194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4198"))) PPC_WEAK_FUNC(sub_833B4198);
PPC_FUNC_IMPL(__imp__sub_833B4198) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4784
	ctx.r31.s64 = ctx.r11.s64 + 4784;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B41B8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B41C0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B41D8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B41EC"))) PPC_WEAK_FUNC(sub_833B41EC);
PPC_FUNC_IMPL(__imp__sub_833B41EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B41F0"))) PPC_WEAK_FUNC(sub_833B41F0);
PPC_FUNC_IMPL(__imp__sub_833B41F0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4692
	ctx.r31.s64 = ctx.r11.s64 + 4692;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4210;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4218;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4230;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4244"))) PPC_WEAK_FUNC(sub_833B4244);
PPC_FUNC_IMPL(__imp__sub_833B4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4248"))) PPC_WEAK_FUNC(sub_833B4248);
PPC_FUNC_IMPL(__imp__sub_833B4248) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4600
	ctx.r31.s64 = ctx.r11.s64 + 4600;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4268;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4270;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4288;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B429C"))) PPC_WEAK_FUNC(sub_833B429C);
PPC_FUNC_IMPL(__imp__sub_833B429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B42A0"))) PPC_WEAK_FUNC(sub_833B42A0);
PPC_FUNC_IMPL(__imp__sub_833B42A0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4508
	ctx.r31.s64 = ctx.r11.s64 + 4508;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B42C0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B42C8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B42E0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B42F4"))) PPC_WEAK_FUNC(sub_833B42F4);
PPC_FUNC_IMPL(__imp__sub_833B42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B42F8"))) PPC_WEAK_FUNC(sub_833B42F8);
PPC_FUNC_IMPL(__imp__sub_833B42F8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4416
	ctx.r31.s64 = ctx.r11.s64 + 4416;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4318;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4320;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4338;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B434C"))) PPC_WEAK_FUNC(sub_833B434C);
PPC_FUNC_IMPL(__imp__sub_833B434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4350"))) PPC_WEAK_FUNC(sub_833B4350);
PPC_FUNC_IMPL(__imp__sub_833B4350) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4324
	ctx.r31.s64 = ctx.r11.s64 + 4324;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4370;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4378;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4390;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B43A4"))) PPC_WEAK_FUNC(sub_833B43A4);
PPC_FUNC_IMPL(__imp__sub_833B43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B43A8"))) PPC_WEAK_FUNC(sub_833B43A8);
PPC_FUNC_IMPL(__imp__sub_833B43A8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,4232
	ctx.r31.s64 = ctx.r11.s64 + 4232;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B43C8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B43D0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B43E8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B43FC"))) PPC_WEAK_FUNC(sub_833B43FC);
PPC_FUNC_IMPL(__imp__sub_833B43FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4400"))) PPC_WEAK_FUNC(sub_833B4400);
PPC_FUNC_IMPL(__imp__sub_833B4400) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5588
	ctx.r31.s64 = ctx.r11.s64 + -5588;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4420;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4428;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4440;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4454"))) PPC_WEAK_FUNC(sub_833B4454);
PPC_FUNC_IMPL(__imp__sub_833B4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4458"))) PPC_WEAK_FUNC(sub_833B4458);
PPC_FUNC_IMPL(__imp__sub_833B4458) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5496
	ctx.r31.s64 = ctx.r11.s64 + -5496;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4478;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4480;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4498;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B44AC"))) PPC_WEAK_FUNC(sub_833B44AC);
PPC_FUNC_IMPL(__imp__sub_833B44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B44B0"))) PPC_WEAK_FUNC(sub_833B44B0);
PPC_FUNC_IMPL(__imp__sub_833B44B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29416
	ctx.r10.s64 = ctx.r11.s64 + -29416;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B44F4"))) PPC_WEAK_FUNC(sub_833B44F4);
PPC_FUNC_IMPL(__imp__sub_833B44F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B44F8"))) PPC_WEAK_FUNC(sub_833B44F8);
PPC_FUNC_IMPL(__imp__sub_833B44F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29392
	ctx.r10.s64 = ctx.r11.s64 + -29392;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B453C"))) PPC_WEAK_FUNC(sub_833B453C);
PPC_FUNC_IMPL(__imp__sub_833B453C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4540"))) PPC_WEAK_FUNC(sub_833B4540);
PPC_FUNC_IMPL(__imp__sub_833B4540) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5404
	ctx.r31.s64 = ctx.r11.s64 + -5404;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4560;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4568;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4580;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4594"))) PPC_WEAK_FUNC(sub_833B4594);
PPC_FUNC_IMPL(__imp__sub_833B4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4598"))) PPC_WEAK_FUNC(sub_833B4598);
PPC_FUNC_IMPL(__imp__sub_833B4598) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5312
	ctx.r31.s64 = ctx.r11.s64 + -5312;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B45B8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B45C0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B45D8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B45EC"))) PPC_WEAK_FUNC(sub_833B45EC);
PPC_FUNC_IMPL(__imp__sub_833B45EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B45F0"))) PPC_WEAK_FUNC(sub_833B45F0);
PPC_FUNC_IMPL(__imp__sub_833B45F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x82385538
	sub_82385538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B45FC"))) PPC_WEAK_FUNC(sub_833B45FC);
PPC_FUNC_IMPL(__imp__sub_833B45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4600"))) PPC_WEAK_FUNC(sub_833B4600);
PPC_FUNC_IMPL(__imp__sub_833B4600) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5888
	ctx.r31.s64 = ctx.r11.s64 + 5888;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4620;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4628;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4640;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4654"))) PPC_WEAK_FUNC(sub_833B4654);
PPC_FUNC_IMPL(__imp__sub_833B4654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4658"))) PPC_WEAK_FUNC(sub_833B4658);
PPC_FUNC_IMPL(__imp__sub_833B4658) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5796
	ctx.r31.s64 = ctx.r11.s64 + 5796;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4678;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4680;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4698;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B46AC"))) PPC_WEAK_FUNC(sub_833B46AC);
PPC_FUNC_IMPL(__imp__sub_833B46AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B46B0"))) PPC_WEAK_FUNC(sub_833B46B0);
PPC_FUNC_IMPL(__imp__sub_833B46B0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5704
	ctx.r31.s64 = ctx.r11.s64 + 5704;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B46D0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B46D8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B46F0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4704"))) PPC_WEAK_FUNC(sub_833B4704);
PPC_FUNC_IMPL(__imp__sub_833B4704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4708"))) PPC_WEAK_FUNC(sub_833B4708);
PPC_FUNC_IMPL(__imp__sub_833B4708) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5612
	ctx.r31.s64 = ctx.r11.s64 + 5612;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4728;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4730;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4748;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B475C"))) PPC_WEAK_FUNC(sub_833B475C);
PPC_FUNC_IMPL(__imp__sub_833B475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4760"))) PPC_WEAK_FUNC(sub_833B4760);
PPC_FUNC_IMPL(__imp__sub_833B4760) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5520
	ctx.r31.s64 = ctx.r11.s64 + 5520;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4780;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4788;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B47A0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B47B4"))) PPC_WEAK_FUNC(sub_833B47B4);
PPC_FUNC_IMPL(__imp__sub_833B47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B47B8"))) PPC_WEAK_FUNC(sub_833B47B8);
PPC_FUNC_IMPL(__imp__sub_833B47B8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5428
	ctx.r31.s64 = ctx.r11.s64 + 5428;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B47D8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B47E0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B47F8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B480C"))) PPC_WEAK_FUNC(sub_833B480C);
PPC_FUNC_IMPL(__imp__sub_833B480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4810"))) PPC_WEAK_FUNC(sub_833B4810);
PPC_FUNC_IMPL(__imp__sub_833B4810) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5336
	ctx.r31.s64 = ctx.r11.s64 + 5336;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4830;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4838;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4850;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4864"))) PPC_WEAK_FUNC(sub_833B4864);
PPC_FUNC_IMPL(__imp__sub_833B4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4868"))) PPC_WEAK_FUNC(sub_833B4868);
PPC_FUNC_IMPL(__imp__sub_833B4868) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5244
	ctx.r31.s64 = ctx.r11.s64 + 5244;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4888;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4890;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B48A8;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B48BC"))) PPC_WEAK_FUNC(sub_833B48BC);
PPC_FUNC_IMPL(__imp__sub_833B48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B48C0"))) PPC_WEAK_FUNC(sub_833B48C0);
PPC_FUNC_IMPL(__imp__sub_833B48C0) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5152
	ctx.r31.s64 = ctx.r11.s64 + 5152;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B48E0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B48E8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4900;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4914"))) PPC_WEAK_FUNC(sub_833B4914);
PPC_FUNC_IMPL(__imp__sub_833B4914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4918"))) PPC_WEAK_FUNC(sub_833B4918);
PPC_FUNC_IMPL(__imp__sub_833B4918) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5220
	ctx.r31.s64 = ctx.r11.s64 + -5220;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4938;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4940;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4958;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B496C"))) PPC_WEAK_FUNC(sub_833B496C);
PPC_FUNC_IMPL(__imp__sub_833B496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4970"))) PPC_WEAK_FUNC(sub_833B4970);
PPC_FUNC_IMPL(__imp__sub_833B4970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x82358a60
	sub_82358A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B497C"))) PPC_WEAK_FUNC(sub_833B497C);
PPC_FUNC_IMPL(__imp__sub_833B497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4980"))) PPC_WEAK_FUNC(sub_833B4980);
PPC_FUNC_IMPL(__imp__sub_833B4980) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5120
	ctx.r31.s64 = ctx.r11.s64 + -5120;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B49A0;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B49A8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B49C0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B49D4"))) PPC_WEAK_FUNC(sub_833B49D4);
PPC_FUNC_IMPL(__imp__sub_833B49D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B49D8"))) PPC_WEAK_FUNC(sub_833B49D8);
PPC_FUNC_IMPL(__imp__sub_833B49D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29528
	ctx.r10.s64 = ctx.r11.s64 + -29528;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B4A1C"))) PPC_WEAK_FUNC(sub_833B4A1C);
PPC_FUNC_IMPL(__imp__sub_833B4A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4A20"))) PPC_WEAK_FUNC(sub_833B4A20);
PPC_FUNC_IMPL(__imp__sub_833B4A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29504
	ctx.r10.s64 = ctx.r11.s64 + -29504;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B4A64"))) PPC_WEAK_FUNC(sub_833B4A64);
PPC_FUNC_IMPL(__imp__sub_833B4A64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4A68"))) PPC_WEAK_FUNC(sub_833B4A68);
PPC_FUNC_IMPL(__imp__sub_833B4A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29480
	ctx.r10.s64 = ctx.r11.s64 + -29480;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B4AAC"))) PPC_WEAK_FUNC(sub_833B4AAC);
PPC_FUNC_IMPL(__imp__sub_833B4AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4AB0"))) PPC_WEAK_FUNC(sub_833B4AB0);
PPC_FUNC_IMPL(__imp__sub_833B4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r10,r11,-29456
	ctx.r10.s64 = ctx.r11.s64 + -29456;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_833B4AF4"))) PPC_WEAK_FUNC(sub_833B4AF4);
PPC_FUNC_IMPL(__imp__sub_833B4AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4AF8"))) PPC_WEAK_FUNC(sub_833B4AF8);
PPC_FUNC_IMPL(__imp__sub_833B4AF8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-5028
	ctx.r31.s64 = ctx.r11.s64 + -5028;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4B18;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4B20;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4B38;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4B4C"))) PPC_WEAK_FUNC(sub_833B4B4C);
PPC_FUNC_IMPL(__imp__sub_833B4B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4B50"))) PPC_WEAK_FUNC(sub_833B4B50);
PPC_FUNC_IMPL(__imp__sub_833B4B50) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,5980
	ctx.r31.s64 = ctx.r11.s64 + 5980;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4B70;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4B78;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4B90;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4BA4"))) PPC_WEAK_FUNC(sub_833B4BA4);
PPC_FUNC_IMPL(__imp__sub_833B4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4BA8"))) PPC_WEAK_FUNC(sub_833B4BA8);
PPC_FUNC_IMPL(__imp__sub_833B4BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r9,r10,-28168
	ctx.r9.s64 = ctx.r10.s64 + -28168;
	// addi r11,r11,-26608
	ctx.r11.s64 = ctx.r11.s64 + -26608;
	// stw r11,-28168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28168, ctx.r11.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4BCC"))) PPC_WEAK_FUNC(sub_833B4BCC);
PPC_FUNC_IMPL(__imp__sub_833B4BCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4BD0"))) PPC_WEAK_FUNC(sub_833B4BD0);
PPC_FUNC_IMPL(__imp__sub_833B4BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x82358a60
	sub_82358A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4BDC"))) PPC_WEAK_FUNC(sub_833B4BDC);
PPC_FUNC_IMPL(__imp__sub_833B4BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4BE0"))) PPC_WEAK_FUNC(sub_833B4BE0);
PPC_FUNC_IMPL(__imp__sub_833B4BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r9,r10,-4932
	ctx.r9.s64 = ctx.r10.s64 + -4932;
	// addi r11,r11,-16404
	ctx.r11.s64 = ctx.r11.s64 + -16404;
	// stw r11,-4932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4932, ctx.r11.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4C04"))) PPC_WEAK_FUNC(sub_833B4C04);
PPC_FUNC_IMPL(__imp__sub_833B4C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4C08"))) PPC_WEAK_FUNC(sub_833B4C08);
PPC_FUNC_IMPL(__imp__sub_833B4C08) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-4908
	ctx.r31.s64 = ctx.r11.s64 + -4908;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4C28;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4C30;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4C48;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4C5C"))) PPC_WEAK_FUNC(sub_833B4C5C);
PPC_FUNC_IMPL(__imp__sub_833B4C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4C60"))) PPC_WEAK_FUNC(sub_833B4C60);
PPC_FUNC_IMPL(__imp__sub_833B4C60) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-4816
	ctx.r31.s64 = ctx.r11.s64 + -4816;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4C80;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4C88;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4CA0;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4CB4"))) PPC_WEAK_FUNC(sub_833B4CB4);
PPC_FUNC_IMPL(__imp__sub_833B4CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4CB8"))) PPC_WEAK_FUNC(sub_833B4CB8);
PPC_FUNC_IMPL(__imp__sub_833B4CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-4724
	ctx.r3.s64 = ctx.r11.s64 + -4724;
	// b 0x82358a60
	sub_82358A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4CC4"))) PPC_WEAK_FUNC(sub_833B4CC4);
PPC_FUNC_IMPL(__imp__sub_833B4CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4CC8"))) PPC_WEAK_FUNC(sub_833B4CC8);
PPC_FUNC_IMPL(__imp__sub_833B4CC8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-4716
	ctx.r31.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4CE8;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4CF0;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4D08;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4D1C"))) PPC_WEAK_FUNC(sub_833B4D1C);
PPC_FUNC_IMPL(__imp__sub_833B4D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4D20"))) PPC_WEAK_FUNC(sub_833B4D20);
PPC_FUNC_IMPL(__imp__sub_833B4D20) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-4624
	ctx.r31.s64 = ctx.r11.s64 + -4624;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82390a48
	ctx.lr = 0x833B4D40;
	sub_82390A48(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82294a58
	ctx.lr = 0x833B4D48;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x823908b8
	ctx.lr = 0x833B4D60;
	sub_823908B8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4D74"))) PPC_WEAK_FUNC(sub_833B4D74);
PPC_FUNC_IMPL(__imp__sub_833B4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4D78"))) PPC_WEAK_FUNC(sub_833B4D78);
PPC_FUNC_IMPL(__imp__sub_833B4D78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r9,r10,-4532
	ctx.r9.s64 = ctx.r10.s64 + -4532;
	// addi r11,r11,-15932
	ctx.r11.s64 = ctx.r11.s64 + -15932;
	// stw r11,-4532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4532, ctx.r11.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4D9C"))) PPC_WEAK_FUNC(sub_833B4D9C);
PPC_FUNC_IMPL(__imp__sub_833B4D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4DA0"))) PPC_WEAK_FUNC(sub_833B4DA0);
PPC_FUNC_IMPL(__imp__sub_833B4DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-4508
	ctx.r3.s64 = ctx.r11.s64 + -4508;
	// b 0x82964ae8
	sub_82964AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4DAC"))) PPC_WEAK_FUNC(sub_833B4DAC);
PPC_FUNC_IMPL(__imp__sub_833B4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4DB0"))) PPC_WEAK_FUNC(sub_833B4DB0);
PPC_FUNC_IMPL(__imp__sub_833B4DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-4484
	ctx.r3.s64 = ctx.r11.s64 + -4484;
	// b 0x82964ba8
	sub_82964BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4DBC"))) PPC_WEAK_FUNC(sub_833B4DBC);
PPC_FUNC_IMPL(__imp__sub_833B4DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4DC0"))) PPC_WEAK_FUNC(sub_833B4DC0);
PPC_FUNC_IMPL(__imp__sub_833B4DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-4172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4DD4"))) PPC_WEAK_FUNC(sub_833B4DD4);
PPC_FUNC_IMPL(__imp__sub_833B4DD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4DD8"))) PPC_WEAK_FUNC(sub_833B4DD8);
PPC_FUNC_IMPL(__imp__sub_833B4DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-4120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4DEC"))) PPC_WEAK_FUNC(sub_833B4DEC);
PPC_FUNC_IMPL(__imp__sub_833B4DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4DF0"))) PPC_WEAK_FUNC(sub_833B4DF0);
PPC_FUNC_IMPL(__imp__sub_833B4DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r3,-4068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e76d78
	sub_82E76D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4E04"))) PPC_WEAK_FUNC(sub_833B4E04);
PPC_FUNC_IMPL(__imp__sub_833B4E04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B4E08"))) PPC_WEAK_FUNC(sub_833B4E08);
PPC_FUNC_IMPL(__imp__sub_833B4E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-3592
	ctx.r3.s64 = ctx.r11.s64 + -3592;
	// b 0x822b41e8
	sub_822B41E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4E14"))) PPC_WEAK_FUNC(sub_833B4E14);
PPC_FUNC_IMPL(__imp__sub_833B4E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4E18"))) PPC_WEAK_FUNC(sub_833B4E18);
PPC_FUNC_IMPL(__imp__sub_833B4E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// b 0x822b1a50
	sub_822B1A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B4E24"))) PPC_WEAK_FUNC(sub_833B4E24);
PPC_FUNC_IMPL(__imp__sub_833B4E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4E28"))) PPC_WEAK_FUNC(sub_833B4E28);
PPC_FUNC_IMPL(__imp__sub_833B4E28) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1316
	ctx.r31.s64 = ctx.r10.s64 + 1316;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b4e68
	if (ctx.cr6.eq) goto loc_833B4E68;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B4E68;
	sub_82294520(ctx, base);
loc_833B4E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B4E70;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4E84"))) PPC_WEAK_FUNC(sub_833B4E84);
PPC_FUNC_IMPL(__imp__sub_833B4E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4E88"))) PPC_WEAK_FUNC(sub_833B4E88);
PPC_FUNC_IMPL(__imp__sub_833B4E88) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1328
	ctx.r31.s64 = ctx.r10.s64 + 1328;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b4ec8
	if (ctx.cr6.eq) goto loc_833B4EC8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B4EC8;
	sub_82294520(ctx, base);
loc_833B4EC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B4ED0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4EE4"))) PPC_WEAK_FUNC(sub_833B4EE4);
PPC_FUNC_IMPL(__imp__sub_833B4EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4EE8"))) PPC_WEAK_FUNC(sub_833B4EE8);
PPC_FUNC_IMPL(__imp__sub_833B4EE8) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1340
	ctx.r31.s64 = ctx.r10.s64 + 1340;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b4f28
	if (ctx.cr6.eq) goto loc_833B4F28;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B4F28;
	sub_82294520(ctx, base);
loc_833B4F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B4F30;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4F44"))) PPC_WEAK_FUNC(sub_833B4F44);
PPC_FUNC_IMPL(__imp__sub_833B4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4F48"))) PPC_WEAK_FUNC(sub_833B4F48);
PPC_FUNC_IMPL(__imp__sub_833B4F48) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1352
	ctx.r31.s64 = ctx.r10.s64 + 1352;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b4f88
	if (ctx.cr6.eq) goto loc_833B4F88;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B4F88;
	sub_82294520(ctx, base);
loc_833B4F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B4F90;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B4FA4"))) PPC_WEAK_FUNC(sub_833B4FA4);
PPC_FUNC_IMPL(__imp__sub_833B4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B4FA8"))) PPC_WEAK_FUNC(sub_833B4FA8);
PPC_FUNC_IMPL(__imp__sub_833B4FA8) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1364
	ctx.r31.s64 = ctx.r10.s64 + 1364;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b4fe8
	if (ctx.cr6.eq) goto loc_833B4FE8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B4FE8;
	sub_82294520(ctx, base);
loc_833B4FE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B4FF0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5004"))) PPC_WEAK_FUNC(sub_833B5004);
PPC_FUNC_IMPL(__imp__sub_833B5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5008"))) PPC_WEAK_FUNC(sub_833B5008);
PPC_FUNC_IMPL(__imp__sub_833B5008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,1376
	ctx.r3.s64 = ctx.r11.s64 + 1376;
	// b 0x829f4958
	sub_829F4958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5014"))) PPC_WEAK_FUNC(sub_833B5014);
PPC_FUNC_IMPL(__imp__sub_833B5014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5018"))) PPC_WEAK_FUNC(sub_833B5018);
PPC_FUNC_IMPL(__imp__sub_833B5018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,1516
	ctx.r11.s64 = ctx.r11.s64 + 1516;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822b1a50
	sub_822B1A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5028"))) PPC_WEAK_FUNC(sub_833B5028);
PPC_FUNC_IMPL(__imp__sub_833B5028) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17592
	ctx.r31.s64 = ctx.r10.s64 + -17592;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5068
	if (ctx.cr6.eq) goto loc_833B5068;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5068;
	sub_82294520(ctx, base);
loc_833B5068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5070;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5084"))) PPC_WEAK_FUNC(sub_833B5084);
PPC_FUNC_IMPL(__imp__sub_833B5084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5088"))) PPC_WEAK_FUNC(sub_833B5088);
PPC_FUNC_IMPL(__imp__sub_833B5088) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17392
	ctx.r31.s64 = ctx.r10.s64 + -17392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b50c8
	if (ctx.cr6.eq) goto loc_833B50C8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B50C8;
	sub_82294520(ctx, base);
loc_833B50C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B50D0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B50E4"))) PPC_WEAK_FUNC(sub_833B50E4);
PPC_FUNC_IMPL(__imp__sub_833B50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B50E8"))) PPC_WEAK_FUNC(sub_833B50E8);
PPC_FUNC_IMPL(__imp__sub_833B50E8) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-26284
	ctx.r31.s64 = ctx.r10.s64 + -26284;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5128
	if (ctx.cr6.eq) goto loc_833B5128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5128;
	sub_82294520(ctx, base);
loc_833B5128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5130;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5144"))) PPC_WEAK_FUNC(sub_833B5144);
PPC_FUNC_IMPL(__imp__sub_833B5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5148"))) PPC_WEAK_FUNC(sub_833B5148);
PPC_FUNC_IMPL(__imp__sub_833B5148) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17408
	ctx.r31.s64 = ctx.r10.s64 + -17408;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5188
	if (ctx.cr6.eq) goto loc_833B5188;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5188;
	sub_82294520(ctx, base);
loc_833B5188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5190;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B51A4"))) PPC_WEAK_FUNC(sub_833B51A4);
PPC_FUNC_IMPL(__imp__sub_833B51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B51A8"))) PPC_WEAK_FUNC(sub_833B51A8);
PPC_FUNC_IMPL(__imp__sub_833B51A8) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17456
	ctx.r31.s64 = ctx.r10.s64 + -17456;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b51e8
	if (ctx.cr6.eq) goto loc_833B51E8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B51E8;
	sub_82294520(ctx, base);
loc_833B51E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B51F0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5204"))) PPC_WEAK_FUNC(sub_833B5204);
PPC_FUNC_IMPL(__imp__sub_833B5204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5208"))) PPC_WEAK_FUNC(sub_833B5208);
PPC_FUNC_IMPL(__imp__sub_833B5208) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17264
	ctx.r31.s64 = ctx.r10.s64 + -17264;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5248
	if (ctx.cr6.eq) goto loc_833B5248;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5248;
	sub_82294520(ctx, base);
loc_833B5248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5250;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5264"))) PPC_WEAK_FUNC(sub_833B5264);
PPC_FUNC_IMPL(__imp__sub_833B5264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5268"))) PPC_WEAK_FUNC(sub_833B5268);
PPC_FUNC_IMPL(__imp__sub_833B5268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-17292
	ctx.r3.s64 = ctx.r11.s64 + -17292;
	// b 0x822bbf20
	sub_822BBF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5274"))) PPC_WEAK_FUNC(sub_833B5274);
PPC_FUNC_IMPL(__imp__sub_833B5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5278"))) PPC_WEAK_FUNC(sub_833B5278);
PPC_FUNC_IMPL(__imp__sub_833B5278) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18912
	ctx.r31.s64 = ctx.r10.s64 + -18912;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b52b8
	if (ctx.cr6.eq) goto loc_833B52B8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B52B8;
	sub_82294520(ctx, base);
loc_833B52B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B52C0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B52D4"))) PPC_WEAK_FUNC(sub_833B52D4);
PPC_FUNC_IMPL(__imp__sub_833B52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B52D8"))) PPC_WEAK_FUNC(sub_833B52D8);
PPC_FUNC_IMPL(__imp__sub_833B52D8) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18900
	ctx.r31.s64 = ctx.r10.s64 + -18900;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5318
	if (ctx.cr6.eq) goto loc_833B5318;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5318;
	sub_82294520(ctx, base);
loc_833B5318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5320;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5334"))) PPC_WEAK_FUNC(sub_833B5334);
PPC_FUNC_IMPL(__imp__sub_833B5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5338"))) PPC_WEAK_FUNC(sub_833B5338);
PPC_FUNC_IMPL(__imp__sub_833B5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x822bbf20
	sub_822BBF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5344"))) PPC_WEAK_FUNC(sub_833B5344);
PPC_FUNC_IMPL(__imp__sub_833B5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5348"))) PPC_WEAK_FUNC(sub_833B5348);
PPC_FUNC_IMPL(__imp__sub_833B5348) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-17316
	ctx.r31.s64 = ctx.r10.s64 + -17316;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5388
	if (ctx.cr6.eq) goto loc_833B5388;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5388;
	sub_82294520(ctx, base);
loc_833B5388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5390;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B53A4"))) PPC_WEAK_FUNC(sub_833B53A4);
PPC_FUNC_IMPL(__imp__sub_833B53A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B53A8"))) PPC_WEAK_FUNC(sub_833B53A8);
PPC_FUNC_IMPL(__imp__sub_833B53A8) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-26320
	ctx.r31.s64 = ctx.r10.s64 + -26320;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b53e8
	if (ctx.cr6.eq) goto loc_833B53E8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B53E8;
	sub_82294520(ctx, base);
loc_833B53E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B53F0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5404"))) PPC_WEAK_FUNC(sub_833B5404);
PPC_FUNC_IMPL(__imp__sub_833B5404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5408"))) PPC_WEAK_FUNC(sub_833B5408);
PPC_FUNC_IMPL(__imp__sub_833B5408) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18612
	ctx.r31.s64 = ctx.r10.s64 + -18612;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5448
	if (ctx.cr6.eq) goto loc_833B5448;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5448;
	sub_82294520(ctx, base);
loc_833B5448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5450;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5464"))) PPC_WEAK_FUNC(sub_833B5464);
PPC_FUNC_IMPL(__imp__sub_833B5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5468"))) PPC_WEAK_FUNC(sub_833B5468);
PPC_FUNC_IMPL(__imp__sub_833B5468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x833B5470;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r11,r11,-18660
	ctx.r11.s64 = ctx.r11.s64 + -18660;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_833B548C:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x833b54e8
	if (ctx.cr6.eq) goto loc_833B54E8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833b54e8
	if (ctx.cr6.eq) goto loc_833B54E8;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x833b54c8
	if (!ctx.cr6.eq) goto loc_833B54C8;
	// bl 0x822900a0
	ctx.lr = 0x833B54C4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_833B54C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x833B54E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_833B54E8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x833b551c
	if (ctx.cr6.eq) goto loc_833B551C;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x833b5508
	if (!ctx.cr6.eq) goto loc_833B5508;
	// bl 0x822900a0
	ctx.lr = 0x833B5504;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_833B5508:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x833B551C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_833B551C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r28.u32);
	// bge 0x833b548c
	if (!ctx.cr0.lt) goto loc_833B548C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5538"))) PPC_WEAK_FUNC(sub_833B5538);
PPC_FUNC_IMPL(__imp__sub_833B5538) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18676
	ctx.r31.s64 = ctx.r10.s64 + -18676;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5578
	if (ctx.cr6.eq) goto loc_833B5578;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5578;
	sub_82294520(ctx, base);
loc_833B5578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5580;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5594"))) PPC_WEAK_FUNC(sub_833B5594);
PPC_FUNC_IMPL(__imp__sub_833B5594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5598"))) PPC_WEAK_FUNC(sub_833B5598);
PPC_FUNC_IMPL(__imp__sub_833B5598) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18688
	ctx.r31.s64 = ctx.r10.s64 + -18688;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b55d8
	if (ctx.cr6.eq) goto loc_833B55D8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B55D8;
	sub_82294520(ctx, base);
loc_833B55D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B55E0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B55F4"))) PPC_WEAK_FUNC(sub_833B55F4);
PPC_FUNC_IMPL(__imp__sub_833B55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B55F8"))) PPC_WEAK_FUNC(sub_833B55F8);
PPC_FUNC_IMPL(__imp__sub_833B55F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,15104
	ctx.r11.s64 = ctx.r11.s64 + 15104;
	// stw r11,-23976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B560C"))) PPC_WEAK_FUNC(sub_833B560C);
PPC_FUNC_IMPL(__imp__sub_833B560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5610"))) PPC_WEAK_FUNC(sub_833B5610);
PPC_FUNC_IMPL(__imp__sub_833B5610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,1548
	ctx.r3.s64 = ctx.r11.s64 + 1548;
	// b 0x82ae5830
	sub_82AE5830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B561C"))) PPC_WEAK_FUNC(sub_833B561C);
PPC_FUNC_IMPL(__imp__sub_833B561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5620"))) PPC_WEAK_FUNC(sub_833B5620);
PPC_FUNC_IMPL(__imp__sub_833B5620) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19260
	ctx.r31.s64 = ctx.r10.s64 + -19260;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5660
	if (ctx.cr6.eq) goto loc_833B5660;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5660;
	sub_82294520(ctx, base);
loc_833B5660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5668;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B567C"))) PPC_WEAK_FUNC(sub_833B567C);
PPC_FUNC_IMPL(__imp__sub_833B567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5680"))) PPC_WEAK_FUNC(sub_833B5680);
PPC_FUNC_IMPL(__imp__sub_833B5680) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19248
	ctx.r31.s64 = ctx.r10.s64 + -19248;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b56c0
	if (ctx.cr6.eq) goto loc_833B56C0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B56C0;
	sub_82294520(ctx, base);
loc_833B56C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B56C8;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B56DC"))) PPC_WEAK_FUNC(sub_833B56DC);
PPC_FUNC_IMPL(__imp__sub_833B56DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B56E0"))) PPC_WEAK_FUNC(sub_833B56E0);
PPC_FUNC_IMPL(__imp__sub_833B56E0) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19236
	ctx.r31.s64 = ctx.r10.s64 + -19236;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5720
	if (ctx.cr6.eq) goto loc_833B5720;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5720;
	sub_82294520(ctx, base);
loc_833B5720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5728;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B573C"))) PPC_WEAK_FUNC(sub_833B573C);
PPC_FUNC_IMPL(__imp__sub_833B573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5740"))) PPC_WEAK_FUNC(sub_833B5740);
PPC_FUNC_IMPL(__imp__sub_833B5740) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19224
	ctx.r31.s64 = ctx.r10.s64 + -19224;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5780
	if (ctx.cr6.eq) goto loc_833B5780;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5780;
	sub_82294520(ctx, base);
loc_833B5780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5788;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B579C"))) PPC_WEAK_FUNC(sub_833B579C);
PPC_FUNC_IMPL(__imp__sub_833B579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B57A0"))) PPC_WEAK_FUNC(sub_833B57A0);
PPC_FUNC_IMPL(__imp__sub_833B57A0) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19212
	ctx.r31.s64 = ctx.r10.s64 + -19212;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b57e0
	if (ctx.cr6.eq) goto loc_833B57E0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B57E0;
	sub_82294520(ctx, base);
loc_833B57E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B57E8;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B57FC"))) PPC_WEAK_FUNC(sub_833B57FC);
PPC_FUNC_IMPL(__imp__sub_833B57FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5800"))) PPC_WEAK_FUNC(sub_833B5800);
PPC_FUNC_IMPL(__imp__sub_833B5800) {
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
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-19200
	ctx.r31.s64 = ctx.r10.s64 + -19200;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5840
	if (ctx.cr6.eq) goto loc_833B5840;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5840;
	sub_82294520(ctx, base);
loc_833B5840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5848;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B585C"))) PPC_WEAK_FUNC(sub_833B585C);
PPC_FUNC_IMPL(__imp__sub_833B585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5860"))) PPC_WEAK_FUNC(sub_833B5860);
PPC_FUNC_IMPL(__imp__sub_833B5860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32077
	ctx.r11.s64 = -2102198272;
	// addi r6,r11,-32640
	ctx.r6.s64 = ctx.r11.s64 + -32640;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,48
	ctx.r4.s64 = 48;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,1608
	ctx.r3.s64 = ctx.r10.s64 + 1608;
	// bl 0x82299038
	ctx.lr = 0x833B5888;
	sub_82299038(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5898"))) PPC_WEAK_FUNC(sub_833B5898);
PPC_FUNC_IMPL(__imp__sub_833B5898) {
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r31,r11,-23944
	ctx.r31.s64 = ctx.r11.s64 + -23944;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x833B58B8;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82b3b780
	ctx.lr = 0x833B58D0;
	sub_82B3B780(ctx, base);
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

__attribute__((alias("__imp__sub_833B58E4"))) PPC_WEAK_FUNC(sub_833B58E4);
PPC_FUNC_IMPL(__imp__sub_833B58E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B58E8"))) PPC_WEAK_FUNC(sub_833B58E8);
PPC_FUNC_IMPL(__imp__sub_833B58E8) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1848
	ctx.r31.s64 = ctx.r10.s64 + 1848;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5928
	if (ctx.cr6.eq) goto loc_833B5928;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5928;
	sub_82294520(ctx, base);
loc_833B5928:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5930;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B5944"))) PPC_WEAK_FUNC(sub_833B5944);
PPC_FUNC_IMPL(__imp__sub_833B5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5948"))) PPC_WEAK_FUNC(sub_833B5948);
PPC_FUNC_IMPL(__imp__sub_833B5948) {
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
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,1860
	ctx.r31.s64 = ctx.r10.s64 + 1860;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x833b5988
	if (ctx.cr6.eq) goto loc_833B5988;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x833B5988;
	sub_82294520(ctx, base);
loc_833B5988:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x833B5990;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_833B59A4"))) PPC_WEAK_FUNC(sub_833B59A4);
PPC_FUNC_IMPL(__imp__sub_833B59A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B59A8"))) PPC_WEAK_FUNC(sub_833B59A8);
PPC_FUNC_IMPL(__imp__sub_833B59A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B59AC"))) PPC_WEAK_FUNC(sub_833B59AC);
PPC_FUNC_IMPL(__imp__sub_833B59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

