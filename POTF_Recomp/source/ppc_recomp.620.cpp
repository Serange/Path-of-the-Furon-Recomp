#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833B59B0"))) PPC_WEAK_FUNC(sub_833B59B0);
PPC_FUNC_IMPL(__imp__sub_833B59B0) {
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
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r6,r11,13272
	ctx.r6.s64 = ctx.r11.s64 + 13272;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2016
	ctx.r3.s64 = ctx.r10.s64 + 2016;
	// bl 0x82299038
	ctx.lr = 0x833B59D8;
	sub_82299038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B59E8"))) PPC_WEAK_FUNC(sub_833B59E8);
PPC_FUNC_IMPL(__imp__sub_833B59E8) {
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
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r3,r11,-26428
	ctx.r3.s64 = ctx.r11.s64 + -26428;
	// bl 0x822bbf20
	ctx.lr = 0x833B5A00;
	sub_822BBF20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5A10"))) PPC_WEAK_FUNC(sub_833B5A10);
PPC_FUNC_IMPL(__imp__sub_833B5A10) {
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
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r6,r11,22448
	ctx.r6.s64 = ctx.r11.s64 + 22448;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2080
	ctx.r3.s64 = ctx.r10.s64 + 2080;
	// bl 0x82299038
	ctx.lr = 0x833B5A38;
	sub_82299038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5A48"))) PPC_WEAK_FUNC(sub_833B5A48);
PPC_FUNC_IMPL(__imp__sub_833B5A48) {
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
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// addi r6,r11,23104
	ctx.r6.s64 = ctx.r11.s64 + 23104;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,36
	ctx.r4.s64 = 36;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r3,r10,2464
	ctx.r3.s64 = ctx.r10.s64 + 2464;
	// bl 0x82299038
	ctx.lr = 0x833B5A70;
	sub_82299038(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5A80"))) PPC_WEAK_FUNC(sub_833B5A80);
PPC_FUNC_IMPL(__imp__sub_833B5A80) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3076
	ctx.r3.s64 = ctx.r11.s64 + 3076;
	// bl 0x82299080
	ctx.lr = 0x833B5A98;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5AA8"))) PPC_WEAK_FUNC(sub_833B5AA8);
PPC_FUNC_IMPL(__imp__sub_833B5AA8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3088
	ctx.r3.s64 = ctx.r11.s64 + 3088;
	// bl 0x82299080
	ctx.lr = 0x833B5AC0;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5AD0"))) PPC_WEAK_FUNC(sub_833B5AD0);
PPC_FUNC_IMPL(__imp__sub_833B5AD0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3100
	ctx.r3.s64 = ctx.r11.s64 + 3100;
	// bl 0x82299080
	ctx.lr = 0x833B5AE8;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5AF8"))) PPC_WEAK_FUNC(sub_833B5AF8);
PPC_FUNC_IMPL(__imp__sub_833B5AF8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3112
	ctx.r3.s64 = ctx.r11.s64 + 3112;
	// bl 0x82299080
	ctx.lr = 0x833B5B10;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5B20"))) PPC_WEAK_FUNC(sub_833B5B20);
PPC_FUNC_IMPL(__imp__sub_833B5B20) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3124
	ctx.r3.s64 = ctx.r11.s64 + 3124;
	// bl 0x82299080
	ctx.lr = 0x833B5B38;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5B48"))) PPC_WEAK_FUNC(sub_833B5B48);
PPC_FUNC_IMPL(__imp__sub_833B5B48) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3136
	ctx.r3.s64 = ctx.r11.s64 + 3136;
	// bl 0x82299080
	ctx.lr = 0x833B5B60;
	sub_82299080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5B70"))) PPC_WEAK_FUNC(sub_833B5B70);
PPC_FUNC_IMPL(__imp__sub_833B5B70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,19392
	ctx.r9.s64 = ctx.r10.s64 + 19392;
	// stw r11,1024(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5B84"))) PPC_WEAK_FUNC(sub_833B5B84);
PPC_FUNC_IMPL(__imp__sub_833B5B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5B88"))) PPC_WEAK_FUNC(sub_833B5B88);
PPC_FUNC_IMPL(__imp__sub_833B5B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,3280
	ctx.r3.s64 = ctx.r11.s64 + 3280;
	// b 0x82b8df40
	sub_82B8DF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B5B94"))) PPC_WEAK_FUNC(sub_833B5B94);
PPC_FUNC_IMPL(__imp__sub_833B5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5B98"))) PPC_WEAK_FUNC(sub_833B5B98);
PPC_FUNC_IMPL(__imp__sub_833B5B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,3292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5BAC"))) PPC_WEAK_FUNC(sub_833B5BAC);
PPC_FUNC_IMPL(__imp__sub_833B5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5BB0"))) PPC_WEAK_FUNC(sub_833B5BB0);
PPC_FUNC_IMPL(__imp__sub_833B5BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,3568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5BC4"))) PPC_WEAK_FUNC(sub_833B5BC4);
PPC_FUNC_IMPL(__imp__sub_833B5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5BC8"))) PPC_WEAK_FUNC(sub_833B5BC8);
PPC_FUNC_IMPL(__imp__sub_833B5BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,3844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5BDC"))) PPC_WEAK_FUNC(sub_833B5BDC);
PPC_FUNC_IMPL(__imp__sub_833B5BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5BE0"))) PPC_WEAK_FUNC(sub_833B5BE0);
PPC_FUNC_IMPL(__imp__sub_833B5BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29076
	ctx.r11.s64 = ctx.r11.s64 + 29076;
	// stw r11,4120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5BF4"))) PPC_WEAK_FUNC(sub_833B5BF4);
PPC_FUNC_IMPL(__imp__sub_833B5BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5BF8"))) PPC_WEAK_FUNC(sub_833B5BF8);
PPC_FUNC_IMPL(__imp__sub_833B5BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,4396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C0C"))) PPC_WEAK_FUNC(sub_833B5C0C);
PPC_FUNC_IMPL(__imp__sub_833B5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C10"))) PPC_WEAK_FUNC(sub_833B5C10);
PPC_FUNC_IMPL(__imp__sub_833B5C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,4672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C24"))) PPC_WEAK_FUNC(sub_833B5C24);
PPC_FUNC_IMPL(__imp__sub_833B5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C28"))) PPC_WEAK_FUNC(sub_833B5C28);
PPC_FUNC_IMPL(__imp__sub_833B5C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,4948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C3C"))) PPC_WEAK_FUNC(sub_833B5C3C);
PPC_FUNC_IMPL(__imp__sub_833B5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C40"))) PPC_WEAK_FUNC(sub_833B5C40);
PPC_FUNC_IMPL(__imp__sub_833B5C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,5224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C54"))) PPC_WEAK_FUNC(sub_833B5C54);
PPC_FUNC_IMPL(__imp__sub_833B5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C58"))) PPC_WEAK_FUNC(sub_833B5C58);
PPC_FUNC_IMPL(__imp__sub_833B5C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,5500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C6C"))) PPC_WEAK_FUNC(sub_833B5C6C);
PPC_FUNC_IMPL(__imp__sub_833B5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C70"))) PPC_WEAK_FUNC(sub_833B5C70);
PPC_FUNC_IMPL(__imp__sub_833B5C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,29468
	ctx.r11.s64 = ctx.r11.s64 + 29468;
	// stw r11,-21072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C84"))) PPC_WEAK_FUNC(sub_833B5C84);
PPC_FUNC_IMPL(__imp__sub_833B5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5C88"))) PPC_WEAK_FUNC(sub_833B5C88);
PPC_FUNC_IMPL(__imp__sub_833B5C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r11,5776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5C9C"))) PPC_WEAK_FUNC(sub_833B5C9C);
PPC_FUNC_IMPL(__imp__sub_833B5C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5CA0"))) PPC_WEAK_FUNC(sub_833B5CA0);
PPC_FUNC_IMPL(__imp__sub_833B5CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29704
	ctx.r11.s64 = ctx.r11.s64 + 29704;
	// stw r11,6052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5CB4"))) PPC_WEAK_FUNC(sub_833B5CB4);
PPC_FUNC_IMPL(__imp__sub_833B5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5CB8"))) PPC_WEAK_FUNC(sub_833B5CB8);
PPC_FUNC_IMPL(__imp__sub_833B5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29796
	ctx.r11.s64 = ctx.r11.s64 + 29796;
	// stw r11,6328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5CCC"))) PPC_WEAK_FUNC(sub_833B5CCC);
PPC_FUNC_IMPL(__imp__sub_833B5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5CD0"))) PPC_WEAK_FUNC(sub_833B5CD0);
PPC_FUNC_IMPL(__imp__sub_833B5CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,6608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5CE4"))) PPC_WEAK_FUNC(sub_833B5CE4);
PPC_FUNC_IMPL(__imp__sub_833B5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5CE8"))) PPC_WEAK_FUNC(sub_833B5CE8);
PPC_FUNC_IMPL(__imp__sub_833B5CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r11,6884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5CFC"))) PPC_WEAK_FUNC(sub_833B5CFC);
PPC_FUNC_IMPL(__imp__sub_833B5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D00"))) PPC_WEAK_FUNC(sub_833B5D00);
PPC_FUNC_IMPL(__imp__sub_833B5D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30224
	ctx.r11.s64 = ctx.r11.s64 + 30224;
	// stw r11,7160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D14"))) PPC_WEAK_FUNC(sub_833B5D14);
PPC_FUNC_IMPL(__imp__sub_833B5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D18"))) PPC_WEAK_FUNC(sub_833B5D18);
PPC_FUNC_IMPL(__imp__sub_833B5D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30244
	ctx.r11.s64 = ctx.r11.s64 + 30244;
	// stw r11,7436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D2C"))) PPC_WEAK_FUNC(sub_833B5D2C);
PPC_FUNC_IMPL(__imp__sub_833B5D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D30"))) PPC_WEAK_FUNC(sub_833B5D30);
PPC_FUNC_IMPL(__imp__sub_833B5D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30404
	ctx.r11.s64 = ctx.r11.s64 + 30404;
	// stw r11,7712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D44"))) PPC_WEAK_FUNC(sub_833B5D44);
PPC_FUNC_IMPL(__imp__sub_833B5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D48"))) PPC_WEAK_FUNC(sub_833B5D48);
PPC_FUNC_IMPL(__imp__sub_833B5D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30404
	ctx.r11.s64 = ctx.r11.s64 + 30404;
	// stw r11,7988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D5C"))) PPC_WEAK_FUNC(sub_833B5D5C);
PPC_FUNC_IMPL(__imp__sub_833B5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D60"))) PPC_WEAK_FUNC(sub_833B5D60);
PPC_FUNC_IMPL(__imp__sub_833B5D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30436
	ctx.r11.s64 = ctx.r11.s64 + 30436;
	// stw r11,8264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D74"))) PPC_WEAK_FUNC(sub_833B5D74);
PPC_FUNC_IMPL(__imp__sub_833B5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D78"))) PPC_WEAK_FUNC(sub_833B5D78);
PPC_FUNC_IMPL(__imp__sub_833B5D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r11,8540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5D8C"))) PPC_WEAK_FUNC(sub_833B5D8C);
PPC_FUNC_IMPL(__imp__sub_833B5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5D90"))) PPC_WEAK_FUNC(sub_833B5D90);
PPC_FUNC_IMPL(__imp__sub_833B5D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30640
	ctx.r11.s64 = ctx.r11.s64 + 30640;
	// stw r11,8816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5DA4"))) PPC_WEAK_FUNC(sub_833B5DA4);
PPC_FUNC_IMPL(__imp__sub_833B5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5DA8"))) PPC_WEAK_FUNC(sub_833B5DA8);
PPC_FUNC_IMPL(__imp__sub_833B5DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30756
	ctx.r11.s64 = ctx.r11.s64 + 30756;
	// stw r11,9092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5DBC"))) PPC_WEAK_FUNC(sub_833B5DBC);
PPC_FUNC_IMPL(__imp__sub_833B5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5DC0"))) PPC_WEAK_FUNC(sub_833B5DC0);
PPC_FUNC_IMPL(__imp__sub_833B5DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31660
	ctx.r11.s64 = ctx.r11.s64 + 31660;
	// stw r11,9368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5DD4"))) PPC_WEAK_FUNC(sub_833B5DD4);
PPC_FUNC_IMPL(__imp__sub_833B5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5DD8"))) PPC_WEAK_FUNC(sub_833B5DD8);
PPC_FUNC_IMPL(__imp__sub_833B5DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,9644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5DEC"))) PPC_WEAK_FUNC(sub_833B5DEC);
PPC_FUNC_IMPL(__imp__sub_833B5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5DF0"))) PPC_WEAK_FUNC(sub_833B5DF0);
PPC_FUNC_IMPL(__imp__sub_833B5DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,9920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E04"))) PPC_WEAK_FUNC(sub_833B5E04);
PPC_FUNC_IMPL(__imp__sub_833B5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E08"))) PPC_WEAK_FUNC(sub_833B5E08);
PPC_FUNC_IMPL(__imp__sub_833B5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,10196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E1C"))) PPC_WEAK_FUNC(sub_833B5E1C);
PPC_FUNC_IMPL(__imp__sub_833B5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E20"))) PPC_WEAK_FUNC(sub_833B5E20);
PPC_FUNC_IMPL(__imp__sub_833B5E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,10472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E34"))) PPC_WEAK_FUNC(sub_833B5E34);
PPC_FUNC_IMPL(__imp__sub_833B5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E38"))) PPC_WEAK_FUNC(sub_833B5E38);
PPC_FUNC_IMPL(__imp__sub_833B5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,10748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E4C"))) PPC_WEAK_FUNC(sub_833B5E4C);
PPC_FUNC_IMPL(__imp__sub_833B5E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E50"))) PPC_WEAK_FUNC(sub_833B5E50);
PPC_FUNC_IMPL(__imp__sub_833B5E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,11024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E64"))) PPC_WEAK_FUNC(sub_833B5E64);
PPC_FUNC_IMPL(__imp__sub_833B5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E68"))) PPC_WEAK_FUNC(sub_833B5E68);
PPC_FUNC_IMPL(__imp__sub_833B5E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30404
	ctx.r11.s64 = ctx.r11.s64 + 30404;
	// stw r11,11300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E7C"))) PPC_WEAK_FUNC(sub_833B5E7C);
PPC_FUNC_IMPL(__imp__sub_833B5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E80"))) PPC_WEAK_FUNC(sub_833B5E80);
PPC_FUNC_IMPL(__imp__sub_833B5E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,11576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5E94"))) PPC_WEAK_FUNC(sub_833B5E94);
PPC_FUNC_IMPL(__imp__sub_833B5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5E98"))) PPC_WEAK_FUNC(sub_833B5E98);
PPC_FUNC_IMPL(__imp__sub_833B5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,19312
	ctx.r9.s64 = ctx.r10.s64 + 19312;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// stb r10,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5EB4"))) PPC_WEAK_FUNC(sub_833B5EB4);
PPC_FUNC_IMPL(__imp__sub_833B5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5EB8"))) PPC_WEAK_FUNC(sub_833B5EB8);
PPC_FUNC_IMPL(__imp__sub_833B5EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,11844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5ECC"))) PPC_WEAK_FUNC(sub_833B5ECC);
PPC_FUNC_IMPL(__imp__sub_833B5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5ED0"))) PPC_WEAK_FUNC(sub_833B5ED0);
PPC_FUNC_IMPL(__imp__sub_833B5ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,12120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5EE4"))) PPC_WEAK_FUNC(sub_833B5EE4);
PPC_FUNC_IMPL(__imp__sub_833B5EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5EE8"))) PPC_WEAK_FUNC(sub_833B5EE8);
PPC_FUNC_IMPL(__imp__sub_833B5EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,12396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5EFC"))) PPC_WEAK_FUNC(sub_833B5EFC);
PPC_FUNC_IMPL(__imp__sub_833B5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F00"))) PPC_WEAK_FUNC(sub_833B5F00);
PPC_FUNC_IMPL(__imp__sub_833B5F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,12672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F14"))) PPC_WEAK_FUNC(sub_833B5F14);
PPC_FUNC_IMPL(__imp__sub_833B5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F18"))) PPC_WEAK_FUNC(sub_833B5F18);
PPC_FUNC_IMPL(__imp__sub_833B5F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32500
	ctx.r11.s64 = ctx.r11.s64 + 32500;
	// stw r11,12948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F2C"))) PPC_WEAK_FUNC(sub_833B5F2C);
PPC_FUNC_IMPL(__imp__sub_833B5F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F30"))) PPC_WEAK_FUNC(sub_833B5F30);
PPC_FUNC_IMPL(__imp__sub_833B5F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,13224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F44"))) PPC_WEAK_FUNC(sub_833B5F44);
PPC_FUNC_IMPL(__imp__sub_833B5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F48"))) PPC_WEAK_FUNC(sub_833B5F48);
PPC_FUNC_IMPL(__imp__sub_833B5F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,13500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F5C"))) PPC_WEAK_FUNC(sub_833B5F5C);
PPC_FUNC_IMPL(__imp__sub_833B5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F60"))) PPC_WEAK_FUNC(sub_833B5F60);
PPC_FUNC_IMPL(__imp__sub_833B5F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,13776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F74"))) PPC_WEAK_FUNC(sub_833B5F74);
PPC_FUNC_IMPL(__imp__sub_833B5F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F78"))) PPC_WEAK_FUNC(sub_833B5F78);
PPC_FUNC_IMPL(__imp__sub_833B5F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30224
	ctx.r11.s64 = ctx.r11.s64 + 30224;
	// stw r11,14052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5F8C"))) PPC_WEAK_FUNC(sub_833B5F8C);
PPC_FUNC_IMPL(__imp__sub_833B5F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5F90"))) PPC_WEAK_FUNC(sub_833B5F90);
PPC_FUNC_IMPL(__imp__sub_833B5F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30224
	ctx.r11.s64 = ctx.r11.s64 + 30224;
	// stw r11,14328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5FA4"))) PPC_WEAK_FUNC(sub_833B5FA4);
PPC_FUNC_IMPL(__imp__sub_833B5FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5FA8"))) PPC_WEAK_FUNC(sub_833B5FA8);
PPC_FUNC_IMPL(__imp__sub_833B5FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,-32448
	ctx.r11.s64 = ctx.r11.s64 + -32448;
	// stw r11,14604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5FBC"))) PPC_WEAK_FUNC(sub_833B5FBC);
PPC_FUNC_IMPL(__imp__sub_833B5FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5FC0"))) PPC_WEAK_FUNC(sub_833B5FC0);
PPC_FUNC_IMPL(__imp__sub_833B5FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,30224
	ctx.r11.s64 = ctx.r11.s64 + 30224;
	// stw r11,14880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5FD4"))) PPC_WEAK_FUNC(sub_833B5FD4);
PPC_FUNC_IMPL(__imp__sub_833B5FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5FD8"))) PPC_WEAK_FUNC(sub_833B5FD8);
PPC_FUNC_IMPL(__imp__sub_833B5FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,15156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B5FEC"))) PPC_WEAK_FUNC(sub_833B5FEC);
PPC_FUNC_IMPL(__imp__sub_833B5FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B5FF0"))) PPC_WEAK_FUNC(sub_833B5FF0);
PPC_FUNC_IMPL(__imp__sub_833B5FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,15432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6004"))) PPC_WEAK_FUNC(sub_833B6004);
PPC_FUNC_IMPL(__imp__sub_833B6004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6008"))) PPC_WEAK_FUNC(sub_833B6008);
PPC_FUNC_IMPL(__imp__sub_833B6008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,15708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B601C"))) PPC_WEAK_FUNC(sub_833B601C);
PPC_FUNC_IMPL(__imp__sub_833B601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6020"))) PPC_WEAK_FUNC(sub_833B6020);
PPC_FUNC_IMPL(__imp__sub_833B6020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,15984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6034"))) PPC_WEAK_FUNC(sub_833B6034);
PPC_FUNC_IMPL(__imp__sub_833B6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6038"))) PPC_WEAK_FUNC(sub_833B6038);
PPC_FUNC_IMPL(__imp__sub_833B6038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,16260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B604C"))) PPC_WEAK_FUNC(sub_833B604C);
PPC_FUNC_IMPL(__imp__sub_833B604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6050"))) PPC_WEAK_FUNC(sub_833B6050);
PPC_FUNC_IMPL(__imp__sub_833B6050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,16536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6064"))) PPC_WEAK_FUNC(sub_833B6064);
PPC_FUNC_IMPL(__imp__sub_833B6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6068"))) PPC_WEAK_FUNC(sub_833B6068);
PPC_FUNC_IMPL(__imp__sub_833B6068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,-31632
	ctx.r11.s64 = ctx.r11.s64 + -31632;
	// stw r11,16812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B607C"))) PPC_WEAK_FUNC(sub_833B607C);
PPC_FUNC_IMPL(__imp__sub_833B607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6080"))) PPC_WEAK_FUNC(sub_833B6080);
PPC_FUNC_IMPL(__imp__sub_833B6080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,17088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6094"))) PPC_WEAK_FUNC(sub_833B6094);
PPC_FUNC_IMPL(__imp__sub_833B6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6098"))) PPC_WEAK_FUNC(sub_833B6098);
PPC_FUNC_IMPL(__imp__sub_833B6098) {
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
	// addi r31,r11,-21052
	ctx.r31.s64 = ctx.r11.s64 + -21052;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x833B60B8;
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
	// bl 0x82bbed28
	ctx.lr = 0x833B60D0;
	sub_82BBED28(ctx, base);
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

__attribute__((alias("__imp__sub_833B60E4"))) PPC_WEAK_FUNC(sub_833B60E4);
PPC_FUNC_IMPL(__imp__sub_833B60E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B60E8"))) PPC_WEAK_FUNC(sub_833B60E8);
PPC_FUNC_IMPL(__imp__sub_833B60E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-12904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B60FC"))) PPC_WEAK_FUNC(sub_833B60FC);
PPC_FUNC_IMPL(__imp__sub_833B60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6100"))) PPC_WEAK_FUNC(sub_833B6100);
PPC_FUNC_IMPL(__imp__sub_833B6100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-13936
	ctx.r11.s64 = ctx.r11.s64 + -13936;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6114"))) PPC_WEAK_FUNC(sub_833B6114);
PPC_FUNC_IMPL(__imp__sub_833B6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6118"))) PPC_WEAK_FUNC(sub_833B6118);
PPC_FUNC_IMPL(__imp__sub_833B6118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,8680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B612C"))) PPC_WEAK_FUNC(sub_833B612C);
PPC_FUNC_IMPL(__imp__sub_833B612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6130"))) PPC_WEAK_FUNC(sub_833B6130);
PPC_FUNC_IMPL(__imp__sub_833B6130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,26588
	ctx.r8.s64 = ctx.r11.s64 + 26588;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r8,644
	ctx.r11.s64 = ctx.r8.s64 + 644;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B6148:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b6148
	if (!ctx.cr0.lt) goto loc_833B6148;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6164"))) PPC_WEAK_FUNC(sub_833B6164);
PPC_FUNC_IMPL(__imp__sub_833B6164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6168"))) PPC_WEAK_FUNC(sub_833B6168);
PPC_FUNC_IMPL(__imp__sub_833B6168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,26312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B617C"))) PPC_WEAK_FUNC(sub_833B617C);
PPC_FUNC_IMPL(__imp__sub_833B617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6180"))) PPC_WEAK_FUNC(sub_833B6180);
PPC_FUNC_IMPL(__imp__sub_833B6180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,27252
	ctx.r8.s64 = ctx.r11.s64 + 27252;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r8,644
	ctx.r11.s64 = ctx.r8.s64 + 644;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B6198:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b6198
	if (!ctx.cr0.lt) goto loc_833B6198;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61B4"))) PPC_WEAK_FUNC(sub_833B61B4);
PPC_FUNC_IMPL(__imp__sub_833B61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B61B8"))) PPC_WEAK_FUNC(sub_833B61B8);
PPC_FUNC_IMPL(__imp__sub_833B61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r8,r11,27916
	ctx.r8.s64 = ctx.r11.s64 + 27916;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r8,164
	ctx.r11.s64 = ctx.r8.s64 + 164;
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
loc_833B61D0:
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x833b61d0
	if (!ctx.cr0.lt) goto loc_833B61D0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61E8"))) PPC_WEAK_FUNC(sub_833B61E8);
PPC_FUNC_IMPL(__imp__sub_833B61E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,6524
	ctx.r11.s64 = ctx.r11.s64 + 6524;
	// stw r11,28108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B61FC"))) PPC_WEAK_FUNC(sub_833B61FC);
PPC_FUNC_IMPL(__imp__sub_833B61FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6200"))) PPC_WEAK_FUNC(sub_833B6200);
PPC_FUNC_IMPL(__imp__sub_833B6200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6214"))) PPC_WEAK_FUNC(sub_833B6214);
PPC_FUNC_IMPL(__imp__sub_833B6214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6218"))) PPC_WEAK_FUNC(sub_833B6218);
PPC_FUNC_IMPL(__imp__sub_833B6218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29416
	ctx.r11.s64 = ctx.r11.s64 + 29416;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B622C"))) PPC_WEAK_FUNC(sub_833B622C);
PPC_FUNC_IMPL(__imp__sub_833B622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6230"))) PPC_WEAK_FUNC(sub_833B6230);
PPC_FUNC_IMPL(__imp__sub_833B6230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,30448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6244"))) PPC_WEAK_FUNC(sub_833B6244);
PPC_FUNC_IMPL(__imp__sub_833B6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6248"))) PPC_WEAK_FUNC(sub_833B6248);
PPC_FUNC_IMPL(__imp__sub_833B6248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B625C"))) PPC_WEAK_FUNC(sub_833B625C);
PPC_FUNC_IMPL(__imp__sub_833B625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6260"))) PPC_WEAK_FUNC(sub_833B6260);
PPC_FUNC_IMPL(__imp__sub_833B6260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,31020
	ctx.r3.s64 = ctx.r11.s64 + 31020;
	// b 0x82c1af58
	sub_82C1AF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833B626C"))) PPC_WEAK_FUNC(sub_833B626C);
PPC_FUNC_IMPL(__imp__sub_833B626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6270"))) PPC_WEAK_FUNC(sub_833B6270);
PPC_FUNC_IMPL(__imp__sub_833B6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6284"))) PPC_WEAK_FUNC(sub_833B6284);
PPC_FUNC_IMPL(__imp__sub_833B6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6288"))) PPC_WEAK_FUNC(sub_833B6288);
PPC_FUNC_IMPL(__imp__sub_833B6288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B628C"))) PPC_WEAK_FUNC(sub_833B628C);
PPC_FUNC_IMPL(__imp__sub_833B628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6290"))) PPC_WEAK_FUNC(sub_833B6290);
PPC_FUNC_IMPL(__imp__sub_833B6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32400
	ctx.r11.s64 = ctx.r11.s64 + -32400;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62A4"))) PPC_WEAK_FUNC(sub_833B62A4);
PPC_FUNC_IMPL(__imp__sub_833B62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62A8"))) PPC_WEAK_FUNC(sub_833B62A8);
PPC_FUNC_IMPL(__imp__sub_833B62A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32104
	ctx.r11.s64 = ctx.r11.s64 + 32104;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62BC"))) PPC_WEAK_FUNC(sub_833B62BC);
PPC_FUNC_IMPL(__imp__sub_833B62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62C0"))) PPC_WEAK_FUNC(sub_833B62C0);
PPC_FUNC_IMPL(__imp__sub_833B62C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31072
	ctx.r11.s64 = ctx.r11.s64 + 31072;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62D4"))) PPC_WEAK_FUNC(sub_833B62D4);
PPC_FUNC_IMPL(__imp__sub_833B62D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62D8"))) PPC_WEAK_FUNC(sub_833B62D8);
PPC_FUNC_IMPL(__imp__sub_833B62D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-29296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B62EC"))) PPC_WEAK_FUNC(sub_833B62EC);
PPC_FUNC_IMPL(__imp__sub_833B62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B62F0"))) PPC_WEAK_FUNC(sub_833B62F0);
PPC_FUNC_IMPL(__imp__sub_833B62F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-30328
	ctx.r11.s64 = ctx.r11.s64 + -30328;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6304"))) PPC_WEAK_FUNC(sub_833B6304);
PPC_FUNC_IMPL(__imp__sub_833B6304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6308"))) PPC_WEAK_FUNC(sub_833B6308);
PPC_FUNC_IMPL(__imp__sub_833B6308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31360
	ctx.r11.s64 = ctx.r11.s64 + -31360;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B631C"))) PPC_WEAK_FUNC(sub_833B631C);
PPC_FUNC_IMPL(__imp__sub_833B631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6320"))) PPC_WEAK_FUNC(sub_833B6320);
PPC_FUNC_IMPL(__imp__sub_833B6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31660
	ctx.r11.s64 = ctx.r11.s64 + 31660;
	// stw r11,-28988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6334"))) PPC_WEAK_FUNC(sub_833B6334);
PPC_FUNC_IMPL(__imp__sub_833B6334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6338"))) PPC_WEAK_FUNC(sub_833B6338);
PPC_FUNC_IMPL(__imp__sub_833B6338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28956
	ctx.r11.s64 = ctx.r11.s64 + 28956;
	// stw r11,-28692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B634C"))) PPC_WEAK_FUNC(sub_833B634C);
PPC_FUNC_IMPL(__imp__sub_833B634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6350"))) PPC_WEAK_FUNC(sub_833B6350);
PPC_FUNC_IMPL(__imp__sub_833B6350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-28416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6364"))) PPC_WEAK_FUNC(sub_833B6364);
PPC_FUNC_IMPL(__imp__sub_833B6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6368"))) PPC_WEAK_FUNC(sub_833B6368);
PPC_FUNC_IMPL(__imp__sub_833B6368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28136
	ctx.r11.s64 = ctx.r11.s64 + -28136;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B637C"))) PPC_WEAK_FUNC(sub_833B637C);
PPC_FUNC_IMPL(__imp__sub_833B637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6380"))) PPC_WEAK_FUNC(sub_833B6380);
PPC_FUNC_IMPL(__imp__sub_833B6380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27096
	ctx.r11.s64 = ctx.r11.s64 + -27096;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6394"))) PPC_WEAK_FUNC(sub_833B6394);
PPC_FUNC_IMPL(__imp__sub_833B6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6398"))) PPC_WEAK_FUNC(sub_833B6398);
PPC_FUNC_IMPL(__imp__sub_833B6398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,-26064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63AC"))) PPC_WEAK_FUNC(sub_833B63AC);
PPC_FUNC_IMPL(__imp__sub_833B63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63B0"))) PPC_WEAK_FUNC(sub_833B63B0);
PPC_FUNC_IMPL(__imp__sub_833B63B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,6432
	ctx.r11.s64 = ctx.r11.s64 + 6432;
	// stw r11,-23712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63C4"))) PPC_WEAK_FUNC(sub_833B63C4);
PPC_FUNC_IMPL(__imp__sub_833B63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63C8"))) PPC_WEAK_FUNC(sub_833B63C8);
PPC_FUNC_IMPL(__imp__sub_833B63C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24744
	ctx.r11.s64 = ctx.r11.s64 + -24744;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63DC"))) PPC_WEAK_FUNC(sub_833B63DC);
PPC_FUNC_IMPL(__imp__sub_833B63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63E0"))) PPC_WEAK_FUNC(sub_833B63E0);
PPC_FUNC_IMPL(__imp__sub_833B63E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B63F4"))) PPC_WEAK_FUNC(sub_833B63F4);
PPC_FUNC_IMPL(__imp__sub_833B63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B63F8"))) PPC_WEAK_FUNC(sub_833B63F8);
PPC_FUNC_IMPL(__imp__sub_833B63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// stw r11,-23396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B640C"))) PPC_WEAK_FUNC(sub_833B640C);
PPC_FUNC_IMPL(__imp__sub_833B640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6410"))) PPC_WEAK_FUNC(sub_833B6410);
PPC_FUNC_IMPL(__imp__sub_833B6410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12800
	ctx.r11.s64 = ctx.r11.s64 + -12800;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6424"))) PPC_WEAK_FUNC(sub_833B6424);
PPC_FUNC_IMPL(__imp__sub_833B6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6428"))) PPC_WEAK_FUNC(sub_833B6428);
PPC_FUNC_IMPL(__imp__sub_833B6428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-13832
	ctx.r11.s64 = ctx.r11.s64 + -13832;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B643C"))) PPC_WEAK_FUNC(sub_833B643C);
PPC_FUNC_IMPL(__imp__sub_833B643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6440"))) PPC_WEAK_FUNC(sub_833B6440);
PPC_FUNC_IMPL(__imp__sub_833B6440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6454"))) PPC_WEAK_FUNC(sub_833B6454);
PPC_FUNC_IMPL(__imp__sub_833B6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6458"))) PPC_WEAK_FUNC(sub_833B6458);
PPC_FUNC_IMPL(__imp__sub_833B6458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15896
	ctx.r11.s64 = ctx.r11.s64 + -15896;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B646C"))) PPC_WEAK_FUNC(sub_833B646C);
PPC_FUNC_IMPL(__imp__sub_833B646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6470"))) PPC_WEAK_FUNC(sub_833B6470);
PPC_FUNC_IMPL(__imp__sub_833B6470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16928
	ctx.r11.s64 = ctx.r11.s64 + -16928;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6484"))) PPC_WEAK_FUNC(sub_833B6484);
PPC_FUNC_IMPL(__imp__sub_833B6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6488"))) PPC_WEAK_FUNC(sub_833B6488);
PPC_FUNC_IMPL(__imp__sub_833B6488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17960
	ctx.r11.s64 = ctx.r11.s64 + -17960;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B649C"))) PPC_WEAK_FUNC(sub_833B649C);
PPC_FUNC_IMPL(__imp__sub_833B649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64A0"))) PPC_WEAK_FUNC(sub_833B64A0);
PPC_FUNC_IMPL(__imp__sub_833B64A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-18992
	ctx.r11.s64 = ctx.r11.s64 + -18992;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64B4"))) PPC_WEAK_FUNC(sub_833B64B4);
PPC_FUNC_IMPL(__imp__sub_833B64B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64B8"))) PPC_WEAK_FUNC(sub_833B64B8);
PPC_FUNC_IMPL(__imp__sub_833B64B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20024
	ctx.r11.s64 = ctx.r11.s64 + -20024;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64CC"))) PPC_WEAK_FUNC(sub_833B64CC);
PPC_FUNC_IMPL(__imp__sub_833B64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64D0"))) PPC_WEAK_FUNC(sub_833B64D0);
PPC_FUNC_IMPL(__imp__sub_833B64D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21056
	ctx.r11.s64 = ctx.r11.s64 + -21056;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64E4"))) PPC_WEAK_FUNC(sub_833B64E4);
PPC_FUNC_IMPL(__imp__sub_833B64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B64E8"))) PPC_WEAK_FUNC(sub_833B64E8);
PPC_FUNC_IMPL(__imp__sub_833B64E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22088
	ctx.r11.s64 = ctx.r11.s64 + -22088;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B64FC"))) PPC_WEAK_FUNC(sub_833B64FC);
PPC_FUNC_IMPL(__imp__sub_833B64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6500"))) PPC_WEAK_FUNC(sub_833B6500);
PPC_FUNC_IMPL(__imp__sub_833B6500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6514"))) PPC_WEAK_FUNC(sub_833B6514);
PPC_FUNC_IMPL(__imp__sub_833B6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6518"))) PPC_WEAK_FUNC(sub_833B6518);
PPC_FUNC_IMPL(__imp__sub_833B6518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B652C"))) PPC_WEAK_FUNC(sub_833B652C);
PPC_FUNC_IMPL(__imp__sub_833B652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6530"))) PPC_WEAK_FUNC(sub_833B6530);
PPC_FUNC_IMPL(__imp__sub_833B6530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10728
	ctx.r11.s64 = ctx.r11.s64 + -10728;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6544"))) PPC_WEAK_FUNC(sub_833B6544);
PPC_FUNC_IMPL(__imp__sub_833B6544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6548"))) PPC_WEAK_FUNC(sub_833B6548);
PPC_FUNC_IMPL(__imp__sub_833B6548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// stw r11,-9692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B655C"))) PPC_WEAK_FUNC(sub_833B655C);
PPC_FUNC_IMPL(__imp__sub_833B655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6560"))) PPC_WEAK_FUNC(sub_833B6560);
PPC_FUNC_IMPL(__imp__sub_833B6560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,-1416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6574"))) PPC_WEAK_FUNC(sub_833B6574);
PPC_FUNC_IMPL(__imp__sub_833B6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6578"))) PPC_WEAK_FUNC(sub_833B6578);
PPC_FUNC_IMPL(__imp__sub_833B6578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,-21672
	ctx.r11.s64 = ctx.r11.s64 + -21672;
	// stw r11,-1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B658C"))) PPC_WEAK_FUNC(sub_833B658C);
PPC_FUNC_IMPL(__imp__sub_833B658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6590"))) PPC_WEAK_FUNC(sub_833B6590);
PPC_FUNC_IMPL(__imp__sub_833B6590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,-1352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65A4"))) PPC_WEAK_FUNC(sub_833B65A4);
PPC_FUNC_IMPL(__imp__sub_833B65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65A8"))) PPC_WEAK_FUNC(sub_833B65A8);
PPC_FUNC_IMPL(__imp__sub_833B65A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65BC"))) PPC_WEAK_FUNC(sub_833B65BC);
PPC_FUNC_IMPL(__imp__sub_833B65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65C0"))) PPC_WEAK_FUNC(sub_833B65C0);
PPC_FUNC_IMPL(__imp__sub_833B65C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32500
	ctx.r11.s64 = ctx.r11.s64 + 32500;
	// stw r11,-40(r10)
	PPC_STORE_U32(ctx.r10.u32 + -40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65D4"))) PPC_WEAK_FUNC(sub_833B65D4);
PPC_FUNC_IMPL(__imp__sub_833B65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65D8"))) PPC_WEAK_FUNC(sub_833B65D8);
PPC_FUNC_IMPL(__imp__sub_833B65D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1072
	ctx.r11.s64 = ctx.r11.s64 + -1072;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B65EC"))) PPC_WEAK_FUNC(sub_833B65EC);
PPC_FUNC_IMPL(__imp__sub_833B65EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B65F0"))) PPC_WEAK_FUNC(sub_833B65F0);
PPC_FUNC_IMPL(__imp__sub_833B65F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6604"))) PPC_WEAK_FUNC(sub_833B6604);
PPC_FUNC_IMPL(__imp__sub_833B6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6608"))) PPC_WEAK_FUNC(sub_833B6608);
PPC_FUNC_IMPL(__imp__sub_833B6608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,1544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B661C"))) PPC_WEAK_FUNC(sub_833B661C);
PPC_FUNC_IMPL(__imp__sub_833B661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6620"))) PPC_WEAK_FUNC(sub_833B6620);
PPC_FUNC_IMPL(__imp__sub_833B6620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,1820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6634"))) PPC_WEAK_FUNC(sub_833B6634);
PPC_FUNC_IMPL(__imp__sub_833B6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6638"))) PPC_WEAK_FUNC(sub_833B6638);
PPC_FUNC_IMPL(__imp__sub_833B6638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,2096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B664C"))) PPC_WEAK_FUNC(sub_833B664C);
PPC_FUNC_IMPL(__imp__sub_833B664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6650"))) PPC_WEAK_FUNC(sub_833B6650);
PPC_FUNC_IMPL(__imp__sub_833B6650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,4440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6664"))) PPC_WEAK_FUNC(sub_833B6664);
PPC_FUNC_IMPL(__imp__sub_833B6664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6668"))) PPC_WEAK_FUNC(sub_833B6668);
PPC_FUNC_IMPL(__imp__sub_833B6668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2376
	ctx.r11.s64 = ctx.r11.s64 + 2376;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B667C"))) PPC_WEAK_FUNC(sub_833B667C);
PPC_FUNC_IMPL(__imp__sub_833B667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6680"))) PPC_WEAK_FUNC(sub_833B6680);
PPC_FUNC_IMPL(__imp__sub_833B6680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3408
	ctx.r11.s64 = ctx.r11.s64 + 3408;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6694"))) PPC_WEAK_FUNC(sub_833B6694);
PPC_FUNC_IMPL(__imp__sub_833B6694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6698"))) PPC_WEAK_FUNC(sub_833B6698);
PPC_FUNC_IMPL(__imp__sub_833B6698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29584
	ctx.r11.s64 = ctx.r11.s64 + 29584;
	// stw r11,4716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66AC"))) PPC_WEAK_FUNC(sub_833B66AC);
PPC_FUNC_IMPL(__imp__sub_833B66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66B0"))) PPC_WEAK_FUNC(sub_833B66B0);
PPC_FUNC_IMPL(__imp__sub_833B66B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,4992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4992, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66C4"))) PPC_WEAK_FUNC(sub_833B66C4);
PPC_FUNC_IMPL(__imp__sub_833B66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66C8"))) PPC_WEAK_FUNC(sub_833B66C8);
PPC_FUNC_IMPL(__imp__sub_833B66C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,5268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66DC"))) PPC_WEAK_FUNC(sub_833B66DC);
PPC_FUNC_IMPL(__imp__sub_833B66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66E0"))) PPC_WEAK_FUNC(sub_833B66E0);
PPC_FUNC_IMPL(__imp__sub_833B66E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,31656
	ctx.r11.s64 = ctx.r11.s64 + 31656;
	// stw r11,5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B66F4"))) PPC_WEAK_FUNC(sub_833B66F4);
PPC_FUNC_IMPL(__imp__sub_833B66F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B66F8"))) PPC_WEAK_FUNC(sub_833B66F8);
PPC_FUNC_IMPL(__imp__sub_833B66F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29796
	ctx.r11.s64 = ctx.r11.s64 + 29796;
	// stw r11,5820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B670C"))) PPC_WEAK_FUNC(sub_833B670C);
PPC_FUNC_IMPL(__imp__sub_833B670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6710"))) PPC_WEAK_FUNC(sub_833B6710);
PPC_FUNC_IMPL(__imp__sub_833B6710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6724"))) PPC_WEAK_FUNC(sub_833B6724);
PPC_FUNC_IMPL(__imp__sub_833B6724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6728"))) PPC_WEAK_FUNC(sub_833B6728);
PPC_FUNC_IMPL(__imp__sub_833B6728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B673C"))) PPC_WEAK_FUNC(sub_833B673C);
PPC_FUNC_IMPL(__imp__sub_833B673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6740"))) PPC_WEAK_FUNC(sub_833B6740);
PPC_FUNC_IMPL(__imp__sub_833B6740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// stw r11,6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B6754"))) PPC_WEAK_FUNC(sub_833B6754);
PPC_FUNC_IMPL(__imp__sub_833B6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6758"))) PPC_WEAK_FUNC(sub_833B6758);
PPC_FUNC_IMPL(__imp__sub_833B6758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,28768
	ctx.r11.s64 = ctx.r11.s64 + 28768;
	// stw r11,6928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833B676C"))) PPC_WEAK_FUNC(sub_833B676C);
PPC_FUNC_IMPL(__imp__sub_833B676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833B6770"))) PPC_WEAK_FUNC(sub_833B6770);
PPC_FUNC_IMPL(__imp__sub_833B6770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r11,r11,32260
	ctx.r11.s64 = ctx.r11.s64 + 32260;
	// stw r11,7208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7208, ctx.r11.u32);
	// blr 
	return;
}

