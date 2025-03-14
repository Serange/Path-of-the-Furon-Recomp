#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_833A8DD0"))) PPC_WEAK_FUNC(sub_833A8DD0);
PPC_FUNC_IMPL(__imp__sub_833A8DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8DDC"))) PPC_WEAK_FUNC(sub_833A8DDC);
PPC_FUNC_IMPL(__imp__sub_833A8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8DE0"))) PPC_WEAK_FUNC(sub_833A8DE0);
PPC_FUNC_IMPL(__imp__sub_833A8DE0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6576
	ctx.r4.s64 = ctx.r10.s64 + 6576;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,28108
	ctx.r31.s64 = ctx.r10.s64 + 28108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,7912
	ctx.r5.s64 = ctx.r11.s64 + 7912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c02a90
	ctx.lr = 0x833A8E1C;
	sub_82C02A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,6572
	ctx.r11.s64 = ctx.r11.s64 + 6572;
	// addi r3,r10,25064
	ctx.r3.s64 = ctx.r10.s64 + 25064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8E34;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A8E48"))) PPC_WEAK_FUNC(sub_833A8E48);
PPC_FUNC_IMPL(__imp__sub_833A8E48) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// addi r4,r10,6672
	ctx.r4.s64 = ctx.r10.s64 + 6672;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// addi r5,r11,12696
	ctx.r5.s64 = ctx.r11.s64 + 12696;
	// addi r3,r10,30448
	ctx.r3.s64 = ctx.r10.s64 + 30448;
	// bl 0x82c484a0
	ctx.lr = 0x833A8E78;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25136
	ctx.r3.s64 = ctx.r11.s64 + 25136;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8E84;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8E94"))) PPC_WEAK_FUNC(sub_833A8E94);
PPC_FUNC_IMPL(__imp__sub_833A8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8E98"))) PPC_WEAK_FUNC(sub_833A8E98);
PPC_FUNC_IMPL(__imp__sub_833A8E98) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// addi r4,r10,6756
	ctx.r4.s64 = ctx.r10.s64 + 6756;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30724
	ctx.r3.s64 = ctx.r10.s64 + 30724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14896
	ctx.r5.s64 = ctx.r11.s64 + 14896;
	// bl 0x82c4a020
	ctx.lr = 0x833A8ECC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8ED8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8EE8"))) PPC_WEAK_FUNC(sub_833A8EE8);
PPC_FUNC_IMPL(__imp__sub_833A8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8EF4"))) PPC_WEAK_FUNC(sub_833A8EF4);
PPC_FUNC_IMPL(__imp__sub_833A8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8EF8"))) PPC_WEAK_FUNC(sub_833A8EF8);
PPC_FUNC_IMPL(__imp__sub_833A8EF8) {
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
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,31020
	ctx.r3.s64 = ctx.r11.s64 + 31020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c1c178
	ctx.lr = 0x833A8F1C;
	sub_82C1C178(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8F28;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8F38"))) PPC_WEAK_FUNC(sub_833A8F38);
PPC_FUNC_IMPL(__imp__sub_833A8F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833A8F44"))) PPC_WEAK_FUNC(sub_833A8F44);
PPC_FUNC_IMPL(__imp__sub_833A8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A8F48"))) PPC_WEAK_FUNC(sub_833A8F48);
PPC_FUNC_IMPL(__imp__sub_833A8F48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r4,r10,7680
	ctx.r4.s64 = ctx.r10.s64 + 7680;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29296
	ctx.r3.s64 = ctx.r10.s64 + -29296;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-15952
	ctx.r5.s64 = ctx.r11.s64 + -15952;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A8F7C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8F88;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8F98"))) PPC_WEAK_FUNC(sub_833A8F98);
PPC_FUNC_IMPL(__imp__sub_833A8F98) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r4,r10,7988
	ctx.r4.s64 = ctx.r10.s64 + 7988;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-28988
	ctx.r3.s64 = ctx.r10.s64 + -28988;
	// addi r5,r11,10424
	ctx.r5.s64 = ctx.r11.s64 + 10424;
	// bl 0x82c62390
	ctx.lr = 0x833A8FC4;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25376
	ctx.r3.s64 = ctx.r11.s64 + 25376;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A8FD0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A8FE0"))) PPC_WEAK_FUNC(sub_833A8FE0);
PPC_FUNC_IMPL(__imp__sub_833A8FE0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,8416
	ctx.r4.s64 = ctx.r11.s64 + 8416;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-28692
	ctx.r3.s64 = ctx.r11.s64 + -28692;
	// bl 0x82c38e48
	ctx.lr = 0x833A9008;
	sub_82C38E48(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9014;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9024"))) PPC_WEAK_FUNC(sub_833A9024);
PPC_FUNC_IMPL(__imp__sub_833A9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9028"))) PPC_WEAK_FUNC(sub_833A9028);
PPC_FUNC_IMPL(__imp__sub_833A9028) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// addi r4,r10,8480
	ctx.r4.s64 = ctx.r10.s64 + 8480;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28416
	ctx.r3.s64 = ctx.r10.s64 + -28416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-21512
	ctx.r5.s64 = ctx.r11.s64 + -21512;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A905C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25424
	ctx.r3.s64 = ctx.r11.s64 + 25424;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9068;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9078"))) PPC_WEAK_FUNC(sub_833A9078);
PPC_FUNC_IMPL(__imp__sub_833A9078) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,9308
	ctx.r4.s64 = ctx.r11.s64 + 9308;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x82c279b8
	ctx.lr = 0x833A90A0;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25496
	ctx.r3.s64 = ctx.r11.s64 + 25496;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A90AC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A90BC"))) PPC_WEAK_FUNC(sub_833A90BC);
PPC_FUNC_IMPL(__imp__sub_833A90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A90C0"))) PPC_WEAK_FUNC(sub_833A90C0);
PPC_FUNC_IMPL(__imp__sub_833A90C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,9340
	ctx.r4.s64 = ctx.r11.s64 + 9340;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,-23712
	ctx.r31.s64 = ctx.r11.s64 + -23712;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c27850
	ctx.lr = 0x833A90F8;
	sub_82C27850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,9336
	ctx.r11.s64 = ctx.r11.s64 + 9336;
	// addi r3,r10,25520
	ctx.r3.s64 = ctx.r10.s64 + 25520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9110;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A9124"))) PPC_WEAK_FUNC(sub_833A9124);
PPC_FUNC_IMPL(__imp__sub_833A9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9128"))) PPC_WEAK_FUNC(sub_833A9128);
PPC_FUNC_IMPL(__imp__sub_833A9128) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,9552
	ctx.r6.s64 = ctx.r11.s64 + 9552;
	// addi r4,r10,9996
	ctx.r4.s64 = ctx.r10.s64 + 9996;
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-23396
	ctx.r3.s64 = ctx.r10.s64 + -23396;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,5936
	ctx.r5.s64 = ctx.r11.s64 + 5936;
	// bl 0x82c1e608
	ctx.lr = 0x833A9160;
	sub_82C1E608(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25592
	ctx.r3.s64 = ctx.r11.s64 + 25592;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A916C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A917C"))) PPC_WEAK_FUNC(sub_833A917C);
PPC_FUNC_IMPL(__imp__sub_833A917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9180"))) PPC_WEAK_FUNC(sub_833A9180);
PPC_FUNC_IMPL(__imp__sub_833A9180) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10196
	ctx.r4.s64 = ctx.r10.s64 + 10196;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-23640
	ctx.r5.s64 = ctx.r11.s64 + -23640;
	// addi r3,r10,-9692
	ctx.r3.s64 = ctx.r10.s64 + -9692;
	// bl 0x82c75968
	ctx.lr = 0x833A91A8;
	sub_82C75968(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A91B4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A91C4"))) PPC_WEAK_FUNC(sub_833A91C4);
PPC_FUNC_IMPL(__imp__sub_833A91C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A91C8"))) PPC_WEAK_FUNC(sub_833A91C8);
PPC_FUNC_IMPL(__imp__sub_833A91C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10472
	ctx.r4.s64 = ctx.r10.s64 + 10472;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1352
	ctx.r3.s64 = ctx.r10.s64 + -1352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,21024
	ctx.r5.s64 = ctx.r11.s64 + 21024;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A91FC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9208;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9218"))) PPC_WEAK_FUNC(sub_833A9218);
PPC_FUNC_IMPL(__imp__sub_833A9218) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10596
	ctx.r4.s64 = ctx.r10.s64 + 10596;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,236
	ctx.r3.s64 = ctx.r10.s64 + 236;
	// addi r5,r11,22824
	ctx.r5.s64 = ctx.r11.s64 + 22824;
	// bl 0x82c484a0
	ctx.lr = 0x833A9244;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26024
	ctx.r3.s64 = ctx.r11.s64 + 26024;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9250;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9260"))) PPC_WEAK_FUNC(sub_833A9260);
PPC_FUNC_IMPL(__imp__sub_833A9260) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r4,r10,10624
	ctx.r4.s64 = ctx.r10.s64 + 10624;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-40
	ctx.r31.s64 = ctx.r10.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24440
	ctx.r5.s64 = ctx.r11.s64 + 24440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c46f78
	ctx.lr = 0x833A929C;
	sub_82C46F78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,10592
	ctx.r11.s64 = ctx.r11.s64 + 10592;
	// addi r3,r10,26048
	ctx.r3.s64 = ctx.r10.s64 + 26048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A92B4;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A92C8"))) PPC_WEAK_FUNC(sub_833A92C8);
PPC_FUNC_IMPL(__imp__sub_833A92C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,10868
	ctx.r4.s64 = ctx.r10.s64 + 10868;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1544
	ctx.r3.s64 = ctx.r10.s64 + 1544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25992
	ctx.r5.s64 = ctx.r11.s64 + -25992;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A92FC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9308;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9318"))) PPC_WEAK_FUNC(sub_833A9318);
PPC_FUNC_IMPL(__imp__sub_833A9318) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,10972
	ctx.r4.s64 = ctx.r10.s64 + 10972;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,1820
	ctx.r3.s64 = ctx.r10.s64 + 1820;
	// addi r5,r11,-24232
	ctx.r5.s64 = ctx.r11.s64 + -24232;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9344;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26144
	ctx.r3.s64 = ctx.r11.s64 + 26144;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9350;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9360"))) PPC_WEAK_FUNC(sub_833A9360);
PPC_FUNC_IMPL(__imp__sub_833A9360) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11032
	ctx.r4.s64 = ctx.r10.s64 + 11032;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,2096
	ctx.r3.s64 = ctx.r10.s64 + 2096;
	// addi r5,r11,-22184
	ctx.r5.s64 = ctx.r11.s64 + -22184;
	// bl 0x82c38ed8
	ctx.lr = 0x833A938C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9398;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A93A8"))) PPC_WEAK_FUNC(sub_833A93A8);
PPC_FUNC_IMPL(__imp__sub_833A93A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11220
	ctx.r4.s64 = ctx.r10.s64 + 11220;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4440
	ctx.r3.s64 = ctx.r10.s64 + 4440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-13920
	ctx.r5.s64 = ctx.r11.s64 + -13920;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A93DC;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A93E8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A93F8"))) PPC_WEAK_FUNC(sub_833A93F8);
PPC_FUNC_IMPL(__imp__sub_833A93F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11272
	ctx.r4.s64 = ctx.r10.s64 + 11272;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,4716
	ctx.r31.s64 = ctx.r10.s64 + 4716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11056
	ctx.r5.s64 = ctx.r11.s64 + -11056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4d6f0
	ctx.lr = 0x833A9434;
	sub_82C4D6F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,11268
	ctx.r11.s64 = ctx.r11.s64 + 11268;
	// addi r3,r10,26264
	ctx.r3.s64 = ctx.r10.s64 + 26264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833A944C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833A9460"))) PPC_WEAK_FUNC(sub_833A9460);
PPC_FUNC_IMPL(__imp__sub_833A9460) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11428
	ctx.r4.s64 = ctx.r10.s64 + 11428;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,4992
	ctx.r3.s64 = ctx.r10.s64 + 4992;
	// addi r5,r11,-6616
	ctx.r5.s64 = ctx.r11.s64 + -6616;
	// bl 0x82c38ed8
	ctx.lr = 0x833A948C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9498;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A94A8"))) PPC_WEAK_FUNC(sub_833A94A8);
PPC_FUNC_IMPL(__imp__sub_833A94A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11468
	ctx.r4.s64 = ctx.r10.s64 + 11468;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,5268
	ctx.r3.s64 = ctx.r10.s64 + 5268;
	// addi r5,r11,-6240
	ctx.r5.s64 = ctx.r11.s64 + -6240;
	// bl 0x82c38ed8
	ctx.lr = 0x833A94D4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A94E0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A94F0"))) PPC_WEAK_FUNC(sub_833A94F0);
PPC_FUNC_IMPL(__imp__sub_833A94F0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11640
	ctx.r4.s64 = ctx.r10.s64 + 11640;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5544
	ctx.r3.s64 = ctx.r10.s64 + 5544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1920
	ctx.r5.s64 = ctx.r11.s64 + -1920;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A9524;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9530;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9540"))) PPC_WEAK_FUNC(sub_833A9540);
PPC_FUNC_IMPL(__imp__sub_833A9540) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11752
	ctx.r4.s64 = ctx.r10.s64 + 11752;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,5820
	ctx.r3.s64 = ctx.r10.s64 + 5820;
	// addi r5,r11,5368
	ctx.r5.s64 = ctx.r11.s64 + 5368;
	// bl 0x82c51d50
	ctx.lr = 0x833A956C;
	sub_82C51D50(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9578;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9588"))) PPC_WEAK_FUNC(sub_833A9588);
PPC_FUNC_IMPL(__imp__sub_833A9588) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11808
	ctx.r4.s64 = ctx.r10.s64 + 11808;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6096
	ctx.r3.s64 = ctx.r10.s64 + 6096;
	// addi r5,r11,6152
	ctx.r5.s64 = ctx.r11.s64 + 6152;
	// bl 0x82c38ed8
	ctx.lr = 0x833A95B4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A95C0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A95D0"))) PPC_WEAK_FUNC(sub_833A95D0);
PPC_FUNC_IMPL(__imp__sub_833A95D0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11844
	ctx.r4.s64 = ctx.r10.s64 + 11844;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6372
	ctx.r3.s64 = ctx.r10.s64 + 6372;
	// addi r5,r11,6536
	ctx.r5.s64 = ctx.r11.s64 + 6536;
	// bl 0x82c38ed8
	ctx.lr = 0x833A95FC;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26408
	ctx.r3.s64 = ctx.r11.s64 + 26408;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9608;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9618"))) PPC_WEAK_FUNC(sub_833A9618);
PPC_FUNC_IMPL(__imp__sub_833A9618) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,11880
	ctx.r4.s64 = ctx.r10.s64 + 11880;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6648
	ctx.r3.s64 = ctx.r10.s64 + 6648;
	// addi r5,r11,6896
	ctx.r5.s64 = ctx.r11.s64 + 6896;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9644;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9650;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9660"))) PPC_WEAK_FUNC(sub_833A9660);
PPC_FUNC_IMPL(__imp__sub_833A9660) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12000
	ctx.r4.s64 = ctx.r10.s64 + 12000;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,6928
	ctx.r3.s64 = ctx.r10.s64 + 6928;
	// addi r5,r11,13560
	ctx.r5.s64 = ctx.r11.s64 + 13560;
	// bl 0x82c484a0
	ctx.lr = 0x833A968C;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9698;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A96A8"))) PPC_WEAK_FUNC(sub_833A96A8);
PPC_FUNC_IMPL(__imp__sub_833A96A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12280
	ctx.r4.s64 = ctx.r10.s64 + 12280;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7208
	ctx.r3.s64 = ctx.r10.s64 + 7208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,19656
	ctx.r5.s64 = ctx.r11.s64 + 19656;
	// bl 0x82c4a020
	ctx.lr = 0x833A96DC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A96E8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A96F8"))) PPC_WEAK_FUNC(sub_833A96F8);
PPC_FUNC_IMPL(__imp__sub_833A96F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,12432
	ctx.r4.s64 = ctx.r11.s64 + 12432;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82c1e608
	ctx.lr = 0x833A9728;
	sub_82C1E608(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9734;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9744"))) PPC_WEAK_FUNC(sub_833A9744);
PPC_FUNC_IMPL(__imp__sub_833A9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9748"))) PPC_WEAK_FUNC(sub_833A9748);
PPC_FUNC_IMPL(__imp__sub_833A9748) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12460
	ctx.r4.s64 = ctx.r10.s64 + 12460;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,9828
	ctx.r3.s64 = ctx.r10.s64 + 9828;
	// addi r5,r11,22856
	ctx.r5.s64 = ctx.r11.s64 + 22856;
	// bl 0x82c7b190
	ctx.lr = 0x833A9774;
	sub_82C7B190(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9780;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9790"))) PPC_WEAK_FUNC(sub_833A9790);
PPC_FUNC_IMPL(__imp__sub_833A9790) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12524
	ctx.r4.s64 = ctx.r10.s64 + 12524;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10104
	ctx.r3.s64 = ctx.r10.s64 + 10104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,26296
	ctx.r5.s64 = ctx.r11.s64 + 26296;
	// bl 0x82c4a020
	ctx.lr = 0x833A97C4;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A97D0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A97E0"))) PPC_WEAK_FUNC(sub_833A97E0);
PPC_FUNC_IMPL(__imp__sub_833A97E0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r10,12624
	ctx.r4.s64 = ctx.r10.s64 + 12624;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11416
	ctx.r3.s64 = ctx.r10.s64 + 11416;
	// addi r5,r11,29200
	ctx.r5.s64 = ctx.r11.s64 + 29200;
	// bl 0x82c57058
	ctx.lr = 0x833A980C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9818;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9828"))) PPC_WEAK_FUNC(sub_833A9828);
PPC_FUNC_IMPL(__imp__sub_833A9828) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12732
	ctx.r4.s64 = ctx.r10.s64 + 12732;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11692
	ctx.r3.s64 = ctx.r10.s64 + 11692;
	// addi r5,r11,-32248
	ctx.r5.s64 = ctx.r11.s64 + -32248;
	// bl 0x82c62390
	ctx.lr = 0x833A9854;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9860;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9870"))) PPC_WEAK_FUNC(sub_833A9870);
PPC_FUNC_IMPL(__imp__sub_833A9870) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12792
	ctx.r4.s64 = ctx.r10.s64 + 12792;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,11968
	ctx.r3.s64 = ctx.r10.s64 + 11968;
	// addi r5,r11,-29248
	ctx.r5.s64 = ctx.r11.s64 + -29248;
	// bl 0x82c57058
	ctx.lr = 0x833A989C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A98A8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A98B8"))) PPC_WEAK_FUNC(sub_833A98B8);
PPC_FUNC_IMPL(__imp__sub_833A98B8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12828
	ctx.r4.s64 = ctx.r10.s64 + 12828;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12244
	ctx.r3.s64 = ctx.r10.s64 + 12244;
	// addi r5,r11,-28936
	ctx.r5.s64 = ctx.r11.s64 + -28936;
	// bl 0x82c57058
	ctx.lr = 0x833A98E4;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A98F0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9900"))) PPC_WEAK_FUNC(sub_833A9900);
PPC_FUNC_IMPL(__imp__sub_833A9900) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12876
	ctx.r4.s64 = ctx.r10.s64 + 12876;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12520
	ctx.r3.s64 = ctx.r10.s64 + 12520;
	// addi r5,r11,-28624
	ctx.r5.s64 = ctx.r11.s64 + -28624;
	// bl 0x82c57058
	ctx.lr = 0x833A992C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9938;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9948"))) PPC_WEAK_FUNC(sub_833A9948);
PPC_FUNC_IMPL(__imp__sub_833A9948) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,12932
	ctx.r4.s64 = ctx.r10.s64 + 12932;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,12796
	ctx.r3.s64 = ctx.r10.s64 + 12796;
	// addi r5,r11,-24728
	ctx.r5.s64 = ctx.r11.s64 + -24728;
	// bl 0x82c59ed8
	ctx.lr = 0x833A9974;
	sub_82C59ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9980;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9990"))) PPC_WEAK_FUNC(sub_833A9990);
PPC_FUNC_IMPL(__imp__sub_833A9990) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13020
	ctx.r4.s64 = ctx.r10.s64 + 13020;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-23032
	ctx.r5.s64 = ctx.r11.s64 + -23032;
	// addi r3,r10,13072
	ctx.r3.s64 = ctx.r10.s64 + 13072;
	// bl 0x82c60828
	ctx.lr = 0x833A99B8;
	sub_82C60828(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26792
	ctx.r3.s64 = ctx.r11.s64 + 26792;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A99C4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A99D4"))) PPC_WEAK_FUNC(sub_833A99D4);
PPC_FUNC_IMPL(__imp__sub_833A99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A99D8"))) PPC_WEAK_FUNC(sub_833A99D8);
PPC_FUNC_IMPL(__imp__sub_833A99D8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13116
	ctx.r4.s64 = ctx.r10.s64 + 13116;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-19984
	ctx.r5.s64 = ctx.r11.s64 + -19984;
	// addi r3,r10,13348
	ctx.r3.s64 = ctx.r10.s64 + 13348;
	// bl 0x82c608b8
	ctx.lr = 0x833A9A00;
	sub_82C608B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A0C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9A1C"))) PPC_WEAK_FUNC(sub_833A9A1C);
PPC_FUNC_IMPL(__imp__sub_833A9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9A20"))) PPC_WEAK_FUNC(sub_833A9A20);
PPC_FUNC_IMPL(__imp__sub_833A9A20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13348
	ctx.r4.s64 = ctx.r10.s64 + 13348;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-9112
	ctx.r5.s64 = ctx.r11.s64 + -9112;
	// addi r3,r10,15688
	ctx.r3.s64 = ctx.r10.s64 + 15688;
	// bl 0x82c26628
	ctx.lr = 0x833A9A48;
	sub_82C26628(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A54;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9A64"))) PPC_WEAK_FUNC(sub_833A9A64);
PPC_FUNC_IMPL(__imp__sub_833A9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9A68"))) PPC_WEAK_FUNC(sub_833A9A68);
PPC_FUNC_IMPL(__imp__sub_833A9A68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13368
	ctx.r4.s64 = ctx.r11.s64 + 13368;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15964
	ctx.r3.s64 = ctx.r11.s64 + 15964;
	// bl 0x82c279b8
	ctx.lr = 0x833A9A90;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9A9C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9AAC"))) PPC_WEAK_FUNC(sub_833A9AAC);
PPC_FUNC_IMPL(__imp__sub_833A9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9AB0"))) PPC_WEAK_FUNC(sub_833A9AB0);
PPC_FUNC_IMPL(__imp__sub_833A9AB0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13428
	ctx.r4.s64 = ctx.r10.s64 + 13428;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16240
	ctx.r3.s64 = ctx.r10.s64 + 16240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,3848
	ctx.r5.s64 = ctx.r11.s64 + 3848;
	// bl 0x82c1e6a0
	ctx.lr = 0x833A9AE4;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9AF0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9B00"))) PPC_WEAK_FUNC(sub_833A9B00);
PPC_FUNC_IMPL(__imp__sub_833A9B00) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13456
	ctx.r4.s64 = ctx.r10.s64 + 13456;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,16516
	ctx.r3.s64 = ctx.r10.s64 + 16516;
	// addi r5,r11,5584
	ctx.r5.s64 = ctx.r11.s64 + 5584;
	// bl 0x82c61438
	ctx.lr = 0x833A9B2C;
	sub_82C61438(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9B38;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9B48"))) PPC_WEAK_FUNC(sub_833A9B48);
PPC_FUNC_IMPL(__imp__sub_833A9B48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13548
	ctx.r4.s64 = ctx.r10.s64 + 13548;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,16792
	ctx.r3.s64 = ctx.r10.s64 + 16792;
	// addi r5,r11,9400
	ctx.r5.s64 = ctx.r11.s64 + 9400;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9B74;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9B80;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9B90"))) PPC_WEAK_FUNC(sub_833A9B90);
PPC_FUNC_IMPL(__imp__sub_833A9B90) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13616
	ctx.r4.s64 = ctx.r10.s64 + 13616;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17076
	ctx.r3.s64 = ctx.r10.s64 + 17076;
	// addi r5,r11,13984
	ctx.r5.s64 = ctx.r11.s64 + 13984;
	// bl 0x82c38ed8
	ctx.lr = 0x833A9BBC;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27008
	ctx.r3.s64 = ctx.r11.s64 + 27008;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9BC8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9BD8"))) PPC_WEAK_FUNC(sub_833A9BD8);
PPC_FUNC_IMPL(__imp__sub_833A9BD8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13656
	ctx.r4.s64 = ctx.r10.s64 + 13656;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17352
	ctx.r3.s64 = ctx.r10.s64 + 17352;
	// addi r5,r11,14592
	ctx.r5.s64 = ctx.r11.s64 + 14592;
	// bl 0x82c57058
	ctx.lr = 0x833A9C04;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C10;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9C20"))) PPC_WEAK_FUNC(sub_833A9C20);
PPC_FUNC_IMPL(__imp__sub_833A9C20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13696
	ctx.r4.s64 = ctx.r10.s64 + 13696;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,17628
	ctx.r3.s64 = ctx.r10.s64 + 17628;
	// addi r5,r11,14984
	ctx.r5.s64 = ctx.r11.s64 + 14984;
	// bl 0x82c57058
	ctx.lr = 0x833A9C4C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27056
	ctx.r3.s64 = ctx.r11.s64 + 27056;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C58;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9C68"))) PPC_WEAK_FUNC(sub_833A9C68);
PPC_FUNC_IMPL(__imp__sub_833A9C68) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17512
	ctx.r4.s64 = ctx.r10.s64 + -17512;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15168
	ctx.r5.s64 = ctx.r11.s64 + 15168;
	// addi r3,r10,18568
	ctx.r3.s64 = ctx.r10.s64 + 18568;
	// bl 0x82c65220
	ctx.lr = 0x833A9C90;
	sub_82C65220(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9C9C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9CAC"))) PPC_WEAK_FUNC(sub_833A9CAC);
PPC_FUNC_IMPL(__imp__sub_833A9CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9CB0"))) PPC_WEAK_FUNC(sub_833A9CB0);
PPC_FUNC_IMPL(__imp__sub_833A9CB0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17764
	ctx.r4.s64 = ctx.r10.s64 + -17764;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15160
	ctx.r5.s64 = ctx.r11.s64 + 15160;
	// addi r3,r10,18300
	ctx.r3.s64 = ctx.r10.s64 + 18300;
	// bl 0x82c652f8
	ctx.lr = 0x833A9CD8;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9CE4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9CF4"))) PPC_WEAK_FUNC(sub_833A9CF4);
PPC_FUNC_IMPL(__imp__sub_833A9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9CF8"))) PPC_WEAK_FUNC(sub_833A9CF8);
PPC_FUNC_IMPL(__imp__sub_833A9CF8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17736
	ctx.r4.s64 = ctx.r10.s64 + -17736;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15280
	ctx.r5.s64 = ctx.r11.s64 + 15280;
	// addi r3,r10,19372
	ctx.r3.s64 = ctx.r10.s64 + 19372;
	// bl 0x82c652f8
	ctx.lr = 0x833A9D20;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9D2C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9D3C"))) PPC_WEAK_FUNC(sub_833A9D3C);
PPC_FUNC_IMPL(__imp__sub_833A9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9D40"))) PPC_WEAK_FUNC(sub_833A9D40);
PPC_FUNC_IMPL(__imp__sub_833A9D40) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17712
	ctx.r4.s64 = ctx.r10.s64 + -17712;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15312
	ctx.r5.s64 = ctx.r11.s64 + 15312;
	// addi r3,r10,20980
	ctx.r3.s64 = ctx.r10.s64 + 20980;
	// bl 0x82c652f8
	ctx.lr = 0x833A9D68;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27152
	ctx.r3.s64 = ctx.r11.s64 + 27152;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9D74;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9D84"))) PPC_WEAK_FUNC(sub_833A9D84);
PPC_FUNC_IMPL(__imp__sub_833A9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9D88"))) PPC_WEAK_FUNC(sub_833A9D88);
PPC_FUNC_IMPL(__imp__sub_833A9D88) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13736
	ctx.r4.s64 = ctx.r10.s64 + 13736;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15368
	ctx.r5.s64 = ctx.r11.s64 + 15368;
	// addi r3,r10,21248
	ctx.r3.s64 = ctx.r10.s64 + 21248;
	// bl 0x82c652f8
	ctx.lr = 0x833A9DB0;
	sub_82C652F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27176
	ctx.r3.s64 = ctx.r11.s64 + 27176;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9DBC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9DCC"))) PPC_WEAK_FUNC(sub_833A9DCC);
PPC_FUNC_IMPL(__imp__sub_833A9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9DD0"))) PPC_WEAK_FUNC(sub_833A9DD0);
PPC_FUNC_IMPL(__imp__sub_833A9DD0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17600
	ctx.r4.s64 = ctx.r10.s64 + -17600;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18544
	ctx.r5.s64 = ctx.r11.s64 + 18544;
	// addi r3,r10,18836
	ctx.r3.s64 = ctx.r10.s64 + 18836;
	// bl 0x82c653d0
	ctx.lr = 0x833A9DF8;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E04;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9E14"))) PPC_WEAK_FUNC(sub_833A9E14);
PPC_FUNC_IMPL(__imp__sub_833A9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9E18"))) PPC_WEAK_FUNC(sub_833A9E18);
PPC_FUNC_IMPL(__imp__sub_833A9E18) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17620
	ctx.r4.s64 = ctx.r10.s64 + -17620;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15424
	ctx.r5.s64 = ctx.r11.s64 + 15424;
	// addi r3,r10,20176
	ctx.r3.s64 = ctx.r10.s64 + 20176;
	// bl 0x82c653d0
	ctx.lr = 0x833A9E40;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E4C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9E5C"))) PPC_WEAK_FUNC(sub_833A9E5C);
PPC_FUNC_IMPL(__imp__sub_833A9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9E60"))) PPC_WEAK_FUNC(sub_833A9E60);
PPC_FUNC_IMPL(__imp__sub_833A9E60) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13760
	ctx.r4.s64 = ctx.r10.s64 + 13760;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18624
	ctx.r5.s64 = ctx.r11.s64 + 18624;
	// addi r3,r10,19640
	ctx.r3.s64 = ctx.r10.s64 + 19640;
	// bl 0x82c653d0
	ctx.lr = 0x833A9E88;
	sub_82C653D0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9E94;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9EA4"))) PPC_WEAK_FUNC(sub_833A9EA4);
PPC_FUNC_IMPL(__imp__sub_833A9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9EA8"))) PPC_WEAK_FUNC(sub_833A9EA8);
PPC_FUNC_IMPL(__imp__sub_833A9EA8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17588
	ctx.r4.s64 = ctx.r10.s64 + -17588;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15432
	ctx.r5.s64 = ctx.r11.s64 + 15432;
	// addi r3,r10,21784
	ctx.r3.s64 = ctx.r10.s64 + 21784;
	// bl 0x82c654a8
	ctx.lr = 0x833A9ED0;
	sub_82C654A8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9EDC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9EEC"))) PPC_WEAK_FUNC(sub_833A9EEC);
PPC_FUNC_IMPL(__imp__sub_833A9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9EF0"))) PPC_WEAK_FUNC(sub_833A9EF0);
PPC_FUNC_IMPL(__imp__sub_833A9EF0) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17564
	ctx.r4.s64 = ctx.r10.s64 + -17564;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,15880
	ctx.r5.s64 = ctx.r11.s64 + 15880;
	// addi r3,r10,21516
	ctx.r3.s64 = ctx.r10.s64 + 21516;
	// bl 0x82c654a8
	ctx.lr = 0x833A9F18;
	sub_82C654A8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9F24;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9F34"))) PPC_WEAK_FUNC(sub_833A9F34);
PPC_FUNC_IMPL(__imp__sub_833A9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9F38"))) PPC_WEAK_FUNC(sub_833A9F38);
PPC_FUNC_IMPL(__imp__sub_833A9F38) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17476
	ctx.r4.s64 = ctx.r10.s64 + -17476;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,19192
	ctx.r5.s64 = ctx.r11.s64 + 19192;
	// addi r3,r10,19908
	ctx.r3.s64 = ctx.r10.s64 + 19908;
	// bl 0x82c65580
	ctx.lr = 0x833A9F60;
	sub_82C65580(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9F6C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9F7C"))) PPC_WEAK_FUNC(sub_833A9F7C);
PPC_FUNC_IMPL(__imp__sub_833A9F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9F80"))) PPC_WEAK_FUNC(sub_833A9F80);
PPC_FUNC_IMPL(__imp__sub_833A9F80) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13784
	ctx.r4.s64 = ctx.r10.s64 + 13784;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,18712
	ctx.r5.s64 = ctx.r11.s64 + 18712;
	// addi r3,r10,22320
	ctx.r3.s64 = ctx.r10.s64 + 22320;
	// bl 0x82c65580
	ctx.lr = 0x833A9FA8;
	sub_82C65580(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9FB4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833A9FC4"))) PPC_WEAK_FUNC(sub_833A9FC4);
PPC_FUNC_IMPL(__imp__sub_833A9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833A9FC8"))) PPC_WEAK_FUNC(sub_833A9FC8);
PPC_FUNC_IMPL(__imp__sub_833A9FC8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17444
	ctx.r4.s64 = ctx.r10.s64 + -17444;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,17528
	ctx.r5.s64 = ctx.r11.s64 + 17528;
	// addi r3,r10,20444
	ctx.r3.s64 = ctx.r10.s64 + 20444;
	// bl 0x82c65580
	ctx.lr = 0x833A9FF0;
	sub_82C65580(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// bl 0x82cb0ae8
	ctx.lr = 0x833A9FFC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA00C"))) PPC_WEAK_FUNC(sub_833AA00C);
PPC_FUNC_IMPL(__imp__sub_833AA00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA010"))) PPC_WEAK_FUNC(sub_833AA010);
PPC_FUNC_IMPL(__imp__sub_833AA010) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17436
	ctx.r4.s64 = ctx.r10.s64 + -17436;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,17536
	ctx.r5.s64 = ctx.r11.s64 + 17536;
	// addi r3,r10,19104
	ctx.r3.s64 = ctx.r10.s64 + 19104;
	// bl 0x82baef68
	ctx.lr = 0x833AA038;
	sub_82BAEF68(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA044;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA054"))) PPC_WEAK_FUNC(sub_833AA054);
PPC_FUNC_IMPL(__imp__sub_833AA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA058"))) PPC_WEAK_FUNC(sub_833AA058);
PPC_FUNC_IMPL(__imp__sub_833AA058) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,-17412
	ctx.r4.s64 = ctx.r10.s64 + -17412;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,17848
	ctx.r5.s64 = ctx.r11.s64 + 17848;
	// addi r3,r10,20712
	ctx.r3.s64 = ctx.r10.s64 + 20712;
	// bl 0x82baef68
	ctx.lr = 0x833AA080;
	sub_82BAEF68(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA08C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA09C"))) PPC_WEAK_FUNC(sub_833AA09C);
PPC_FUNC_IMPL(__imp__sub_833AA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA0A0"))) PPC_WEAK_FUNC(sub_833AA0A0);
PPC_FUNC_IMPL(__imp__sub_833AA0A0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13796
	ctx.r4.s64 = ctx.r10.s64 + 13796;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,17936
	ctx.r5.s64 = ctx.r11.s64 + 17936;
	// addi r3,r10,22052
	ctx.r3.s64 = ctx.r10.s64 + 22052;
	// bl 0x82baef68
	ctx.lr = 0x833AA0C8;
	sub_82BAEF68(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA0D4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA0E4"))) PPC_WEAK_FUNC(sub_833AA0E4);
PPC_FUNC_IMPL(__imp__sub_833AA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA0E8"))) PPC_WEAK_FUNC(sub_833AA0E8);
PPC_FUNC_IMPL(__imp__sub_833AA0E8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,13936
	ctx.r4.s64 = ctx.r10.s64 + 13936;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22588
	ctx.r3.s64 = ctx.r10.s64 + 22588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25832
	ctx.r5.s64 = ctx.r11.s64 + 25832;
	// bl 0x82c4a020
	ctx.lr = 0x833AA11C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA128;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA138"))) PPC_WEAK_FUNC(sub_833AA138);
PPC_FUNC_IMPL(__imp__sub_833AA138) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,27480
	ctx.r5.s64 = ctx.r11.s64 + 27480;
	// bl 0x82c4a020
	ctx.lr = 0x833AA16C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA178;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA188"))) PPC_WEAK_FUNC(sub_833AA188);
PPC_FUNC_IMPL(__imp__sub_833AA188) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r10,14072
	ctx.r4.s64 = ctx.r10.s64 + 14072;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23140
	ctx.r3.s64 = ctx.r10.s64 + 23140;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,30256
	ctx.r5.s64 = ctx.r11.s64 + 30256;
	// bl 0x82c4a020
	ctx.lr = 0x833AA1BC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA1C8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA1D8"))) PPC_WEAK_FUNC(sub_833AA1D8);
PPC_FUNC_IMPL(__imp__sub_833AA1D8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,9552
	ctx.r6.s64 = ctx.r11.s64 + 9552;
	// addi r4,r10,14536
	ctx.r4.s64 = ctx.r10.s64 + 14536;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,24796
	ctx.r3.s64 = ctx.r10.s64 + 24796;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-26656
	ctx.r5.s64 = ctx.r11.s64 + -26656;
	// bl 0x82c1e608
	ctx.lr = 0x833AA210;
	sub_82C1E608(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27680
	ctx.r3.s64 = ctx.r11.s64 + 27680;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA21C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA22C"))) PPC_WEAK_FUNC(sub_833AA22C);
PPC_FUNC_IMPL(__imp__sub_833AA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA230"))) PPC_WEAK_FUNC(sub_833AA230);
PPC_FUNC_IMPL(__imp__sub_833AA230) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,-17364
	ctx.r4.s64 = ctx.r10.s64 + -17364;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-28304
	ctx.r5.s64 = ctx.r11.s64 + -28304;
	// addi r3,r10,24528
	ctx.r3.s64 = ctx.r10.s64 + 24528;
	// bl 0x82c6b448
	ctx.lr = 0x833AA258;
	sub_82C6B448(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27656
	ctx.r3.s64 = ctx.r11.s64 + 27656;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA264;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA274"))) PPC_WEAK_FUNC(sub_833AA274);
PPC_FUNC_IMPL(__imp__sub_833AA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA278"))) PPC_WEAK_FUNC(sub_833AA278);
PPC_FUNC_IMPL(__imp__sub_833AA278) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,14552
	ctx.r4.s64 = ctx.r10.s64 + 14552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,25072
	ctx.r3.s64 = ctx.r10.s64 + 25072;
	// addi r5,r11,-13976
	ctx.r5.s64 = ctx.r11.s64 + -13976;
	// bl 0x82c6d180
	ctx.lr = 0x833AA2A4;
	sub_82C6D180(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA2B0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA2C0"))) PPC_WEAK_FUNC(sub_833AA2C0);
PPC_FUNC_IMPL(__imp__sub_833AA2C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,14592
	ctx.r4.s64 = ctx.r10.s64 + 14592;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,25352
	ctx.r3.s64 = ctx.r10.s64 + 25352;
	// addi r5,r11,-11728
	ctx.r5.s64 = ctx.r11.s64 + -11728;
	// bl 0x82c61438
	ctx.lr = 0x833AA2EC;
	sub_82C61438(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27776
	ctx.r3.s64 = ctx.r11.s64 + 27776;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA2F8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA308"))) PPC_WEAK_FUNC(sub_833AA308);
PPC_FUNC_IMPL(__imp__sub_833AA308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r11,28104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x833aa320
	if (ctx.cr0.eq) goto loc_833AA320;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x833aa328
	goto loc_833AA328;
loc_833AA320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_833AA328:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,25348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 25348, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA340"))) PPC_WEAK_FUNC(sub_833AA340);
PPC_FUNC_IMPL(__imp__sub_833AA340) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,14656
	ctx.r4.s64 = ctx.r10.s64 + 14656;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25628
	ctx.r3.s64 = ctx.r10.s64 + 25628;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6408
	ctx.r5.s64 = ctx.r11.s64 + -6408;
	// bl 0x82c1e6a0
	ctx.lr = 0x833AA374;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27800
	ctx.r3.s64 = ctx.r11.s64 + 27800;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA380;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA390"))) PPC_WEAK_FUNC(sub_833AA390);
PPC_FUNC_IMPL(__imp__sub_833AA390) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14856
	ctx.r4.s64 = ctx.r11.s64 + 14856;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,28876
	ctx.r3.s64 = ctx.r11.s64 + 28876;
	// bl 0x82c55768
	ctx.lr = 0x833AA3B8;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28016
	ctx.r3.s64 = ctx.r11.s64 + 28016;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA3C4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA3D4"))) PPC_WEAK_FUNC(sub_833AA3D4);
PPC_FUNC_IMPL(__imp__sub_833AA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA3D8"))) PPC_WEAK_FUNC(sub_833AA3D8);
PPC_FUNC_IMPL(__imp__sub_833AA3D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14868
	ctx.r4.s64 = ctx.r11.s64 + 14868;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,27772
	ctx.r3.s64 = ctx.r11.s64 + 27772;
	// bl 0x82c557f8
	ctx.lr = 0x833AA400;
	sub_82C557F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28040
	ctx.r3.s64 = ctx.r11.s64 + 28040;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA40C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA41C"))) PPC_WEAK_FUNC(sub_833AA41C);
PPC_FUNC_IMPL(__imp__sub_833AA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA420"))) PPC_WEAK_FUNC(sub_833AA420);
PPC_FUNC_IMPL(__imp__sub_833AA420) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,28876
	ctx.r6.s64 = ctx.r11.s64 + 28876;
	// addi r4,r10,14880
	ctx.r4.s64 = ctx.r10.s64 + 14880;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,7280
	ctx.r5.s64 = ctx.r11.s64 + 7280;
	// addi r3,r10,27220
	ctx.r3.s64 = ctx.r10.s64 + 27220;
	// bl 0x82c55768
	ctx.lr = 0x833AA450;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27824
	ctx.r3.s64 = ctx.r11.s64 + 27824;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA45C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA46C"))) PPC_WEAK_FUNC(sub_833AA46C);
PPC_FUNC_IMPL(__imp__sub_833AA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA470"))) PPC_WEAK_FUNC(sub_833AA470);
PPC_FUNC_IMPL(__imp__sub_833AA470) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,28876
	ctx.r6.s64 = ctx.r11.s64 + 28876;
	// addi r4,r10,14904
	ctx.r4.s64 = ctx.r10.s64 + 14904;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,12424
	ctx.r5.s64 = ctx.r11.s64 + 12424;
	// addi r3,r10,28600
	ctx.r3.s64 = ctx.r10.s64 + 28600;
	// bl 0x82c55768
	ctx.lr = 0x833AA4A0;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA4AC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA4BC"))) PPC_WEAK_FUNC(sub_833AA4BC);
PPC_FUNC_IMPL(__imp__sub_833AA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA4C0"))) PPC_WEAK_FUNC(sub_833AA4C0);
PPC_FUNC_IMPL(__imp__sub_833AA4C0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,28876
	ctx.r6.s64 = ctx.r11.s64 + 28876;
	// addi r4,r10,14928
	ctx.r4.s64 = ctx.r10.s64 + 14928;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,10544
	ctx.r5.s64 = ctx.r11.s64 + 10544;
	// addi r3,r10,27496
	ctx.r3.s64 = ctx.r10.s64 + 27496;
	// bl 0x82c55768
	ctx.lr = 0x833AA4F0;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA4FC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA50C"))) PPC_WEAK_FUNC(sub_833AA50C);
PPC_FUNC_IMPL(__imp__sub_833AA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA510"))) PPC_WEAK_FUNC(sub_833AA510);
PPC_FUNC_IMPL(__imp__sub_833AA510) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,28876
	ctx.r6.s64 = ctx.r11.s64 + 28876;
	// addi r4,r10,14964
	ctx.r4.s64 = ctx.r10.s64 + 14964;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,11328
	ctx.r5.s64 = ctx.r11.s64 + 11328;
	// addi r3,r10,29428
	ctx.r3.s64 = ctx.r10.s64 + 29428;
	// bl 0x82c55768
	ctx.lr = 0x833AA540;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27896
	ctx.r3.s64 = ctx.r11.s64 + 27896;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA54C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA55C"))) PPC_WEAK_FUNC(sub_833AA55C);
PPC_FUNC_IMPL(__imp__sub_833AA55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA560"))) PPC_WEAK_FUNC(sub_833AA560);
PPC_FUNC_IMPL(__imp__sub_833AA560) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,27220
	ctx.r6.s64 = ctx.r11.s64 + 27220;
	// addi r4,r10,14992
	ctx.r4.s64 = ctx.r10.s64 + 14992;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,8264
	ctx.r5.s64 = ctx.r11.s64 + 8264;
	// addi r3,r10,29152
	ctx.r3.s64 = ctx.r10.s64 + 29152;
	// bl 0x82c55768
	ctx.lr = 0x833AA590;
	sub_82C55768(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27920
	ctx.r3.s64 = ctx.r11.s64 + 27920;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA59C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA5AC"))) PPC_WEAK_FUNC(sub_833AA5AC);
PPC_FUNC_IMPL(__imp__sub_833AA5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA5B0"))) PPC_WEAK_FUNC(sub_833AA5B0);
PPC_FUNC_IMPL(__imp__sub_833AA5B0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15012
	ctx.r4.s64 = ctx.r10.s64 + 15012;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,28048
	ctx.r3.s64 = ctx.r10.s64 + 28048;
	// addi r5,r11,8504
	ctx.r5.s64 = ctx.r11.s64 + 8504;
	// bl 0x82c557f8
	ctx.lr = 0x833AA5DC;
	sub_82C557F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27944
	ctx.r3.s64 = ctx.r11.s64 + 27944;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA5E8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA5F8"))) PPC_WEAK_FUNC(sub_833AA5F8);
PPC_FUNC_IMPL(__imp__sub_833AA5F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15040
	ctx.r4.s64 = ctx.r10.s64 + 15040;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,26944
	ctx.r3.s64 = ctx.r10.s64 + 26944;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// bl 0x82c557f8
	ctx.lr = 0x833AA624;
	sub_82C557F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA630;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA640"))) PPC_WEAK_FUNC(sub_833AA640);
PPC_FUNC_IMPL(__imp__sub_833AA640) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15056
	ctx.r4.s64 = ctx.r10.s64 + 15056;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,28324
	ctx.r3.s64 = ctx.r10.s64 + 28324;
	// addi r5,r11,8648
	ctx.r5.s64 = ctx.r11.s64 + 8648;
	// bl 0x82c557f8
	ctx.lr = 0x833AA66C;
	sub_82C557F8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,27992
	ctx.r3.s64 = ctx.r11.s64 + 27992;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA678;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA688"))) PPC_WEAK_FUNC(sub_833AA688);
PPC_FUNC_IMPL(__imp__sub_833AA688) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15084
	ctx.r4.s64 = ctx.r10.s64 + 15084;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,29704
	ctx.r3.s64 = ctx.r10.s64 + 29704;
	// addi r5,r11,13160
	ctx.r5.s64 = ctx.r11.s64 + 13160;
	// bl 0x82ca3c18
	ctx.lr = 0x833AA6B4;
	sub_82CA3C18(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28088
	ctx.r3.s64 = ctx.r11.s64 + 28088;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA6C0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA6D0"))) PPC_WEAK_FUNC(sub_833AA6D0);
PPC_FUNC_IMPL(__imp__sub_833AA6D0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15116
	ctx.r4.s64 = ctx.r10.s64 + 15116;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,29980
	ctx.r3.s64 = ctx.r10.s64 + 29980;
	// addi r5,r11,13584
	ctx.r5.s64 = ctx.r11.s64 + 13584;
	// bl 0x82ca3e40
	ctx.lr = 0x833AA6FC;
	sub_82CA3E40(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28112
	ctx.r3.s64 = ctx.r11.s64 + 28112;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA708;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA718"))) PPC_WEAK_FUNC(sub_833AA718);
PPC_FUNC_IMPL(__imp__sub_833AA718) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15156
	ctx.r4.s64 = ctx.r10.s64 + 15156;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,30256
	ctx.r3.s64 = ctx.r10.s64 + 30256;
	// addi r5,r11,14384
	ctx.r5.s64 = ctx.r11.s64 + 14384;
	// bl 0x82ca4068
	ctx.lr = 0x833AA744;
	sub_82CA4068(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28136
	ctx.r3.s64 = ctx.r11.s64 + 28136;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA750;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA760"))) PPC_WEAK_FUNC(sub_833AA760);
PPC_FUNC_IMPL(__imp__sub_833AA760) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15200
	ctx.r4.s64 = ctx.r10.s64 + 15200;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,30532
	ctx.r3.s64 = ctx.r10.s64 + 30532;
	// addi r5,r11,15168
	ctx.r5.s64 = ctx.r11.s64 + 15168;
	// bl 0x82c58ca8
	ctx.lr = 0x833AA78C;
	sub_82C58CA8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA798;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA7A8"))) PPC_WEAK_FUNC(sub_833AA7A8);
PPC_FUNC_IMPL(__imp__sub_833AA7A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// addi r4,r10,15228
	ctx.r4.s64 = ctx.r10.s64 + 15228;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,30808
	ctx.r3.s64 = ctx.r10.s64 + 30808;
	// addi r5,r11,16592
	ctx.r5.s64 = ctx.r11.s64 + 16592;
	// bl 0x82c4a3c0
	ctx.lr = 0x833AA7D4;
	sub_82C4A3C0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28184
	ctx.r3.s64 = ctx.r11.s64 + 28184;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA7E0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA7F0"))) PPC_WEAK_FUNC(sub_833AA7F0);
PPC_FUNC_IMPL(__imp__sub_833AA7F0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31364
	ctx.r6.s64 = ctx.r11.s64 + 31364;
	// addi r4,r10,15472
	ctx.r4.s64 = ctx.r10.s64 + 15472;
	// lis r11,-32057
	ctx.r11.s64 = -2100887552;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,29760
	ctx.r5.s64 = ctx.r11.s64 + 29760;
	// addi r3,r10,31088
	ctx.r3.s64 = ctx.r10.s64 + 31088;
	// bl 0x82c788e8
	ctx.lr = 0x833AA820;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28208
	ctx.r3.s64 = ctx.r11.s64 + 28208;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA82C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA83C"))) PPC_WEAK_FUNC(sub_833AA83C);
PPC_FUNC_IMPL(__imp__sub_833AA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA840"))) PPC_WEAK_FUNC(sub_833AA840);
PPC_FUNC_IMPL(__imp__sub_833AA840) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,15584
	ctx.r4.s64 = ctx.r11.s64 + 15584;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,31640
	ctx.r31.s64 = ctx.r11.s64 + 31640;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c78610
	ctx.lr = 0x833AA878;
	sub_82C78610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,15580
	ctx.r11.s64 = ctx.r11.s64 + 15580;
	// addi r3,r10,28256
	ctx.r3.s64 = ctx.r10.s64 + 28256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA890;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AA8A4"))) PPC_WEAK_FUNC(sub_833AA8A4);
PPC_FUNC_IMPL(__imp__sub_833AA8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA8A8"))) PPC_WEAK_FUNC(sub_833AA8A8);
PPC_FUNC_IMPL(__imp__sub_833AA8A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,15600
	ctx.r4.s64 = ctx.r11.s64 + 15600;
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,31364
	ctx.r31.s64 = ctx.r11.s64 + 31364;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c78610
	ctx.lr = 0x833AA8E0;
	sub_82C78610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,15580
	ctx.r11.s64 = ctx.r11.s64 + 15580;
	// addi r3,r10,28232
	ctx.r3.s64 = ctx.r10.s64 + 28232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA8F8;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AA90C"))) PPC_WEAK_FUNC(sub_833AA90C);
PPC_FUNC_IMPL(__imp__sub_833AA90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA910"))) PPC_WEAK_FUNC(sub_833AA910);
PPC_FUNC_IMPL(__imp__sub_833AA910) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31364
	ctx.r6.s64 = ctx.r11.s64 + 31364;
	// addi r4,r10,15676
	ctx.r4.s64 = ctx.r10.s64 + 15676;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// addi r5,r11,-29504
	ctx.r5.s64 = ctx.r11.s64 + -29504;
	// addi r3,r10,31916
	ctx.r3.s64 = ctx.r10.s64 + 31916;
	// bl 0x82c788e8
	ctx.lr = 0x833AA940;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA94C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA95C"))) PPC_WEAK_FUNC(sub_833AA95C);
PPC_FUNC_IMPL(__imp__sub_833AA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AA960"))) PPC_WEAK_FUNC(sub_833AA960);
PPC_FUNC_IMPL(__imp__sub_833AA960) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,15716
	ctx.r4.s64 = ctx.r10.s64 + 15716;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,32192
	ctx.r3.s64 = ctx.r10.s64 + 32192;
	// addi r5,r11,-29208
	ctx.r5.s64 = ctx.r11.s64 + -29208;
	// bl 0x82c38ed8
	ctx.lr = 0x833AA98C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA998;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA9A8"))) PPC_WEAK_FUNC(sub_833AA9A8);
PPC_FUNC_IMPL(__imp__sub_833AA9A8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,15760
	ctx.r4.s64 = ctx.r10.s64 + 15760;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,32468
	ctx.r3.s64 = ctx.r10.s64 + 32468;
	// addi r5,r11,-28776
	ctx.r5.s64 = ctx.r11.s64 + -28776;
	// bl 0x82c38ed8
	ctx.lr = 0x833AA9D4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28328
	ctx.r3.s64 = ctx.r11.s64 + 28328;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AA9E0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AA9F0"))) PPC_WEAK_FUNC(sub_833AA9F0);
PPC_FUNC_IMPL(__imp__sub_833AA9F0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,15880
	ctx.r4.s64 = ctx.r10.s64 + 15880;
	// lis r10,-31903
	ctx.r10.s64 = -2090795008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,32744
	ctx.r3.s64 = ctx.r10.s64 + 32744;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23912
	ctx.r5.s64 = ctx.r11.s64 + -23912;
	// bl 0x82c1e6a0
	ctx.lr = 0x833AAA24;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAA30;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAA40"))) PPC_WEAK_FUNC(sub_833AAA40);
PPC_FUNC_IMPL(__imp__sub_833AAA40) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,15940
	ctx.r4.s64 = ctx.r10.s64 + 15940;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-32512
	ctx.r3.s64 = ctx.r10.s64 + -32512;
	// addi r5,r11,-22584
	ctx.r5.s64 = ctx.r11.s64 + -22584;
	// bl 0x82ca4570
	ctx.lr = 0x833AAA6C;
	sub_82CA4570(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28376
	ctx.r3.s64 = ctx.r11.s64 + 28376;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAA78;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAA88"))) PPC_WEAK_FUNC(sub_833AAA88);
PPC_FUNC_IMPL(__imp__sub_833AAA88) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,15988
	ctx.r4.s64 = ctx.r10.s64 + 15988;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-32236
	ctx.r3.s64 = ctx.r10.s64 + -32236;
	// addi r5,r11,-21776
	ctx.r5.s64 = ctx.r11.s64 + -21776;
	// bl 0x82ca4570
	ctx.lr = 0x833AAAB4;
	sub_82CA4570(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28400
	ctx.r3.s64 = ctx.r11.s64 + 28400;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAAC0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAAD0"))) PPC_WEAK_FUNC(sub_833AAAD0);
PPC_FUNC_IMPL(__imp__sub_833AAAD0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16056
	ctx.r4.s64 = ctx.r10.s64 + 16056;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-31960
	ctx.r3.s64 = ctx.r10.s64 + -31960;
	// addi r5,r11,-20560
	ctx.r5.s64 = ctx.r11.s64 + -20560;
	// bl 0x82ca4570
	ctx.lr = 0x833AAAFC;
	sub_82CA4570(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28424
	ctx.r3.s64 = ctx.r11.s64 + 28424;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAB08;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAB18"))) PPC_WEAK_FUNC(sub_833AAB18);
PPC_FUNC_IMPL(__imp__sub_833AAB18) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16172
	ctx.r4.s64 = ctx.r10.s64 + 16172;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-31676
	ctx.r3.s64 = ctx.r10.s64 + -31676;
	// addi r5,r11,-6832
	ctx.r5.s64 = ctx.r11.s64 + -6832;
	// bl 0x82c50c58
	ctx.lr = 0x833AAB44;
	sub_82C50C58(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28448
	ctx.r3.s64 = ctx.r11.s64 + 28448;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAB50;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAB60"))) PPC_WEAK_FUNC(sub_833AAB60);
PPC_FUNC_IMPL(__imp__sub_833AAB60) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16280
	ctx.r4.s64 = ctx.r10.s64 + 16280;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-31396
	ctx.r3.s64 = ctx.r10.s64 + -31396;
	// addi r5,r11,-1752
	ctx.r5.s64 = ctx.r11.s64 + -1752;
	// bl 0x82c50c58
	ctx.lr = 0x833AAB8C;
	sub_82C50C58(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28472
	ctx.r3.s64 = ctx.r11.s64 + 28472;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAB98;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AABA8"))) PPC_WEAK_FUNC(sub_833AABA8);
PPC_FUNC_IMPL(__imp__sub_833AABA8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16612
	ctx.r4.s64 = ctx.r10.s64 + 16612;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31120
	ctx.r3.s64 = ctx.r10.s64 + -31120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,464
	ctx.r5.s64 = ctx.r11.s64 + 464;
	// bl 0x82c4a020
	ctx.lr = 0x833AABDC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28496
	ctx.r3.s64 = ctx.r11.s64 + 28496;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AABE8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AABF8"))) PPC_WEAK_FUNC(sub_833AABF8);
PPC_FUNC_IMPL(__imp__sub_833AABF8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16800
	ctx.r4.s64 = ctx.r10.s64 + 16800;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30844
	ctx.r3.s64 = ctx.r10.s64 + -30844;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12664
	ctx.r5.s64 = ctx.r11.s64 + 12664;
	// bl 0x82c4a020
	ctx.lr = 0x833AAC2C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28520
	ctx.r3.s64 = ctx.r11.s64 + 28520;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAC38;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAC48"))) PPC_WEAK_FUNC(sub_833AAC48);
PPC_FUNC_IMPL(__imp__sub_833AAC48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,16912
	ctx.r4.s64 = ctx.r10.s64 + 16912;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30568
	ctx.r3.s64 = ctx.r10.s64 + -30568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,16912
	ctx.r5.s64 = ctx.r11.s64 + 16912;
	// bl 0x82c4a020
	ctx.lr = 0x833AAC7C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAC88;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAC98"))) PPC_WEAK_FUNC(sub_833AAC98);
PPC_FUNC_IMPL(__imp__sub_833AAC98) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,17096
	ctx.r4.s64 = ctx.r10.s64 + 17096;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30292
	ctx.r3.s64 = ctx.r10.s64 + -30292;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23536
	ctx.r5.s64 = ctx.r11.s64 + 23536;
	// bl 0x82c4a020
	ctx.lr = 0x833AACCC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AACD8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AACE8"))) PPC_WEAK_FUNC(sub_833AACE8);
PPC_FUNC_IMPL(__imp__sub_833AACE8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,236
	ctx.r6.s64 = ctx.r11.s64 + 236;
	// addi r4,r10,17192
	ctx.r4.s64 = ctx.r10.s64 + 17192;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,28280
	ctx.r5.s64 = ctx.r11.s64 + 28280;
	// addi r3,r10,-30016
	ctx.r3.s64 = ctx.r10.s64 + -30016;
	// bl 0x82c484a0
	ctx.lr = 0x833AAD18;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28592
	ctx.r3.s64 = ctx.r11.s64 + 28592;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAD24;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAD34"))) PPC_WEAK_FUNC(sub_833AAD34);
PPC_FUNC_IMPL(__imp__sub_833AAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AAD38"))) PPC_WEAK_FUNC(sub_833AAD38);
PPC_FUNC_IMPL(__imp__sub_833AAD38) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r4,r10,17288
	ctx.r4.s64 = ctx.r10.s64 + 17288;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29740
	ctx.r3.s64 = ctx.r10.s64 + -29740;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,29816
	ctx.r5.s64 = ctx.r11.s64 + 29816;
	// bl 0x82c4a020
	ctx.lr = 0x833AAD6C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28616
	ctx.r3.s64 = ctx.r11.s64 + 28616;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAD78;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAD88"))) PPC_WEAK_FUNC(sub_833AAD88);
PPC_FUNC_IMPL(__imp__sub_833AAD88) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17488
	ctx.r4.s64 = ctx.r10.s64 + 17488;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29464
	ctx.r3.s64 = ctx.r10.s64 + -29464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26752
	ctx.r5.s64 = ctx.r11.s64 + -26752;
	// bl 0x82c4a020
	ctx.lr = 0x833AADBC;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28640
	ctx.r3.s64 = ctx.r11.s64 + 28640;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AADC8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AADD8"))) PPC_WEAK_FUNC(sub_833AADD8);
PPC_FUNC_IMPL(__imp__sub_833AADD8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17608
	ctx.r4.s64 = ctx.r10.s64 + 17608;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-29184
	ctx.r3.s64 = ctx.r10.s64 + -29184;
	// addi r5,r11,-22824
	ctx.r5.s64 = ctx.r11.s64 + -22824;
	// bl 0x82c484a0
	ctx.lr = 0x833AAE04;
	sub_82C484A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28664
	ctx.r3.s64 = ctx.r11.s64 + 28664;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAE10;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAE20"))) PPC_WEAK_FUNC(sub_833AAE20);
PPC_FUNC_IMPL(__imp__sub_833AAE20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17640
	ctx.r4.s64 = ctx.r10.s64 + 17640;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-28908
	ctx.r3.s64 = ctx.r10.s64 + -28908;
	// addi r5,r11,-21400
	ctx.r5.s64 = ctx.r11.s64 + -21400;
	// bl 0x82c472b0
	ctx.lr = 0x833AAE4C;
	sub_82C472B0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAE58;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAE68"))) PPC_WEAK_FUNC(sub_833AAE68);
PPC_FUNC_IMPL(__imp__sub_833AAE68) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17712
	ctx.r4.s64 = ctx.r10.s64 + 17712;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28632
	ctx.r3.s64 = ctx.r10.s64 + -28632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-18656
	ctx.r5.s64 = ctx.r11.s64 + -18656;
	// bl 0x82c4a020
	ctx.lr = 0x833AAE9C;
	sub_82C4A020(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28712
	ctx.r3.s64 = ctx.r11.s64 + 28712;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAEA8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAEB8"))) PPC_WEAK_FUNC(sub_833AAEB8);
PPC_FUNC_IMPL(__imp__sub_833AAEB8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17760
	ctx.r4.s64 = ctx.r10.s64 + 17760;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-28356
	ctx.r3.s64 = ctx.r10.s64 + -28356;
	// addi r5,r11,-18440
	ctx.r5.s64 = ctx.r11.s64 + -18440;
	// bl 0x82c38ed8
	ctx.lr = 0x833AAEE4;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28736
	ctx.r3.s64 = ctx.r11.s64 + 28736;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAEF0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAF00"))) PPC_WEAK_FUNC(sub_833AAF00);
PPC_FUNC_IMPL(__imp__sub_833AAF00) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17796
	ctx.r4.s64 = ctx.r10.s64 + 17796;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-28080
	ctx.r3.s64 = ctx.r10.s64 + -28080;
	// addi r5,r11,-18120
	ctx.r5.s64 = ctx.r11.s64 + -18120;
	// bl 0x82c38ed8
	ctx.lr = 0x833AAF2C;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28760
	ctx.r3.s64 = ctx.r11.s64 + 28760;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAF38;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAF48"))) PPC_WEAK_FUNC(sub_833AAF48);
PPC_FUNC_IMPL(__imp__sub_833AAF48) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17836
	ctx.r4.s64 = ctx.r10.s64 + 17836;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-27804
	ctx.r3.s64 = ctx.r10.s64 + -27804;
	// addi r5,r11,-17792
	ctx.r5.s64 = ctx.r11.s64 + -17792;
	// bl 0x82c38ed8
	ctx.lr = 0x833AAF74;
	sub_82C38ED8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAF80;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAF90"))) PPC_WEAK_FUNC(sub_833AAF90);
PPC_FUNC_IMPL(__imp__sub_833AAF90) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17884
	ctx.r4.s64 = ctx.r10.s64 + 17884;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-27528
	ctx.r3.s64 = ctx.r10.s64 + -27528;
	// addi r5,r11,-17456
	ctx.r5.s64 = ctx.r11.s64 + -17456;
	// bl 0x82c57058
	ctx.lr = 0x833AAFBC;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AAFC8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AAFD8"))) PPC_WEAK_FUNC(sub_833AAFD8);
PPC_FUNC_IMPL(__imp__sub_833AAFD8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17924
	ctx.r4.s64 = ctx.r10.s64 + 17924;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-27252
	ctx.r3.s64 = ctx.r10.s64 + -27252;
	// addi r5,r11,-17112
	ctx.r5.s64 = ctx.r11.s64 + -17112;
	// bl 0x82c57058
	ctx.lr = 0x833AB004;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28832
	ctx.r3.s64 = ctx.r11.s64 + 28832;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB010;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB020"))) PPC_WEAK_FUNC(sub_833AB020);
PPC_FUNC_IMPL(__imp__sub_833AB020) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,17960
	ctx.r4.s64 = ctx.r10.s64 + 17960;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-26976
	ctx.r3.s64 = ctx.r10.s64 + -26976;
	// addi r5,r11,-16768
	ctx.r5.s64 = ctx.r11.s64 + -16768;
	// bl 0x82c57058
	ctx.lr = 0x833AB04C;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28856
	ctx.r3.s64 = ctx.r11.s64 + 28856;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB058;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB068"))) PPC_WEAK_FUNC(sub_833AB068);
PPC_FUNC_IMPL(__imp__sub_833AB068) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18004
	ctx.r4.s64 = ctx.r10.s64 + 18004;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-26700
	ctx.r3.s64 = ctx.r10.s64 + -26700;
	// addi r5,r11,-16432
	ctx.r5.s64 = ctx.r11.s64 + -16432;
	// bl 0x82c57058
	ctx.lr = 0x833AB094;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28880
	ctx.r3.s64 = ctx.r11.s64 + 28880;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB0A0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB0B0"))) PPC_WEAK_FUNC(sub_833AB0B0);
PPC_FUNC_IMPL(__imp__sub_833AB0B0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18044
	ctx.r4.s64 = ctx.r10.s64 + 18044;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-26424
	ctx.r3.s64 = ctx.r10.s64 + -26424;
	// addi r5,r11,-16120
	ctx.r5.s64 = ctx.r11.s64 + -16120;
	// bl 0x82c57058
	ctx.lr = 0x833AB0DC;
	sub_82C57058(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28904
	ctx.r3.s64 = ctx.r11.s64 + 28904;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB0E8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB0F8"))) PPC_WEAK_FUNC(sub_833AB0F8);
PPC_FUNC_IMPL(__imp__sub_833AB0F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18104
	ctx.r4.s64 = ctx.r10.s64 + 18104;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26148
	ctx.r3.s64 = ctx.r10.s64 + -26148;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-14032
	ctx.r5.s64 = ctx.r11.s64 + -14032;
	// bl 0x82c1e6a0
	ctx.lr = 0x833AB12C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28928
	ctx.r3.s64 = ctx.r11.s64 + 28928;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB138;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB148"))) PPC_WEAK_FUNC(sub_833AB148);
PPC_FUNC_IMPL(__imp__sub_833AB148) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18160
	ctx.r4.s64 = ctx.r10.s64 + 18160;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25872
	ctx.r3.s64 = ctx.r10.s64 + -25872;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-12096
	ctx.r5.s64 = ctx.r11.s64 + -12096;
	// bl 0x82c1e6a0
	ctx.lr = 0x833AB17C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28952
	ctx.r3.s64 = ctx.r11.s64 + 28952;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB188;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB198"))) PPC_WEAK_FUNC(sub_833AB198);
PPC_FUNC_IMPL(__imp__sub_833AB198) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18208
	ctx.r4.s64 = ctx.r10.s64 + 18208;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-10432
	ctx.r5.s64 = ctx.r11.s64 + -10432;
	// addi r3,r10,-25596
	ctx.r3.s64 = ctx.r10.s64 + -25596;
	// bl 0x82c60828
	ctx.lr = 0x833AB1C0;
	sub_82C60828(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,28976
	ctx.r3.s64 = ctx.r11.s64 + 28976;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB1CC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB1DC"))) PPC_WEAK_FUNC(sub_833AB1DC);
PPC_FUNC_IMPL(__imp__sub_833AB1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB1E0"))) PPC_WEAK_FUNC(sub_833AB1E0);
PPC_FUNC_IMPL(__imp__sub_833AB1E0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18336
	ctx.r4.s64 = ctx.r10.s64 + 18336;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-25320
	ctx.r31.s64 = ctx.r10.s64 + -25320;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8952
	ctx.r5.s64 = ctx.r11.s64 + -8952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c8de70
	ctx.lr = 0x833AB21C;
	sub_82C8DE70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,18332
	ctx.r11.s64 = ctx.r11.s64 + 18332;
	// addi r3,r10,29000
	ctx.r3.s64 = ctx.r10.s64 + 29000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB234;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AB248"))) PPC_WEAK_FUNC(sub_833AB248);
PPC_FUNC_IMPL(__imp__sub_833AB248) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18432
	ctx.r4.s64 = ctx.r10.s64 + 18432;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-25044
	ctx.r31.s64 = ctx.r10.s64 + -25044;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6504
	ctx.r5.s64 = ctx.r11.s64 + -6504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c8de70
	ctx.lr = 0x833AB284;
	sub_82C8DE70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,18332
	ctx.r11.s64 = ctx.r11.s64 + 18332;
	// addi r3,r10,29024
	ctx.r3.s64 = ctx.r10.s64 + 29024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB29C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AB2B0"))) PPC_WEAK_FUNC(sub_833AB2B0);
PPC_FUNC_IMPL(__imp__sub_833AB2B0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18524
	ctx.r4.s64 = ctx.r10.s64 + 18524;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-24768
	ctx.r31.s64 = ctx.r10.s64 + -24768;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4728
	ctx.r5.s64 = ctx.r11.s64 + -4728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c8de70
	ctx.lr = 0x833AB2EC;
	sub_82C8DE70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,18332
	ctx.r11.s64 = ctx.r11.s64 + 18332;
	// addi r3,r10,29048
	ctx.r3.s64 = ctx.r10.s64 + 29048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB304;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AB318"))) PPC_WEAK_FUNC(sub_833AB318);
PPC_FUNC_IMPL(__imp__sub_833AB318) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18612
	ctx.r4.s64 = ctx.r10.s64 + 18612;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-24492
	ctx.r31.s64 = ctx.r10.s64 + -24492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3360
	ctx.r5.s64 = ctx.r11.s64 + -3360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c8de70
	ctx.lr = 0x833AB354;
	sub_82C8DE70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,18332
	ctx.r11.s64 = ctx.r11.s64 + 18332;
	// addi r3,r10,29072
	ctx.r3.s64 = ctx.r10.s64 + 29072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB36C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833AB380"))) PPC_WEAK_FUNC(sub_833AB380);
PPC_FUNC_IMPL(__imp__sub_833AB380) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18700
	ctx.r4.s64 = ctx.r11.s64 + 18700;
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-23940
	ctx.r3.s64 = ctx.r11.s64 + -23940;
	// bl 0x82c279b8
	ctx.lr = 0x833AB3A8;
	sub_82C279B8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29096
	ctx.r3.s64 = ctx.r11.s64 + 29096;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB3B4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB3C4"))) PPC_WEAK_FUNC(sub_833AB3C4);
PPC_FUNC_IMPL(__imp__sub_833AB3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB3C8"))) PPC_WEAK_FUNC(sub_833AB3C8);
PPC_FUNC_IMPL(__imp__sub_833AB3C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18716
	ctx.r4.s64 = ctx.r10.s64 + 18716;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-24216
	ctx.r3.s64 = ctx.r10.s64 + -24216;
	// addi r5,r11,-2176
	ctx.r5.s64 = ctx.r11.s64 + -2176;
	// bl 0x82c27918
	ctx.lr = 0x833AB3F4;
	sub_82C27918(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29120
	ctx.r3.s64 = ctx.r11.s64 + 29120;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB400;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB410"))) PPC_WEAK_FUNC(sub_833AB410);
PPC_FUNC_IMPL(__imp__sub_833AB410) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18856
	ctx.r4.s64 = ctx.r11.s64 + 18856;
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// bl 0x82c38e48
	ctx.lr = 0x833AB438;
	sub_82C38E48(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB444;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB454"))) PPC_WEAK_FUNC(sub_833AB454);
PPC_FUNC_IMPL(__imp__sub_833AB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB458"))) PPC_WEAK_FUNC(sub_833AB458);
PPC_FUNC_IMPL(__imp__sub_833AB458) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,18928
	ctx.r4.s64 = ctx.r10.s64 + 18928;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,3088
	ctx.r5.s64 = ctx.r11.s64 + 3088;
	// addi r3,r10,-23388
	ctx.r3.s64 = ctx.r10.s64 + -23388;
	// bl 0x82c75968
	ctx.lr = 0x833AB480;
	sub_82C75968(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29168
	ctx.r3.s64 = ctx.r11.s64 + 29168;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB48C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB49C"))) PPC_WEAK_FUNC(sub_833AB49C);
PPC_FUNC_IMPL(__imp__sub_833AB49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB4A0"))) PPC_WEAK_FUNC(sub_833AB4A0);
PPC_FUNC_IMPL(__imp__sub_833AB4A0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19036
	ctx.r4.s64 = ctx.r10.s64 + 19036;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,5128
	ctx.r5.s64 = ctx.r11.s64 + 5128;
	// addi r3,r10,-23112
	ctx.r3.s64 = ctx.r10.s64 + -23112;
	// bl 0x82c75968
	ctx.lr = 0x833AB4C8;
	sub_82C75968(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29192
	ctx.r3.s64 = ctx.r11.s64 + 29192;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB4D4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB4E4"))) PPC_WEAK_FUNC(sub_833AB4E4);
PPC_FUNC_IMPL(__imp__sub_833AB4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB4E8"))) PPC_WEAK_FUNC(sub_833AB4E8);
PPC_FUNC_IMPL(__imp__sub_833AB4E8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19100
	ctx.r4.s64 = ctx.r10.s64 + 19100;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,9152
	ctx.r5.s64 = ctx.r11.s64 + 9152;
	// addi r3,r10,-22836
	ctx.r3.s64 = ctx.r10.s64 + -22836;
	// bl 0x82c75968
	ctx.lr = 0x833AB510;
	sub_82C75968(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29216
	ctx.r3.s64 = ctx.r11.s64 + 29216;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB51C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB52C"))) PPC_WEAK_FUNC(sub_833AB52C);
PPC_FUNC_IMPL(__imp__sub_833AB52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB530"))) PPC_WEAK_FUNC(sub_833AB530);
PPC_FUNC_IMPL(__imp__sub_833AB530) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19144
	ctx.r4.s64 = ctx.r10.s64 + 19144;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-22560
	ctx.r3.s64 = ctx.r10.s64 + -22560;
	// addi r5,r11,10568
	ctx.r5.s64 = ctx.r11.s64 + 10568;
	// bl 0x82c58ca8
	ctx.lr = 0x833AB55C;
	sub_82C58CA8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29240
	ctx.r3.s64 = ctx.r11.s64 + 29240;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB568;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB578"))) PPC_WEAK_FUNC(sub_833AB578);
PPC_FUNC_IMPL(__imp__sub_833AB578) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19192
	ctx.r4.s64 = ctx.r10.s64 + 19192;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-22284
	ctx.r3.s64 = ctx.r10.s64 + -22284;
	// addi r5,r11,11280
	ctx.r5.s64 = ctx.r11.s64 + 11280;
	// bl 0x82c62390
	ctx.lr = 0x833AB5A4;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29264
	ctx.r3.s64 = ctx.r11.s64 + 29264;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB5B0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB5C0"))) PPC_WEAK_FUNC(sub_833AB5C0);
PPC_FUNC_IMPL(__imp__sub_833AB5C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19264
	ctx.r4.s64 = ctx.r10.s64 + 19264;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-22008
	ctx.r3.s64 = ctx.r10.s64 + -22008;
	// addi r5,r11,12792
	ctx.r5.s64 = ctx.r11.s64 + 12792;
	// bl 0x82c62390
	ctx.lr = 0x833AB5EC;
	sub_82C62390(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29288
	ctx.r3.s64 = ctx.r11.s64 + 29288;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB5F8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB608"))) PPC_WEAK_FUNC(sub_833AB608);
PPC_FUNC_IMPL(__imp__sub_833AB608) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19324
	ctx.r4.s64 = ctx.r10.s64 + 19324;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-21732
	ctx.r3.s64 = ctx.r10.s64 + -21732;
	// addi r5,r11,15480
	ctx.r5.s64 = ctx.r11.s64 + 15480;
	// bl 0x82c61438
	ctx.lr = 0x833AB634;
	sub_82C61438(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB640;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB650"))) PPC_WEAK_FUNC(sub_833AB650);
PPC_FUNC_IMPL(__imp__sub_833AB650) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19392
	ctx.r4.s64 = ctx.r10.s64 + 19392;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-21440
	ctx.r3.s64 = ctx.r10.s64 + -21440;
	// addi r5,r11,15784
	ctx.r5.s64 = ctx.r11.s64 + 15784;
	// bl 0x82c7b190
	ctx.lr = 0x833AB67C;
	sub_82C7B190(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29336
	ctx.r3.s64 = ctx.r11.s64 + 29336;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB688;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB698"))) PPC_WEAK_FUNC(sub_833AB698);
PPC_FUNC_IMPL(__imp__sub_833AB698) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19436
	ctx.r4.s64 = ctx.r10.s64 + 19436;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-21164
	ctx.r3.s64 = ctx.r10.s64 + -21164;
	// addi r5,r11,16312
	ctx.r5.s64 = ctx.r11.s64 + 16312;
	// bl 0x82ca4068
	ctx.lr = 0x833AB6C4;
	sub_82CA4068(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29360
	ctx.r3.s64 = ctx.r11.s64 + 29360;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB6D0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB6E0"))) PPC_WEAK_FUNC(sub_833AB6E0);
PPC_FUNC_IMPL(__imp__sub_833AB6E0) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,5820
	ctx.r6.s64 = ctx.r11.s64 + 5820;
	// addi r4,r10,19500
	ctx.r4.s64 = ctx.r10.s64 + 19500;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r10,-20888
	ctx.r3.s64 = ctx.r10.s64 + -20888;
	// bl 0x82c51d50
	ctx.lr = 0x833AB710;
	sub_82C51D50(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB71C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB72C"))) PPC_WEAK_FUNC(sub_833AB72C);
PPC_FUNC_IMPL(__imp__sub_833AB72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB730"))) PPC_WEAK_FUNC(sub_833AB730);
PPC_FUNC_IMPL(__imp__sub_833AB730) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19560
	ctx.r4.s64 = ctx.r10.s64 + 19560;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-20612
	ctx.r3.s64 = ctx.r10.s64 + -20612;
	// addi r5,r11,17784
	ctx.r5.s64 = ctx.r11.s64 + 17784;
	// bl 0x82c51d50
	ctx.lr = 0x833AB75C;
	sub_82C51D50(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB768;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB778"))) PPC_WEAK_FUNC(sub_833AB778);
PPC_FUNC_IMPL(__imp__sub_833AB778) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19628
	ctx.r4.s64 = ctx.r10.s64 + 19628;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-20336
	ctx.r3.s64 = ctx.r10.s64 + -20336;
	// addi r5,r11,19624
	ctx.r5.s64 = ctx.r11.s64 + 19624;
	// bl 0x82ca3c18
	ctx.lr = 0x833AB7A4;
	sub_82CA3C18(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29432
	ctx.r3.s64 = ctx.r11.s64 + 29432;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB7B0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB7C0"))) PPC_WEAK_FUNC(sub_833AB7C0);
PPC_FUNC_IMPL(__imp__sub_833AB7C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r4,r10,19796
	ctx.r4.s64 = ctx.r10.s64 + 19796;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,26920
	ctx.r5.s64 = ctx.r11.s64 + 26920;
	// addi r3,r10,-20060
	ctx.r3.s64 = ctx.r10.s64 + -20060;
	// bl 0x82caccb0
	ctx.lr = 0x833AB7E8;
	sub_82CACCB0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29456
	ctx.r3.s64 = ctx.r11.s64 + 29456;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB7F4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB804"))) PPC_WEAK_FUNC(sub_833AB804);
PPC_FUNC_IMPL(__imp__sub_833AB804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB808"))) PPC_WEAK_FUNC(sub_833AB808);
PPC_FUNC_IMPL(__imp__sub_833AB808) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r4,r10,19912
	ctx.r4.s64 = ctx.r10.s64 + 19912;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-32696
	ctx.r5.s64 = ctx.r11.s64 + -32696;
	// addi r3,r10,-19784
	ctx.r3.s64 = ctx.r10.s64 + -19784;
	// bl 0x82caccb0
	ctx.lr = 0x833AB830;
	sub_82CACCB0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29480
	ctx.r3.s64 = ctx.r11.s64 + 29480;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB83C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB84C"))) PPC_WEAK_FUNC(sub_833AB84C);
PPC_FUNC_IMPL(__imp__sub_833AB84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB850"))) PPC_WEAK_FUNC(sub_833AB850);
PPC_FUNC_IMPL(__imp__sub_833AB850) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r4,r10,19976
	ctx.r4.s64 = ctx.r10.s64 + 19976;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-31024
	ctx.r5.s64 = ctx.r11.s64 + -31024;
	// addi r3,r10,-19508
	ctx.r3.s64 = ctx.r10.s64 + -19508;
	// bl 0x82caccb0
	ctx.lr = 0x833AB878;
	sub_82CACCB0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29504
	ctx.r3.s64 = ctx.r11.s64 + 29504;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB884;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB894"))) PPC_WEAK_FUNC(sub_833AB894);
PPC_FUNC_IMPL(__imp__sub_833AB894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB898"))) PPC_WEAK_FUNC(sub_833AB898);
PPC_FUNC_IMPL(__imp__sub_833AB898) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20192
	ctx.r4.s64 = ctx.r10.s64 + 20192;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-24288
	ctx.r5.s64 = ctx.r11.s64 + -24288;
	// addi r3,r10,-19232
	ctx.r3.s64 = ctx.r10.s64 + -19232;
	// bl 0x82c788e8
	ctx.lr = 0x833AB8C8;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29528
	ctx.r3.s64 = ctx.r11.s64 + 29528;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB8D4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB8E4"))) PPC_WEAK_FUNC(sub_833AB8E4);
PPC_FUNC_IMPL(__imp__sub_833AB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB8E8"))) PPC_WEAK_FUNC(sub_833AB8E8);
PPC_FUNC_IMPL(__imp__sub_833AB8E8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20284
	ctx.r4.s64 = ctx.r10.s64 + 20284;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-23016
	ctx.r5.s64 = ctx.r11.s64 + -23016;
	// addi r3,r10,-18956
	ctx.r3.s64 = ctx.r10.s64 + -18956;
	// bl 0x82c788e8
	ctx.lr = 0x833AB918;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29552
	ctx.r3.s64 = ctx.r11.s64 + 29552;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB924;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB934"))) PPC_WEAK_FUNC(sub_833AB934);
PPC_FUNC_IMPL(__imp__sub_833AB934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB938"))) PPC_WEAK_FUNC(sub_833AB938);
PPC_FUNC_IMPL(__imp__sub_833AB938) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20372
	ctx.r4.s64 = ctx.r10.s64 + 20372;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-21880
	ctx.r5.s64 = ctx.r11.s64 + -21880;
	// addi r3,r10,-18680
	ctx.r3.s64 = ctx.r10.s64 + -18680;
	// bl 0x82c788e8
	ctx.lr = 0x833AB968;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB974;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB984"))) PPC_WEAK_FUNC(sub_833AB984);
PPC_FUNC_IMPL(__imp__sub_833AB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB988"))) PPC_WEAK_FUNC(sub_833AB988);
PPC_FUNC_IMPL(__imp__sub_833AB988) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20464
	ctx.r4.s64 = ctx.r10.s64 + 20464;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-20608
	ctx.r5.s64 = ctx.r11.s64 + -20608;
	// addi r3,r10,-18404
	ctx.r3.s64 = ctx.r10.s64 + -18404;
	// bl 0x82c788e8
	ctx.lr = 0x833AB9B8;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// bl 0x82cb0ae8
	ctx.lr = 0x833AB9C4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833AB9D4"))) PPC_WEAK_FUNC(sub_833AB9D4);
PPC_FUNC_IMPL(__imp__sub_833AB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833AB9D8"))) PPC_WEAK_FUNC(sub_833AB9D8);
PPC_FUNC_IMPL(__imp__sub_833AB9D8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20556
	ctx.r4.s64 = ctx.r10.s64 + 20556;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-19584
	ctx.r5.s64 = ctx.r11.s64 + -19584;
	// addi r3,r10,-18128
	ctx.r3.s64 = ctx.r10.s64 + -18128;
	// bl 0x82c788e8
	ctx.lr = 0x833ABA08;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABA14;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABA24"))) PPC_WEAK_FUNC(sub_833ABA24);
PPC_FUNC_IMPL(__imp__sub_833ABA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABA28"))) PPC_WEAK_FUNC(sub_833ABA28);
PPC_FUNC_IMPL(__imp__sub_833ABA28) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20644
	ctx.r4.s64 = ctx.r10.s64 + 20644;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-18432
	ctx.r5.s64 = ctx.r11.s64 + -18432;
	// addi r3,r10,-17852
	ctx.r3.s64 = ctx.r10.s64 + -17852;
	// bl 0x82c788e8
	ctx.lr = 0x833ABA58;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABA64;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABA74"))) PPC_WEAK_FUNC(sub_833ABA74);
PPC_FUNC_IMPL(__imp__sub_833ABA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABA78"))) PPC_WEAK_FUNC(sub_833ABA78);
PPC_FUNC_IMPL(__imp__sub_833ABA78) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31640
	ctx.r6.s64 = ctx.r11.s64 + 31640;
	// addi r4,r10,20840
	ctx.r4.s64 = ctx.r10.s64 + 20840;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-15256
	ctx.r5.s64 = ctx.r11.s64 + -15256;
	// addi r3,r10,-17576
	ctx.r3.s64 = ctx.r10.s64 + -17576;
	// bl 0x82c788e8
	ctx.lr = 0x833ABAA8;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29672
	ctx.r3.s64 = ctx.r11.s64 + 29672;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABAB4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABAC4"))) PPC_WEAK_FUNC(sub_833ABAC4);
PPC_FUNC_IMPL(__imp__sub_833ABAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABAC8"))) PPC_WEAK_FUNC(sub_833ABAC8);
PPC_FUNC_IMPL(__imp__sub_833ABAC8) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31364
	ctx.r6.s64 = ctx.r11.s64 + 31364;
	// addi r4,r10,20936
	ctx.r4.s64 = ctx.r10.s64 + 20936;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-14776
	ctx.r5.s64 = ctx.r11.s64 + -14776;
	// addi r3,r10,-17300
	ctx.r3.s64 = ctx.r10.s64 + -17300;
	// bl 0x82c788e8
	ctx.lr = 0x833ABAF8;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29696
	ctx.r3.s64 = ctx.r11.s64 + 29696;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABB04;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABB14"))) PPC_WEAK_FUNC(sub_833ABB14);
PPC_FUNC_IMPL(__imp__sub_833ABB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABB18"))) PPC_WEAK_FUNC(sub_833ABB18);
PPC_FUNC_IMPL(__imp__sub_833ABB18) {
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
	// lis r11,-31903
	ctx.r11.s64 = -2090795008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31364
	ctx.r6.s64 = ctx.r11.s64 + 31364;
	// addi r4,r10,21132
	ctx.r4.s64 = ctx.r10.s64 + 21132;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// addi r5,r11,-9024
	ctx.r5.s64 = ctx.r11.s64 + -9024;
	// addi r3,r10,-17024
	ctx.r3.s64 = ctx.r10.s64 + -17024;
	// bl 0x82c788e8
	ctx.lr = 0x833ABB48;
	sub_82C788E8(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29720
	ctx.r3.s64 = ctx.r11.s64 + 29720;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABB54;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABB64"))) PPC_WEAK_FUNC(sub_833ABB64);
PPC_FUNC_IMPL(__imp__sub_833ABB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABB68"))) PPC_WEAK_FUNC(sub_833ABB68);
PPC_FUNC_IMPL(__imp__sub_833ABB68) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r4,r10,21372
	ctx.r4.s64 = ctx.r10.s64 + 21372;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16744
	ctx.r3.s64 = ctx.r10.s64 + -16744;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3912
	ctx.r5.s64 = ctx.r11.s64 + -3912;
	// bl 0x82c1e6a0
	ctx.lr = 0x833ABB9C;
	sub_82C1E6A0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29744
	ctx.r3.s64 = ctx.r11.s64 + 29744;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABBA8;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABBB8"))) PPC_WEAK_FUNC(sub_833ABBB8);
PPC_FUNC_IMPL(__imp__sub_833ABBB8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r4,r10,21728
	ctx.r4.s64 = ctx.r10.s64 + 21728;
	// lis r10,-31902
	ctx.r10.s64 = -2090729472;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r10,-15360
	ctx.r31.s64 = ctx.r10.s64 + -15360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20728
	ctx.r5.s64 = ctx.r11.s64 + 20728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca6300
	ctx.lr = 0x833ABBF4;
	sub_82CA6300(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r11,r11,21724
	ctx.r11.s64 = ctx.r11.s64 + 21724;
	// addi r3,r10,29768
	ctx.r3.s64 = ctx.r10.s64 + 29768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABC0C;
	sub_82CB0AE8(ctx, base);
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

__attribute__((alias("__imp__sub_833ABC20"))) PPC_WEAK_FUNC(sub_833ABC20);
PPC_FUNC_IMPL(__imp__sub_833ABC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// li r10,4095
	ctx.r10.s64 = 4095;
	// addi r11,r11,-13792
	ctx.r11.s64 = ctx.r11.s64 + -13792;
	// li r9,0
	ctx.r9.s64 = 0;
loc_833ABC30:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x833abc30
	if (!ctx.cr6.lt) goto loc_833ABC30;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABC54"))) PPC_WEAK_FUNC(sub_833ABC54);
PPC_FUNC_IMPL(__imp__sub_833ABC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABC58"))) PPC_WEAK_FUNC(sub_833ABC58);
PPC_FUNC_IMPL(__imp__sub_833ABC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29912
	ctx.r3.s64 = ctx.r11.s64 + 29912;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABC64"))) PPC_WEAK_FUNC(sub_833ABC64);
PPC_FUNC_IMPL(__imp__sub_833ABC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABC68"))) PPC_WEAK_FUNC(sub_833ABC68);
PPC_FUNC_IMPL(__imp__sub_833ABC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABC74"))) PPC_WEAK_FUNC(sub_833ABC74);
PPC_FUNC_IMPL(__imp__sub_833ABC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABC78"))) PPC_WEAK_FUNC(sub_833ABC78);
PPC_FUNC_IMPL(__imp__sub_833ABC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,19008
	ctx.r11.s64 = ctx.r11.s64 + 19008;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_833ABC8C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stb r9,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r9.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x833abc8c
	if (!ctx.cr6.lt) goto loc_833ABC8C;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29936
	ctx.r3.s64 = ctx.r11.s64 + 29936;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABCB4"))) PPC_WEAK_FUNC(sub_833ABCB4);
PPC_FUNC_IMPL(__imp__sub_833ABCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABCB8"))) PPC_WEAK_FUNC(sub_833ABCB8);
PPC_FUNC_IMPL(__imp__sub_833ABCB8) {
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
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,19244
	ctx.r3.s64 = ctx.r11.s64 + 19244;
	// bl 0x82cd55b0
	ctx.lr = 0x833ABCD0;
	sub_82CD55B0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29944
	ctx.r3.s64 = ctx.r11.s64 + 29944;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABCDC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABCEC"))) PPC_WEAK_FUNC(sub_833ABCEC);
PPC_FUNC_IMPL(__imp__sub_833ABCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABCF0"))) PPC_WEAK_FUNC(sub_833ABCF0);
PPC_FUNC_IMPL(__imp__sub_833ABCF0) {
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
	// lis r11,-31902
	ctx.r11.s64 = -2090729472;
	// addi r3,r11,19260
	ctx.r3.s64 = ctx.r11.s64 + 19260;
	// bl 0x82cd55b0
	ctx.lr = 0x833ABD08;
	sub_82CD55B0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29960
	ctx.r3.s64 = ctx.r11.s64 + 29960;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABD14;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABD24"))) PPC_WEAK_FUNC(sub_833ABD24);
PPC_FUNC_IMPL(__imp__sub_833ABD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD28"))) PPC_WEAK_FUNC(sub_833ABD28);
PPC_FUNC_IMPL(__imp__sub_833ABD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD34"))) PPC_WEAK_FUNC(sub_833ABD34);
PPC_FUNC_IMPL(__imp__sub_833ABD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD38"))) PPC_WEAK_FUNC(sub_833ABD38);
PPC_FUNC_IMPL(__imp__sub_833ABD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD44"))) PPC_WEAK_FUNC(sub_833ABD44);
PPC_FUNC_IMPL(__imp__sub_833ABD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD48"))) PPC_WEAK_FUNC(sub_833ABD48);
PPC_FUNC_IMPL(__imp__sub_833ABD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD54"))) PPC_WEAK_FUNC(sub_833ABD54);
PPC_FUNC_IMPL(__imp__sub_833ABD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD58"))) PPC_WEAK_FUNC(sub_833ABD58);
PPC_FUNC_IMPL(__imp__sub_833ABD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD64"))) PPC_WEAK_FUNC(sub_833ABD64);
PPC_FUNC_IMPL(__imp__sub_833ABD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD68"))) PPC_WEAK_FUNC(sub_833ABD68);
PPC_FUNC_IMPL(__imp__sub_833ABD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD74"))) PPC_WEAK_FUNC(sub_833ABD74);
PPC_FUNC_IMPL(__imp__sub_833ABD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD78"))) PPC_WEAK_FUNC(sub_833ABD78);
PPC_FUNC_IMPL(__imp__sub_833ABD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABD84"))) PPC_WEAK_FUNC(sub_833ABD84);
PPC_FUNC_IMPL(__imp__sub_833ABD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABD88"))) PPC_WEAK_FUNC(sub_833ABD88);
PPC_FUNC_IMPL(__imp__sub_833ABD88) {
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
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r11,r11,19836
	ctx.r11.s64 = ctx.r11.s64 + 19836;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77d4
	ctx.lr = 0x833ABDA4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABDB0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABDC0"))) PPC_WEAK_FUNC(sub_833ABDC0);
PPC_FUNC_IMPL(__imp__sub_833ABDC0) {
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
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// bl 0x82d906b0
	ctx.lr = 0x833ABDD8;
	sub_82D906B0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABDE4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABDF4"))) PPC_WEAK_FUNC(sub_833ABDF4);
PPC_FUNC_IMPL(__imp__sub_833ABDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABDF8"))) PPC_WEAK_FUNC(sub_833ABDF8);
PPC_FUNC_IMPL(__imp__sub_833ABDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31901
	ctx.r11.s64 = -2090663936;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// b 0x82d85c70
	sub_82D85C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABE04"))) PPC_WEAK_FUNC(sub_833ABE04);
PPC_FUNC_IMPL(__imp__sub_833ABE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833ABE08"))) PPC_WEAK_FUNC(sub_833ABE08);
PPC_FUNC_IMPL(__imp__sub_833ABE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,-17904
	ctx.r11.s64 = ctx.r11.s64 + -17904;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82d9b4a8
	sub_82D9B4A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABE18"))) PPC_WEAK_FUNC(sub_833ABE18);
PPC_FUNC_IMPL(__imp__sub_833ABE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,-17296
	ctx.r11.s64 = ctx.r11.s64 + -17296;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82d9b4a8
	sub_82D9B4A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABE28"))) PPC_WEAK_FUNC(sub_833ABE28);
PPC_FUNC_IMPL(__imp__sub_833ABE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31891
	ctx.r11.s64 = -2090008576;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r11,26712
	ctx.r11.s64 = ctx.r11.s64 + 26712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// li r7,8363
	ctx.r7.s64 = 8363;
	// li r8,255
	ctx.r8.s64 = 255;
loc_833ABE44:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bge cr6,0x833abe44
	if (!ctx.cr6.lt) goto loc_833ABE44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABE70"))) PPC_WEAK_FUNC(sub_833ABE70);
PPC_FUNC_IMPL(__imp__sub_833ABE70) {
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
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,26448
	ctx.r11.s64 = ctx.r11.s64 + 26448;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77d4
	ctx.lr = 0x833ABE8C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,30440
	ctx.r3.s64 = ctx.r10.s64 + 30440;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABE98;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABEA8"))) PPC_WEAK_FUNC(sub_833ABEA8);
PPC_FUNC_IMPL(__imp__sub_833ABEA8) {
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
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,26480
	ctx.r11.s64 = ctx.r11.s64 + 26480;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77d4
	ctx.lr = 0x833ABEC4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,30464
	ctx.r3.s64 = ctx.r10.s64 + 30464;
	// bl 0x82cb0ae8
	ctx.lr = 0x833ABED0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833ABEE0"))) PPC_WEAK_FUNC(sub_833ABEE0);
PPC_FUNC_IMPL(__imp__sub_833ABEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833ABEF4"))) PPC_WEAK_FUNC(sub_833ABEF4);
PPC_FUNC_IMPL(__imp__sub_833ABEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

