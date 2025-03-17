#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8233B9F8"))) PPC_WEAK_FUNC(sub_8233B9F8);
PPC_FUNC_IMPL(__imp__sub_8233B9F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r8,14864
	ctx.r5.s64 = ctx.r8.s64 + 14864;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// addi r4,r7,-7976
	ctx.r4.s64 = ctx.r7.s64 + -7976;
	// addi r8,r6,-7708
	ctx.r8.s64 = ctx.r6.s64 + -7708;
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BA54"))) PPC_WEAK_FUNC(sub_8233BA54);
PPC_FUNC_IMPL(__imp__sub_8233BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BA58"))) PPC_WEAK_FUNC(sub_8233BA58);
PPC_FUNC_IMPL(__imp__sub_8233BA58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BA60"))) PPC_WEAK_FUNC(sub_8233BA60);
PPC_FUNC_IMPL(__imp__sub_8233BA60) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-9128
	ctx.r7.s64 = ctx.r8.s64 + -9128;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BA98"))) PPC_WEAK_FUNC(sub_8233BA98);
PPC_FUNC_IMPL(__imp__sub_8233BA98) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BABC;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-3952
	ctx.r8.s64 = ctx.r9.s64 + -3952;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BAD0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233BAD8;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233BAEC"))) PPC_WEAK_FUNC(sub_8233BAEC);
PPC_FUNC_IMPL(__imp__sub_8233BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BAF0"))) PPC_WEAK_FUNC(sub_8233BAF0);
PPC_FUNC_IMPL(__imp__sub_8233BAF0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BB1C;
	sub_8229C068(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-3952
	ctx.r8.s64 = ctx.r9.s64 + -3952;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BB30;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233BB38;
	sub_8229C628(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8233bb6c
	if (ctx.cr6.eq) goto loc_8233BB6C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233bb64
	if (ctx.cr6.lt) goto loc_8233BB64;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233bb6c
	if (!ctx.cr6.gt) goto loc_8233BB6C;
loc_8233BB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233BB6C;
	sub_82294A58(ctx, base);
loc_8233BB6C:
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

__attribute__((alias("__imp__sub_8233BB88"))) PPC_WEAK_FUNC(sub_8233BB88);
PPC_FUNC_IMPL(__imp__sub_8233BB88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x8233BBA8;
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

__attribute__((alias("__imp__sub_8233BBC0"))) PPC_WEAK_FUNC(sub_8233BBC0);
PPC_FUNC_IMPL(__imp__sub_8233BBC0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// bl 0x822960c0
	ctx.lr = 0x8233BBE0;
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

__attribute__((alias("__imp__sub_8233BBF8"))) PPC_WEAK_FUNC(sub_8233BBF8);
PPC_FUNC_IMPL(__imp__sub_8233BBF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC00"))) PPC_WEAK_FUNC(sub_8233BC00);
PPC_FUNC_IMPL(__imp__sub_8233BC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC04"))) PPC_WEAK_FUNC(sub_8233BC04);
PPC_FUNC_IMPL(__imp__sub_8233BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BC08"))) PPC_WEAK_FUNC(sub_8233BC08);
PPC_FUNC_IMPL(__imp__sub_8233BC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC0C"))) PPC_WEAK_FUNC(sub_8233BC0C);
PPC_FUNC_IMPL(__imp__sub_8233BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BC10"))) PPC_WEAK_FUNC(sub_8233BC10);
PPC_FUNC_IMPL(__imp__sub_8233BC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC18"))) PPC_WEAK_FUNC(sub_8233BC18);
PPC_FUNC_IMPL(__imp__sub_8233BC18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC20"))) PPC_WEAK_FUNC(sub_8233BC20);
PPC_FUNC_IMPL(__imp__sub_8233BC20) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC28"))) PPC_WEAK_FUNC(sub_8233BC28);
PPC_FUNC_IMPL(__imp__sub_8233BC28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC30"))) PPC_WEAK_FUNC(sub_8233BC30);
PPC_FUNC_IMPL(__imp__sub_8233BC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC34"))) PPC_WEAK_FUNC(sub_8233BC34);
PPC_FUNC_IMPL(__imp__sub_8233BC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BC38"))) PPC_WEAK_FUNC(sub_8233BC38);
PPC_FUNC_IMPL(__imp__sub_8233BC38) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC40"))) PPC_WEAK_FUNC(sub_8233BC40);
PPC_FUNC_IMPL(__imp__sub_8233BC40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC44"))) PPC_WEAK_FUNC(sub_8233BC44);
PPC_FUNC_IMPL(__imp__sub_8233BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BC48"))) PPC_WEAK_FUNC(sub_8233BC48);
PPC_FUNC_IMPL(__imp__sub_8233BC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC50"))) PPC_WEAK_FUNC(sub_8233BC50);
PPC_FUNC_IMPL(__imp__sub_8233BC50) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC58"))) PPC_WEAK_FUNC(sub_8233BC58);
PPC_FUNC_IMPL(__imp__sub_8233BC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BC5C"))) PPC_WEAK_FUNC(sub_8233BC5C);
PPC_FUNC_IMPL(__imp__sub_8233BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BC60"))) PPC_WEAK_FUNC(sub_8233BC60);
PPC_FUNC_IMPL(__imp__sub_8233BC60) {
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
	// bl 0x8233bcd0
	ctx.lr = 0x8233BC80;
	sub_8233BCD0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233bcb4
	if (ctx.cr6.eq) goto loc_8233BCB4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233bcac
	if (ctx.cr6.lt) goto loc_8233BCAC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233bcb4
	if (!ctx.cr6.gt) goto loc_8233BCB4;
loc_8233BCAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233BCB4;
	sub_82294A58(ctx, base);
loc_8233BCB4:
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

__attribute__((alias("__imp__sub_8233BCD0"))) PPC_WEAK_FUNC(sub_8233BCD0);
PPC_FUNC_IMPL(__imp__sub_8233BCD0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-9128
	ctx.r10.s64 = ctx.r11.s64 + -9128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BCF4;
	sub_8229C068(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10280
	ctx.r8.s64 = ctx.r9.s64 + -10280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BD08;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3952
	ctx.r6.s64 = ctx.r7.s64 + -3952;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BD1C;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233BD24;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233BD38"))) PPC_WEAK_FUNC(sub_8233BD38);
PPC_FUNC_IMPL(__imp__sub_8233BD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233BD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233bd74
	if (!ctx.cr6.eq) goto loc_8233BD74;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823cb678
	ctx.lr = 0x8233BD68;
	sub_823CB678(ctx, base);
	// stw r3,-31488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31488, ctx.r3.u32);
	// bl 0x823cb730
	ctx.lr = 0x8233BD70;
	sub_823CB730(ctx, base);
	// lwz r3,-31488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31488);
loc_8233BD74:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233BDA4;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BDAC"))) PPC_WEAK_FUNC(sub_8233BDAC);
PPC_FUNC_IMPL(__imp__sub_8233BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BDB0"))) PPC_WEAK_FUNC(sub_8233BDB0);
PPC_FUNC_IMPL(__imp__sub_8233BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-8744
	ctx.r7.s64 = ctx.r8.s64 + -8744;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BDE8"))) PPC_WEAK_FUNC(sub_8233BDE8);
PPC_FUNC_IMPL(__imp__sub_8233BDE8) {
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
	// bl 0x8233be58
	ctx.lr = 0x8233BE08;
	sub_8233BE58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233be3c
	if (ctx.cr6.eq) goto loc_8233BE3C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233be34
	if (ctx.cr6.lt) goto loc_8233BE34;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233be3c
	if (!ctx.cr6.gt) goto loc_8233BE3C;
loc_8233BE34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233BE3C;
	sub_82294A58(ctx, base);
loc_8233BE3C:
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

__attribute__((alias("__imp__sub_8233BE58"))) PPC_WEAK_FUNC(sub_8233BE58);
PPC_FUNC_IMPL(__imp__sub_8233BE58) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-8744
	ctx.r10.s64 = ctx.r11.s64 + -8744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BE7C;
	sub_8229C068(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10280
	ctx.r8.s64 = ctx.r9.s64 + -10280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BE90;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3952
	ctx.r6.s64 = ctx.r7.s64 + -3952;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BEA4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233BEAC;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233BEC0"))) PPC_WEAK_FUNC(sub_8233BEC0);
PPC_FUNC_IMPL(__imp__sub_8233BEC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BEC8"))) PPC_WEAK_FUNC(sub_8233BEC8);
PPC_FUNC_IMPL(__imp__sub_8233BEC8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c45a0
	ctx.lr = 0x8233BEE4;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8360
	ctx.r10.s64 = ctx.r11.s64 + -8360;
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

__attribute__((alias("__imp__sub_8233BF08"))) PPC_WEAK_FUNC(sub_8233BF08);
PPC_FUNC_IMPL(__imp__sub_8233BF08) {
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
	// bl 0x8233bf78
	ctx.lr = 0x8233BF28;
	sub_8233BF78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233bf5c
	if (ctx.cr6.eq) goto loc_8233BF5C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233bf54
	if (ctx.cr6.lt) goto loc_8233BF54;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233bf5c
	if (!ctx.cr6.gt) goto loc_8233BF5C;
loc_8233BF54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233BF5C;
	sub_82294A58(ctx, base);
loc_8233BF5C:
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

__attribute__((alias("__imp__sub_8233BF78"))) PPC_WEAK_FUNC(sub_8233BF78);
PPC_FUNC_IMPL(__imp__sub_8233BF78) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-8360
	ctx.r10.s64 = ctx.r11.s64 + -8360;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BF9C;
	sub_8229C068(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10280
	ctx.r8.s64 = ctx.r9.s64 + -10280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BFB0;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3952
	ctx.r6.s64 = ctx.r7.s64 + -3952;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233BFC4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233BFCC;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233BFE0"))) PPC_WEAK_FUNC(sub_8233BFE0);
PPC_FUNC_IMPL(__imp__sub_8233BFE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233BFE8"))) PPC_WEAK_FUNC(sub_8233BFE8);
PPC_FUNC_IMPL(__imp__sub_8233BFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233BFF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c024
	if (!ctx.cr6.eq) goto loc_8233C024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823cd240
	ctx.lr = 0x8233C018;
	sub_823CD240(ctx, base);
	// stw r3,-31480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31480, ctx.r3.u32);
	// bl 0x823cd2f8
	ctx.lr = 0x8233C020;
	sub_823CD2F8(ctx, base);
	// lwz r3,-31480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31480);
loc_8233C024:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233C054;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C05C"))) PPC_WEAK_FUNC(sub_8233C05C);
PPC_FUNC_IMPL(__imp__sub_8233C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C060"))) PPC_WEAK_FUNC(sub_8233C060);
PPC_FUNC_IMPL(__imp__sub_8233C060) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c45a0
	ctx.lr = 0x8233C07C;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-8744
	ctx.r10.s64 = ctx.r11.s64 + -8744;
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

__attribute__((alias("__imp__sub_8233C0A0"))) PPC_WEAK_FUNC(sub_8233C0A0);
PPC_FUNC_IMPL(__imp__sub_8233C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233C0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c0dc
	if (!ctx.cr6.eq) goto loc_8233C0DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823cbe08
	ctx.lr = 0x8233C0D0;
	sub_823CBE08(ctx, base);
	// stw r3,-31484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31484, ctx.r3.u32);
	// bl 0x823cbec0
	ctx.lr = 0x8233C0D8;
	sub_823CBEC0(ctx, base);
	// lwz r3,-31484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31484);
loc_8233C0DC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233C10C;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C114"))) PPC_WEAK_FUNC(sub_8233C114);
PPC_FUNC_IMPL(__imp__sub_8233C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C118"))) PPC_WEAK_FUNC(sub_8233C118);
PPC_FUNC_IMPL(__imp__sub_8233C118) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c45a0
	ctx.lr = 0x8233C134;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-9512
	ctx.r10.s64 = ctx.r11.s64 + -9512;
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

__attribute__((alias("__imp__sub_8233C158"))) PPC_WEAK_FUNC(sub_8233C158);
PPC_FUNC_IMPL(__imp__sub_8233C158) {
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
	// bl 0x8233c1c8
	ctx.lr = 0x8233C178;
	sub_8233C1C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c1ac
	if (ctx.cr6.eq) goto loc_8233C1AC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233c1a4
	if (ctx.cr6.lt) goto loc_8233C1A4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233c1ac
	if (!ctx.cr6.gt) goto loc_8233C1AC;
loc_8233C1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233C1AC;
	sub_82294A58(ctx, base);
loc_8233C1AC:
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

__attribute__((alias("__imp__sub_8233C1C8"))) PPC_WEAK_FUNC(sub_8233C1C8);
PPC_FUNC_IMPL(__imp__sub_8233C1C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-9512
	ctx.r10.s64 = ctx.r11.s64 + -9512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C1EC;
	sub_8229C068(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10280
	ctx.r8.s64 = ctx.r9.s64 + -10280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C200;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3952
	ctx.r6.s64 = ctx.r7.s64 + -3952;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C214;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233C21C;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233C230"))) PPC_WEAK_FUNC(sub_8233C230);
PPC_FUNC_IMPL(__imp__sub_8233C230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233C238;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c26c
	if (!ctx.cr6.eq) goto loc_8233C26C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823c7fa0
	ctx.lr = 0x8233C260;
	sub_823C7FA0(ctx, base);
	// stw r3,-31508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31508, ctx.r3.u32);
	// bl 0x823c8058
	ctx.lr = 0x8233C268;
	sub_823C8058(ctx, base);
	// lwz r3,-31508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31508);
loc_8233C26C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233C29C;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C2A4"))) PPC_WEAK_FUNC(sub_8233C2A4);
PPC_FUNC_IMPL(__imp__sub_8233C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C2A8"))) PPC_WEAK_FUNC(sub_8233C2A8);
PPC_FUNC_IMPL(__imp__sub_8233C2A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c45a0
	ctx.lr = 0x8233C2C4;
	sub_823C45A0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-9896
	ctx.r10.s64 = ctx.r11.s64 + -9896;
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

__attribute__((alias("__imp__sub_8233C2E8"))) PPC_WEAK_FUNC(sub_8233C2E8);
PPC_FUNC_IMPL(__imp__sub_8233C2E8) {
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
	// bl 0x8233c358
	ctx.lr = 0x8233C308;
	sub_8233C358(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c33c
	if (ctx.cr6.eq) goto loc_8233C33C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233c334
	if (ctx.cr6.lt) goto loc_8233C334;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233c33c
	if (!ctx.cr6.gt) goto loc_8233C33C;
loc_8233C334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233C33C;
	sub_82294A58(ctx, base);
loc_8233C33C:
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

__attribute__((alias("__imp__sub_8233C358"))) PPC_WEAK_FUNC(sub_8233C358);
PPC_FUNC_IMPL(__imp__sub_8233C358) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-9896
	ctx.r10.s64 = ctx.r11.s64 + -9896;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C37C;
	sub_8229C068(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10280
	ctx.r8.s64 = ctx.r9.s64 + -10280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C390;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,-3952
	ctx.r6.s64 = ctx.r7.s64 + -3952;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C3A4;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233C3AC;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233C3C0"))) PPC_WEAK_FUNC(sub_8233C3C0);
PPC_FUNC_IMPL(__imp__sub_8233C3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233C3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c3fc
	if (!ctx.cr6.eq) goto loc_8233C3FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x823c6338
	ctx.lr = 0x8233C3F0;
	sub_823C6338(ctx, base);
	// stw r3,-31520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31520, ctx.r3.u32);
	// bl 0x823c63f0
	ctx.lr = 0x8233C3F8;
	sub_823C63F0(ctx, base);
	// lwz r3,-31520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31520);
loc_8233C3FC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,34,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233C42C;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C434"))) PPC_WEAK_FUNC(sub_8233C434);
PPC_FUNC_IMPL(__imp__sub_8233C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C438"))) PPC_WEAK_FUNC(sub_8233C438);
PPC_FUNC_IMPL(__imp__sub_8233C438) {
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
	// bl 0x8233c4a8
	ctx.lr = 0x8233C458;
	sub_8233C4A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c48c
	if (ctx.cr6.eq) goto loc_8233C48C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233c484
	if (ctx.cr6.lt) goto loc_8233C484;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233c48c
	if (!ctx.cr6.gt) goto loc_8233C48C;
loc_8233C484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233C48C;
	sub_82294A58(ctx, base);
loc_8233C48C:
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

__attribute__((alias("__imp__sub_8233C4A8"))) PPC_WEAK_FUNC(sub_8233C4A8);
PPC_FUNC_IMPL(__imp__sub_8233C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233C4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,-7976
	ctx.r9.s64 = ctx.r11.s64 + -7976;
	// addi r8,r10,-7708
	ctx.r8.s64 = ctx.r10.s64 + -7708;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C4D4;
	sub_8229C068(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82295e20
	ctx.lr = 0x8233C4DC;
	sub_82295E20(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82295e20
	ctx.lr = 0x8233C4E4;
	sub_82295E20(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82295e20
	ctx.lr = 0x8233C4EC;
	sub_82295E20(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x822c58f0
	ctx.lr = 0x8233C4F4;
	sub_822C58F0(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82295e20
	ctx.lr = 0x8233C4FC;
	sub_82295E20(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82295e20
	ctx.lr = 0x8233C504;
	sub_82295E20(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82295e20
	ctx.lr = 0x8233C50C;
	sub_82295E20(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82295e20
	ctx.lr = 0x8233C514;
	sub_82295E20(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82295e20
	ctx.lr = 0x8233C51C;
	sub_82295E20(ctx, base);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8233c548
	if (ctx.cr6.eq) goto loc_8233C548;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8233C548;
	sub_82294520(ctx, base);
loc_8233C548:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233C550;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c578
	if (ctx.cr6.eq) goto loc_8233C578;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8233C578;
	sub_82294520(ctx, base);
loc_8233C578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233C580;
	sub_82294CC8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c5a8
	if (ctx.cr6.eq) goto loc_8233C5A8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8233C5A8;
	sub_82294520(ctx, base);
loc_8233C5A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233C5B0;
	sub_82294CC8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c5d8
	if (ctx.cr6.eq) goto loc_8233C5D8;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294520
	ctx.lr = 0x8233C5D8;
	sub_82294520(ctx, base);
loc_8233C5D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8233C5E0;
	sub_82294CC8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-3112
	ctx.r9.s64 = ctx.r11.s64 + -3112;
	// addi r8,r10,-2844
	ctx.r8.s64 = ctx.r10.s64 + -2844;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233C600;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233C608;
	sub_8229C628(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C610"))) PPC_WEAK_FUNC(sub_8233C610);
PPC_FUNC_IMPL(__imp__sub_8233C610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233C618;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c64c
	if (!ctx.cr6.eq) goto loc_8233C64C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x82339998
	ctx.lr = 0x8233C640;
	sub_82339998(ctx, base);
	// stw r3,-31952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31952, ctx.r3.u32);
	// bl 0x82339a50
	ctx.lr = 0x8233C648;
	sub_82339A50(ctx, base);
	// lwz r3,-31952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31952);
loc_8233C64C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a8798
	ctx.lr = 0x8233C678;
	sub_822A8798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C680"))) PPC_WEAK_FUNC(sub_8233C680);
PPC_FUNC_IMPL(__imp__sub_8233C680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c694
	if (ctx.cr6.eq) goto loc_8233C694;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8233c69c
	goto loc_8233C69C;
loc_8233C694:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8233C69C:
	// b 0x822b2308
	sub_822B2308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C6A0"))) PPC_WEAK_FUNC(sub_8233C6A0);
PPC_FUNC_IMPL(__imp__sub_8233C6A0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8233c6c0
	if (!ctx.cr6.eq) goto loc_8233C6C0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8233C6C0:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r10,11272
	ctx.r11.s64 = ctx.r10.s64 + 11272;
	// beq cr6,0x8233c6d8
	if (ctx.cr6.eq) goto loc_8233C6D8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8233c6dc
	goto loc_8233C6DC;
loc_8233C6D8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8233C6DC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233c6f0
	if (ctx.cr6.eq) goto loc_8233C6F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233c6f4
	goto loc_8233C6F4;
loc_8233C6F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8233C6F4:
	// bl 0x82cb21c0
	ctx.lr = 0x8233C6F8;
	sub_82CB21C0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C710"))) PPC_WEAK_FUNC(sub_8233C710);
PPC_FUNC_IMPL(__imp__sub_8233C710) {
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
	// bl 0x8232e868
	ctx.lr = 0x8233C728;
	sub_8232E868(ctx, base);
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
}

__attribute__((alias("__imp__sub_8233C740"))) PPC_WEAK_FUNC(sub_8233C740);
PPC_FUNC_IMPL(__imp__sub_8233C740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233C748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c764
	if (ctx.cr6.eq) goto loc_8233C764;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8233c76c
	goto loc_8233C76C;
loc_8233C764:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8233C76C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822960c0
	ctx.lr = 0x8233C774;
	sub_822960C0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233c7ac
	if (!ctx.cr6.gt) goto loc_8233C7AC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233C788:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x8233c7b8
	ctx.lr = 0x8233C794;
	sub_8233C7B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthx r3,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233c788
	if (ctx.cr6.lt) goto loc_8233C788;
loc_8233C7AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C7B8"))) PPC_WEAK_FUNC(sub_8233C7B8);
PPC_FUNC_IMPL(__imp__sub_8233C7B8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-140
	ctx.r10.s64 = ctx.r11.s64 + -140;
	// cmplwi cr6,r10,107
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 107, ctx.xer);
	// bgt cr6,0x8233c9a0
	if (ctx.cr6.gt) goto loc_8233C9A0;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// addi r12,r12,-14368
	ctx.r12.s64 = ctx.r12.s64 + -14368;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8233C998;
	case 1:
		goto loc_8233C9A0;
	case 2:
		goto loc_8233C9A0;
	case 3:
		goto loc_8233C9A0;
	case 4:
		goto loc_8233C9A0;
	case 5:
		goto loc_8233C9A0;
	case 6:
		goto loc_8233C9A0;
	case 7:
		goto loc_8233C9A0;
	case 8:
		goto loc_8233C9A0;
	case 9:
		goto loc_8233C9A0;
	case 10:
		goto loc_8233C9A0;
	case 11:
		goto loc_8233C9A0;
	case 12:
		goto loc_8233C9A0;
	case 13:
		goto loc_8233C9A0;
	case 14:
		goto loc_8233C9A0;
	case 15:
		goto loc_8233C9A0;
	case 16:
		goto loc_8233C9A0;
	case 17:
		goto loc_8233C9A0;
	case 18:
		goto loc_8233C9A0;
	case 19:
		goto loc_8233C990;
	case 20:
		goto loc_8233C9A0;
	case 21:
		goto loc_8233C9A0;
	case 22:
		goto loc_8233C9A0;
	case 23:
		goto loc_8233C9A0;
	case 24:
		goto loc_8233C9A0;
	case 25:
		goto loc_8233C9A0;
	case 26:
		goto loc_8233C9A0;
	case 27:
		goto loc_8233C9A0;
	case 28:
		goto loc_8233C9A0;
	case 29:
		goto loc_8233C9A0;
	case 30:
		goto loc_8233C9A0;
	case 31:
		goto loc_8233C9A0;
	case 32:
		goto loc_8233C9A0;
	case 33:
		goto loc_8233C9A0;
	case 34:
		goto loc_8233C9A0;
	case 35:
		goto loc_8233C9A0;
	case 36:
		goto loc_8233C9A0;
	case 37:
		goto loc_8233C9A0;
	case 38:
		goto loc_8233C9A0;
	case 39:
		goto loc_8233C9A0;
	case 40:
		goto loc_8233C9A0;
	case 41:
		goto loc_8233C9A0;
	case 42:
		goto loc_8233C9A0;
	case 43:
		goto loc_8233C9A0;
	case 44:
		goto loc_8233C9A0;
	case 45:
		goto loc_8233C9A0;
	case 46:
		goto loc_8233C9A0;
	case 47:
		goto loc_8233C9A0;
	case 48:
		goto loc_8233C9A0;
	case 49:
		goto loc_8233C9A0;
	case 50:
		goto loc_8233C9A0;
	case 51:
		goto loc_8233C9A0;
	case 52:
		goto loc_8233C9A0;
	case 53:
		goto loc_8233C9A0;
	case 54:
		goto loc_8233C9A0;
	case 55:
		goto loc_8233C9A0;
	case 56:
		goto loc_8233C9A0;
	case 57:
		goto loc_8233C9A0;
	case 58:
		goto loc_8233C9A0;
	case 59:
		goto loc_8233C9A0;
	case 60:
		goto loc_8233C9A0;
	case 61:
		goto loc_8233C9A0;
	case 62:
		goto loc_8233C9A0;
	case 63:
		goto loc_8233C9A0;
	case 64:
		goto loc_8233C9A0;
	case 65:
		goto loc_8233C9A0;
	case 66:
		goto loc_8233C9A0;
	case 67:
		goto loc_8233C9A0;
	case 68:
		goto loc_8233C9C8;
	case 69:
		goto loc_8233C9A0;
	case 70:
		goto loc_8233C9A0;
	case 71:
		goto loc_8233C9A0;
	case 72:
		goto loc_8233C9A0;
	case 73:
		goto loc_8233C9A0;
	case 74:
		goto loc_8233C9A0;
	case 75:
		goto loc_8233C9A0;
	case 76:
		goto loc_8233C9A0;
	case 77:
		goto loc_8233C9A0;
	case 78:
		goto loc_8233C9A0;
	case 79:
		goto loc_8233C9A0;
	case 80:
		goto loc_8233C9A0;
	case 81:
		goto loc_8233C9A0;
	case 82:
		goto loc_8233C9A0;
	case 83:
		goto loc_8233C9C8;
	case 84:
		goto loc_8233C9A0;
	case 85:
		goto loc_8233C9A0;
	case 86:
		goto loc_8233C9A0;
	case 87:
		goto loc_8233C9A0;
	case 88:
		goto loc_8233C9A0;
	case 89:
		goto loc_8233C9A0;
	case 90:
		goto loc_8233C9A0;
	case 91:
		goto loc_8233C9A0;
	case 92:
		goto loc_8233C9A0;
	case 93:
		goto loc_8233C9A0;
	case 94:
		goto loc_8233C9A0;
	case 95:
		goto loc_8233C9A0;
	case 96:
		goto loc_8233C9A0;
	case 97:
		goto loc_8233C9A0;
	case 98:
		goto loc_8233C9A0;
	case 99:
		goto loc_8233C9A0;
	case 100:
		goto loc_8233C9C8;
	case 101:
		goto loc_8233C9A0;
	case 102:
		goto loc_8233C9A0;
	case 103:
		goto loc_8233C9A0;
	case 104:
		goto loc_8233C9A0;
	case 105:
		goto loc_8233C9A0;
	case 106:
		goto loc_8233C9A0;
	case 107:
		goto loc_8233C9C8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-13928(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13928);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13936(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13936);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13880(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13880);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13880(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13880);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13880(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13880);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13920(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13920);
	// lwz r17,-13880(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + -13880);
loc_8233C990:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8233C998:
	// li r3,156
	ctx.r3.s64 = 156;
	// blr 
	return;
loc_8233C9A0:
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// blt cr6,0x8233c9b0
	if (ctx.cr6.lt) goto loc_8233C9B0;
	// cmplwi cr6,r11,223
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 223, ctx.xer);
	// blt cr6,0x8233c9c0
	if (ctx.cr6.lt) goto loc_8233C9C0;
loc_8233C9B0:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8233C9C0:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_8233C9C8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C9CC"))) PPC_WEAK_FUNC(sub_8233C9CC);
PPC_FUNC_IMPL(__imp__sub_8233C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C9D0"))) PPC_WEAK_FUNC(sub_8233C9D0);
PPC_FUNC_IMPL(__imp__sub_8233C9D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233C9F4"))) PPC_WEAK_FUNC(sub_8233C9F4);
PPC_FUNC_IMPL(__imp__sub_8233C9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C9F8"))) PPC_WEAK_FUNC(sub_8233C9F8);
PPC_FUNC_IMPL(__imp__sub_8233C9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CA04"))) PPC_WEAK_FUNC(sub_8233CA04);
PPC_FUNC_IMPL(__imp__sub_8233CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CA08"))) PPC_WEAK_FUNC(sub_8233CA08);
PPC_FUNC_IMPL(__imp__sub_8233CA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CA0C"))) PPC_WEAK_FUNC(sub_8233CA0C);
PPC_FUNC_IMPL(__imp__sub_8233CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CA10"))) PPC_WEAK_FUNC(sub_8233CA10);
PPC_FUNC_IMPL(__imp__sub_8233CA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CA14"))) PPC_WEAK_FUNC(sub_8233CA14);
PPC_FUNC_IMPL(__imp__sub_8233CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CA18"))) PPC_WEAK_FUNC(sub_8233CA18);
PPC_FUNC_IMPL(__imp__sub_8233CA18) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CA28"))) PPC_WEAK_FUNC(sub_8233CA28);
PPC_FUNC_IMPL(__imp__sub_8233CA28) {
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
	// bl 0x8233cb60
	ctx.lr = 0x8233CA40;
	sub_8233CB60(ctx, base);
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

__attribute__((alias("__imp__sub_8233CA58"))) PPC_WEAK_FUNC(sub_8233CA58);
PPC_FUNC_IMPL(__imp__sub_8233CA58) {
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
	// bl 0x8233cac0
	ctx.lr = 0x8233CA70;
	sub_8233CAC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233caa4
	if (!ctx.cr6.eq) goto loc_8233CAA4;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x8233ca8c
	if (ctx.cr6.lt) goto loc_8233CA8C;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x8233caa4
	if (!ctx.cr6.gt) goto loc_8233CAA4;
loc_8233CA8C:
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
loc_8233CAA4:
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

__attribute__((alias("__imp__sub_8233CABC"))) PPC_WEAK_FUNC(sub_8233CABC);
PPC_FUNC_IMPL(__imp__sub_8233CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CAC0"))) PPC_WEAK_FUNC(sub_8233CAC0);
PPC_FUNC_IMPL(__imp__sub_8233CAC0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x8233cad4
	if (ctx.cr6.lt) goto loc_8233CAD4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ble cr6,0x8233cb10
	if (!ctx.cr6.gt) goto loc_8233CB10;
loc_8233CAD4:
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// blt cr6,0x8233cae4
	if (ctx.cr6.lt) goto loc_8233CAE4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x8233cb10
	if (!ctx.cr6.gt) goto loc_8233CB10;
loc_8233CAE4:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x8233caf4
	if (ctx.cr6.lt) goto loc_8233CAF4;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// ble cr6,0x8233cb10
	if (!ctx.cr6.gt) goto loc_8233CB10;
loc_8233CAF4:
	// cmplwi cr6,r11,159
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 159, ctx.xer);
	// beq cr6,0x8233cb10
	if (ctx.cr6.eq) goto loc_8233CB10;
	// cmplwi cr6,r11,140
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 140, ctx.xer);
	// beq cr6,0x8233cb10
	if (ctx.cr6.eq) goto loc_8233CB10;
	// cmplwi cr6,r11,156
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 156, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8233CB10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CB18"))) PPC_WEAK_FUNC(sub_8233CB18);
PPC_FUNC_IMPL(__imp__sub_8233CB18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cb2a08
	sub_82CB2A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CB1C"))) PPC_WEAK_FUNC(sub_8233CB1C);
PPC_FUNC_IMPL(__imp__sub_8233CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CB20"))) PPC_WEAK_FUNC(sub_8233CB20);
PPC_FUNC_IMPL(__imp__sub_8233CB20) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x8233cb30
	if (ctx.cr6.lt) goto loc_8233CB30;
	// li r11,127
	ctx.r11.s64 = 127;
loc_8233CB30:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CB38"))) PPC_WEAK_FUNC(sub_8233CB38);
PPC_FUNC_IMPL(__imp__sub_8233CB38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CB48"))) PPC_WEAK_FUNC(sub_8233CB48);
PPC_FUNC_IMPL(__imp__sub_8233CB48) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CB50"))) PPC_WEAK_FUNC(sub_8233CB50);
PPC_FUNC_IMPL(__imp__sub_8233CB50) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CB60"))) PPC_WEAK_FUNC(sub_8233CB60);
PPC_FUNC_IMPL(__imp__sub_8233CB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233CB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233cbd4
	if (ctx.cr6.eq) goto loc_8233CBD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x8233cb98
	if (ctx.cr6.gt) goto loc_8233CB98;
	// li r30,0
	ctx.r30.s64 = 0;
	// ble cr6,0x8233cba0
	if (!ctx.cr6.gt) goto loc_8233CBA0;
loc_8233CB98:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8233cba4
	goto loc_8233CBA4;
loc_8233CBA0:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8233CBA4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x8233CBB8;
	sub_82294AC0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r29,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
loc_8233CBD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CBE0"))) PPC_WEAK_FUNC(sub_8233CBE0);
PPC_FUNC_IMPL(__imp__sub_8233CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233CBE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8233cc44
	if (ctx.cr0.lt) goto loc_8233CC44;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8233CC08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cc28
	if (ctx.cr6.eq) goto loc_8233CC28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233cc38
	if (!ctx.cr6.eq) goto loc_8233CC38;
loc_8233CC28:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233cc50
	ctx.lr = 0x8233CC38;
	sub_8233CC50(ctx, base);
loc_8233CC38:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// bge 0x8233cc08
	if (!ctx.cr0.lt) goto loc_8233CC08;
loc_8233CC44:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CC50"))) PPC_WEAK_FUNC(sub_8233CC50);
PPC_FUNC_IMPL(__imp__sub_8233CC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8233CC58;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r11,r25,r23
	ctx.r11.u64 = ctx.r25.u64 + ctx.r23.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233cd34
	if (!ctx.cr6.lt) goto loc_8233CD34;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r25,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r25.s64;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_8233CC8C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cce8
	if (ctx.cr6.eq) goto loc_8233CCE8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233cce8
	if (ctx.cr6.eq) goto loc_8233CCE8;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ccc8
	if (!ctx.cr6.eq) goto loc_8233CCC8;
	// bl 0x822900a0
	ctx.lr = 0x8233CCC4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8233CCC8:
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
	ctx.lr = 0x8233CCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8233CCE8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233cd1c
	if (ctx.cr6.eq) goto loc_8233CD1C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233cd08
	if (!ctx.cr6.eq) goto loc_8233CD08;
	// bl 0x822900a0
	ctx.lr = 0x8233CD04;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8233CD08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233CD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CD1C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bne 0x8233cc8c
	if (!ctx.cr0.eq) goto loc_8233CC8C;
loc_8233CD34:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d180
	ctx.lr = 0x8233CD4C;
	sub_8232D180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CD54"))) PPC_WEAK_FUNC(sub_8233CD54);
PPC_FUNC_IMPL(__imp__sub_8233CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CD58"))) PPC_WEAK_FUNC(sub_8233CD58);
PPC_FUNC_IMPL(__imp__sub_8233CD58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x8233cd70
	if (ctx.cr6.lt) goto loc_8233CD70;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8233CD70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CD78"))) PPC_WEAK_FUNC(sub_8233CD78);
PPC_FUNC_IMPL(__imp__sub_8233CD78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-7704
	ctx.r7.s64 = ctx.r8.s64 + -7704;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CDB0"))) PPC_WEAK_FUNC(sub_8233CDB0);
PPC_FUNC_IMPL(__imp__sub_8233CDB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CDB8"))) PPC_WEAK_FUNC(sub_8233CDB8);
PPC_FUNC_IMPL(__imp__sub_8233CDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-7704
	ctx.r7.s64 = ctx.r8.s64 + -7704;
	// lwz r10,-25660(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CDE8"))) PPC_WEAK_FUNC(sub_8233CDE8);
PPC_FUNC_IMPL(__imp__sub_8233CDE8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7704
	ctx.r10.s64 = ctx.r11.s64 + -7704;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233CE14;
	sub_8229C068(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8233ced8
	ctx.lr = 0x8233CE1C;
	sub_8233CED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233CE24;
	sub_8229C628(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233ce58
	if (ctx.cr6.eq) goto loc_8233CE58;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233ce50
	if (ctx.cr6.lt) goto loc_8233CE50;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233ce58
	if (!ctx.cr6.gt) goto loc_8233CE58;
loc_8233CE50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x8233CE58;
	sub_82294A58(ctx, base);
loc_8233CE58:
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

__attribute__((alias("__imp__sub_8233CE74"))) PPC_WEAK_FUNC(sub_8233CE74);
PPC_FUNC_IMPL(__imp__sub_8233CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CE78"))) PPC_WEAK_FUNC(sub_8233CE78);
PPC_FUNC_IMPL(__imp__sub_8233CE78) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-7704
	ctx.r10.s64 = ctx.r11.s64 + -7704;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x8233CE9C;
	sub_8229C068(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8233ced8
	ctx.lr = 0x8233CEA4;
	sub_8233CED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x8233CEAC;
	sub_8229C628(ctx, base);
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

__attribute__((alias("__imp__sub_8233CEC0"))) PPC_WEAK_FUNC(sub_8233CEC0);
PPC_FUNC_IMPL(__imp__sub_8233CEC0) {
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

__attribute__((alias("__imp__sub_8233CED4"))) PPC_WEAK_FUNC(sub_8233CED4);
PPC_FUNC_IMPL(__imp__sub_8233CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CED8"))) PPC_WEAK_FUNC(sub_8233CED8);
PPC_FUNC_IMPL(__imp__sub_8233CED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233CEE0;
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
	// beq cr6,0x8233cf20
	if (ctx.cr6.eq) goto loc_8233CF20;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233cf0c
	if (!ctx.cr6.eq) goto loc_8233CF0C;
	// bl 0x822900a0
	ctx.lr = 0x8233CF08;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8233CF0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233CF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CF20:
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

__attribute__((alias("__imp__sub_8233CF38"))) PPC_WEAK_FUNC(sub_8233CF38);
PPC_FUNC_IMPL(__imp__sub_8233CF38) {
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

__attribute__((alias("__imp__sub_8233CF48"))) PPC_WEAK_FUNC(sub_8233CF48);
PPC_FUNC_IMPL(__imp__sub_8233CF48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233CF4C"))) PPC_WEAK_FUNC(sub_8233CF4C);
PPC_FUNC_IMPL(__imp__sub_8233CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CF50"))) PPC_WEAK_FUNC(sub_8233CF50);
PPC_FUNC_IMPL(__imp__sub_8233CF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233CF58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8233CFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233CFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d00c
	if (!ctx.cr6.eq) goto loc_8233D00C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233D00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D00C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D034"))) PPC_WEAK_FUNC(sub_8233D034);
PPC_FUNC_IMPL(__imp__sub_8233D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D038"))) PPC_WEAK_FUNC(sub_8233D038);
PPC_FUNC_IMPL(__imp__sub_8233D038) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d094
	if (!ctx.cr6.eq) goto loc_8233D094;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,26648
	ctx.r7.s64 = ctx.r9.s64 + 26648;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D094:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8233D0C4"))) PPC_WEAK_FUNC(sub_8233D0C4);
PPC_FUNC_IMPL(__imp__sub_8233D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D0C8"))) PPC_WEAK_FUNC(sub_8233D0C8);
PPC_FUNC_IMPL(__imp__sub_8233D0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233D0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8233D118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233D148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d184
	if (!ctx.cr6.eq) goto loc_8233D184;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233D184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D184:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D1AC"))) PPC_WEAK_FUNC(sub_8233D1AC);
PPC_FUNC_IMPL(__imp__sub_8233D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D1B0"))) PPC_WEAK_FUNC(sub_8233D1B0);
PPC_FUNC_IMPL(__imp__sub_8233D1B0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d204
	if (!ctx.cr6.eq) goto loc_8233D204;
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,26648
	ctx.r7.s64 = ctx.r9.s64 + 26648;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D204:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8233D22C"))) PPC_WEAK_FUNC(sub_8233D22C);
PPC_FUNC_IMPL(__imp__sub_8233D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D230"))) PPC_WEAK_FUNC(sub_8233D230);
PPC_FUNC_IMPL(__imp__sub_8233D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233D238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8233D280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,28920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28920, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8233D2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// lwz r3,28924(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d2e0
	if (ctx.cr6.eq) goto loc_8233D2E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r4,28908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28908);
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233D2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D2E0:
	// lwz r11,28920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x8233d2f4
	if (!ctx.cr6.eq) goto loc_8233D2F4;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
loc_8233D2F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d330
	if (!ctx.cr6.eq) goto loc_8233D330;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233D330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D330:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D358"))) PPC_WEAK_FUNC(sub_8233D358);
PPC_FUNC_IMPL(__imp__sub_8233D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8233D360;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r28,r10,26648
	ctx.r28.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// stw r11,28920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28920, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8233D3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-31885
	ctx.r6.s64 = -2089615360;
	// lwz r3,28924(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d3e4
	if (ctx.cr6.eq) goto loc_8233D3E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r4,28908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28908);
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233D3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D3E4:
	// lwz r11,28920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8233d3f8
	if (!ctx.cr6.eq) goto loc_8233D3F8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_8233D3F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d434
	if (!ctx.cr6.eq) goto loc_8233D434;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8233D434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D434:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8233d474
	if (ctx.cr6.eq) goto loc_8233D474;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8233D474;
	sub_82294520(ctx, base);
loc_8233D474:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8233D47C;
	sub_82294CC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D484"))) PPC_WEAK_FUNC(sub_8233D484);
PPC_FUNC_IMPL(__imp__sub_8233D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D488"))) PPC_WEAK_FUNC(sub_8233D488);
PPC_FUNC_IMPL(__imp__sub_8233D488) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d4e4
	if (!ctx.cr6.eq) goto loc_8233D4E4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,26648
	ctx.r7.s64 = ctx.r9.s64 + 26648;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D4E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8233D514"))) PPC_WEAK_FUNC(sub_8233D514);
PPC_FUNC_IMPL(__imp__sub_8233D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D518"))) PPC_WEAK_FUNC(sub_8233D518);
PPC_FUNC_IMPL(__imp__sub_8233D518) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8233d574
	if (!ctx.cr6.eq) goto loc_8233D574;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,26648
	ctx.r7.s64 = ctx.r9.s64 + 26648;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D574:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233D588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8233D5A4"))) PPC_WEAK_FUNC(sub_8233D5A4);
PPC_FUNC_IMPL(__imp__sub_8233D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D5A8"))) PPC_WEAK_FUNC(sub_8233D5A8);
PPC_FUNC_IMPL(__imp__sub_8233D5A8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d5e0
	if (!ctx.cr6.eq) goto loc_8233D5E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// bl 0x827f8170
	ctx.lr = 0x8233D5D4;
	sub_827F8170(ctx, base);
	// stw r3,-26044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26044, ctx.r3.u32);
	// bl 0x827f8220
	ctx.lr = 0x8233D5DC;
	sub_827F8220(ctx, base);
	// lwz r3,-26044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26044);
loc_8233D5E0:
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

__attribute__((alias("__imp__sub_8233D5F4"))) PPC_WEAK_FUNC(sub_8233D5F4);
PPC_FUNC_IMPL(__imp__sub_8233D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D5F8"))) PPC_WEAK_FUNC(sub_8233D5F8);
PPC_FUNC_IMPL(__imp__sub_8233D5F8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d630
	if (!ctx.cr6.eq) goto loc_8233D630;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// bl 0x827f7da0
	ctx.lr = 0x8233D624;
	sub_827F7DA0(ctx, base);
	// stw r3,-26048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26048, ctx.r3.u32);
	// bl 0x827f7e50
	ctx.lr = 0x8233D62C;
	sub_827F7E50(ctx, base);
	// lwz r3,-26048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26048);
loc_8233D630:
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

__attribute__((alias("__imp__sub_8233D644"))) PPC_WEAK_FUNC(sub_8233D644);
PPC_FUNC_IMPL(__imp__sub_8233D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D648"))) PPC_WEAK_FUNC(sub_8233D648);
PPC_FUNC_IMPL(__imp__sub_8233D648) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d680
	if (!ctx.cr6.eq) goto loc_8233D680;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// bl 0x827f6a90
	ctx.lr = 0x8233D674;
	sub_827F6A90(ctx, base);
	// stw r3,-26056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26056, ctx.r3.u32);
	// bl 0x827f6b40
	ctx.lr = 0x8233D67C;
	sub_827F6B40(ctx, base);
	// lwz r3,-26056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26056);
loc_8233D680:
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

__attribute__((alias("__imp__sub_8233D694"))) PPC_WEAK_FUNC(sub_8233D694);
PPC_FUNC_IMPL(__imp__sub_8233D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D698"))) PPC_WEAK_FUNC(sub_8233D698);
PPC_FUNC_IMPL(__imp__sub_8233D698) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233d6d0
	if (!ctx.cr6.eq) goto loc_8233D6D0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// bl 0x827f7628
	ctx.lr = 0x8233D6C4;
	sub_827F7628(ctx, base);
	// stw r3,-26052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26052, ctx.r3.u32);
	// bl 0x827f76d8
	ctx.lr = 0x8233D6CC;
	sub_827F76D8(ctx, base);
	// lwz r3,-26052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26052);
loc_8233D6D0:
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

__attribute__((alias("__imp__sub_8233D6E4"))) PPC_WEAK_FUNC(sub_8233D6E4);
PPC_FUNC_IMPL(__imp__sub_8233D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D6E8"))) PPC_WEAK_FUNC(sub_8233D6E8);
PPC_FUNC_IMPL(__imp__sub_8233D6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233D6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,25152
	ctx.r30.s64 = ctx.r11.s64 + 25152;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,25152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d740
	if (ctx.cr6.eq) goto loc_8233D740;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233D714:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x8233D720;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233d74c
	if (ctx.cr6.eq) goto loc_8233D74C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233d714
	if (!ctx.cr6.eq) goto loc_8233D714;
loc_8233D740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8233D74C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D760"))) PPC_WEAK_FUNC(sub_8233D760);
PPC_FUNC_IMPL(__imp__sub_8233D760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233D768;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,14520
	ctx.r29.s64 = ctx.r11.s64 + 14520;
	// lwz r11,-26044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d798
	if (!ctx.cr6.eq) goto loc_8233D798;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f8170
	ctx.lr = 0x8233D790;
	sub_827F8170(ctx, base);
	// stw r3,-26044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26044, ctx.r3.u32);
	// bl 0x827f8220
	ctx.lr = 0x8233D798;
	sub_827F8220(ctx, base);
loc_8233D798:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// addi r8,r10,29176
	ctx.r8.s64 = ctx.r10.s64 + 29176;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-10520
	ctx.r6.s64 = ctx.r9.s64 + -10520;
	// lwz r10,-26048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26048);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// bne cr6,0x8233d7dc
	if (!ctx.cr6.eq) goto loc_8233D7DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f7da0
	ctx.lr = 0x8233D7D4;
	sub_827F7DA0(ctx, base);
	// stw r3,-26048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26048, ctx.r3.u32);
	// bl 0x827f7e50
	ctx.lr = 0x8233D7DC;
	sub_827F7E50(ctx, base);
loc_8233D7DC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-26056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d7fc
	if (!ctx.cr6.eq) goto loc_8233D7FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f6a90
	ctx.lr = 0x8233D7F4;
	sub_827F6A90(ctx, base);
	// stw r3,-26056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26056, ctx.r3.u32);
	// bl 0x827f6b40
	ctx.lr = 0x8233D7FC;
	sub_827F6B40(ctx, base);
loc_8233D7FC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,-26052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233d81c
	if (!ctx.cr6.eq) goto loc_8233D81C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f7628
	ctx.lr = 0x8233D814;
	sub_827F7628(ctx, base);
	// stw r3,-26052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26052, ctx.r3.u32);
	// bl 0x827f76d8
	ctx.lr = 0x8233D81C;
	sub_827F76D8(ctx, base);
loc_8233D81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D824"))) PPC_WEAK_FUNC(sub_8233D824);
PPC_FUNC_IMPL(__imp__sub_8233D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D828"))) PPC_WEAK_FUNC(sub_8233D828);
PPC_FUNC_IMPL(__imp__sub_8233D828) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-6644
	ctx.r4.s64 = ctx.r11.s64 + -6644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D850;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-16080
	ctx.r3.s64 = ctx.r9.s64 + -16080;
	// addi r4,r8,-6588
	ctx.r4.s64 = ctx.r8.s64 + -6588;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16080(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16080, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D884;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-16108
	ctx.r3.s64 = ctx.r9.s64 + -16108;
	// addi r4,r8,-6528
	ctx.r4.s64 = ctx.r8.s64 + -6528;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16108(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D8B8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15960
	ctx.r3.s64 = ctx.r9.s64 + -15960;
	// addi r4,r8,-6460
	ctx.r4.s64 = ctx.r8.s64 + -6460;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15960, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D8EC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-16024
	ctx.r3.s64 = ctx.r9.s64 + -16024;
	// addi r4,r8,-6404
	ctx.r4.s64 = ctx.r8.s64 + -6404;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16024(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16024, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D920;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15984
	ctx.r3.s64 = ctx.r9.s64 + -15984;
	// addi r4,r8,-6348
	ctx.r4.s64 = ctx.r8.s64 + -6348;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15984(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15984, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8233D954;
	sub_8233E028(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,-6300
	ctx.r4.s64 = ctx.r10.s64 + -6300;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r8,r9,-16096
	ctx.r8.s64 = ctx.r9.s64 + -16096;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-16096(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16096, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8233D988;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r5,-16088
	ctx.r3.s64 = ctx.r5.s64 + -16088;
	// addi r4,r4,-6248
	ctx.r4.s64 = ctx.r4.s64 + -6248;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16088(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16088, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8233D9BC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15976
	ctx.r3.s64 = ctx.r9.s64 + -15976;
	// addi r4,r8,-6204
	ctx.r4.s64 = ctx.r8.s64 + -6204;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15976, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8233D9F0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-16116
	ctx.r3.s64 = ctx.r9.s64 + -16116;
	// addi r4,r8,-6152
	ctx.r4.s64 = ctx.r8.s64 + -6152;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-16116(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8233DA24;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15952
	ctx.r3.s64 = ctx.r9.s64 + -15952;
	// addi r4,r8,-6100
	ctx.r4.s64 = ctx.r8.s64 + -6100;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15952, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8233DA58;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15968
	ctx.r3.s64 = ctx.r9.s64 + -15968;
	// addi r4,r8,-6048
	ctx.r4.s64 = ctx.r8.s64 + -6048;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15968(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15968, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8233DA8C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r9,-16032
	ctx.r8.s64 = ctx.r9.s64 + -16032;
	// stw r11,-16032(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16032, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DAB4"))) PPC_WEAK_FUNC(sub_8233DAB4);
PPC_FUNC_IMPL(__imp__sub_8233DAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DAB8"))) PPC_WEAK_FUNC(sub_8233DAB8);
PPC_FUNC_IMPL(__imp__sub_8233DAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233DABC"))) PPC_WEAK_FUNC(sub_8233DABC);
PPC_FUNC_IMPL(__imp__sub_8233DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DAC0"))) PPC_WEAK_FUNC(sub_8233DAC0);
PPC_FUNC_IMPL(__imp__sub_8233DAC0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82343ed8
	ctx.lr = 0x8233DAE0;
	sub_82343ED8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233daf4
	if (ctx.cr6.eq) goto loc_8233DAF4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233dafc
	goto loc_8233DAFC;
loc_8233DAF4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8233DAFC:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-24720
	ctx.r31.s64 = ctx.r11.s64 + -24720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafc18
	ctx.lr = 0x8233DB0C;
	sub_82CAFC18(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8233db34
	if (ctx.cr6.eq) goto loc_8233DB34;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8233DB34;
	sub_82294520(ctx, base);
loc_8233DB34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8233DB3C;
	sub_82294CC8(ctx, base);
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
}

__attribute__((alias("__imp__sub_8233DB54"))) PPC_WEAK_FUNC(sub_8233DB54);
PPC_FUNC_IMPL(__imp__sub_8233DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DB58"))) PPC_WEAK_FUNC(sub_8233DB58);
PPC_FUNC_IMPL(__imp__sub_8233DB58) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82343ed8
	ctx.lr = 0x8233DB78;
	sub_82343ED8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233db8c
	if (ctx.cr6.eq) goto loc_8233DB8C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233db94
	goto loc_8233DB94;
loc_8233DB8C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8233DB94:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-25232
	ctx.r31.s64 = ctx.r11.s64 + -25232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafc18
	ctx.lr = 0x8233DBA4;
	sub_82CAFC18(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8233dbcc
	if (ctx.cr6.eq) goto loc_8233DBCC;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8233DBCC;
	sub_82294520(ctx, base);
loc_8233DBCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8233DBD4;
	sub_82294CC8(ctx, base);
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
}

__attribute__((alias("__imp__sub_8233DBEC"))) PPC_WEAK_FUNC(sub_8233DBEC);
PPC_FUNC_IMPL(__imp__sub_8233DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DBF0"))) PPC_WEAK_FUNC(sub_8233DBF0);
PPC_FUNC_IMPL(__imp__sub_8233DBF0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82343ed8
	ctx.lr = 0x8233DC14;
	sub_82343ED8(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233dc28
	if (ctx.cr6.eq) goto loc_8233DC28;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233dc30
	goto loc_8233DC30;
loc_8233DC28:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_8233DC30:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-25744
	ctx.r31.s64 = ctx.r11.s64 + -25744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafc18
	ctx.lr = 0x8233DC40;
	sub_82CAFC18(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8233dc68
	if (ctx.cr6.eq) goto loc_8233DC68;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8233DC68;
	sub_82294520(ctx, base);
loc_8233DC68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8233DC70;
	sub_82294CC8(ctx, base);
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
}

__attribute__((alias("__imp__sub_8233DC88"))) PPC_WEAK_FUNC(sub_8233DC88);
PPC_FUNC_IMPL(__imp__sub_8233DC88) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8233dce4
	if (ctx.cr6.eq) goto loc_8233DCE4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82343ed8
	ctx.lr = 0x8233DCC4;
	sub_82343ED8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233dcd8
	if (ctx.cr6.eq) goto loc_8233DCD8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233dcec
	goto loc_8233DCEC;
loc_8233DCD8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// b 0x8233dcec
	goto loc_8233DCEC;
loc_8233DCE4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-24236
	ctx.r4.s64 = ctx.r11.s64 + -24236;
loc_8233DCEC:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r31,r11,-26256
	ctx.r31.s64 = ctx.r11.s64 + -26256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cafc18
	ctx.lr = 0x8233DCFC;
	sub_82CAFC18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233dd10
	if (ctx.cr6.eq) goto loc_8233DD10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x8233DD10;
	sub_82299080(ctx, base);
loc_8233DD10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8233DD2C"))) PPC_WEAK_FUNC(sub_8233DD2C);
PPC_FUNC_IMPL(__imp__sub_8233DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DD30"))) PPC_WEAK_FUNC(sub_8233DD30);
PPC_FUNC_IMPL(__imp__sub_8233DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8233DD38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233dde0
	if (ctx.cr6.eq) goto loc_8233DDE0;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r11,-24184
	ctx.r29.s64 = ctx.r11.s64 + -24184;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
loc_8233DD60:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233dd60
	if (!ctx.cr6.eq) goto loc_8233DD60;
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8233ddd4
	if (ctx.cr6.lt) goto loc_8233DDD4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r11,-26964
	ctx.r26.s64 = ctx.r11.s64 + -26964;
loc_8233DD88:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8233dda4
	if (!ctx.cr6.gt) goto loc_8233DDA4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8233DD98:
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233dd98
	if (!ctx.cr0.eq) goto loc_8233DD98;
loc_8233DDA4:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8233ddb8
	if (ctx.cr6.eq) goto loc_8233DDB8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cafbe0
	ctx.lr = 0x8233DDB8;
	sub_82CAFBE0(ctx, base);
loc_8233DDB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233dc88
	ctx.lr = 0x8233DDC0;
	sub_8233DC88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cafbe0
	ctx.lr = 0x8233DDCC;
	sub_82CAFBE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8233dd88
	if (!ctx.cr0.lt) goto loc_8233DD88;
loc_8233DDD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_8233DDE0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DDF0"))) PPC_WEAK_FUNC(sub_8233DDF0);
PPC_FUNC_IMPL(__imp__sub_8233DDF0) {
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
	// beq cr6,0x8233de60
	if (ctx.cr6.eq) goto loc_8233DE60;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-22136
	ctx.r30.s64 = ctx.r10.s64 + -22136;
	// sth r11,-22136(r10)
	PPC_STORE_U16(ctx.r10.u32 + -22136, ctx.r11.u16);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8233dc88
	ctx.lr = 0x8233DE28;
	sub_8233DC88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cafbe0
	ctx.lr = 0x8233DE34;
	sub_82CAFBE0(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-26960
	ctx.r4.s64 = ctx.r9.s64 + -26960;
	// bl 0x82cafbe0
	ctx.lr = 0x8233DE44;
	sub_82CAFBE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd30
	ctx.lr = 0x8233DE4C;
	sub_8233DD30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cafbe0
	ctx.lr = 0x8233DE58;
	sub_82CAFBE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233de68
	goto loc_8233DE68;
loc_8233DE60:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
loc_8233DE68:
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

__attribute__((alias("__imp__sub_8233DE80"))) PPC_WEAK_FUNC(sub_8233DE80);
PPC_FUNC_IMPL(__imp__sub_8233DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// b 0x82343cc0
	sub_82343CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DE8C"))) PPC_WEAK_FUNC(sub_8233DE8C);
PPC_FUNC_IMPL(__imp__sub_8233DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DE90"))) PPC_WEAK_FUNC(sub_8233DE90);
PPC_FUNC_IMPL(__imp__sub_8233DE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8233DE98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x822946f0
	ctx.lr = 0x8233DEA8;
	sub_822946F0(ctx, base);
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// rlwinm r9,r3,2,18,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r10,r10,32016
	ctx.r10.s64 = ctx.r10.s64 + 32016;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-15944
	ctx.r31.s64 = ctx.r11.s64 + -15944;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8233df54
	if (ctx.cr6.gt) goto loc_8233DF54;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8233DEE0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8233df24
	if (!ctx.cr6.gt) goto loc_8233DF24;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// li r5,8
	ctx.r5.s64 = 8;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82294520
	ctx.lr = 0x8233DF1C;
	sub_82294520(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8233df2c
	goto loc_8233DF2C;
loc_8233DF24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8233DF2C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233df44
	if (ctx.cr0.eq) goto loc_8233DF44;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8233DF44:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233dee0
	if (!ctx.cr6.gt) goto loc_8233DEE0;
loc_8233DF54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DF6C"))) PPC_WEAK_FUNC(sub_8233DF6C);
PPC_FUNC_IMPL(__imp__sub_8233DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DF70"))) PPC_WEAK_FUNC(sub_8233DF70);
PPC_FUNC_IMPL(__imp__sub_8233DF70) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233e028
	ctx.lr = 0x8233DF94;
	sub_8233E028(ctx, base);
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

__attribute__((alias("__imp__sub_8233DFAC"))) PPC_WEAK_FUNC(sub_8233DFAC);
PPC_FUNC_IMPL(__imp__sub_8233DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DFB0"))) PPC_WEAK_FUNC(sub_8233DFB0);
PPC_FUNC_IMPL(__imp__sub_8233DFB0) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233e028
	ctx.lr = 0x8233DFD0;
	sub_8233E028(ctx, base);
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

__attribute__((alias("__imp__sub_8233DFE8"))) PPC_WEAK_FUNC(sub_8233DFE8);
PPC_FUNC_IMPL(__imp__sub_8233DFE8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233e028
	ctx.lr = 0x8233E010;
	sub_8233E028(ctx, base);
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

__attribute__((alias("__imp__sub_8233E028"))) PPC_WEAK_FUNC(sub_8233E028);
PPC_FUNC_IMPL(__imp__sub_8233E028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8233E030;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,17912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17912);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233e05c
	if (!ctx.cr6.eq) goto loc_8233E05C;
	// bl 0x8233e3e0
	ctx.lr = 0x8233E05C;
	sub_8233E3E0(ctx, base);
loc_8233E05C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8233e094
	if (!ctx.cr6.eq) goto loc_8233E094;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x8233e094
	if (!ctx.cr6.eq) goto loc_8233E094;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343a80
	ctx.lr = 0x8233E080;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e094
	if (ctx.cr6.eq) goto loc_8233E094;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_8233E094:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233e0b4
	if (!ctx.cr6.eq) goto loc_8233E0B4;
loc_8233E0A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8233E0B4:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822946f0
	ctx.lr = 0x8233E0C0;
	sub_822946F0(ctx, base);
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// rlwinm r27,r3,2,18,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r28,r10,32016
	ctx.r28.s64 = ctx.r10.s64 + 32016;
	// lwzx r31,r27,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233e0f8
	if (ctx.cr6.eq) goto loc_8233E0F8;
loc_8233E0D8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x8233E0E4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233e17c
	if (ctx.cr6.eq) goto loc_8233E17C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233e0d8
	if (!ctx.cr6.eq) goto loc_8233E0D8;
loc_8233E0F8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8233e0a0
	if (ctx.cr6.eq) goto loc_8233E0A0;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r26,-15944
	ctx.r3.s64 = ctx.r26.s64 + -15944;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x8233E11C;
	sub_82294AC0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// lwzx r24,r27,r28
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E130;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822959a8
	ctx.lr = 0x8233E140;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// std r10,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r10.u64);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E160;
	sub_82CAFC18(ctx, base);
	// stwx r31,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15944(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15944);
	// stwx r31,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8233E174:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_8233E17C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8233e174
	if (!ctx.cr6.eq) goto loc_8233E174;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82cafc18
	ctx.lr = 0x8233E198;
	sub_82CAFC18(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E1A0"))) PPC_WEAK_FUNC(sub_8233E1A0);
PPC_FUNC_IMPL(__imp__sub_8233E1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233E1A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,-15944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15944);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E1E4;
	sub_82CB0EC8(ctx, base);
	// addic. r11,r3,6
	ctx.xer.ca = ctx.r3.u32 > 4294967289;
	ctx.r11.s64 = ctx.r3.s64 + 6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8233e1f0
	if (!ctx.cr0.gt) goto loc_8233E1F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8233E1F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233e214
	if (ctx.cr6.eq) goto loc_8233E214;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233E214;
	sub_82294520(ctx, base);
loc_8233E214:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b3f98
	ctx.lr = 0x8233E220;
	sub_822B3F98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233e250
	if (ctx.cr6.eq) goto loc_8233E250;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11744
	ctx.r4.s64 = ctx.r11.s64 + 11744;
	// bl 0x822b3f98
	ctx.lr = 0x8233E23C;
	sub_822B3F98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x8232f6b8
	ctx.lr = 0x8233E24C;
	sub_8232F6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233E250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E258"))) PPC_WEAK_FUNC(sub_8233E258);
PPC_FUNC_IMPL(__imp__sub_8233E258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8233E260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-15944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15944);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E28C;
	sub_82CB0EC8(ctx, base);
	// addic. r11,r3,6
	ctx.xer.ca = ctx.r3.u32 > 4294967289;
	ctx.r11.s64 = ctx.r3.s64 + 6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8233e298
	if (!ctx.cr0.gt) goto loc_8233E298;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8233E298:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233e2c0
	if (ctx.cr6.eq) goto loc_8233E2C0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8233E2C0;
	sub_82294520(ctx, base);
loc_8233E2C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b3f98
	ctx.lr = 0x8233E2CC;
	sub_822B3F98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233e2f8
	if (ctx.cr6.eq) goto loc_8233E2F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11744
	ctx.r4.s64 = ctx.r11.s64 + 11744;
	// bl 0x822b3f98
	ctx.lr = 0x8233E2E8;
	sub_822B3F98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x8232f6b8
	ctx.lr = 0x8233E2F8;
	sub_8232F6B8(ctx, base);
loc_8233E2F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E300"))) PPC_WEAK_FUNC(sub_8233E300);
PPC_FUNC_IMPL(__imp__sub_8233E300) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-15944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15944);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822b3f98
	ctx.lr = 0x8233E33C;
	sub_822B3F98(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8233e368
	if (ctx.cr6.eq) goto loc_8233E368;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,11744
	ctx.r4.s64 = ctx.r11.s64 + 11744;
	// bl 0x822b3f98
	ctx.lr = 0x8233E358;
	sub_822B3F98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x8232f6b8
	ctx.lr = 0x8233E368;
	sub_8232F6B8(ctx, base);
loc_8233E368:
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

__attribute__((alias("__imp__sub_8233E380"))) PPC_WEAK_FUNC(sub_8233E380);
PPC_FUNC_IMPL(__imp__sub_8233E380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E388"))) PPC_WEAK_FUNC(sub_8233E388);
PPC_FUNC_IMPL(__imp__sub_8233E388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,30984
	ctx.r8.s64 = ctx.r11.s64 + 30984;
	// lis r11,1217
	ctx.r11.s64 = 79757312;
	// ori r7,r11,7607
	ctx.r7.u64 = ctx.r11.u64 | 7607;
loc_8233E39C:
	// rlwinm r11,r10,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// li r9,8
	ctx.r9.s64 = 8;
loc_8233E3A4:
	// rlwinm r6,r11,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8233e3b8
	if (ctx.cr6.eq) goto loc_8233E3B8;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
loc_8233E3B8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233e3a4
	if (!ctx.cr0.eq) goto loc_8233E3A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// blt cr6,0x8233e39c
	if (ctx.cr6.lt) goto loc_8233E39C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,20484
	ctx.r3.s64 = ctx.r11.s64 + 20484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E3E0"))) PPC_WEAK_FUNC(sub_8233E3E0);
PPC_FUNC_IMPL(__imp__sub_8233E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8233E3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lwz r11,-26728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26728);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233e414
	if (!ctx.cr6.eq) goto loc_8233E414;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r3,r9,20484
	ctx.r3.s64 = ctx.r9.s64 + 20484;
	// stw r11,-26728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26728, ctx.r11.u32);
	// bl 0x8233e388
	ctx.lr = 0x8233E414;
	sub_8233E388(ctx, base);
loc_8233E414:
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r31,r10,-15944
	ctx.r31.s64 = ctx.r10.s64 + -15944;
	// stw r11,17912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17912, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e640b8
	ctx.lr = 0x8233E438;
	sub_82E640B8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r8,34464
	ctx.r11.u64 = ctx.r8.u64 | 34464;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233e460
	if (!ctx.cr6.lt) goto loc_8233E460;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8233E460;
	sub_82294520(ctx, base);
loc_8233E460:
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,32016
	ctx.r11.s64 = ctx.r11.s64 + 32016;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8233E478:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8233e478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233E478;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-27584
	ctx.r28.s64 = ctx.r11.s64 + -27584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E494;
	sub_82CB0EC8(ctx, base);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233e4b4
	if (!ctx.cr6.eq) goto loc_8233E4B4;
	// bl 0x822900a0
	ctx.lr = 0x8233E4B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E4B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233E4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E4E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E4F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5992
	ctx.r28.s64 = ctx.r11.s64 + -5992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E500;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r9,r3,9
	ctx.r9.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e51c
	if (!ctx.cr6.eq) goto loc_8233E51C;
	// bl 0x822900a0
	ctx.lr = 0x8233E518;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E51C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E558;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E560;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5964
	ctx.r28.s64 = ctx.r11.s64 + -5964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E570;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e58c
	if (!ctx.cr6.eq) goto loc_8233E58C;
	// bl 0x822900a0
	ctx.lr = 0x8233E588;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E58C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E5C8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E5D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5940
	ctx.r28.s64 = ctx.r11.s64 + -5940;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E5E0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e5fc
	if (!ctx.cr6.eq) goto loc_8233E5FC;
	// bl 0x822900a0
	ctx.lr = 0x8233E5F8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E5FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E638;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E640;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5912
	ctx.r28.s64 = ctx.r11.s64 + -5912;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E650;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e66c
	if (!ctx.cr6.eq) goto loc_8233E66C;
	// bl 0x822900a0
	ctx.lr = 0x8233E668;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E66C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E6A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E6B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5884
	ctx.r28.s64 = ctx.r11.s64 + -5884;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E6C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e6dc
	if (!ctx.cr6.eq) goto loc_8233E6DC;
	// bl 0x822900a0
	ctx.lr = 0x8233E6D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E6DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E718;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E720;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5852
	ctx.r28.s64 = ctx.r11.s64 + -5852;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E730;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e74c
	if (!ctx.cr6.eq) goto loc_8233E74C;
	// bl 0x822900a0
	ctx.lr = 0x8233E748;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E74C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E788;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E790;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5824
	ctx.r28.s64 = ctx.r11.s64 + -5824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E7A0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e7bc
	if (!ctx.cr6.eq) goto loc_8233E7BC;
	// bl 0x822900a0
	ctx.lr = 0x8233E7B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E7BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E7F8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E800;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5788
	ctx.r28.s64 = ctx.r11.s64 + -5788;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E810;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e82c
	if (!ctx.cr6.eq) goto loc_8233E82C;
	// bl 0x822900a0
	ctx.lr = 0x8233E828;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E82C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E868;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E870;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5760
	ctx.r28.s64 = ctx.r11.s64 + -5760;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E880;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e89c
	if (!ctx.cr6.eq) goto loc_8233E89C;
	// bl 0x822900a0
	ctx.lr = 0x8233E898;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E89C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E8B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E8D8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E8E0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5732
	ctx.r28.s64 = ctx.r11.s64 + -5732;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E8F0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e90c
	if (!ctx.cr6.eq) goto loc_8233E90C;
	// bl 0x822900a0
	ctx.lr = 0x8233E908;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E90C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E948;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E950;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5700
	ctx.r28.s64 = ctx.r11.s64 + -5700;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E960;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e97c
	if (!ctx.cr6.eq) goto loc_8233E97C;
	// bl 0x822900a0
	ctx.lr = 0x8233E978;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E97C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233E998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233E9B8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233E9C0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5668
	ctx.r28.s64 = ctx.r11.s64 + -5668;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233E9D0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233e9ec
	if (!ctx.cr6.eq) goto loc_8233E9EC;
	// bl 0x822900a0
	ctx.lr = 0x8233E9E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233E9EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EA28;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EA30;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5636
	ctx.r28.s64 = ctx.r11.s64 + -5636;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EA40;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ea5c
	if (!ctx.cr6.eq) goto loc_8233EA5C;
	// bl 0x822900a0
	ctx.lr = 0x8233EA58;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EA5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,13
	ctx.r8.s64 = 13;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EA98;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EAA0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5612
	ctx.r28.s64 = ctx.r11.s64 + -5612;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EAB0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233eacc
	if (!ctx.cr6.eq) goto loc_8233EACC;
	// bl 0x822900a0
	ctx.lr = 0x8233EAC8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EACC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,14
	ctx.r8.s64 = 14;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EB08;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EB10;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5588
	ctx.r28.s64 = ctx.r11.s64 + -5588;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EB20;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233eb3c
	if (!ctx.cr6.eq) goto loc_8233EB3C;
	// bl 0x822900a0
	ctx.lr = 0x8233EB38;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EB3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EB78;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EB80;
	sub_8233DE90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,14476
	ctx.r28.s64 = ctx.r11.s64 + 14476;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EB90;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ebac
	if (!ctx.cr6.eq) goto loc_8233EBAC;
	// bl 0x822900a0
	ctx.lr = 0x8233EBA8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EBAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EBE8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EBF0;
	sub_8233DE90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,14488
	ctx.r28.s64 = ctx.r11.s64 + 14488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EC00;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ec1c
	if (!ctx.cr6.eq) goto loc_8233EC1C;
	// bl 0x822900a0
	ctx.lr = 0x8233EC18;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EC1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,21
	ctx.r8.s64 = 21;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EC58;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EC60;
	sub_8233DE90(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,14504
	ctx.r28.s64 = ctx.r11.s64 + 14504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EC70;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ec8c
	if (!ctx.cr6.eq) goto loc_8233EC8C;
	// bl 0x822900a0
	ctx.lr = 0x8233EC88;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EC8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233ECA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,22
	ctx.r8.s64 = 22;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233ECC8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233ECD0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5552
	ctx.r28.s64 = ctx.r11.s64 + -5552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233ECE0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ecfc
	if (!ctx.cr6.eq) goto loc_8233ECFC;
	// bl 0x822900a0
	ctx.lr = 0x8233ECF8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233ECFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233ED18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,23
	ctx.r8.s64 = 23;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233ED38;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233ED40;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5532
	ctx.r28.s64 = ctx.r11.s64 + -5532;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233ED50;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ed6c
	if (!ctx.cr6.eq) goto loc_8233ED6C;
	// bl 0x822900a0
	ctx.lr = 0x8233ED68;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233ED6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233ED88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EDA8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EDB0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5520
	ctx.r28.s64 = ctx.r11.s64 + -5520;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EDC0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233eddc
	if (!ctx.cr6.eq) goto loc_8233EDDC;
	// bl 0x822900a0
	ctx.lr = 0x8233EDD8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EDDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,81
	ctx.r8.s64 = 81;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EE18;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EE20;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5512
	ctx.r28.s64 = ctx.r11.s64 + -5512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EE30;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ee4c
	if (!ctx.cr6.eq) goto loc_8233EE4C;
	// bl 0x822900a0
	ctx.lr = 0x8233EE48;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EE4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,82
	ctx.r8.s64 = 82;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EE88;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EE90;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5500
	ctx.r28.s64 = ctx.r11.s64 + -5500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EEA0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233eebc
	if (!ctx.cr6.eq) goto loc_8233EEBC;
	// bl 0x822900a0
	ctx.lr = 0x8233EEB8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EEBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,83
	ctx.r8.s64 = 83;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EEF8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EF00;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5488
	ctx.r28.s64 = ctx.r11.s64 + -5488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EF10;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ef2c
	if (!ctx.cr6.eq) goto loc_8233EF2C;
	// bl 0x822900a0
	ctx.lr = 0x8233EF28;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EF2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,84
	ctx.r8.s64 = 84;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EF68;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EF70;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5476
	ctx.r28.s64 = ctx.r11.s64 + -5476;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EF80;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ef9c
	if (!ctx.cr6.eq) goto loc_8233EF9C;
	// bl 0x822900a0
	ctx.lr = 0x8233EF98;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233EF9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233EFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,85
	ctx.r8.s64 = 85;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233EFD8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233EFE0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5460
	ctx.r28.s64 = ctx.r11.s64 + -5460;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233EFF0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f00c
	if (!ctx.cr6.eq) goto loc_8233F00C;
	// bl 0x822900a0
	ctx.lr = 0x8233F008;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F00C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,86
	ctx.r8.s64 = 86;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F048;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F050;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5444
	ctx.r28.s64 = ctx.r11.s64 + -5444;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F060;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f07c
	if (!ctx.cr6.eq) goto loc_8233F07C;
	// bl 0x822900a0
	ctx.lr = 0x8233F078;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F07C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,87
	ctx.r8.s64 = 87;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F0B8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F0C0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5428
	ctx.r28.s64 = ctx.r11.s64 + -5428;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F0D0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f0ec
	if (!ctx.cr6.eq) goto loc_8233F0EC;
	// bl 0x822900a0
	ctx.lr = 0x8233F0E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F0EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,88
	ctx.r8.s64 = 88;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F128;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F130;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5412
	ctx.r28.s64 = ctx.r11.s64 + -5412;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F140;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f15c
	if (!ctx.cr6.eq) goto loc_8233F15C;
	// bl 0x822900a0
	ctx.lr = 0x8233F158;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F15C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,90
	ctx.r8.s64 = 90;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F198;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F1A0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5400
	ctx.r28.s64 = ctx.r11.s64 + -5400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F1B0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f1cc
	if (!ctx.cr6.eq) goto loc_8233F1CC;
	// bl 0x822900a0
	ctx.lr = 0x8233F1C8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F1CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,91
	ctx.r8.s64 = 91;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F208;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F210;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5388
	ctx.r28.s64 = ctx.r11.s64 + -5388;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F220;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f23c
	if (!ctx.cr6.eq) goto loc_8233F23C;
	// bl 0x822900a0
	ctx.lr = 0x8233F238;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F23C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,92
	ctx.r8.s64 = 92;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F278;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F280;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5372
	ctx.r28.s64 = ctx.r11.s64 + -5372;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F290;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f2ac
	if (!ctx.cr6.eq) goto loc_8233F2AC;
	// bl 0x822900a0
	ctx.lr = 0x8233F2A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F2AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,94
	ctx.r8.s64 = 94;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F2E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F2F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5356
	ctx.r28.s64 = ctx.r11.s64 + -5356;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F300;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f31c
	if (!ctx.cr6.eq) goto loc_8233F31C;
	// bl 0x822900a0
	ctx.lr = 0x8233F318;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F31C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,95
	ctx.r8.s64 = 95;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F358;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F360;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5332
	ctx.r28.s64 = ctx.r11.s64 + -5332;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F370;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f38c
	if (!ctx.cr6.eq) goto loc_8233F38C;
	// bl 0x822900a0
	ctx.lr = 0x8233F388;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F38C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F3C8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F3D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5320
	ctx.r28.s64 = ctx.r11.s64 + -5320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F3E0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f3fc
	if (!ctx.cr6.eq) goto loc_8233F3FC;
	// bl 0x822900a0
	ctx.lr = 0x8233F3F8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F3FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,97
	ctx.r8.s64 = 97;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F438;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F440;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5304
	ctx.r28.s64 = ctx.r11.s64 + -5304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F450;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f46c
	if (!ctx.cr6.eq) goto loc_8233F46C;
	// bl 0x822900a0
	ctx.lr = 0x8233F468;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F46C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,98
	ctx.r8.s64 = 98;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F4A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F4B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5288
	ctx.r28.s64 = ctx.r11.s64 + -5288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F4C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f4dc
	if (!ctx.cr6.eq) goto loc_8233F4DC;
	// bl 0x822900a0
	ctx.lr = 0x8233F4D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F4DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,99
	ctx.r8.s64 = 99;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F518;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F520;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5276
	ctx.r28.s64 = ctx.r11.s64 + -5276;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F530;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f54c
	if (!ctx.cr6.eq) goto loc_8233F54C;
	// bl 0x822900a0
	ctx.lr = 0x8233F548;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F54C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,100
	ctx.r8.s64 = 100;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F588;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F590;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5264
	ctx.r28.s64 = ctx.r11.s64 + -5264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F5A0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f5bc
	if (!ctx.cr6.eq) goto loc_8233F5BC;
	// bl 0x822900a0
	ctx.lr = 0x8233F5B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F5BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,102
	ctx.r8.s64 = 102;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F5F8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F600;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5252
	ctx.r28.s64 = ctx.r11.s64 + -5252;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F610;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f62c
	if (!ctx.cr6.eq) goto loc_8233F62C;
	// bl 0x822900a0
	ctx.lr = 0x8233F628;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F62C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,103
	ctx.r8.s64 = 103;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F668;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F670;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5232
	ctx.r28.s64 = ctx.r11.s64 + -5232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F680;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f69c
	if (!ctx.cr6.eq) goto loc_8233F69C;
	// bl 0x822900a0
	ctx.lr = 0x8233F698;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F69C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,104
	ctx.r8.s64 = 104;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F6D8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F6E0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5220
	ctx.r28.s64 = ctx.r11.s64 + -5220;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F6F0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f70c
	if (!ctx.cr6.eq) goto loc_8233F70C;
	// bl 0x822900a0
	ctx.lr = 0x8233F708;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F70C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,105
	ctx.r8.s64 = 105;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F748;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F750;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5208
	ctx.r28.s64 = ctx.r11.s64 + -5208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F760;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f77c
	if (!ctx.cr6.eq) goto loc_8233F77C;
	// bl 0x822900a0
	ctx.lr = 0x8233F778;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F77C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,106
	ctx.r8.s64 = 106;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F7B8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F7C0;
	sub_8233DE90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-26568
	ctx.r28.s64 = ctx.r11.s64 + -26568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F7D0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f7ec
	if (!ctx.cr6.eq) goto loc_8233F7EC;
	// bl 0x822900a0
	ctx.lr = 0x8233F7E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F7EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,107
	ctx.r8.s64 = 107;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F828;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F830;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5196
	ctx.r28.s64 = ctx.r11.s64 + -5196;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F840;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f85c
	if (!ctx.cr6.eq) goto loc_8233F85C;
	// bl 0x822900a0
	ctx.lr = 0x8233F858;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F85C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,117
	ctx.r8.s64 = 117;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F898;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F8A0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5184
	ctx.r28.s64 = ctx.r11.s64 + -5184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F8B0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f8cc
	if (!ctx.cr6.eq) goto loc_8233F8CC;
	// bl 0x822900a0
	ctx.lr = 0x8233F8C8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F8CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,119
	ctx.r8.s64 = 119;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F908;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F910;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5160
	ctx.r28.s64 = ctx.r11.s64 + -5160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F920;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f93c
	if (!ctx.cr6.eq) goto loc_8233F93C;
	// bl 0x822900a0
	ctx.lr = 0x8233F938;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F93C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,120
	ctx.r8.s64 = 120;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F978;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F980;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5140
	ctx.r28.s64 = ctx.r11.s64 + -5140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233F990;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233f9ac
	if (!ctx.cr6.eq) goto loc_8233F9AC;
	// bl 0x822900a0
	ctx.lr = 0x8233F9A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233F9AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233F9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,121
	ctx.r8.s64 = 121;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233F9E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233F9F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5116
	ctx.r28.s64 = ctx.r11.s64 + -5116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FA00;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fa1c
	if (!ctx.cr6.eq) goto loc_8233FA1C;
	// bl 0x822900a0
	ctx.lr = 0x8233FA18;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FA1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,122
	ctx.r8.s64 = 122;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FA58;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FA60;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5100
	ctx.r28.s64 = ctx.r11.s64 + -5100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FA70;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fa8c
	if (!ctx.cr6.eq) goto loc_8233FA8C;
	// bl 0x822900a0
	ctx.lr = 0x8233FA88;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FA8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,123
	ctx.r8.s64 = 123;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FAC8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FAD0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5084
	ctx.r28.s64 = ctx.r11.s64 + -5084;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FAE0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fafc
	if (!ctx.cr6.eq) goto loc_8233FAFC;
	// bl 0x822900a0
	ctx.lr = 0x8233FAF8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FAFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,124
	ctx.r8.s64 = 124;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FB38;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FB40;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5068
	ctx.r28.s64 = ctx.r11.s64 + -5068;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FB50;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fb6c
	if (!ctx.cr6.eq) goto loc_8233FB6C;
	// bl 0x822900a0
	ctx.lr = 0x8233FB68;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FB6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,150
	ctx.r8.s64 = 150;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FBA8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FBB0;
	sub_8233DE90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-23248
	ctx.r28.s64 = ctx.r11.s64 + -23248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FBC0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fbdc
	if (!ctx.cr6.eq) goto loc_8233FBDC;
	// bl 0x822900a0
	ctx.lr = 0x8233FBD8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FBDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,151
	ctx.r8.s64 = 151;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FC18;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FC20;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5056
	ctx.r28.s64 = ctx.r11.s64 + -5056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FC30;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fc4c
	if (!ctx.cr6.eq) goto loc_8233FC4C;
	// bl 0x822900a0
	ctx.lr = 0x8233FC48;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FC4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,152
	ctx.r8.s64 = 152;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FC88;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FC90;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5032
	ctx.r28.s64 = ctx.r11.s64 + -5032;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FCA0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fcbc
	if (!ctx.cr6.eq) goto loc_8233FCBC;
	// bl 0x822900a0
	ctx.lr = 0x8233FCB8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FCBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,153
	ctx.r8.s64 = 153;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FCF8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FD00;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-5016
	ctx.r28.s64 = ctx.r11.s64 + -5016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FD10;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fd2c
	if (!ctx.cr6.eq) goto loc_8233FD2C;
	// bl 0x822900a0
	ctx.lr = 0x8233FD28;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FD2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,154
	ctx.r8.s64 = 154;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FD68;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FD70;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4992
	ctx.r28.s64 = ctx.r11.s64 + -4992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FD80;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fd9c
	if (!ctx.cr6.eq) goto loc_8233FD9C;
	// bl 0x822900a0
	ctx.lr = 0x8233FD98;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FD9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,155
	ctx.r8.s64 = 155;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FDD8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FDE0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4968
	ctx.r28.s64 = ctx.r11.s64 + -4968;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FDF0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fe0c
	if (!ctx.cr6.eq) goto loc_8233FE0C;
	// bl 0x822900a0
	ctx.lr = 0x8233FE08;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FE0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,156
	ctx.r8.s64 = 156;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FE48;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FE50;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4948
	ctx.r28.s64 = ctx.r11.s64 + -4948;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FE60;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233fe7c
	if (!ctx.cr6.eq) goto loc_8233FE7C;
	// bl 0x822900a0
	ctx.lr = 0x8233FE78;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FE7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,157
	ctx.r8.s64 = 157;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FEB8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FEC0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4932
	ctx.r28.s64 = ctx.r11.s64 + -4932;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FED0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233feec
	if (!ctx.cr6.eq) goto loc_8233FEEC;
	// bl 0x822900a0
	ctx.lr = 0x8233FEE8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FEEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,158
	ctx.r8.s64 = 158;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FF28;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FF30;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4896
	ctx.r28.s64 = ctx.r11.s64 + -4896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FF40;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ff5c
	if (!ctx.cr6.eq) goto loc_8233FF5C;
	// bl 0x822900a0
	ctx.lr = 0x8233FF58;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FF5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,159
	ctx.r8.s64 = 159;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x8233FF98;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x8233FFA0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4876
	ctx.r28.s64 = ctx.r11.s64 + -4876;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x8233FFB0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8233ffcc
	if (!ctx.cr6.eq) goto loc_8233FFCC;
	// bl 0x822900a0
	ctx.lr = 0x8233FFC8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8233FFCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233FFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,160
	ctx.r8.s64 = 160;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340008;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340010;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4856
	ctx.r28.s64 = ctx.r11.s64 + -4856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340020;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234003c
	if (!ctx.cr6.eq) goto loc_8234003C;
	// bl 0x822900a0
	ctx.lr = 0x82340038;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234003C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,161
	ctx.r8.s64 = 161;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340078;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340080;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4836
	ctx.r28.s64 = ctx.r11.s64 + -4836;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340090;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823400ac
	if (!ctx.cr6.eq) goto loc_823400AC;
	// bl 0x822900a0
	ctx.lr = 0x823400A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823400AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823400C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,162
	ctx.r8.s64 = 162;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823400E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823400F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-24012
	ctx.r28.s64 = ctx.r11.s64 + -24012;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340100;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234011c
	if (!ctx.cr6.eq) goto loc_8234011C;
	// bl 0x822900a0
	ctx.lr = 0x82340118;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234011C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,163
	ctx.r8.s64 = 163;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340158;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340160;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4820
	ctx.r28.s64 = ctx.r11.s64 + -4820;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340170;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234018c
	if (!ctx.cr6.eq) goto loc_8234018C;
	// bl 0x822900a0
	ctx.lr = 0x82340188;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234018C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823401A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,164
	ctx.r8.s64 = 164;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823401C8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823401D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4808
	ctx.r28.s64 = ctx.r11.s64 + -4808;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823401E0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823401fc
	if (!ctx.cr6.eq) goto loc_823401FC;
	// bl 0x822900a0
	ctx.lr = 0x823401F8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823401FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,165
	ctx.r8.s64 = 165;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340238;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340240;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4772
	ctx.r28.s64 = ctx.r11.s64 + -4772;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340250;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234026c
	if (!ctx.cr6.eq) goto loc_8234026C;
	// bl 0x822900a0
	ctx.lr = 0x82340268;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234026C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,166
	ctx.r8.s64 = 166;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823402A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823402B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4740
	ctx.r28.s64 = ctx.r11.s64 + -4740;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823402C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823402dc
	if (!ctx.cr6.eq) goto loc_823402DC;
	// bl 0x822900a0
	ctx.lr = 0x823402D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823402DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823402F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,600
	ctx.r8.s64 = 600;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340318;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340320;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4728
	ctx.r28.s64 = ctx.r11.s64 + -4728;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340330;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234034c
	if (!ctx.cr6.eq) goto loc_8234034C;
	// bl 0x822900a0
	ctx.lr = 0x82340348;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234034C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,601
	ctx.r8.s64 = 601;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340388;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340390;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4720
	ctx.r28.s64 = ctx.r11.s64 + -4720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823403A0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823403bc
	if (!ctx.cr6.eq) goto loc_823403BC;
	// bl 0x822900a0
	ctx.lr = 0x823403B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823403BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823403D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,605
	ctx.r8.s64 = 605;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823403F8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340400;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4696
	ctx.r28.s64 = ctx.r11.s64 + -4696;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340410;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234042c
	if (!ctx.cr6.eq) goto loc_8234042C;
	// bl 0x822900a0
	ctx.lr = 0x82340428;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234042C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,606
	ctx.r8.s64 = 606;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340468;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340470;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4676
	ctx.r28.s64 = ctx.r11.s64 + -4676;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340480;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234049c
	if (!ctx.cr6.eq) goto loc_8234049C;
	// bl 0x822900a0
	ctx.lr = 0x82340498;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234049C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823404B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,607
	ctx.r8.s64 = 607;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823404D8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823404E0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4668
	ctx.r28.s64 = ctx.r11.s64 + -4668;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823404F0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234050c
	if (!ctx.cr6.eq) goto loc_8234050C;
	// bl 0x822900a0
	ctx.lr = 0x82340508;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234050C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,620
	ctx.r8.s64 = 620;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340548;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340550;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4656
	ctx.r28.s64 = ctx.r11.s64 + -4656;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340560;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234057c
	if (!ctx.cr6.eq) goto loc_8234057C;
	// bl 0x822900a0
	ctx.lr = 0x82340578;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234057C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,621
	ctx.r8.s64 = 621;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823405B8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823405C0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4648
	ctx.r28.s64 = ctx.r11.s64 + -4648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823405D0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823405ec
	if (!ctx.cr6.eq) goto loc_823405EC;
	// bl 0x822900a0
	ctx.lr = 0x823405E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823405EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,622
	ctx.r8.s64 = 622;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340628;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340630;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4636
	ctx.r28.s64 = ctx.r11.s64 + -4636;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340640;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234065c
	if (!ctx.cr6.eq) goto loc_8234065C;
	// bl 0x822900a0
	ctx.lr = 0x82340658;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234065C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,623
	ctx.r8.s64 = 623;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340698;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823406A0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4624
	ctx.r28.s64 = ctx.r11.s64 + -4624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823406B0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823406cc
	if (!ctx.cr6.eq) goto loc_823406CC;
	// bl 0x822900a0
	ctx.lr = 0x823406C8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823406CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823406E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,625
	ctx.r8.s64 = 625;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340708;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340710;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4612
	ctx.r28.s64 = ctx.r11.s64 + -4612;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340720;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234073c
	if (!ctx.cr6.eq) goto loc_8234073C;
	// bl 0x822900a0
	ctx.lr = 0x82340738;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234073C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,626
	ctx.r8.s64 = 626;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340778;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340780;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4600
	ctx.r28.s64 = ctx.r11.s64 + -4600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340790;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823407ac
	if (!ctx.cr6.eq) goto loc_823407AC;
	// bl 0x822900a0
	ctx.lr = 0x823407A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823407AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823407C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,627
	ctx.r8.s64 = 627;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823407E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823407F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4592
	ctx.r28.s64 = ctx.r11.s64 + -4592;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340800;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234081c
	if (!ctx.cr6.eq) goto loc_8234081C;
	// bl 0x822900a0
	ctx.lr = 0x82340818;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234081C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,628
	ctx.r8.s64 = 628;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340858;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340860;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4580
	ctx.r28.s64 = ctx.r11.s64 + -4580;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340870;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234088c
	if (!ctx.cr6.eq) goto loc_8234088C;
	// bl 0x822900a0
	ctx.lr = 0x82340888;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234088C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823408A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,629
	ctx.r8.s64 = 629;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823408C8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823408D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4572
	ctx.r28.s64 = ctx.r11.s64 + -4572;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823408E0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823408fc
	if (!ctx.cr6.eq) goto loc_823408FC;
	// bl 0x822900a0
	ctx.lr = 0x823408F8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823408FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,630
	ctx.r8.s64 = 630;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340938;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340940;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4556
	ctx.r28.s64 = ctx.r11.s64 + -4556;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340950;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234096c
	if (!ctx.cr6.eq) goto loc_8234096C;
	// bl 0x822900a0
	ctx.lr = 0x82340968;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234096C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,631
	ctx.r8.s64 = 631;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823409A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823409B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4540
	ctx.r28.s64 = ctx.r11.s64 + -4540;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823409C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823409dc
	if (!ctx.cr6.eq) goto loc_823409DC;
	// bl 0x822900a0
	ctx.lr = 0x823409D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823409DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823409F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,632
	ctx.r8.s64 = 632;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340A18;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340A20;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4524
	ctx.r28.s64 = ctx.r11.s64 + -4524;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340A30;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340a4c
	if (!ctx.cr6.eq) goto loc_82340A4C;
	// bl 0x822900a0
	ctx.lr = 0x82340A48;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340A4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,633
	ctx.r8.s64 = 633;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340A88;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340A90;
	sub_8233DE90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-19536
	ctx.r28.s64 = ctx.r11.s64 + -19536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340AA0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340abc
	if (!ctx.cr6.eq) goto loc_82340ABC;
	// bl 0x822900a0
	ctx.lr = 0x82340AB8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340ABC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,634
	ctx.r8.s64 = 634;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340AF8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340B00;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4512
	ctx.r28.s64 = ctx.r11.s64 + -4512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340B10;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340b2c
	if (!ctx.cr6.eq) goto loc_82340B2C;
	// bl 0x822900a0
	ctx.lr = 0x82340B28;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340B2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,635
	ctx.r8.s64 = 635;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340B68;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340B70;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4492
	ctx.r28.s64 = ctx.r11.s64 + -4492;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340B80;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340b9c
	if (!ctx.cr6.eq) goto loc_82340B9C;
	// bl 0x822900a0
	ctx.lr = 0x82340B98;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340B9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,640
	ctx.r8.s64 = 640;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340BD8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340BE0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4476
	ctx.r28.s64 = ctx.r11.s64 + -4476;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340BF0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340c0c
	if (!ctx.cr6.eq) goto loc_82340C0C;
	// bl 0x822900a0
	ctx.lr = 0x82340C08;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340C0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,641
	ctx.r8.s64 = 641;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340C48;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340C50;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4464
	ctx.r28.s64 = ctx.r11.s64 + -4464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340C60;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340c7c
	if (!ctx.cr6.eq) goto loc_82340C7C;
	// bl 0x822900a0
	ctx.lr = 0x82340C78;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340C7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,642
	ctx.r8.s64 = 642;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340CB8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340CC0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4456
	ctx.r28.s64 = ctx.r11.s64 + -4456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340CD0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340cec
	if (!ctx.cr6.eq) goto loc_82340CEC;
	// bl 0x822900a0
	ctx.lr = 0x82340CE8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340CEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,643
	ctx.r8.s64 = 643;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340D28;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340D30;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4440
	ctx.r28.s64 = ctx.r11.s64 + -4440;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340D40;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340d5c
	if (!ctx.cr6.eq) goto loc_82340D5C;
	// bl 0x822900a0
	ctx.lr = 0x82340D58;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340D5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,644
	ctx.r8.s64 = 644;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340D98;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340DA0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4400
	ctx.r28.s64 = ctx.r11.s64 + -4400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340DB0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340dcc
	if (!ctx.cr6.eq) goto loc_82340DCC;
	// bl 0x822900a0
	ctx.lr = 0x82340DC8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340DCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,645
	ctx.r8.s64 = 645;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340E08;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340E10;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4380
	ctx.r28.s64 = ctx.r11.s64 + -4380;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340E20;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340e3c
	if (!ctx.cr6.eq) goto loc_82340E3C;
	// bl 0x822900a0
	ctx.lr = 0x82340E38;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340E3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,646
	ctx.r8.s64 = 646;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340E78;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340E80;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4368
	ctx.r28.s64 = ctx.r11.s64 + -4368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340E90;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340eac
	if (!ctx.cr6.eq) goto loc_82340EAC;
	// bl 0x822900a0
	ctx.lr = 0x82340EA8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340EAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,647
	ctx.r8.s64 = 647;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340EE8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340EF0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4352
	ctx.r28.s64 = ctx.r11.s64 + -4352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340F00;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340f1c
	if (!ctx.cr6.eq) goto loc_82340F1C;
	// bl 0x822900a0
	ctx.lr = 0x82340F18;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340F1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,648
	ctx.r8.s64 = 648;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340F58;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340F60;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4332
	ctx.r28.s64 = ctx.r11.s64 + -4332;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340F70;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340f8c
	if (!ctx.cr6.eq) goto loc_82340F8C;
	// bl 0x822900a0
	ctx.lr = 0x82340F88;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340F8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82340FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,649
	ctx.r8.s64 = 649;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82340FC8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82340FD0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-12396
	ctx.r28.s64 = ctx.r11.s64 + -12396;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82340FE0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82340ffc
	if (!ctx.cr6.eq) goto loc_82340FFC;
	// bl 0x822900a0
	ctx.lr = 0x82340FF8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82340FFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,650
	ctx.r8.s64 = 650;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341038;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341040;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4320
	ctx.r28.s64 = ctx.r11.s64 + -4320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341050;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234106c
	if (!ctx.cr6.eq) goto loc_8234106C;
	// bl 0x822900a0
	ctx.lr = 0x82341068;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234106C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,651
	ctx.r8.s64 = 651;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823410A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823410B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4296
	ctx.r28.s64 = ctx.r11.s64 + -4296;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823410C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823410dc
	if (!ctx.cr6.eq) goto loc_823410DC;
	// bl 0x822900a0
	ctx.lr = 0x823410D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823410DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823410F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,652
	ctx.r8.s64 = 652;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341118;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341120;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4268
	ctx.r28.s64 = ctx.r11.s64 + -4268;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341130;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234114c
	if (!ctx.cr6.eq) goto loc_8234114C;
	// bl 0x822900a0
	ctx.lr = 0x82341148;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234114C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,653
	ctx.r8.s64 = 653;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341188;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341190;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4248
	ctx.r28.s64 = ctx.r11.s64 + -4248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823411A0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823411bc
	if (!ctx.cr6.eq) goto loc_823411BC;
	// bl 0x822900a0
	ctx.lr = 0x823411B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823411BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823411D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,654
	ctx.r8.s64 = 654;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823411F8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341200;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4228
	ctx.r28.s64 = ctx.r11.s64 + -4228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341210;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234122c
	if (!ctx.cr6.eq) goto loc_8234122C;
	// bl 0x822900a0
	ctx.lr = 0x82341228;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234122C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,655
	ctx.r8.s64 = 655;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341268;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341270;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4200
	ctx.r28.s64 = ctx.r11.s64 + -4200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341280;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234129c
	if (!ctx.cr6.eq) goto loc_8234129C;
	// bl 0x822900a0
	ctx.lr = 0x82341298;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234129C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823412B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,656
	ctx.r8.s64 = 656;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823412D8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823412E0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4176
	ctx.r28.s64 = ctx.r11.s64 + -4176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823412F0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234130c
	if (!ctx.cr6.eq) goto loc_8234130C;
	// bl 0x822900a0
	ctx.lr = 0x82341308;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234130C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,657
	ctx.r8.s64 = 657;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341348;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341350;
	sub_8233DE90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-26168
	ctx.r28.s64 = ctx.r11.s64 + -26168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341360;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234137c
	if (!ctx.cr6.eq) goto loc_8234137C;
	// bl 0x822900a0
	ctx.lr = 0x82341378;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234137C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,658
	ctx.r8.s64 = 658;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823413B8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823413C0;
	sub_8233DE90(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r28,r11,-25920
	ctx.r28.s64 = ctx.r11.s64 + -25920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823413D0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823413ec
	if (!ctx.cr6.eq) goto loc_823413EC;
	// bl 0x822900a0
	ctx.lr = 0x823413E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823413EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,659
	ctx.r8.s64 = 659;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341428;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341430;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4168
	ctx.r28.s64 = ctx.r11.s64 + -4168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341440;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234145c
	if (!ctx.cr6.eq) goto loc_8234145C;
	// bl 0x822900a0
	ctx.lr = 0x82341458;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234145C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,660
	ctx.r8.s64 = 660;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341498;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823414A0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4144
	ctx.r28.s64 = ctx.r11.s64 + -4144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823414B0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823414cc
	if (!ctx.cr6.eq) goto loc_823414CC;
	// bl 0x822900a0
	ctx.lr = 0x823414C8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823414CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823414E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,661
	ctx.r8.s64 = 661;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341508;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341510;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4116
	ctx.r28.s64 = ctx.r11.s64 + -4116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341520;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234153c
	if (!ctx.cr6.eq) goto loc_8234153C;
	// bl 0x822900a0
	ctx.lr = 0x82341538;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234153C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,662
	ctx.r8.s64 = 662;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341578;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341580;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4092
	ctx.r28.s64 = ctx.r11.s64 + -4092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341590;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823415ac
	if (!ctx.cr6.eq) goto loc_823415AC;
	// bl 0x822900a0
	ctx.lr = 0x823415A8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823415AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823415C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,663
	ctx.r8.s64 = 663;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823415E8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823415F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4076
	ctx.r28.s64 = ctx.r11.s64 + -4076;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341600;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234161c
	if (!ctx.cr6.eq) goto loc_8234161C;
	// bl 0x822900a0
	ctx.lr = 0x82341618;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234161C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,664
	ctx.r8.s64 = 664;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341658;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341660;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4056
	ctx.r28.s64 = ctx.r11.s64 + -4056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341670;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234168c
	if (!ctx.cr6.eq) goto loc_8234168C;
	// bl 0x822900a0
	ctx.lr = 0x82341688;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234168C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823416A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,665
	ctx.r8.s64 = 665;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823416C8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823416D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4036
	ctx.r28.s64 = ctx.r11.s64 + -4036;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823416E0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823416fc
	if (!ctx.cr6.eq) goto loc_823416FC;
	// bl 0x822900a0
	ctx.lr = 0x823416F8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823416FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,666
	ctx.r8.s64 = 666;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341738;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341740;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4016
	ctx.r28.s64 = ctx.r11.s64 + -4016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341750;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234176c
	if (!ctx.cr6.eq) goto loc_8234176C;
	// bl 0x822900a0
	ctx.lr = 0x82341768;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234176C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,667
	ctx.r8.s64 = 667;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823417A8;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x823417B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-4000
	ctx.r28.s64 = ctx.r11.s64 + -4000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823417C0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823417dc
	if (!ctx.cr6.eq) goto loc_823417DC;
	// bl 0x822900a0
	ctx.lr = 0x823417D8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823417DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823417F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,668
	ctx.r8.s64 = 668;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341818;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341820;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-3984
	ctx.r28.s64 = ctx.r11.s64 + -3984;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82341830;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8234184c
	if (!ctx.cr6.eq) goto loc_8234184C;
	// bl 0x822900a0
	ctx.lr = 0x82341848;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_8234184C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,669
	ctx.r8.s64 = 669;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// std r31,4(r29)
	PPC_STORE_U64(ctx.r29.u32 + 4, ctx.r31.u64);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82341888;
	sub_82CAFC18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341890;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-3948
	ctx.r29.s64 = ctx.r11.s64 + -3948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823418A0;
	sub_82CB0EC8(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// addi r7,r3,9
	ctx.r7.s64 = ctx.r3.s64 + 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823418bc
	if (!ctx.cr6.eq) goto loc_823418BC;
	// bl 0x822900a0
	ctx.lr = 0x823418B8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_823418BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823418D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,670
	ctx.r8.s64 = 670;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// std r31,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r31.u64);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bl 0x82cafc18
	ctx.lr = 0x823418F8;
	sub_82CAFC18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233de90
	ctx.lr = 0x82341900;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-3920
	ctx.r3.s64 = ctx.r7.s64 + -3920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,671
	ctx.r4.s64 = 671;
	// bl 0x82343c58
	ctx.lr = 0x82341918;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234191C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-3900
	ctx.r3.s64 = ctx.r5.s64 + -3900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,672
	ctx.r4.s64 = 672;
	// bl 0x82343c58
	ctx.lr = 0x82341934;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341938;
	sub_8233DE90(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-20348
	ctx.r3.s64 = ctx.r4.s64 + -20348;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,673
	ctx.r4.s64 = 673;
	// bl 0x82343c58
	ctx.lr = 0x82341950;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341954;
	sub_8233DE90(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,11628
	ctx.r3.s64 = ctx.r3.s64 + 11628;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,674
	ctx.r4.s64 = 674;
	// bl 0x82343c58
	ctx.lr = 0x8234196C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341970;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3884
	ctx.r3.s64 = ctx.r11.s64 + -3884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,675
	ctx.r4.s64 = 675;
	// bl 0x82343c58
	ctx.lr = 0x82341988;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234198C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3872
	ctx.r3.s64 = ctx.r10.s64 + -3872;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,676
	ctx.r4.s64 = 676;
	// bl 0x82343c58
	ctx.lr = 0x823419A4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823419A8;
	sub_8233DE90(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-22528
	ctx.r3.s64 = ctx.r9.s64 + -22528;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,677
	ctx.r4.s64 = 677;
	// bl 0x82343c58
	ctx.lr = 0x823419C0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823419C4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-3856
	ctx.r3.s64 = ctx.r8.s64 + -3856;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,678
	ctx.r4.s64 = 678;
	// bl 0x82343c58
	ctx.lr = 0x823419DC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823419E0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-3840
	ctx.r3.s64 = ctx.r7.s64 + -3840;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,679
	ctx.r4.s64 = 679;
	// bl 0x82343c58
	ctx.lr = 0x823419F8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823419FC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r3,r5,-3820
	ctx.r3.s64 = ctx.r5.s64 + -3820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,680
	ctx.r4.s64 = 680;
	// bl 0x82343c58
	ctx.lr = 0x82341A14;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341A18;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-3800
	ctx.r3.s64 = ctx.r4.s64 + -3800;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,681
	ctx.r4.s64 = 681;
	// bl 0x82343c58
	ctx.lr = 0x82341A30;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341A34;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-3768
	ctx.r3.s64 = ctx.r3.s64 + -3768;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,682
	ctx.r4.s64 = 682;
	// bl 0x82343c58
	ctx.lr = 0x82341A4C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341A50;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3732
	ctx.r3.s64 = ctx.r11.s64 + -3732;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,683
	ctx.r4.s64 = 683;
	// bl 0x82343c58
	ctx.lr = 0x82341A68;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341A6C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3704
	ctx.r3.s64 = ctx.r10.s64 + -3704;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,684
	ctx.r4.s64 = 684;
	// bl 0x82343c58
	ctx.lr = 0x82341A84;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341A88;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-3676
	ctx.r3.s64 = ctx.r9.s64 + -3676;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,685
	ctx.r4.s64 = 685;
	// bl 0x82343c58
	ctx.lr = 0x82341AA0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341AA4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-3640
	ctx.r3.s64 = ctx.r8.s64 + -3640;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,686
	ctx.r4.s64 = 686;
	// bl 0x82343c58
	ctx.lr = 0x82341ABC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341AC0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-3608
	ctx.r3.s64 = ctx.r7.s64 + -3608;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,687
	ctx.r4.s64 = 687;
	// bl 0x82343c58
	ctx.lr = 0x82341AD8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341ADC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-3576
	ctx.r3.s64 = ctx.r5.s64 + -3576;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,688
	ctx.r4.s64 = 688;
	// bl 0x82343c58
	ctx.lr = 0x82341AF4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341AF8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-3536
	ctx.r3.s64 = ctx.r4.s64 + -3536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,689
	ctx.r4.s64 = 689;
	// bl 0x82343c58
	ctx.lr = 0x82341B10;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341B14;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-3488
	ctx.r3.s64 = ctx.r3.s64 + -3488;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,698
	ctx.r4.s64 = 698;
	// bl 0x82343c58
	ctx.lr = 0x82341B2C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341B30;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3468
	ctx.r3.s64 = ctx.r11.s64 + -3468;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,699
	ctx.r4.s64 = 699;
	// bl 0x82343c58
	ctx.lr = 0x82341B48;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341B4C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3440
	ctx.r3.s64 = ctx.r10.s64 + -3440;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,950
	ctx.r4.s64 = 950;
	// bl 0x82343c58
	ctx.lr = 0x82341B64;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341B68;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-3416
	ctx.r3.s64 = ctx.r9.s64 + -3416;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,951
	ctx.r4.s64 = 951;
	// bl 0x82343c58
	ctx.lr = 0x82341B80;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341B84;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-3396
	ctx.r3.s64 = ctx.r8.s64 + -3396;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,952
	ctx.r4.s64 = 952;
	// bl 0x82343c58
	ctx.lr = 0x82341B9C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341BA0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-3376
	ctx.r3.s64 = ctx.r7.s64 + -3376;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,953
	ctx.r4.s64 = 953;
	// bl 0x82343c58
	ctx.lr = 0x82341BB8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341BBC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-3356
	ctx.r3.s64 = ctx.r5.s64 + -3356;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,954
	ctx.r4.s64 = 954;
	// bl 0x82343c58
	ctx.lr = 0x82341BD4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341BD8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-3328
	ctx.r3.s64 = ctx.r4.s64 + -3328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,955
	ctx.r4.s64 = 955;
	// bl 0x82343c58
	ctx.lr = 0x82341BF0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341BF4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-3308
	ctx.r3.s64 = ctx.r3.s64 + -3308;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,690
	ctx.r4.s64 = 690;
	// bl 0x82343c58
	ctx.lr = 0x82341C0C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C10;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3296
	ctx.r3.s64 = ctx.r11.s64 + -3296;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,691
	ctx.r4.s64 = 691;
	// bl 0x82343c58
	ctx.lr = 0x82341C28;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C2C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3280
	ctx.r3.s64 = ctx.r10.s64 + -3280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,692
	ctx.r4.s64 = 692;
	// bl 0x82343c58
	ctx.lr = 0x82341C44;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C48;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-3260
	ctx.r3.s64 = ctx.r9.s64 + -3260;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,693
	ctx.r4.s64 = 693;
	// bl 0x82343c58
	ctx.lr = 0x82341C60;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C64;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-3240
	ctx.r3.s64 = ctx.r8.s64 + -3240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,694
	ctx.r4.s64 = 694;
	// bl 0x82343c58
	ctx.lr = 0x82341C7C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C80;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-17380
	ctx.r3.s64 = ctx.r7.s64 + -17380;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,695
	ctx.r4.s64 = 695;
	// bl 0x82343c58
	ctx.lr = 0x82341C98;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341C9C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-3216
	ctx.r3.s64 = ctx.r5.s64 + -3216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,696
	ctx.r4.s64 = 696;
	// bl 0x82343c58
	ctx.lr = 0x82341CB4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341CB8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-3204
	ctx.r3.s64 = ctx.r4.s64 + -3204;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,697
	ctx.r4.s64 = 697;
	// bl 0x82343c58
	ctx.lr = 0x82341CD0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341CD4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-3192
	ctx.r3.s64 = ctx.r3.s64 + -3192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,700
	ctx.r4.s64 = 700;
	// bl 0x82343c58
	ctx.lr = 0x82341CEC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341CF0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3172
	ctx.r3.s64 = ctx.r11.s64 + -3172;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,701
	ctx.r4.s64 = 701;
	// bl 0x82343c58
	ctx.lr = 0x82341D08;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D0C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3148
	ctx.r3.s64 = ctx.r10.s64 + -3148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,702
	ctx.r4.s64 = 702;
	// bl 0x82343c58
	ctx.lr = 0x82341D24;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D28;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-3120
	ctx.r3.s64 = ctx.r9.s64 + -3120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,703
	ctx.r4.s64 = 703;
	// bl 0x82343c58
	ctx.lr = 0x82341D40;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D44;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-3108
	ctx.r3.s64 = ctx.r8.s64 + -3108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,704
	ctx.r4.s64 = 704;
	// bl 0x82343c58
	ctx.lr = 0x82341D5C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D60;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-3088
	ctx.r3.s64 = ctx.r7.s64 + -3088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,705
	ctx.r4.s64 = 705;
	// bl 0x82343c58
	ctx.lr = 0x82341D78;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D7C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-3072
	ctx.r3.s64 = ctx.r5.s64 + -3072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,706
	ctx.r4.s64 = 706;
	// bl 0x82343c58
	ctx.lr = 0x82341D94;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341D98;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-3056
	ctx.r3.s64 = ctx.r4.s64 + -3056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,707
	ctx.r4.s64 = 707;
	// bl 0x82343c58
	ctx.lr = 0x82341DB0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341DB4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-3036
	ctx.r3.s64 = ctx.r3.s64 + -3036;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,708
	ctx.r4.s64 = 708;
	// bl 0x82343c58
	ctx.lr = 0x82341DCC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341DD0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3016
	ctx.r3.s64 = ctx.r11.s64 + -3016;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,709
	ctx.r4.s64 = 709;
	// bl 0x82343c58
	ctx.lr = 0x82341DE8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341DEC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-3004
	ctx.r3.s64 = ctx.r10.s64 + -3004;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,710
	ctx.r4.s64 = 710;
	// bl 0x82343c58
	ctx.lr = 0x82341E04;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E08;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2992
	ctx.r3.s64 = ctx.r9.s64 + -2992;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,711
	ctx.r4.s64 = 711;
	// bl 0x82343c58
	ctx.lr = 0x82341E20;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E24;
	sub_8233DE90(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-25336
	ctx.r3.s64 = ctx.r8.s64 + -25336;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,712
	ctx.r4.s64 = 712;
	// bl 0x82343c58
	ctx.lr = 0x82341E3C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E40;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2976
	ctx.r3.s64 = ctx.r7.s64 + -2976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,713
	ctx.r4.s64 = 713;
	// bl 0x82343c58
	ctx.lr = 0x82341E58;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E5C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2956
	ctx.r3.s64 = ctx.r5.s64 + -2956;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,714
	ctx.r4.s64 = 714;
	// bl 0x82343c58
	ctx.lr = 0x82341E74;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E78;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2936
	ctx.r3.s64 = ctx.r4.s64 + -2936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,715
	ctx.r4.s64 = 715;
	// bl 0x82343c58
	ctx.lr = 0x82341E90;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341E94;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2920
	ctx.r3.s64 = ctx.r3.s64 + -2920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,720
	ctx.r4.s64 = 720;
	// bl 0x82343c58
	ctx.lr = 0x82341EAC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341EB0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2912
	ctx.r3.s64 = ctx.r11.s64 + -2912;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,721
	ctx.r4.s64 = 721;
	// bl 0x82343c58
	ctx.lr = 0x82341EC8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341ECC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2900
	ctx.r3.s64 = ctx.r10.s64 + -2900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,722
	ctx.r4.s64 = 722;
	// bl 0x82343c58
	ctx.lr = 0x82341EE4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341EE8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2884
	ctx.r3.s64 = ctx.r9.s64 + -2884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,723
	ctx.r4.s64 = 723;
	// bl 0x82343c58
	ctx.lr = 0x82341F00;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F04;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2872
	ctx.r3.s64 = ctx.r8.s64 + -2872;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,730
	ctx.r4.s64 = 730;
	// bl 0x82343c58
	ctx.lr = 0x82341F1C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F20;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2860
	ctx.r3.s64 = ctx.r7.s64 + -2860;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,731
	ctx.r4.s64 = 731;
	// bl 0x82343c58
	ctx.lr = 0x82341F38;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F3C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2848
	ctx.r3.s64 = ctx.r5.s64 + -2848;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,732
	ctx.r4.s64 = 732;
	// bl 0x82343c58
	ctx.lr = 0x82341F54;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F58;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2840
	ctx.r3.s64 = ctx.r4.s64 + -2840;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,733
	ctx.r4.s64 = 733;
	// bl 0x82343c58
	ctx.lr = 0x82341F70;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F74;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2796
	ctx.r3.s64 = ctx.r3.s64 + -2796;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,740
	ctx.r4.s64 = 740;
	// bl 0x82343c58
	ctx.lr = 0x82341F8C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341F90;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2788
	ctx.r3.s64 = ctx.r11.s64 + -2788;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,742
	ctx.r4.s64 = 742;
	// bl 0x82343c58
	ctx.lr = 0x82341FA8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341FAC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2776
	ctx.r3.s64 = ctx.r10.s64 + -2776;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,743
	ctx.r4.s64 = 743;
	// bl 0x82343c58
	ctx.lr = 0x82341FC4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341FC8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2752
	ctx.r3.s64 = ctx.r9.s64 + -2752;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,744
	ctx.r4.s64 = 744;
	// bl 0x82343c58
	ctx.lr = 0x82341FE0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82341FE4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2736
	ctx.r3.s64 = ctx.r8.s64 + -2736;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,745
	ctx.r4.s64 = 745;
	// bl 0x82343c58
	ctx.lr = 0x82341FFC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342000;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2724
	ctx.r3.s64 = ctx.r7.s64 + -2724;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,746
	ctx.r4.s64 = 746;
	// bl 0x82343c58
	ctx.lr = 0x82342018;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234201C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2692
	ctx.r3.s64 = ctx.r5.s64 + -2692;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,747
	ctx.r4.s64 = 747;
	// bl 0x82343c58
	ctx.lr = 0x82342034;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342038;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2672
	ctx.r3.s64 = ctx.r4.s64 + -2672;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,750
	ctx.r4.s64 = 750;
	// bl 0x82343c58
	ctx.lr = 0x82342050;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342054;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2656
	ctx.r3.s64 = ctx.r3.s64 + -2656;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,751
	ctx.r4.s64 = 751;
	// bl 0x82343c58
	ctx.lr = 0x8234206C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342070;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r11,-2644
	ctx.r3.s64 = ctx.r11.s64 + -2644;
	// bl 0x82343c58
	ctx.lr = 0x82342088;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234208C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2620
	ctx.r3.s64 = ctx.r10.s64 + -2620;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,753
	ctx.r4.s64 = 753;
	// bl 0x82343c58
	ctx.lr = 0x823420A4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823420A8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2608
	ctx.r3.s64 = ctx.r9.s64 + -2608;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,754
	ctx.r4.s64 = 754;
	// bl 0x82343c58
	ctx.lr = 0x823420C0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823420C4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2600
	ctx.r3.s64 = ctx.r8.s64 + -2600;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,755
	ctx.r4.s64 = 755;
	// bl 0x82343c58
	ctx.lr = 0x823420DC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823420E0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2592
	ctx.r3.s64 = ctx.r7.s64 + -2592;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,756
	ctx.r4.s64 = 756;
	// bl 0x82343c58
	ctx.lr = 0x823420F8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823420FC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2572
	ctx.r3.s64 = ctx.r5.s64 + -2572;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,757
	ctx.r4.s64 = 757;
	// bl 0x82343c58
	ctx.lr = 0x82342114;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342118;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2548
	ctx.r3.s64 = ctx.r4.s64 + -2548;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,758
	ctx.r4.s64 = 758;
	// bl 0x82343c58
	ctx.lr = 0x82342130;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342134;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2520
	ctx.r3.s64 = ctx.r3.s64 + -2520;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,759
	ctx.r4.s64 = 759;
	// bl 0x82343c58
	ctx.lr = 0x8234214C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342150;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2504
	ctx.r3.s64 = ctx.r11.s64 + -2504;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,760
	ctx.r4.s64 = 760;
	// bl 0x82343c58
	ctx.lr = 0x82342168;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234216C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2496
	ctx.r3.s64 = ctx.r10.s64 + -2496;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,761
	ctx.r4.s64 = 761;
	// bl 0x82343c58
	ctx.lr = 0x82342184;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342188;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,762
	ctx.r4.s64 = 762;
	// addi r3,r9,-31996
	ctx.r3.s64 = ctx.r9.s64 + -31996;
	// bl 0x82343c58
	ctx.lr = 0x823421A0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823421A4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2476
	ctx.r3.s64 = ctx.r8.s64 + -2476;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,763
	ctx.r4.s64 = 763;
	// bl 0x82343c58
	ctx.lr = 0x823421BC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823421C0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2464
	ctx.r3.s64 = ctx.r7.s64 + -2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,764
	ctx.r4.s64 = 764;
	// bl 0x82343c58
	ctx.lr = 0x823421D8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823421DC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2456
	ctx.r3.s64 = ctx.r5.s64 + -2456;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,765
	ctx.r4.s64 = 765;
	// bl 0x82343c58
	ctx.lr = 0x823421F4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823421F8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2444
	ctx.r3.s64 = ctx.r4.s64 + -2444;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,766
	ctx.r4.s64 = 766;
	// bl 0x82343c58
	ctx.lr = 0x82342210;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342214;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,767
	ctx.r4.s64 = 767;
	// bl 0x82343c58
	ctx.lr = 0x8234222C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342230;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2412
	ctx.r3.s64 = ctx.r11.s64 + -2412;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x82343c58
	ctx.lr = 0x82342248;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234224C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2388
	ctx.r3.s64 = ctx.r10.s64 + -2388;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,769
	ctx.r4.s64 = 769;
	// bl 0x82343c58
	ctx.lr = 0x82342264;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342268;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2360
	ctx.r3.s64 = ctx.r9.s64 + -2360;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,770
	ctx.r4.s64 = 770;
	// bl 0x82343c58
	ctx.lr = 0x82342280;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342284;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2340
	ctx.r3.s64 = ctx.r8.s64 + -2340;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,771
	ctx.r4.s64 = 771;
	// bl 0x82343c58
	ctx.lr = 0x8234229C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823422A0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2332
	ctx.r3.s64 = ctx.r7.s64 + -2332;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,772
	ctx.r4.s64 = 772;
	// bl 0x82343c58
	ctx.lr = 0x823422B8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823422BC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2316
	ctx.r3.s64 = ctx.r5.s64 + -2316;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,773
	ctx.r4.s64 = 773;
	// bl 0x82343c58
	ctx.lr = 0x823422D4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823422D8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r4,-2300
	ctx.r3.s64 = ctx.r4.s64 + -2300;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,774
	ctx.r4.s64 = 774;
	// bl 0x82343c58
	ctx.lr = 0x823422F0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823422F4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2272
	ctx.r3.s64 = ctx.r3.s64 + -2272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,775
	ctx.r4.s64 = 775;
	// bl 0x82343c58
	ctx.lr = 0x8234230C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342310;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2252
	ctx.r3.s64 = ctx.r11.s64 + -2252;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,776
	ctx.r4.s64 = 776;
	// bl 0x82343c58
	ctx.lr = 0x82342328;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234232C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2236
	ctx.r3.s64 = ctx.r10.s64 + -2236;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// bl 0x82343c58
	ctx.lr = 0x82342344;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342348;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2220
	ctx.r3.s64 = ctx.r9.s64 + -2220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,778
	ctx.r4.s64 = 778;
	// bl 0x82343c58
	ctx.lr = 0x82342360;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342364;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2196
	ctx.r3.s64 = ctx.r8.s64 + -2196;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,779
	ctx.r4.s64 = 779;
	// bl 0x82343c58
	ctx.lr = 0x8234237C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342380;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2180
	ctx.r3.s64 = ctx.r7.s64 + -2180;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,780
	ctx.r4.s64 = 780;
	// bl 0x82343c58
	ctx.lr = 0x82342398;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234239C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-2156
	ctx.r3.s64 = ctx.r5.s64 + -2156;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,781
	ctx.r4.s64 = 781;
	// bl 0x82343c58
	ctx.lr = 0x823423B4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823423B8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-2144
	ctx.r3.s64 = ctx.r4.s64 + -2144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,782
	ctx.r4.s64 = 782;
	// bl 0x82343c58
	ctx.lr = 0x823423D0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823423D4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-2124
	ctx.r3.s64 = ctx.r3.s64 + -2124;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,783
	ctx.r4.s64 = 783;
	// bl 0x82343c58
	ctx.lr = 0x823423EC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823423F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-2100
	ctx.r3.s64 = ctx.r11.s64 + -2100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,784
	ctx.r4.s64 = 784;
	// bl 0x82343c58
	ctx.lr = 0x82342408;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234240C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2084
	ctx.r3.s64 = ctx.r10.s64 + -2084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,785
	ctx.r4.s64 = 785;
	// bl 0x82343c58
	ctx.lr = 0x82342424;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342428;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-2056
	ctx.r3.s64 = ctx.r9.s64 + -2056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,786
	ctx.r4.s64 = 786;
	// bl 0x82343c58
	ctx.lr = 0x82342440;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342444;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-2028
	ctx.r3.s64 = ctx.r8.s64 + -2028;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,787
	ctx.r4.s64 = 787;
	// bl 0x82343c58
	ctx.lr = 0x8234245C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342460;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-2008
	ctx.r3.s64 = ctx.r7.s64 + -2008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,788
	ctx.r4.s64 = 788;
	// bl 0x82343c58
	ctx.lr = 0x82342478;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234247C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1996
	ctx.r3.s64 = ctx.r5.s64 + -1996;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,789
	ctx.r4.s64 = 789;
	// bl 0x82343c58
	ctx.lr = 0x82342494;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342498;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1984
	ctx.r3.s64 = ctx.r4.s64 + -1984;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,790
	ctx.r4.s64 = 790;
	// bl 0x82343c58
	ctx.lr = 0x823424B0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823424B4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-1968
	ctx.r3.s64 = ctx.r3.s64 + -1968;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,791
	ctx.r4.s64 = 791;
	// bl 0x82343c58
	ctx.lr = 0x823424CC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823424D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1944
	ctx.r3.s64 = ctx.r11.s64 + -1944;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,792
	ctx.r4.s64 = 792;
	// bl 0x82343c58
	ctx.lr = 0x823424E8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823424EC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12808
	ctx.r3.s64 = ctx.r10.s64 + -12808;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,793
	ctx.r4.s64 = 793;
	// bl 0x82343c58
	ctx.lr = 0x82342504;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342508;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1916
	ctx.r3.s64 = ctx.r9.s64 + -1916;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,794
	ctx.r4.s64 = 794;
	// bl 0x82343c58
	ctx.lr = 0x82342520;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342524;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1892
	ctx.r3.s64 = ctx.r8.s64 + -1892;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,795
	ctx.r4.s64 = 795;
	// bl 0x82343c58
	ctx.lr = 0x8234253C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342540;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1864
	ctx.r3.s64 = ctx.r7.s64 + -1864;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,796
	ctx.r4.s64 = 796;
	// bl 0x82343c58
	ctx.lr = 0x82342558;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234255C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1840
	ctx.r3.s64 = ctx.r5.s64 + -1840;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,797
	ctx.r4.s64 = 797;
	// bl 0x82343c58
	ctx.lr = 0x82342574;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342578;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1824
	ctx.r3.s64 = ctx.r4.s64 + -1824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,798
	ctx.r4.s64 = 798;
	// bl 0x82343c58
	ctx.lr = 0x82342590;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342594;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-1804
	ctx.r3.s64 = ctx.r3.s64 + -1804;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,799
	ctx.r4.s64 = 799;
	// bl 0x82343c58
	ctx.lr = 0x823425AC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823425B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,809
	ctx.r4.s64 = 809;
	// bl 0x82343c58
	ctx.lr = 0x823425C8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823425CC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-1756
	ctx.r3.s64 = ctx.r10.s64 + -1756;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,810
	ctx.r4.s64 = 810;
	// bl 0x82343c58
	ctx.lr = 0x823425E4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823425E8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1748
	ctx.r3.s64 = ctx.r9.s64 + -1748;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,811
	ctx.r4.s64 = 811;
	// bl 0x82343c58
	ctx.lr = 0x82342600;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342604;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1740
	ctx.r3.s64 = ctx.r8.s64 + -1740;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,812
	ctx.r4.s64 = 812;
	// bl 0x82343c58
	ctx.lr = 0x8234261C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342620;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1728
	ctx.r3.s64 = ctx.r7.s64 + -1728;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,813
	ctx.r4.s64 = 813;
	// bl 0x82343c58
	ctx.lr = 0x82342638;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234263C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1704
	ctx.r3.s64 = ctx.r5.s64 + -1704;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,814
	ctx.r4.s64 = 814;
	// bl 0x82343c58
	ctx.lr = 0x82342654;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342658;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1684
	ctx.r3.s64 = ctx.r4.s64 + -1684;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,815
	ctx.r4.s64 = 815;
	// bl 0x82343c58
	ctx.lr = 0x82342670;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342674;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-1644
	ctx.r3.s64 = ctx.r3.s64 + -1644;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,816
	ctx.r4.s64 = 816;
	// bl 0x82343c58
	ctx.lr = 0x8234268C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342690;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1620
	ctx.r3.s64 = ctx.r11.s64 + -1620;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,817
	ctx.r4.s64 = 817;
	// bl 0x82343c58
	ctx.lr = 0x823426A8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823426AC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-1596
	ctx.r3.s64 = ctx.r10.s64 + -1596;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,818
	ctx.r4.s64 = 818;
	// bl 0x82343c58
	ctx.lr = 0x823426C4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823426C8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1568
	ctx.r3.s64 = ctx.r9.s64 + -1568;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,819
	ctx.r4.s64 = 819;
	// bl 0x82343c58
	ctx.lr = 0x823426E0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823426E4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1552
	ctx.r3.s64 = ctx.r8.s64 + -1552;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,854
	ctx.r4.s64 = 854;
	// bl 0x82343c58
	ctx.lr = 0x823426FC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342700;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1524
	ctx.r3.s64 = ctx.r7.s64 + -1524;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,800
	ctx.r4.s64 = 800;
	// bl 0x82343c58
	ctx.lr = 0x82342718;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234271C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1512
	ctx.r3.s64 = ctx.r5.s64 + -1512;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,801
	ctx.r4.s64 = 801;
	// bl 0x82343c58
	ctx.lr = 0x82342734;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342738;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1500
	ctx.r3.s64 = ctx.r4.s64 + -1500;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,802
	ctx.r4.s64 = 802;
	// bl 0x82343c58
	ctx.lr = 0x82342750;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342754;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-1492
	ctx.r3.s64 = ctx.r3.s64 + -1492;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,803
	ctx.r4.s64 = 803;
	// bl 0x82343c58
	ctx.lr = 0x8234276C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342770;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,804
	ctx.r4.s64 = 804;
	// bl 0x82343c58
	ctx.lr = 0x82342788;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234278C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-1468
	ctx.r3.s64 = ctx.r10.s64 + -1468;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,805
	ctx.r4.s64 = 805;
	// bl 0x82343c58
	ctx.lr = 0x823427A4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823427A8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1456
	ctx.r3.s64 = ctx.r9.s64 + -1456;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,806
	ctx.r4.s64 = 806;
	// bl 0x82343c58
	ctx.lr = 0x823427C0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823427C4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1440
	ctx.r3.s64 = ctx.r8.s64 + -1440;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,807
	ctx.r4.s64 = 807;
	// bl 0x82343c58
	ctx.lr = 0x823427DC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823427E0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1424
	ctx.r3.s64 = ctx.r7.s64 + -1424;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,808
	ctx.r4.s64 = 808;
	// bl 0x82343c58
	ctx.lr = 0x823427F8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823427FC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1396
	ctx.r3.s64 = ctx.r5.s64 + -1396;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,820
	ctx.r4.s64 = 820;
	// bl 0x82343c58
	ctx.lr = 0x82342814;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342818;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1380
	ctx.r3.s64 = ctx.r4.s64 + -1380;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,821
	ctx.r4.s64 = 821;
	// bl 0x82343c58
	ctx.lr = 0x82342830;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342834;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,-1360
	ctx.r3.s64 = ctx.r3.s64 + -1360;
	// li r4,822
	ctx.r4.s64 = 822;
	// bl 0x82343c58
	ctx.lr = 0x8234284C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342850;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1348
	ctx.r3.s64 = ctx.r11.s64 + -1348;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,823
	ctx.r4.s64 = 823;
	// bl 0x82343c58
	ctx.lr = 0x82342868;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234286C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,824
	ctx.r4.s64 = 824;
	// bl 0x82343c58
	ctx.lr = 0x82342884;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342888;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1304
	ctx.r3.s64 = ctx.r9.s64 + -1304;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,825
	ctx.r4.s64 = 825;
	// bl 0x82343c58
	ctx.lr = 0x823428A0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823428A4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1288
	ctx.r3.s64 = ctx.r8.s64 + -1288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,826
	ctx.r4.s64 = 826;
	// bl 0x82343c58
	ctx.lr = 0x823428BC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823428C0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1276
	ctx.r3.s64 = ctx.r7.s64 + -1276;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,827
	ctx.r4.s64 = 827;
	// bl 0x82343c58
	ctx.lr = 0x823428D8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823428DC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-1252
	ctx.r3.s64 = ctx.r5.s64 + -1252;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,828
	ctx.r4.s64 = 828;
	// bl 0x82343c58
	ctx.lr = 0x823428F4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823428F8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1228
	ctx.r3.s64 = ctx.r4.s64 + -1228;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,829
	ctx.r4.s64 = 829;
	// bl 0x82343c58
	ctx.lr = 0x82342910;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342914;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-1200
	ctx.r3.s64 = ctx.r3.s64 + -1200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,830
	ctx.r4.s64 = 830;
	// bl 0x82343c58
	ctx.lr = 0x8234292C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342930;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1176
	ctx.r3.s64 = ctx.r11.s64 + -1176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,831
	ctx.r4.s64 = 831;
	// bl 0x82343c58
	ctx.lr = 0x82342948;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234294C;
	sub_8233DE90(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,832
	ctx.r4.s64 = 832;
	// addi r3,r10,-4864
	ctx.r3.s64 = ctx.r10.s64 + -4864;
	// bl 0x82343c58
	ctx.lr = 0x82342964;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342968;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1152
	ctx.r3.s64 = ctx.r9.s64 + -1152;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,834
	ctx.r4.s64 = 834;
	// bl 0x82343c58
	ctx.lr = 0x82342980;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342984;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-1128
	ctx.r3.s64 = ctx.r8.s64 + -1128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,835
	ctx.r4.s64 = 835;
	// bl 0x82343c58
	ctx.lr = 0x8234299C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823429A0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1108
	ctx.r3.s64 = ctx.r7.s64 + -1108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,836
	ctx.r4.s64 = 836;
	// bl 0x82343c58
	ctx.lr = 0x823429B8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823429BC;
	sub_8233DE90(ctx, base);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,31784
	ctx.r3.s64 = ctx.r5.s64 + 31784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,837
	ctx.r4.s64 = 837;
	// bl 0x82343c58
	ctx.lr = 0x823429D4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823429D8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-1084
	ctx.r3.s64 = ctx.r4.s64 + -1084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,838
	ctx.r4.s64 = 838;
	// bl 0x82343c58
	ctx.lr = 0x823429F0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823429F4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-20456
	ctx.r3.s64 = ctx.r3.s64 + -20456;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,839
	ctx.r4.s64 = 839;
	// bl 0x82343c58
	ctx.lr = 0x82342A0C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A10;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-1068
	ctx.r3.s64 = ctx.r11.s64 + -1068;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,840
	ctx.r4.s64 = 840;
	// bl 0x82343c58
	ctx.lr = 0x82342A28;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A2C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-19972
	ctx.r3.s64 = ctx.r10.s64 + -19972;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1200
	ctx.r4.s64 = 1200;
	// bl 0x82343c58
	ctx.lr = 0x82342A44;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A48;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-1052
	ctx.r3.s64 = ctx.r9.s64 + -1052;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1201
	ctx.r4.s64 = 1201;
	// bl 0x82343c58
	ctx.lr = 0x82342A60;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A64;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1202
	ctx.r4.s64 = 1202;
	// addi r3,r8,-1036
	ctx.r3.s64 = ctx.r8.s64 + -1036;
	// bl 0x82343c58
	ctx.lr = 0x82342A7C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A80;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-1012
	ctx.r3.s64 = ctx.r7.s64 + -1012;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1203
	ctx.r4.s64 = 1203;
	// bl 0x82343c58
	ctx.lr = 0x82342A98;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342A9C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-988
	ctx.r3.s64 = ctx.r5.s64 + -988;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,841
	ctx.r4.s64 = 841;
	// bl 0x82343c58
	ctx.lr = 0x82342AB4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342AB8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-976
	ctx.r3.s64 = ctx.r4.s64 + -976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,842
	ctx.r4.s64 = 842;
	// bl 0x82343c58
	ctx.lr = 0x82342AD0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342AD4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-944
	ctx.r3.s64 = ctx.r3.s64 + -944;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,843
	ctx.r4.s64 = 843;
	// bl 0x82343c58
	ctx.lr = 0x82342AEC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342AF0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-920
	ctx.r3.s64 = ctx.r11.s64 + -920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,844
	ctx.r4.s64 = 844;
	// bl 0x82343c58
	ctx.lr = 0x82342B08;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B0C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-888
	ctx.r3.s64 = ctx.r10.s64 + -888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,845
	ctx.r4.s64 = 845;
	// bl 0x82343c58
	ctx.lr = 0x82342B24;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B28;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-856
	ctx.r3.s64 = ctx.r9.s64 + -856;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,846
	ctx.r4.s64 = 846;
	// bl 0x82343c58
	ctx.lr = 0x82342B40;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B44;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-844
	ctx.r3.s64 = ctx.r8.s64 + -844;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,847
	ctx.r4.s64 = 847;
	// bl 0x82343c58
	ctx.lr = 0x82342B5C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B60;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-836
	ctx.r3.s64 = ctx.r7.s64 + -836;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,848
	ctx.r4.s64 = 848;
	// bl 0x82343c58
	ctx.lr = 0x82342B78;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B7C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-812
	ctx.r3.s64 = ctx.r5.s64 + -812;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,849
	ctx.r4.s64 = 849;
	// bl 0x82343c58
	ctx.lr = 0x82342B94;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342B98;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-792
	ctx.r3.s64 = ctx.r4.s64 + -792;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,850
	ctx.r4.s64 = 850;
	// bl 0x82343c58
	ctx.lr = 0x82342BB0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342BB4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-768
	ctx.r3.s64 = ctx.r3.s64 + -768;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,851
	ctx.r4.s64 = 851;
	// bl 0x82343c58
	ctx.lr = 0x82342BCC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342BD0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,852
	ctx.r4.s64 = 852;
	// bl 0x82343c58
	ctx.lr = 0x82342BE8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342BEC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-724
	ctx.r3.s64 = ctx.r10.s64 + -724;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,853
	ctx.r4.s64 = 853;
	// bl 0x82343c58
	ctx.lr = 0x82342C04;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C08;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-700
	ctx.r3.s64 = ctx.r9.s64 + -700;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,865
	ctx.r4.s64 = 865;
	// bl 0x82343c58
	ctx.lr = 0x82342C20;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C24;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-676
	ctx.r3.s64 = ctx.r8.s64 + -676;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,866
	ctx.r4.s64 = 866;
	// bl 0x82343c58
	ctx.lr = 0x82342C3C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C40;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-660
	ctx.r3.s64 = ctx.r7.s64 + -660;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,867
	ctx.r4.s64 = 867;
	// bl 0x82343c58
	ctx.lr = 0x82342C58;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C5C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-644
	ctx.r3.s64 = ctx.r5.s64 + -644;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,868
	ctx.r4.s64 = 868;
	// bl 0x82343c58
	ctx.lr = 0x82342C74;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C78;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-624
	ctx.r3.s64 = ctx.r4.s64 + -624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,870
	ctx.r4.s64 = 870;
	// bl 0x82343c58
	ctx.lr = 0x82342C90;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342C94;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-612
	ctx.r3.s64 = ctx.r3.s64 + -612;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,871
	ctx.r4.s64 = 871;
	// bl 0x82343c58
	ctx.lr = 0x82342CAC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342CB0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-596
	ctx.r3.s64 = ctx.r11.s64 + -596;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,872
	ctx.r4.s64 = 872;
	// bl 0x82343c58
	ctx.lr = 0x82342CC8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342CCC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-580
	ctx.r3.s64 = ctx.r10.s64 + -580;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,873
	ctx.r4.s64 = 873;
	// bl 0x82343c58
	ctx.lr = 0x82342CE4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342CE8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-560
	ctx.r3.s64 = ctx.r9.s64 + -560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,874
	ctx.r4.s64 = 874;
	// bl 0x82343c58
	ctx.lr = 0x82342D00;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D04;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-540
	ctx.r3.s64 = ctx.r8.s64 + -540;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,875
	ctx.r4.s64 = 875;
	// bl 0x82343c58
	ctx.lr = 0x82342D1C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D20;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-516
	ctx.r3.s64 = ctx.r7.s64 + -516;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,876
	ctx.r4.s64 = 876;
	// bl 0x82343c58
	ctx.lr = 0x82342D38;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D3C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-504
	ctx.r3.s64 = ctx.r5.s64 + -504;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,900
	ctx.r4.s64 = 900;
	// bl 0x82343c58
	ctx.lr = 0x82342D54;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D58;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-464
	ctx.r3.s64 = ctx.r4.s64 + -464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,901
	ctx.r4.s64 = 901;
	// bl 0x82343c58
	ctx.lr = 0x82342D70;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D74;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-440
	ctx.r3.s64 = ctx.r3.s64 + -440;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,902
	ctx.r4.s64 = 902;
	// bl 0x82343c58
	ctx.lr = 0x82342D8C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342D90;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-400
	ctx.r3.s64 = ctx.r11.s64 + -400;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,903
	ctx.r4.s64 = 903;
	// bl 0x82343c58
	ctx.lr = 0x82342DA8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342DAC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-376
	ctx.r3.s64 = ctx.r10.s64 + -376;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,904
	ctx.r4.s64 = 904;
	// bl 0x82343c58
	ctx.lr = 0x82342DC4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342DC8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-340
	ctx.r3.s64 = ctx.r9.s64 + -340;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,905
	ctx.r4.s64 = 905;
	// bl 0x82343c58
	ctx.lr = 0x82342DE0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342DE4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-320
	ctx.r3.s64 = ctx.r8.s64 + -320;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,906
	ctx.r4.s64 = 906;
	// bl 0x82343c58
	ctx.lr = 0x82342DFC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E00;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-276
	ctx.r3.s64 = ctx.r7.s64 + -276;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,907
	ctx.r4.s64 = 907;
	// bl 0x82343c58
	ctx.lr = 0x82342E18;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E1C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-232
	ctx.r3.s64 = ctx.r5.s64 + -232;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82343c58
	ctx.lr = 0x82342E34;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E38;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-200
	ctx.r3.s64 = ctx.r4.s64 + -200;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1001
	ctx.r4.s64 = 1001;
	// bl 0x82343c58
	ctx.lr = 0x82342E50;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E54;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-156
	ctx.r3.s64 = ctx.r3.s64 + -156;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1002
	ctx.r4.s64 = 1002;
	// bl 0x82343c58
	ctx.lr = 0x82342E6C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E70;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1003
	ctx.r4.s64 = 1003;
	// bl 0x82343c58
	ctx.lr = 0x82342E88;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342E8C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-64
	ctx.r3.s64 = ctx.r10.s64 + -64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1004
	ctx.r4.s64 = 1004;
	// bl 0x82343c58
	ctx.lr = 0x82342EA4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342EA8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-20
	ctx.r3.s64 = ctx.r9.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1005
	ctx.r4.s64 = 1005;
	// bl 0x82343c58
	ctx.lr = 0x82342EC0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342EC4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,32
	ctx.r3.s64 = ctx.r8.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1006
	ctx.r4.s64 = 1006;
	// bl 0x82343c58
	ctx.lr = 0x82342EDC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342EE0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,44
	ctx.r3.s64 = ctx.r7.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1007
	ctx.r4.s64 = 1007;
	// bl 0x82343c58
	ctx.lr = 0x82342EF8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342EFC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1008
	ctx.r4.s64 = 1008;
	// bl 0x82343c58
	ctx.lr = 0x82342F14;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342F18;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,80
	ctx.r3.s64 = ctx.r4.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1100
	ctx.r4.s64 = 1100;
	// bl 0x82343c58
	ctx.lr = 0x82342F30;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342F34;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1101
	ctx.r4.s64 = 1101;
	// bl 0x82343c58
	ctx.lr = 0x82342F4C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342F50;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1102
	ctx.r4.s64 = 1102;
	// bl 0x82343c58
	ctx.lr = 0x82342F68;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342F6C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,176
	ctx.r3.s64 = ctx.r10.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1103
	ctx.r4.s64 = 1103;
	// bl 0x82343c58
	ctx.lr = 0x82342F84;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342F88;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,228
	ctx.r3.s64 = ctx.r9.s64 + 228;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1104
	ctx.r4.s64 = 1104;
	// bl 0x82343c58
	ctx.lr = 0x82342FA0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342FA4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,272
	ctx.r3.s64 = ctx.r8.s64 + 272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1105
	ctx.r4.s64 = 1105;
	// bl 0x82343c58
	ctx.lr = 0x82342FBC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342FC0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,328
	ctx.r3.s64 = ctx.r7.s64 + 328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1106
	ctx.r4.s64 = 1106;
	// bl 0x82343c58
	ctx.lr = 0x82342FD8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342FDC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,356
	ctx.r3.s64 = ctx.r5.s64 + 356;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1107
	ctx.r4.s64 = 1107;
	// bl 0x82343c58
	ctx.lr = 0x82342FF4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82342FF8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,380
	ctx.r3.s64 = ctx.r4.s64 + 380;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1108
	ctx.r4.s64 = 1108;
	// bl 0x82343c58
	ctx.lr = 0x82343010;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343014;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,400
	ctx.r3.s64 = ctx.r3.s64 + 400;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1109
	ctx.r4.s64 = 1109;
	// bl 0x82343c58
	ctx.lr = 0x8234302C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343030;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1110
	ctx.r4.s64 = 1110;
	// bl 0x82343c58
	ctx.lr = 0x82343048;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234304C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,480
	ctx.r3.s64 = ctx.r10.s64 + 480;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1111
	ctx.r4.s64 = 1111;
	// bl 0x82343c58
	ctx.lr = 0x82343064;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343068;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,500
	ctx.r3.s64 = ctx.r9.s64 + 500;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1112
	ctx.r4.s64 = 1112;
	// bl 0x82343c58
	ctx.lr = 0x82343080;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343084;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,536
	ctx.r3.s64 = ctx.r8.s64 + 536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1113
	ctx.r4.s64 = 1113;
	// bl 0x82343c58
	ctx.lr = 0x8234309C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823430A0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,576
	ctx.r3.s64 = ctx.r7.s64 + 576;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1114
	ctx.r4.s64 = 1114;
	// bl 0x82343c58
	ctx.lr = 0x823430B8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823430BC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,612
	ctx.r3.s64 = ctx.r5.s64 + 612;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1115
	ctx.r4.s64 = 1115;
	// bl 0x82343c58
	ctx.lr = 0x823430D4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823430D8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,656
	ctx.r3.s64 = ctx.r4.s64 + 656;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1116
	ctx.r4.s64 = 1116;
	// bl 0x82343c58
	ctx.lr = 0x823430F0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823430F4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,688
	ctx.r3.s64 = ctx.r3.s64 + 688;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x82343c58
	ctx.lr = 0x8234310C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343110;
	sub_8233DE90(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,32060
	ctx.r3.s64 = ctx.r11.s64 + 32060;
	// li r4,301
	ctx.r4.s64 = 301;
	// bl 0x82343c58
	ctx.lr = 0x82343128;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234312C;
	sub_8233DE90(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,32656
	ctx.r3.s64 = ctx.r10.s64 + 32656;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,302
	ctx.r4.s64 = 302;
	// bl 0x82343c58
	ctx.lr = 0x82343144;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343148;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-31144
	ctx.r3.s64 = ctx.r9.s64 + -31144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,303
	ctx.r4.s64 = 303;
	// bl 0x82343c58
	ctx.lr = 0x82343160;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343164;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,716
	ctx.r3.s64 = ctx.r8.s64 + 716;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,304
	ctx.r4.s64 = 304;
	// bl 0x82343c58
	ctx.lr = 0x8234317C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343180;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,744
	ctx.r3.s64 = ctx.r7.s64 + 744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,305
	ctx.r4.s64 = 305;
	// bl 0x82343c58
	ctx.lr = 0x82343198;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234319C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,772
	ctx.r3.s64 = ctx.r5.s64 + 772;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,306
	ctx.r4.s64 = 306;
	// bl 0x82343c58
	ctx.lr = 0x823431B4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823431B8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,788
	ctx.r3.s64 = ctx.r4.s64 + 788;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,307
	ctx.r4.s64 = 307;
	// bl 0x82343c58
	ctx.lr = 0x823431D0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823431D4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-14952
	ctx.r3.s64 = ctx.r3.s64 + -14952;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x82343c58
	ctx.lr = 0x823431EC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823431F0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,309
	ctx.r4.s64 = 309;
	// bl 0x82343c58
	ctx.lr = 0x82343208;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234320C;
	sub_8233DE90(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,32432
	ctx.r3.s64 = ctx.r10.s64 + 32432;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,310
	ctx.r4.s64 = 310;
	// bl 0x82343c58
	ctx.lr = 0x82343224;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343228;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,311
	ctx.r4.s64 = 311;
	// addi r3,r9,-31372
	ctx.r3.s64 = ctx.r9.s64 + -31372;
	// bl 0x82343c58
	ctx.lr = 0x82343240;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343244;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-29336
	ctx.r3.s64 = ctx.r8.s64 + -29336;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82343c58
	ctx.lr = 0x8234325C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343260;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-26436
	ctx.r3.s64 = ctx.r7.s64 + -26436;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,313
	ctx.r4.s64 = 313;
	// bl 0x82343c58
	ctx.lr = 0x82343278;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234327C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-26268
	ctx.r3.s64 = ctx.r5.s64 + -26268;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,314
	ctx.r4.s64 = 314;
	// bl 0x82343c58
	ctx.lr = 0x82343294;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343298;
	sub_8233DE90(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,30740
	ctx.r3.s64 = ctx.r4.s64 + 30740;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,315
	ctx.r4.s64 = 315;
	// bl 0x82343c58
	ctx.lr = 0x823432B0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823432B4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,808
	ctx.r3.s64 = ctx.r3.s64 + 808;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,316
	ctx.r4.s64 = 316;
	// bl 0x82343c58
	ctx.lr = 0x823432CC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823432D0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,317
	ctx.r4.s64 = 317;
	// bl 0x82343c58
	ctx.lr = 0x823432E8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823432EC;
	sub_8233DE90(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,30400
	ctx.r3.s64 = ctx.r10.s64 + 30400;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,318
	ctx.r4.s64 = 318;
	// bl 0x82343c58
	ctx.lr = 0x82343304;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343308;
	sub_8233DE90(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,30384
	ctx.r3.s64 = ctx.r9.s64 + 30384;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,319
	ctx.r4.s64 = 319;
	// bl 0x82343c58
	ctx.lr = 0x82343320;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343324;
	sub_8233DE90(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,32080
	ctx.r3.s64 = ctx.r8.s64 + 32080;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x82343c58
	ctx.lr = 0x8234333C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343340;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,321
	ctx.r4.s64 = 321;
	// addi r3,r7,852
	ctx.r3.s64 = ctx.r7.s64 + 852;
	// bl 0x82343c58
	ctx.lr = 0x82343358;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234335C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,880
	ctx.r3.s64 = ctx.r5.s64 + 880;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,322
	ctx.r4.s64 = 322;
	// bl 0x82343c58
	ctx.lr = 0x82343374;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343378;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,908
	ctx.r3.s64 = ctx.r4.s64 + 908;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,323
	ctx.r4.s64 = 323;
	// bl 0x82343c58
	ctx.lr = 0x82343390;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343394;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,936
	ctx.r3.s64 = ctx.r3.s64 + 936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,324
	ctx.r4.s64 = 324;
	// bl 0x82343c58
	ctx.lr = 0x823433AC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823433B0;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,964
	ctx.r3.s64 = ctx.r11.s64 + 964;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,325
	ctx.r4.s64 = 325;
	// bl 0x82343c58
	ctx.lr = 0x823433C8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823433CC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,992
	ctx.r3.s64 = ctx.r10.s64 + 992;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,326
	ctx.r4.s64 = 326;
	// bl 0x82343c58
	ctx.lr = 0x823433E4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823433E8;
	sub_8233DE90(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,32308
	ctx.r3.s64 = ctx.r9.s64 + 32308;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,327
	ctx.r4.s64 = 327;
	// bl 0x82343c58
	ctx.lr = 0x82343400;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343404;
	sub_8233DE90(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,32280
	ctx.r3.s64 = ctx.r8.s64 + 32280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,328
	ctx.r4.s64 = 328;
	// bl 0x82343c58
	ctx.lr = 0x8234341C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343420;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,1020
	ctx.r3.s64 = ctx.r7.s64 + 1020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,329
	ctx.r4.s64 = 329;
	// bl 0x82343c58
	ctx.lr = 0x82343438;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234343C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-32136
	ctx.r3.s64 = ctx.r5.s64 + -32136;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,330
	ctx.r4.s64 = 330;
	// bl 0x82343c58
	ctx.lr = 0x82343454;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343458;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-28920
	ctx.r3.s64 = ctx.r4.s64 + -28920;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,331
	ctx.r4.s64 = 331;
	// bl 0x82343c58
	ctx.lr = 0x82343470;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343474;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-29472
	ctx.r3.s64 = ctx.r3.s64 + -29472;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,332
	ctx.r4.s64 = 332;
	// bl 0x82343c58
	ctx.lr = 0x8234348C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343490;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-31088
	ctx.r3.s64 = ctx.r11.s64 + -31088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,333
	ctx.r4.s64 = 333;
	// bl 0x82343c58
	ctx.lr = 0x823434A8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823434AC;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,1044
	ctx.r3.s64 = ctx.r10.s64 + 1044;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,334
	ctx.r4.s64 = 334;
	// bl 0x82343c58
	ctx.lr = 0x823434C4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823434C8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-29436
	ctx.r3.s64 = ctx.r9.s64 + -29436;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,335
	ctx.r4.s64 = 335;
	// bl 0x82343c58
	ctx.lr = 0x823434E0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823434E4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-26464
	ctx.r3.s64 = ctx.r8.s64 + -26464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,336
	ctx.r4.s64 = 336;
	// bl 0x82343c58
	ctx.lr = 0x823434FC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343500;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-29236
	ctx.r3.s64 = ctx.r7.s64 + -29236;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,337
	ctx.r4.s64 = 337;
	// bl 0x82343c58
	ctx.lr = 0x82343518;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234351C;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-31044
	ctx.r3.s64 = ctx.r5.s64 + -31044;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,338
	ctx.r4.s64 = 338;
	// bl 0x82343c58
	ctx.lr = 0x82343534;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343538;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,1068
	ctx.r3.s64 = ctx.r4.s64 + 1068;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,339
	ctx.r4.s64 = 339;
	// bl 0x82343c58
	ctx.lr = 0x82343550;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343554;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-28084
	ctx.r3.s64 = ctx.r3.s64 + -28084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,340
	ctx.r4.s64 = 340;
	// bl 0x82343c58
	ctx.lr = 0x8234356C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343570;
	sub_8233DE90(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,341
	ctx.r4.s64 = 341;
	// bl 0x82343c58
	ctx.lr = 0x82343588;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234358C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-32076
	ctx.r3.s64 = ctx.r10.s64 + -32076;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,342
	ctx.r4.s64 = 342;
	// bl 0x82343c58
	ctx.lr = 0x823435A4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823435A8;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,1096
	ctx.r3.s64 = ctx.r9.s64 + 1096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,343
	ctx.r4.s64 = 343;
	// bl 0x82343c58
	ctx.lr = 0x823435C0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823435C4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-28108
	ctx.r3.s64 = ctx.r8.s64 + -28108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,344
	ctx.r4.s64 = 344;
	// bl 0x82343c58
	ctx.lr = 0x823435DC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823435E0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,-26892
	ctx.r3.s64 = ctx.r7.s64 + -26892;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,346
	ctx.r4.s64 = 346;
	// bl 0x82343c58
	ctx.lr = 0x823435F8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823435FC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,1128
	ctx.r3.s64 = ctx.r5.s64 + 1128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,347
	ctx.r4.s64 = 347;
	// bl 0x82343c58
	ctx.lr = 0x82343614;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343618;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,-30900
	ctx.r3.s64 = ctx.r4.s64 + -30900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,348
	ctx.r4.s64 = 348;
	// bl 0x82343c58
	ctx.lr = 0x82343630;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343634;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-30436
	ctx.r3.s64 = ctx.r3.s64 + -30436;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,349
	ctx.r4.s64 = 349;
	// bl 0x82343c58
	ctx.lr = 0x8234364C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343650;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,1164
	ctx.r3.s64 = ctx.r11.s64 + 1164;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,350
	ctx.r4.s64 = 350;
	// bl 0x82343c58
	ctx.lr = 0x82343668;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234366C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-30644
	ctx.r3.s64 = ctx.r10.s64 + -30644;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,351
	ctx.r4.s64 = 351;
	// bl 0x82343c58
	ctx.lr = 0x82343684;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343688;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-30536
	ctx.r3.s64 = ctx.r9.s64 + -30536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// bl 0x82343c58
	ctx.lr = 0x823436A0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823436A4;
	sub_8233DE90(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,-30596
	ctx.r3.s64 = ctx.r8.s64 + -30596;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,353
	ctx.r4.s64 = 353;
	// bl 0x82343c58
	ctx.lr = 0x823436BC;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823436C0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,1192
	ctx.r3.s64 = ctx.r7.s64 + 1192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,354
	ctx.r4.s64 = 354;
	// bl 0x82343c58
	ctx.lr = 0x823436D8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823436DC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-28900
	ctx.r3.s64 = ctx.r5.s64 + -28900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,355
	ctx.r4.s64 = 355;
	// bl 0x82343c58
	ctx.lr = 0x823436F4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823436F8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,1220
	ctx.r3.s64 = ctx.r4.s64 + 1220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,356
	ctx.r4.s64 = 356;
	// bl 0x82343c58
	ctx.lr = 0x82343710;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343714;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,-29108
	ctx.r3.s64 = ctx.r3.s64 + -29108;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,357
	ctx.r4.s64 = 357;
	// bl 0x82343c58
	ctx.lr = 0x8234372C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343730;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,358
	ctx.r4.s64 = 358;
	// bl 0x82343c58
	ctx.lr = 0x82343748;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234374C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-29372
	ctx.r3.s64 = ctx.r10.s64 + -29372;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,359
	ctx.r4.s64 = 359;
	// bl 0x82343c58
	ctx.lr = 0x82343764;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343768;
	sub_8233DE90(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,30048
	ctx.r3.s64 = ctx.r9.s64 + 30048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// bl 0x82343c58
	ctx.lr = 0x82343780;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343784;
	sub_8233DE90(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r8,30088
	ctx.r3.s64 = ctx.r8.s64 + 30088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,361
	ctx.r4.s64 = 361;
	// bl 0x82343c58
	ctx.lr = 0x8234379C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823437A0;
	sub_8233DE90(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r7,1276
	ctx.r3.s64 = ctx.r7.s64 + 1276;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,362
	ctx.r4.s64 = 362;
	// bl 0x82343c58
	ctx.lr = 0x823437B8;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823437BC;
	sub_8233DE90(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r5,-17084
	ctx.r3.s64 = ctx.r5.s64 + -17084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,363
	ctx.r4.s64 = 363;
	// bl 0x82343c58
	ctx.lr = 0x823437D4;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823437D8;
	sub_8233DE90(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r4,1304
	ctx.r3.s64 = ctx.r4.s64 + 1304;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82343c58
	ctx.lr = 0x823437F0;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x823437F4;
	sub_8233DE90(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,1352
	ctx.r3.s64 = ctx.r3.s64 + 1352;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,401
	ctx.r4.s64 = 401;
	// bl 0x82343c58
	ctx.lr = 0x8234380C;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343810;
	sub_8233DE90(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,402
	ctx.r4.s64 = 402;
	// bl 0x82343c58
	ctx.lr = 0x82343828;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x8234382C;
	sub_8233DE90(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,1444
	ctx.r3.s64 = ctx.r10.s64 + 1444;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,403
	ctx.r4.s64 = 403;
	// bl 0x82343c58
	ctx.lr = 0x82343844;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343848;
	sub_8233DE90(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,1464
	ctx.r3.s64 = ctx.r9.s64 + 1464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,404
	ctx.r4.s64 = 404;
	// bl 0x82343c58
	ctx.lr = 0x82343860;
	sub_82343C58(ctx, base);
	// bl 0x8233de90
	ctx.lr = 0x82343864;
	sub_8233DE90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234386C"))) PPC_WEAK_FUNC(sub_8234386C);
PPC_FUNC_IMPL(__imp__sub_8234386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343870"))) PPC_WEAK_FUNC(sub_82343870);
PPC_FUNC_IMPL(__imp__sub_82343870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82343878;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
	// addi r30,r11,-15944
	ctx.r30.s64 = ctx.r11.s64 + -15944;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823438f0
	if (!ctx.cr6.gt) goto loc_823438F0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823438A0:
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823438e0
	if (ctx.cr6.eq) goto loc_823438E0;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823438c4
	if (!ctx.cr6.eq) goto loc_823438C4;
	// bl 0x822900a0
	ctx.lr = 0x823438C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_823438C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823438D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_823438E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823438a0
	if (ctx.cr6.lt) goto loc_823438A0;
loc_823438F0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234395c
	if (ctx.cr6.eq) goto loc_8234395C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82343958
	if (ctx.cr6.eq) goto loc_82343958;
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82343924
	if (!ctx.cr6.eq) goto loc_82343924;
	// bl 0x822900a0
	ctx.lr = 0x82343920;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28888);
loc_82343924:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r11,17912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17912, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82343958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234395C:
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,17912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17912, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234396C"))) PPC_WEAK_FUNC(sub_8234396C);
PPC_FUNC_IMPL(__imp__sub_8234396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343970"))) PPC_WEAK_FUNC(sub_82343970);
PPC_FUNC_IMPL(__imp__sub_82343970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82343978;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,32016
	ctx.r28.s64 = ctx.r11.s64 + 32016;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,4096
	ctx.r27.s64 = 4096;
loc_82343998:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823439cc
	if (ctx.cr6.eq) goto loc_823439CC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_823439A8:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82cb0ec8
	ctx.lr = 0x823439B4;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne cr6,0x823439a8
	if (!ctx.cr6.eq) goto loc_823439A8;
loc_823439CC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82343998
	if (!ctx.cr0.eq) goto loc_82343998;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r4,r11,1488
	ctx.r4.s64 = ctx.r11.s64 + 1488;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d178
	ctx.lr = 0x823439F8;
	sub_8232D178(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343A00"))) PPC_WEAK_FUNC(sub_82343A00);
PPC_FUNC_IMPL(__imp__sub_82343A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82343A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// lhz r11,11272(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 11272);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82cb16f0
	ctx.lr = 0x82343A34;
	sub_82CB16F0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343a80
	ctx.lr = 0x82343A48;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82343a64
	if (ctx.cr6.eq) goto loc_82343A64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822b2a20
	ctx.lr = 0x82343A5C;
	sub_822B2A20(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82343A64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b2a20
	ctx.lr = 0x82343A6C;
	sub_822B2A20(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343A7C"))) PPC_WEAK_FUNC(sub_82343A7C);
PPC_FUNC_IMPL(__imp__sub_82343A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343A80"))) PPC_WEAK_FUNC(sub_82343A80);
PPC_FUNC_IMPL(__imp__sub_82343A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82343A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82cb0ec8
	ctx.lr = 0x82343AA0;
	sub_82CB0EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82343b60
	if (!ctx.cr6.gt) goto loc_82343B60;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x82343b60
	if (ctx.cr6.lt) goto loc_82343B60;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x82343b60
	if (ctx.cr6.gt) goto loc_82343B60;
loc_82343ACC:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x82343aec
	if (ctx.cr6.gt) goto loc_82343AEC;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82343aec
	if (!ctx.cr6.gt) goto loc_82343AEC;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x82343acc
	if (!ctx.cr6.lt) goto loc_82343ACC;
loc_82343AEC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82343b60
	if (!ctx.cr6.eq) goto loc_82343B60;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82343b18
	if (!ctx.cr6.eq) goto loc_82343B18;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82343b60
	if (!ctx.cr6.eq) goto loc_82343B60;
loc_82343B18:
	// bl 0x82cb2688
	ctx.lr = 0x82343B1C;
	sub_82CB2688(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// ble cr6,0x82343b38
	if (!ctx.cr6.gt) goto loc_82343B38;
	// li r31,128
	ctx.r31.s64 = 128;
loc_82343B38:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb2e40
	ctx.lr = 0x82343B48;
	sub_82CB2E40(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sth r28,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r28.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82343B60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343B6C"))) PPC_WEAK_FUNC(sub_82343B6C);
PPC_FUNC_IMPL(__imp__sub_82343B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343B70"))) PPC_WEAK_FUNC(sub_82343B70);
PPC_FUNC_IMPL(__imp__sub_82343B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82343B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343c10
	if (ctx.cr6.eq) goto loc_82343C10;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8232e950
	ctx.lr = 0x82343BA8;
	sub_8232E950(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11272
	ctx.r29.s64 = ctx.r11.s64 + 11272;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343c08
	if (ctx.cr6.eq) goto loc_82343C08;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,127
	ctx.r4.s64 = 127;
	// cmpwi cr6,r31,127
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 127, ctx.xer);
	// bgt cr6,0x82343bd4
	if (ctx.cr6.gt) goto loc_82343BD4;
loc_82343BD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82343BD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1bf0
	ctx.lr = 0x82343BDC;
	sub_822B1BF0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82343bf0
	if (!ctx.cr6.eq) goto loc_82343BF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82343BF0:
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82cafc18
	ctx.lr = 0x82343BF8;
	sub_82CAFC18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82343C00;
	sub_82299080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82343c2c
	goto loc_82343C2C;
loc_82343C08:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82343bd0
	goto loc_82343BD0;
loc_82343C10:
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822960c0
	ctx.lr = 0x82343C1C;
	sub_822960C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232e950
	ctx.lr = 0x82343C28;
	sub_8232E950(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82343C2C:
	// bl 0x82299080
	ctx.lr = 0x82343C30;
	sub_82299080(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343C58"))) PPC_WEAK_FUNC(sub_82343C58);
PPC_FUNC_IMPL(__imp__sub_82343C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82343C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x82343C74;
	sub_82CB0EC8(ctx, base);
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822959a8
	ctx.lr = 0x82343C84;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// std r10,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r10.u64);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82cafc18
	ctx.lr = 0x82343CA4;
	sub_82CAFC18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343CB0"))) PPC_WEAK_FUNC(sub_82343CB0);
PPC_FUNC_IMPL(__imp__sub_82343CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343CBC"))) PPC_WEAK_FUNC(sub_82343CBC);
PPC_FUNC_IMPL(__imp__sub_82343CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343CC0"))) PPC_WEAK_FUNC(sub_82343CC0);
PPC_FUNC_IMPL(__imp__sub_82343CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82343CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-15944
	ctx.r31.s64 = ctx.r11.s64 + -15944;
	// lwz r29,-15944(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15944);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82343d0c
	if (ctx.cr6.eq) goto loc_82343D0C;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82343cf8
	if (!ctx.cr6.eq) goto loc_82343CF8;
	// bl 0x822900a0
	ctx.lr = 0x82343CF4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82343CF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343D0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343D2C"))) PPC_WEAK_FUNC(sub_82343D2C);
PPC_FUNC_IMPL(__imp__sub_82343D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343D30"))) PPC_WEAK_FUNC(sub_82343D30);
PPC_FUNC_IMPL(__imp__sub_82343D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343D4C"))) PPC_WEAK_FUNC(sub_82343D4C);
PPC_FUNC_IMPL(__imp__sub_82343D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343D50"))) PPC_WEAK_FUNC(sub_82343D50);
PPC_FUNC_IMPL(__imp__sub_82343D50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-15944
	ctx.r3.s64 = ctx.r10.s64 + -15944;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343D7C"))) PPC_WEAK_FUNC(sub_82343D7C);
PPC_FUNC_IMPL(__imp__sub_82343D7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343D80"))) PPC_WEAK_FUNC(sub_82343D80);
PPC_FUNC_IMPL(__imp__sub_82343D80) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-15944
	ctx.r31.s64 = ctx.r11.s64 + -15944;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82343DB8;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343dd0
	if (ctx.cr0.eq) goto loc_82343DD0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82343DD0:
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

__attribute__((alias("__imp__sub_82343DF0"))) PPC_WEAK_FUNC(sub_82343DF0);
PPC_FUNC_IMPL(__imp__sub_82343DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r10,-15944
	ctx.r3.s64 = ctx.r10.s64 + -15944;
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343E1C"))) PPC_WEAK_FUNC(sub_82343E1C);
PPC_FUNC_IMPL(__imp__sub_82343E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343E20"))) PPC_WEAK_FUNC(sub_82343E20);
PPC_FUNC_IMPL(__imp__sub_82343E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343E2C"))) PPC_WEAK_FUNC(sub_82343E2C);
PPC_FUNC_IMPL(__imp__sub_82343E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343E30"))) PPC_WEAK_FUNC(sub_82343E30);
PPC_FUNC_IMPL(__imp__sub_82343E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// addi r4,r11,1488
	ctx.r4.s64 = ctx.r11.s64 + 1488;
	// bl 0x8232d178
	ctx.lr = 0x82343E4C;
	sub_8232D178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343E5C"))) PPC_WEAK_FUNC(sub_82343E5C);
PPC_FUNC_IMPL(__imp__sub_82343E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343E60"))) PPC_WEAK_FUNC(sub_82343E60);
PPC_FUNC_IMPL(__imp__sub_82343E60) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r31,-15944
	ctx.r3.s64 = ctx.r31.s64 + -15944;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82343E8C;
	sub_82294AC0(ctx, base);
	// lwz r11,-15944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15944);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82343EAC"))) PPC_WEAK_FUNC(sub_82343EAC);
PPC_FUNC_IMPL(__imp__sub_82343EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343EB0"))) PPC_WEAK_FUNC(sub_82343EB0);
PPC_FUNC_IMPL(__imp__sub_82343EB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343EB8"))) PPC_WEAK_FUNC(sub_82343EB8);
PPC_FUNC_IMPL(__imp__sub_82343EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343EBC"))) PPC_WEAK_FUNC(sub_82343EBC);
PPC_FUNC_IMPL(__imp__sub_82343EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343EC0"))) PPC_WEAK_FUNC(sub_82343EC0);
PPC_FUNC_IMPL(__imp__sub_82343EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82343ECC"))) PPC_WEAK_FUNC(sub_82343ECC);
PPC_FUNC_IMPL(__imp__sub_82343ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343ED0"))) PPC_WEAK_FUNC(sub_82343ED0);
PPC_FUNC_IMPL(__imp__sub_82343ED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cafbe0
	sub_82CAFBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343ED4"))) PPC_WEAK_FUNC(sub_82343ED4);
PPC_FUNC_IMPL(__imp__sub_82343ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343ED8"))) PPC_WEAK_FUNC(sub_82343ED8);
PPC_FUNC_IMPL(__imp__sub_82343ED8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,17912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343f60
	if (ctx.cr6.eq) goto loc_82343F60;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82343f4c
	if (ctx.cr6.lt) goto loc_82343F4C;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r11,r11,-15944
	ctx.r11.s64 = ctx.r11.s64 + -15944;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82343f4c
	if (!ctx.cr6.lt) goto loc_82343F4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82343f4c
	if (ctx.cr6.eq) goto loc_82343F4C;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8233e1a0
	ctx.lr = 0x82343F48;
	sub_8233E1A0(ctx, base);
	// b 0x82343f74
	goto loc_82343F74;
loc_82343F4C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,1588
	ctx.r4.s64 = ctx.r11.s64 + 1588;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82343f70
	goto loc_82343F70;
loc_82343F60:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,1604
	ctx.r4.s64 = ctx.r11.s64 + 1604;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82343F70:
	// bl 0x822960c0
	ctx.lr = 0x82343F74;
	sub_822960C0(ctx, base);
loc_82343F74:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82343F80;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343f98
	if (ctx.cr6.eq) goto loc_82343F98;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82299080
	ctx.lr = 0x82343F98;
	sub_82299080(ctx, base);
loc_82343F98:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343fb0
	if (ctx.cr6.eq) goto loc_82343FB0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x82343FB0;
	sub_82299080(ctx, base);
loc_82343FB0:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343fc4
	if (ctx.cr6.eq) goto loc_82343FC4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82343FC4;
	sub_82299080(ctx, base);
loc_82343FC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82343FE0"))) PPC_WEAK_FUNC(sub_82343FE0);
PPC_FUNC_IMPL(__imp__sub_82343FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// lwz r3,32012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32012);
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

__attribute__((alias("__imp__sub_82343FF8"))) PPC_WEAK_FUNC(sub_82343FF8);
PPC_FUNC_IMPL(__imp__sub_82343FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,-15932
	ctx.r3.s64 = ctx.r8.s64 + -15932;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82344b90
	ctx.lr = 0x82344034;
	sub_82344B90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344044"))) PPC_WEAK_FUNC(sub_82344044);
PPC_FUNC_IMPL(__imp__sub_82344044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344048"))) PPC_WEAK_FUNC(sub_82344048);
PPC_FUNC_IMPL(__imp__sub_82344048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234404C"))) PPC_WEAK_FUNC(sub_8234404C);
PPC_FUNC_IMPL(__imp__sub_8234404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344050"))) PPC_WEAK_FUNC(sub_82344050);
PPC_FUNC_IMPL(__imp__sub_82344050) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344058"))) PPC_WEAK_FUNC(sub_82344058);
PPC_FUNC_IMPL(__imp__sub_82344058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82344060;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82344120
	if (!ctx.cr6.gt) goto loc_82344120;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
loc_82344088:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x823440cc
	if (!ctx.cr6.gt) goto loc_823440CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r31,25276(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25276);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,25276(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25276, ctx.r11.u32);
	// bl 0x822b4a40
	ctx.lr = 0x823440A8;
	sub_822B4A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b4bf8
	ctx.lr = 0x823440B4;
	sub_822B4BF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823440cc
	if (ctx.cr6.eq) goto loc_823440CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b4e58
	ctx.lr = 0x823440C4;
	sub_822B4E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x823440CC;
	sub_82294A58(ctx, base);
loc_823440CC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82344110
	if (!ctx.cr6.gt) goto loc_82344110;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823440E0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823440FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823440e0
	if (ctx.cr6.lt) goto loc_823440E0;
loc_82344110:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82344088
	if (ctx.cr6.lt) goto loc_82344088;
loc_82344120:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-15932
	ctx.r31.s64 = ctx.r11.s64 + -15932;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8234418c
	if (ctx.cr6.eq) goto loc_8234418C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234418c
	if (ctx.cr6.eq) goto loc_8234418C;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234416c
	if (!ctx.cr6.eq) goto loc_8234416C;
	// bl 0x822900a0
	ctx.lr = 0x82344168;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8234416C:
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
	ctx.lr = 0x82344188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8234418C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344198"))) PPC_WEAK_FUNC(sub_82344198);
PPC_FUNC_IMPL(__imp__sub_82344198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823441A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823441e8
	if (!ctx.cr6.gt) goto loc_823441E8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823441BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823441D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823441bc
	if (ctx.cr6.lt) goto loc_823441BC;
loc_823441E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823441F0"))) PPC_WEAK_FUNC(sub_823441F0);
PPC_FUNC_IMPL(__imp__sub_823441F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823441F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82344240
	if (!ctx.cr6.gt) goto loc_82344240;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82344214:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8234422C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82344214
	if (ctx.cr6.lt) goto loc_82344214;
loc_82344240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344248"))) PPC_WEAK_FUNC(sub_82344248);
PPC_FUNC_IMPL(__imp__sub_82344248) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r11,32012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32012);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82344c08
	ctx.lr = 0x8234426C;
	sub_82344C08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234427C"))) PPC_WEAK_FUNC(sub_8234427C);
PPC_FUNC_IMPL(__imp__sub_8234427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344280"))) PPC_WEAK_FUNC(sub_82344280);
PPC_FUNC_IMPL(__imp__sub_82344280) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82344c70
	ctx.lr = 0x8234429C;
	sub_82344C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823442AC"))) PPC_WEAK_FUNC(sub_823442AC);
PPC_FUNC_IMPL(__imp__sub_823442AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823442B0"))) PPC_WEAK_FUNC(sub_823442B0);
PPC_FUNC_IMPL(__imp__sub_823442B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x823442B8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfd f0,-18344(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// addi r7,r10,2128
	ctx.r7.s64 = ctx.r10.s64 + 2128;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r22,-31885
	ctx.r22.s64 = -2089615360;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f13,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r6,-31884
	ctx.r6.s64 = -2089549824;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r21,r6,-3728
	ctx.r21.s64 = ctx.r6.s64 + -3728;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r20,r5,1664
	ctx.r20.s64 = ctx.r5.s64 + 1664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r5,r10,1632
	ctx.r5.s64 = ctx.r10.s64 + 1632;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r27,r31,60
	ctx.r27.s64 = ctx.r31.s64 + 60;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r25,r31,68
	ctx.r25.s64 = ctx.r31.s64 + 68;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r24,r31,72
	ctx.r24.s64 = ctx.r31.s64 + 72;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r23,r31,76
	ctx.r23.s64 = ctx.r31.s64 + 76;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823443C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r9,1700
	ctx.r5.s64 = ctx.r9.s64 + 1700;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823443E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r10,1740
	ctx.r5.s64 = ctx.r10.s64 + 1740;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82344410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r5,r6,1780
	ctx.r5.s64 = ctx.r6.s64 + 1780;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r9,1820
	ctx.r5.s64 = ctx.r9.s64 + 1820;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r10,1876
	ctx.r5.s64 = ctx.r10.s64 + 1876;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82344488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r5,r6,1936
	ctx.r5.s64 = ctx.r6.s64 + 1936;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823444B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r9,2000
	ctx.r5.s64 = ctx.r9.s64 + 2000;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823444D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28876(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28876);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r5,r10,2064
	ctx.r5.s64 = ctx.r10.s64 + 2064;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82344500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r3,20,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFF00000;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r4,r7,20,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r6,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFF00000;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// rlwinm r10,r5,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFF00000;
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234453C"))) PPC_WEAK_FUNC(sub_8234453C);
PPC_FUNC_IMPL(__imp__sub_8234453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344540"))) PPC_WEAK_FUNC(sub_82344540);
PPC_FUNC_IMPL(__imp__sub_82344540) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82344d08
	ctx.lr = 0x82344564;
	sub_82344D08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,15136
	ctx.r9.s64 = ctx.r11.s64 + 15136;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82344588
	if (ctx.cr6.eq) goto loc_82344588;
	// bl 0x82294a58
	ctx.lr = 0x82344584;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82344588:
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

__attribute__((alias("__imp__sub_823445A0"))) PPC_WEAK_FUNC(sub_823445A0);
PPC_FUNC_IMPL(__imp__sub_823445A0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82344d08
	ctx.lr = 0x823445BC;
	sub_82344D08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15136
	ctx.r10.s64 = ctx.r11.s64 + 15136;
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

__attribute__((alias("__imp__sub_823445DC"))) PPC_WEAK_FUNC(sub_823445DC);
PPC_FUNC_IMPL(__imp__sub_823445DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823445E0"))) PPC_WEAK_FUNC(sub_823445E0);
PPC_FUNC_IMPL(__imp__sub_823445E0) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x82344604;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lfd f0,-3832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82344648"))) PPC_WEAK_FUNC(sub_82344648);
PPC_FUNC_IMPL(__imp__sub_82344648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234464C"))) PPC_WEAK_FUNC(sub_8234464C);
PPC_FUNC_IMPL(__imp__sub_8234464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344650"))) PPC_WEAK_FUNC(sub_82344650);
PPC_FUNC_IMPL(__imp__sub_82344650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,2144
	ctx.r10.s64 = ctx.r11.s64 + 2144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344660"))) PPC_WEAK_FUNC(sub_82344660);
PPC_FUNC_IMPL(__imp__sub_82344660) {
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
	// bl 0x822b4df0
	ctx.lr = 0x82344678;
	sub_822B4DF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82344fc0
	ctx.lr = 0x82344680;
	sub_82344FC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_82344688:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823446f4
	if (!ctx.cr6.lt) goto loc_823446F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823446B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823446e4
	if (ctx.cr6.eq) goto loc_823446E4;
loc_823446C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e645c8
	ctx.lr = 0x823446C8;
	sub_82E645C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823446DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823446c0
	if (!ctx.cr6.eq) goto loc_823446C0;
loc_823446E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82345070
	ctx.lr = 0x823446F0;
	sub_82345070(ctx, base);
	// b 0x82344688
	goto loc_82344688;
loc_823446F4:
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

__attribute__((alias("__imp__sub_8234470C"))) PPC_WEAK_FUNC(sub_8234470C);
PPC_FUNC_IMPL(__imp__sub_8234470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344710"))) PPC_WEAK_FUNC(sub_82344710);
PPC_FUNC_IMPL(__imp__sub_82344710) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82344d78
	ctx.lr = 0x8234472C;
	sub_82344D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234473C"))) PPC_WEAK_FUNC(sub_8234473C);
PPC_FUNC_IMPL(__imp__sub_8234473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344740"))) PPC_WEAK_FUNC(sub_82344740);
PPC_FUNC_IMPL(__imp__sub_82344740) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82344de0
	ctx.lr = 0x8234475C;
	sub_82344DE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234476C"))) PPC_WEAK_FUNC(sub_8234476C);
PPC_FUNC_IMPL(__imp__sub_8234476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344770"))) PPC_WEAK_FUNC(sub_82344770);
PPC_FUNC_IMPL(__imp__sub_82344770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82344778;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ae4
	ctx.lr = 0x82344780;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82344954
	if (ctx.cr6.eq) goto loc_82344954;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// fmuls f27,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r23,-31264(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r22,72(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82344954
	if (!ctx.cr6.gt) goto loc_82344954;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f28,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-10804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f30.f64 = double(temp.f32);
loc_823447E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82344954
	if (!ctx.cr6.eq) goto loc_82344954;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x82344e70
	ctx.lr = 0x82344804;
	sub_82344E70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344944
	if (ctx.cr6.eq) goto loc_82344944;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82344944
	if (ctx.cr6.eq) goto loc_82344944;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82344944
	if (!ctx.cr6.gt) goto loc_82344944;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82344828:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82344944
	if (!ctx.cr6.eq) goto loc_82344944;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ble cr6,0x82344934
	if (!ctx.cr6.gt) goto loc_82344934;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82344848:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82344934
	if (!ctx.cr6.eq) goto loc_82344934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmsubs f0,f1,f27,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f27.f64 - ctx.f4.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82344914
	if (!ctx.cr6.gt) goto loc_82344914;
	// frsqrte f13,f0
	ctx.f13.f64 = 1.0 / sqrt(ctx.f0.f64);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fnmsubs f6,f7,f0,f30
	ctx.f6.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fdivs f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f10.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// subfic r4,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r4.s64 = 32 - ctx.r4.s64;
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82344918
	if (!ctx.cr6.lt) goto loc_82344918;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82344918
	goto loc_82344918;
loc_82344914:
	// lwz r31,200(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
loc_82344918:
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82344924
	if (ctx.cr6.lt) goto loc_82344924;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82344924:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82344848
	if (ctx.cr6.lt) goto loc_82344848;
loc_82344934:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,20
	ctx.r6.s64 = ctx.r6.s64 + 20;
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82344828
	if (ctx.cr6.lt) goto loc_82344828;
loc_82344944:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x823447e8
	if (ctx.cr6.lt) goto loc_823447E8;
loc_82344954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b30
	ctx.lr = 0x82344964;
	__restfpr_27(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344968"))) PPC_WEAK_FUNC(sub_82344968);
PPC_FUNC_IMPL(__imp__sub_82344968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,192(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfd f0,24944(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24944);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,-18112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18112);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fsub f11,f0,f12
	ctx.f11.f64 = ctx.f0.f64 - ctx.f12.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823449a8
	if (!ctx.cr6.lt) goto loc_823449A8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_823449A8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// lfs f13,-18084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823449C4"))) PPC_WEAK_FUNC(sub_823449C4);
PPC_FUNC_IMPL(__imp__sub_823449C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823449C8"))) PPC_WEAK_FUNC(sub_823449C8);
PPC_FUNC_IMPL(__imp__sub_823449C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x823449D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r29,72(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82344a24
	if (!ctx.cr6.gt) goto loc_82344A24;
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_823449FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x82344f18
	ctx.lr = 0x82344A0C;
	sub_82344F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82344a30
	if (!ctx.cr6.eq) goto loc_82344A30;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x823449fc
	if (ctx.cr6.lt) goto loc_823449FC;
loc_82344A24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82344A30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344A3C"))) PPC_WEAK_FUNC(sub_82344A3C);
PPC_FUNC_IMPL(__imp__sub_82344A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344A40"))) PPC_WEAK_FUNC(sub_82344A40);
PPC_FUNC_IMPL(__imp__sub_82344A40) {
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
	// bl 0x82345368
	ctx.lr = 0x82344A60;
	sub_82345368(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82344A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82344AB0"))) PPC_WEAK_FUNC(sub_82344AB0);
PPC_FUNC_IMPL(__imp__sub_82344AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,-15932
	ctx.r7.s64 = ctx.r8.s64 + -15932;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,-15932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15932, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344AD8"))) PPC_WEAK_FUNC(sub_82344AD8);
PPC_FUNC_IMPL(__imp__sub_82344AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82344AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-15932
	ctx.r31.s64 = ctx.r11.s64 + -15932;
	// lwz r29,-15932(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15932);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82344b24
	if (ctx.cr6.eq) goto loc_82344B24;
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82344b10
	if (!ctx.cr6.eq) goto loc_82344B10;
	// bl 0x822900a0
	ctx.lr = 0x82344B0C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28888);
loc_82344B10:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82344B24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344B44"))) PPC_WEAK_FUNC(sub_82344B44);
PPC_FUNC_IMPL(__imp__sub_82344B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344B48"))) PPC_WEAK_FUNC(sub_82344B48);
PPC_FUNC_IMPL(__imp__sub_82344B48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82344B60"))) PPC_WEAK_FUNC(sub_82344B60);
PPC_FUNC_IMPL(__imp__sub_82344B60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-15932
	ctx.r3.s64 = ctx.r10.s64 + -15932;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344B8C"))) PPC_WEAK_FUNC(sub_82344B8C);
PPC_FUNC_IMPL(__imp__sub_82344B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344B90"))) PPC_WEAK_FUNC(sub_82344B90);
PPC_FUNC_IMPL(__imp__sub_82344B90) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-15932
	ctx.r30.s64 = ctx.r11.s64 + -15932;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82345150
	ctx.lr = 0x82344BBC;
	sub_82345150(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82344be8
	if (ctx.cr6.eq) goto loc_82344BE8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82344BD4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82344bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82344BD4;
loc_82344BE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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

__attribute__((alias("__imp__sub_82344C08"))) PPC_WEAK_FUNC(sub_82344C08);
PPC_FUNC_IMPL(__imp__sub_82344C08) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82344C38;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344c50
	if (ctx.cr0.eq) goto loc_82344C50;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82344C50:
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

__attribute__((alias("__imp__sub_82344C70"))) PPC_WEAK_FUNC(sub_82344C70);
PPC_FUNC_IMPL(__imp__sub_82344C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82344C78;
	__savegprlr_27(ctx, base);
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
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82344ce0
	if (!ctx.cr6.gt) goto loc_82344CE0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82344C98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82344ccc
	if (!ctx.cr6.eq) goto loc_82344CCC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82344CC4;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82344CCC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82344c98
	if (ctx.cr6.lt) goto loc_82344C98;
loc_82344CE0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344CF0"))) PPC_WEAK_FUNC(sub_82344CF0);
PPC_FUNC_IMPL(__imp__sub_82344CF0) {
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

__attribute__((alias("__imp__sub_82344D04"))) PPC_WEAK_FUNC(sub_82344D04);
PPC_FUNC_IMPL(__imp__sub_82344D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344D08"))) PPC_WEAK_FUNC(sub_82344D08);
PPC_FUNC_IMPL(__imp__sub_82344D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82344D10;
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
	// beq cr6,0x82344d50
	if (ctx.cr6.eq) goto loc_82344D50;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82344d3c
	if (!ctx.cr6.eq) goto loc_82344D3C;
	// bl 0x822900a0
	ctx.lr = 0x82344D38;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82344D3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82344D50:
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

__attribute__((alias("__imp__sub_82344D68"))) PPC_WEAK_FUNC(sub_82344D68);
PPC_FUNC_IMPL(__imp__sub_82344D68) {
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

__attribute__((alias("__imp__sub_82344D78"))) PPC_WEAK_FUNC(sub_82344D78);
PPC_FUNC_IMPL(__imp__sub_82344D78) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82344DA8;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344dc0
	if (ctx.cr0.eq) goto loc_82344DC0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82344DC0:
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

__attribute__((alias("__imp__sub_82344DE0"))) PPC_WEAK_FUNC(sub_82344DE0);
PPC_FUNC_IMPL(__imp__sub_82344DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82344DE8;
	__savegprlr_27(ctx, base);
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
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82344e50
	if (!ctx.cr6.gt) goto loc_82344E50;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82344E08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82344e3c
	if (!ctx.cr6.eq) goto loc_82344E3C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d180
	ctx.lr = 0x82344E34;
	sub_8232D180(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82344E3C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82344e08
	if (ctx.cr6.lt) goto loc_82344E08;
loc_82344E50:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344E60"))) PPC_WEAK_FUNC(sub_82344E60);
PPC_FUNC_IMPL(__imp__sub_82344E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344E64"))) PPC_WEAK_FUNC(sub_82344E64);
PPC_FUNC_IMPL(__imp__sub_82344E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82344E68"))) PPC_WEAK_FUNC(sub_82344E68);
PPC_FUNC_IMPL(__imp__sub_82344E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82344E70"))) PPC_WEAK_FUNC(sub_82344E70);
PPC_FUNC_IMPL(__imp__sub_82344E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82344E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82344ef0
	if (ctx.cr6.eq) goto loc_82344EF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82344ef0
	if (!ctx.cr6.gt) goto loc_82344EF0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x82344EA8;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82344ef0
	if (ctx.cr6.eq) goto loc_82344EF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82344EC8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82344efc
	if (ctx.cr6.eq) goto loc_82344EFC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82344ec8
	if (!ctx.cr6.eq) goto loc_82344EC8;
loc_82344EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82344EFC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344F18"))) PPC_WEAK_FUNC(sub_82344F18);
PPC_FUNC_IMPL(__imp__sub_82344F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82344F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82344f98
	if (ctx.cr6.eq) goto loc_82344F98;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82344f98
	if (!ctx.cr6.gt) goto loc_82344F98;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x82344F50;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82344f98
	if (ctx.cr6.eq) goto loc_82344F98;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82344F70:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82344fa4
	if (ctx.cr6.eq) goto loc_82344FA4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82344f70
	if (!ctx.cr6.eq) goto loc_82344F70;
loc_82344F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82344FA4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82344FC0"))) PPC_WEAK_FUNC(sub_82344FC0);
PPC_FUNC_IMPL(__imp__sub_82344FC0) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345000
	if (!ctx.cr6.eq) goto loc_82345000;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826dd5e8
	ctx.lr = 0x82344FF4;
	sub_826DD5E8(ctx, base);
	// stw r3,-27712(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27712, ctx.r3.u32);
	// bl 0x826dd6a8
	ctx.lr = 0x82344FFC;
	sub_826DD6A8(ctx, base);
	// lwz r11,-27712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27712);
loc_82345000:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x82345014;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82345054
	if (!ctx.cr6.lt) goto loc_82345054;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82345054
	if (ctx.cr6.eq) goto loc_82345054;
	// bl 0x82345070
	ctx.lr = 0x82345050;
	sub_82345070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82345054:
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

__attribute__((alias("__imp__sub_8234506C"))) PPC_WEAK_FUNC(sub_8234506C);
PPC_FUNC_IMPL(__imp__sub_8234506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82345070"))) PPC_WEAK_FUNC(sub_82345070);
PPC_FUNC_IMPL(__imp__sub_82345070) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82345090:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x82345098;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823450c4
	if (!ctx.cr6.lt) goto loc_823450C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82345090
	if (!ctx.cr6.eq) goto loc_82345090;
loc_823450C4:
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

__attribute__((alias("__imp__sub_823450DC"))) PPC_WEAK_FUNC(sub_823450DC);
PPC_FUNC_IMPL(__imp__sub_823450DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823450E0"))) PPC_WEAK_FUNC(sub_823450E0);
PPC_FUNC_IMPL(__imp__sub_823450E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823450F8"))) PPC_WEAK_FUNC(sub_823450F8);
PPC_FUNC_IMPL(__imp__sub_823450F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15932(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15932);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82345114"))) PPC_WEAK_FUNC(sub_82345114);
PPC_FUNC_IMPL(__imp__sub_82345114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82345118"))) PPC_WEAK_FUNC(sub_82345118);
PPC_FUNC_IMPL(__imp__sub_82345118) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82345128"))) PPC_WEAK_FUNC(sub_82345128);
PPC_FUNC_IMPL(__imp__sub_82345128) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d180
	sub_8232D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82345138"))) PPC_WEAK_FUNC(sub_82345138);
PPC_FUNC_IMPL(__imp__sub_82345138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82345150"))) PPC_WEAK_FUNC(sub_82345150);
PPC_FUNC_IMPL(__imp__sub_82345150) {
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
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r31,-15932
	ctx.r3.s64 = ctx.r31.s64 + -15932;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x8234517C;
	sub_82294AC0(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-15932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -15932);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_823451A4"))) PPC_WEAK_FUNC(sub_823451A4);
PPC_FUNC_IMPL(__imp__sub_823451A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823451A8"))) PPC_WEAK_FUNC(sub_823451A8);
PPC_FUNC_IMPL(__imp__sub_823451A8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x823451D4;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_823451F4"))) PPC_WEAK_FUNC(sub_823451F4);
PPC_FUNC_IMPL(__imp__sub_823451F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

