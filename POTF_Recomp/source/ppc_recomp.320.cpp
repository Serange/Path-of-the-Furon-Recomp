#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A7EBD0"))) PPC_WEAK_FUNC(sub_82A7EBD0);
PPC_FUNC_IMPL(__imp__sub_82A7EBD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a7eb58
	sub_82A7EB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7EBD4"))) PPC_WEAK_FUNC(sub_82A7EBD4);
PPC_FUNC_IMPL(__imp__sub_82A7EBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7EBD8"))) PPC_WEAK_FUNC(sub_82A7EBD8);
PPC_FUNC_IMPL(__imp__sub_82A7EBD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-16184
	ctx.r8.s64 = ctx.r9.s64 + -16184;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EC00"))) PPC_WEAK_FUNC(sub_82A7EC00);
PPC_FUNC_IMPL(__imp__sub_82A7EC00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EC08"))) PPC_WEAK_FUNC(sub_82A7EC08);
PPC_FUNC_IMPL(__imp__sub_82A7EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-16184
	ctx.r8.s64 = ctx.r9.s64 + -16184;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EC28"))) PPC_WEAK_FUNC(sub_82A7EC28);
PPC_FUNC_IMPL(__imp__sub_82A7EC28) {
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
	// bl 0x82a7ec98
	ctx.lr = 0x82A7EC48;
	sub_82A7EC98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7ec7c
	if (ctx.cr6.eq) goto loc_82A7EC7C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7ec74
	if (ctx.cr6.lt) goto loc_82A7EC74;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7ec7c
	if (!ctx.cr6.gt) goto loc_82A7EC7C;
loc_82A7EC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7EC7C;
	sub_82294A58(ctx, base);
loc_82A7EC7C:
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

__attribute__((alias("__imp__sub_82A7EC98"))) PPC_WEAK_FUNC(sub_82A7EC98);
PPC_FUNC_IMPL(__imp__sub_82A7EC98) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-16184
	ctx.r10.s64 = ctx.r11.s64 + -16184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7ECBC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7ECD0;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7ECD8;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7ECE0;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7ECF4"))) PPC_WEAK_FUNC(sub_82A7ECF4);
PPC_FUNC_IMPL(__imp__sub_82A7ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7ECF8"))) PPC_WEAK_FUNC(sub_82A7ECF8);
PPC_FUNC_IMPL(__imp__sub_82A7ECF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-15128
	ctx.r8.s64 = ctx.r9.s64 + -15128;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7ED20"))) PPC_WEAK_FUNC(sub_82A7ED20);
PPC_FUNC_IMPL(__imp__sub_82A7ED20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7ED28"))) PPC_WEAK_FUNC(sub_82A7ED28);
PPC_FUNC_IMPL(__imp__sub_82A7ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-15128
	ctx.r8.s64 = ctx.r9.s64 + -15128;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7ED48"))) PPC_WEAK_FUNC(sub_82A7ED48);
PPC_FUNC_IMPL(__imp__sub_82A7ED48) {
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
	// bl 0x82a7edb8
	ctx.lr = 0x82A7ED68;
	sub_82A7EDB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7ed9c
	if (ctx.cr6.eq) goto loc_82A7ED9C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7ed94
	if (ctx.cr6.lt) goto loc_82A7ED94;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7ed9c
	if (!ctx.cr6.gt) goto loc_82A7ED9C;
loc_82A7ED94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7ED9C;
	sub_82294A58(ctx, base);
loc_82A7ED9C:
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

__attribute__((alias("__imp__sub_82A7EDB8"))) PPC_WEAK_FUNC(sub_82A7EDB8);
PPC_FUNC_IMPL(__imp__sub_82A7EDB8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-15128
	ctx.r10.s64 = ctx.r11.s64 + -15128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7EDDC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7EDF0;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7EDF8;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7EE00;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7EE14"))) PPC_WEAK_FUNC(sub_82A7EE14);
PPC_FUNC_IMPL(__imp__sub_82A7EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7EE18"))) PPC_WEAK_FUNC(sub_82A7EE18);
PPC_FUNC_IMPL(__imp__sub_82A7EE18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-15392
	ctx.r8.s64 = ctx.r9.s64 + -15392;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EE40"))) PPC_WEAK_FUNC(sub_82A7EE40);
PPC_FUNC_IMPL(__imp__sub_82A7EE40) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EE48"))) PPC_WEAK_FUNC(sub_82A7EE48);
PPC_FUNC_IMPL(__imp__sub_82A7EE48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-15392
	ctx.r8.s64 = ctx.r9.s64 + -15392;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EE68"))) PPC_WEAK_FUNC(sub_82A7EE68);
PPC_FUNC_IMPL(__imp__sub_82A7EE68) {
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
	// bl 0x82a7eed8
	ctx.lr = 0x82A7EE88;
	sub_82A7EED8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7eebc
	if (ctx.cr6.eq) goto loc_82A7EEBC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7eeb4
	if (ctx.cr6.lt) goto loc_82A7EEB4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7eebc
	if (!ctx.cr6.gt) goto loc_82A7EEBC;
loc_82A7EEB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7EEBC;
	sub_82294A58(ctx, base);
loc_82A7EEBC:
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

__attribute__((alias("__imp__sub_82A7EED8"))) PPC_WEAK_FUNC(sub_82A7EED8);
PPC_FUNC_IMPL(__imp__sub_82A7EED8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-15392
	ctx.r10.s64 = ctx.r11.s64 + -15392;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7EEFC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7EF10;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7EF18;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7EF20;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7EF34"))) PPC_WEAK_FUNC(sub_82A7EF34);
PPC_FUNC_IMPL(__imp__sub_82A7EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7EF38"))) PPC_WEAK_FUNC(sub_82A7EF38);
PPC_FUNC_IMPL(__imp__sub_82A7EF38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-17512
	ctx.r8.s64 = ctx.r9.s64 + -17512;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EF60"))) PPC_WEAK_FUNC(sub_82A7EF60);
PPC_FUNC_IMPL(__imp__sub_82A7EF60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EF68"))) PPC_WEAK_FUNC(sub_82A7EF68);
PPC_FUNC_IMPL(__imp__sub_82A7EF68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-17512
	ctx.r8.s64 = ctx.r9.s64 + -17512;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7EF88"))) PPC_WEAK_FUNC(sub_82A7EF88);
PPC_FUNC_IMPL(__imp__sub_82A7EF88) {
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
	// bl 0x82a7eff8
	ctx.lr = 0x82A7EFA8;
	sub_82A7EFF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7efdc
	if (ctx.cr6.eq) goto loc_82A7EFDC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7efd4
	if (ctx.cr6.lt) goto loc_82A7EFD4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7efdc
	if (!ctx.cr6.gt) goto loc_82A7EFDC;
loc_82A7EFD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7EFDC;
	sub_82294A58(ctx, base);
loc_82A7EFDC:
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

__attribute__((alias("__imp__sub_82A7EFF8"))) PPC_WEAK_FUNC(sub_82A7EFF8);
PPC_FUNC_IMPL(__imp__sub_82A7EFF8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-17512
	ctx.r10.s64 = ctx.r11.s64 + -17512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F01C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F030;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F038;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F040;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F054"))) PPC_WEAK_FUNC(sub_82A7F054);
PPC_FUNC_IMPL(__imp__sub_82A7F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F058"))) PPC_WEAK_FUNC(sub_82A7F058);
PPC_FUNC_IMPL(__imp__sub_82A7F058) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18040
	ctx.r8.s64 = ctx.r9.s64 + -18040;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F080"))) PPC_WEAK_FUNC(sub_82A7F080);
PPC_FUNC_IMPL(__imp__sub_82A7F080) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F088"))) PPC_WEAK_FUNC(sub_82A7F088);
PPC_FUNC_IMPL(__imp__sub_82A7F088) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18040
	ctx.r8.s64 = ctx.r9.s64 + -18040;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F0A8"))) PPC_WEAK_FUNC(sub_82A7F0A8);
PPC_FUNC_IMPL(__imp__sub_82A7F0A8) {
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
	// bl 0x82a7f118
	ctx.lr = 0x82A7F0C8;
	sub_82A7F118(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7f0fc
	if (ctx.cr6.eq) goto loc_82A7F0FC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7f0f4
	if (ctx.cr6.lt) goto loc_82A7F0F4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7f0fc
	if (!ctx.cr6.gt) goto loc_82A7F0FC;
loc_82A7F0F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7F0FC;
	sub_82294A58(ctx, base);
loc_82A7F0FC:
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

__attribute__((alias("__imp__sub_82A7F118"))) PPC_WEAK_FUNC(sub_82A7F118);
PPC_FUNC_IMPL(__imp__sub_82A7F118) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-18040
	ctx.r10.s64 = ctx.r11.s64 + -18040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F13C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F150;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F158;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F160;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F174"))) PPC_WEAK_FUNC(sub_82A7F174);
PPC_FUNC_IMPL(__imp__sub_82A7F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F178"))) PPC_WEAK_FUNC(sub_82A7F178);
PPC_FUNC_IMPL(__imp__sub_82A7F178) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F1A0"))) PPC_WEAK_FUNC(sub_82A7F1A0);
PPC_FUNC_IMPL(__imp__sub_82A7F1A0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F1A8"))) PPC_WEAK_FUNC(sub_82A7F1A8);
PPC_FUNC_IMPL(__imp__sub_82A7F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F1C8"))) PPC_WEAK_FUNC(sub_82A7F1C8);
PPC_FUNC_IMPL(__imp__sub_82A7F1C8) {
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
	// bl 0x82a7f238
	ctx.lr = 0x82A7F1E8;
	sub_82A7F238(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7f21c
	if (ctx.cr6.eq) goto loc_82A7F21C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7f214
	if (ctx.cr6.lt) goto loc_82A7F214;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7f21c
	if (!ctx.cr6.gt) goto loc_82A7F21C;
loc_82A7F214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7F21C;
	sub_82294A58(ctx, base);
loc_82A7F21C:
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

__attribute__((alias("__imp__sub_82A7F238"))) PPC_WEAK_FUNC(sub_82A7F238);
PPC_FUNC_IMPL(__imp__sub_82A7F238) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-18304
	ctx.r10.s64 = ctx.r11.s64 + -18304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F25C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F270;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F278;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F280;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F294"))) PPC_WEAK_FUNC(sub_82A7F294);
PPC_FUNC_IMPL(__imp__sub_82A7F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F298"))) PPC_WEAK_FUNC(sub_82A7F298);
PPC_FUNC_IMPL(__imp__sub_82A7F298) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18832
	ctx.r8.s64 = ctx.r9.s64 + -18832;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F2C0"))) PPC_WEAK_FUNC(sub_82A7F2C0);
PPC_FUNC_IMPL(__imp__sub_82A7F2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F2C8"))) PPC_WEAK_FUNC(sub_82A7F2C8);
PPC_FUNC_IMPL(__imp__sub_82A7F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-18832
	ctx.r8.s64 = ctx.r9.s64 + -18832;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F2E8"))) PPC_WEAK_FUNC(sub_82A7F2E8);
PPC_FUNC_IMPL(__imp__sub_82A7F2E8) {
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
	// bl 0x82a7f358
	ctx.lr = 0x82A7F308;
	sub_82A7F358(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7f33c
	if (ctx.cr6.eq) goto loc_82A7F33C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7f334
	if (ctx.cr6.lt) goto loc_82A7F334;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7f33c
	if (!ctx.cr6.gt) goto loc_82A7F33C;
loc_82A7F334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7F33C;
	sub_82294A58(ctx, base);
loc_82A7F33C:
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

__attribute__((alias("__imp__sub_82A7F358"))) PPC_WEAK_FUNC(sub_82A7F358);
PPC_FUNC_IMPL(__imp__sub_82A7F358) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-18832
	ctx.r10.s64 = ctx.r11.s64 + -18832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F37C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F390;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F398;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F3A0;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F3B4"))) PPC_WEAK_FUNC(sub_82A7F3B4);
PPC_FUNC_IMPL(__imp__sub_82A7F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F3B8"))) PPC_WEAK_FUNC(sub_82A7F3B8);
PPC_FUNC_IMPL(__imp__sub_82A7F3B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-19096
	ctx.r8.s64 = ctx.r9.s64 + -19096;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F3E0"))) PPC_WEAK_FUNC(sub_82A7F3E0);
PPC_FUNC_IMPL(__imp__sub_82A7F3E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F3E8"))) PPC_WEAK_FUNC(sub_82A7F3E8);
PPC_FUNC_IMPL(__imp__sub_82A7F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-19096
	ctx.r8.s64 = ctx.r9.s64 + -19096;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F408"))) PPC_WEAK_FUNC(sub_82A7F408);
PPC_FUNC_IMPL(__imp__sub_82A7F408) {
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
	// bl 0x82a7f478
	ctx.lr = 0x82A7F428;
	sub_82A7F478(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7f45c
	if (ctx.cr6.eq) goto loc_82A7F45C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7f454
	if (ctx.cr6.lt) goto loc_82A7F454;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7f45c
	if (!ctx.cr6.gt) goto loc_82A7F45C;
loc_82A7F454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7F45C;
	sub_82294A58(ctx, base);
loc_82A7F45C:
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

__attribute__((alias("__imp__sub_82A7F478"))) PPC_WEAK_FUNC(sub_82A7F478);
PPC_FUNC_IMPL(__imp__sub_82A7F478) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-19096
	ctx.r10.s64 = ctx.r11.s64 + -19096;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F49C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F4B0;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F4B8;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F4C0;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F4D4"))) PPC_WEAK_FUNC(sub_82A7F4D4);
PPC_FUNC_IMPL(__imp__sub_82A7F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F4D8"))) PPC_WEAK_FUNC(sub_82A7F4D8);
PPC_FUNC_IMPL(__imp__sub_82A7F4D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-19360
	ctx.r8.s64 = ctx.r9.s64 + -19360;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F500"))) PPC_WEAK_FUNC(sub_82A7F500);
PPC_FUNC_IMPL(__imp__sub_82A7F500) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F508"))) PPC_WEAK_FUNC(sub_82A7F508);
PPC_FUNC_IMPL(__imp__sub_82A7F508) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-19360
	ctx.r8.s64 = ctx.r9.s64 + -19360;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F528"))) PPC_WEAK_FUNC(sub_82A7F528);
PPC_FUNC_IMPL(__imp__sub_82A7F528) {
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
	// bl 0x82a7f598
	ctx.lr = 0x82A7F548;
	sub_82A7F598(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a7f57c
	if (ctx.cr6.eq) goto loc_82A7F57C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a7f574
	if (ctx.cr6.lt) goto loc_82A7F574;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a7f57c
	if (!ctx.cr6.gt) goto loc_82A7F57C;
loc_82A7F574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A7F57C;
	sub_82294A58(ctx, base);
loc_82A7F57C:
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

__attribute__((alias("__imp__sub_82A7F598"))) PPC_WEAK_FUNC(sub_82A7F598);
PPC_FUNC_IMPL(__imp__sub_82A7F598) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-19360
	ctx.r10.s64 = ctx.r11.s64 + -19360;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F5BC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A7F5D0;
	sub_8229C068(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x82a7e138
	ctx.lr = 0x82A7F5D8;
	sub_82A7E138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261af70
	ctx.lr = 0x82A7F5E0;
	sub_8261AF70(ctx, base);
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

__attribute__((alias("__imp__sub_82A7F5F4"))) PPC_WEAK_FUNC(sub_82A7F5F4);
PPC_FUNC_IMPL(__imp__sub_82A7F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F5F8"))) PPC_WEAK_FUNC(sub_82A7F5F8);
PPC_FUNC_IMPL(__imp__sub_82A7F5F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-19624
	ctx.r8.s64 = ctx.r9.s64 + -19624;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F620"))) PPC_WEAK_FUNC(sub_82A7F620);
PPC_FUNC_IMPL(__imp__sub_82A7F620) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F628"))) PPC_WEAK_FUNC(sub_82A7F628);
PPC_FUNC_IMPL(__imp__sub_82A7F628) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A7F640;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a7f6c4
	if (ctx.cr6.eq) goto loc_82A7F6C4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-14864
	ctx.r11.s64 = ctx.r8.s64 + -14864;
	// lis r5,-32088
	ctx.r5.s64 = -2102919168;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,984
	ctx.r6.s64 = ctx.r5.s64 + 984;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A7F6B4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A7F6C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F6D8"))) PPC_WEAK_FUNC(sub_82A7F6D8);
PPC_FUNC_IMPL(__imp__sub_82A7F6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A7F6E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27888);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a7f70c
	if (!ctx.cr6.eq) goto loc_82A7F70C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826ac918
	ctx.lr = 0x82A7F700;
	sub_826AC918(ctx, base);
	// stw r3,-27888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27888, ctx.r3.u32);
	// bl 0x826ac9d8
	ctx.lr = 0x82A7F708;
	sub_826AC9D8(ctx, base);
	// lwz r10,-27888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27888);
loc_82A7F70C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24840);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a7f72c
	if (ctx.cr6.eq) goto loc_82A7F72C;
	// bl 0x822dbd80
	ctx.lr = 0x82A7F720;
	sub_822DBD80(ctx, base);
	// lwz r11,-24840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24840);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a7f734
	goto loc_82A7F734;
loc_82A7F72C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A7F734:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a7f764
	if (!ctx.cr6.eq) goto loc_82A7F764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A7F754;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A7F75C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24840);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A7F764:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a7f790
	if (!ctx.cr6.eq) goto loc_82A7F790;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A7F780;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A7F788;
	sub_82398640(ctx, base);
	// lwz r11,-24840(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24840);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A7F790:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a7f7c8
	if (ctx.cr6.eq) goto loc_82A7F7C8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A7F7AC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a7f7c8
	if (!ctx.cr6.eq) goto loc_82A7F7C8;
	// lwz r3,-24840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24840);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A7F7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A7F7C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A7F7D0"))) PPC_WEAK_FUNC(sub_82A7F7D0);
PPC_FUNC_IMPL(__imp__sub_82A7F7D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7F7D8"))) PPC_WEAK_FUNC(sub_82A7F7D8);
PPC_FUNC_IMPL(__imp__sub_82A7F7D8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-27888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27888);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a7f81c
	if (!ctx.cr6.eq) goto loc_82A7F81C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826ac918
	ctx.lr = 0x82A7F810;
	sub_826AC918(ctx, base);
	// stw r3,-27888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27888, ctx.r3.u32);
	// bl 0x826ac9d8
	ctx.lr = 0x82A7F818;
	sub_826AC9D8(ctx, base);
	// lwz r11,-27888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27888);
loc_82A7F81C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A7F844"))) PPC_WEAK_FUNC(sub_82A7F844);
PPC_FUNC_IMPL(__imp__sub_82A7F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7F848"))) PPC_WEAK_FUNC(sub_82A7F848);
PPC_FUNC_IMPL(__imp__sub_82A7F848) {
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
	ctx.lr = 0x82A7F860;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwinm r10,r11,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// beq cr6,0x82a7f89c
	if (ctx.cr6.eq) goto loc_82A7F89C;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a7f89c
	if (ctx.cr6.eq) goto loc_82A7F89C;
	// bl 0x829d91a8
	ctx.lr = 0x82A7F898;
	sub_829D91A8(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_82A7F89C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a7fc68
	if (!ctx.cr6.gt) goto loc_82A7FC68;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// rlwinm r9,r11,31,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a7fa5c
	if (ctx.cr6.eq) goto loc_82A7FA5C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r10,r11,1,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// lfs f31,-17436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17436);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82a7f914
	if (!ctx.cr6.eq) goto loc_82A7F914;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F8F8;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7f918
	goto loc_82A7F918;
loc_82A7F914:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7F918:
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// stfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a7f948
	if (!ctx.cr6.eq) goto loc_82A7F948;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F92C;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7f94c
	goto loc_82A7F94C;
loc_82A7F948:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7F94C:
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// stfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a7f97c
	if (!ctx.cr6.eq) goto loc_82A7F97C;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F960;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7f980
	goto loc_82A7F980;
loc_82A7F97C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7F980:
	// lbz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// stfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a7f9b0
	if (!ctx.cr6.eq) goto loc_82A7F9B0;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F994;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7f9b4
	goto loc_82A7F9B4;
loc_82A7F9B0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7F9B4:
	// lbz r11,253(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 253);
	// stfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a7f9e4
	if (!ctx.cr6.eq) goto loc_82A7F9E4;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F9C8;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7f9e8
	goto loc_82A7F9E8;
loc_82A7F9E4:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7F9E8:
	// lbz r11,254(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 254);
	// stfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a7fa18
	if (!ctx.cr6.eq) goto loc_82A7FA18;
	// bl 0x82cb2308
	ctx.lr = 0x82A7F9FC;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x82a7fa1c
	goto loc_82A7FA1C;
loc_82A7FA18:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82A7FA1C:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// stw r7,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
	// stw r6,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r6.u32);
loc_82A7FA5C:
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82a7fc68
	if (!ctx.cr6.gt) goto loc_82A7FC68;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a7fc68
	if (!ctx.cr6.gt) goto loc_82A7FC68;
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a7fa9c
	if (!ctx.cr6.lt) goto loc_82A7FA9C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82a7fab0
	goto loc_82A7FAB0;
loc_82A7FA9C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a7fab0
	if (ctx.cr6.lt) goto loc_82A7FAB0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A7FAB0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// lfs f13,21152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f31,f28
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// bne cr6,0x82a7faf4
	if (!ctx.cr6.eq) goto loc_82A7FAF4;
	// lfs f0,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82a7faf4
	if (!ctx.cr6.eq) goto loc_82A7FAF4;
	// lfs f0,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fba8
	if (ctx.cr6.eq) goto loc_82A7FBA8;
loc_82A7FAF4:
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fb30
	if (ctx.cr6.eq) goto loc_82A7FB30;
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,188(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FB14;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// li r11,204
	ctx.r11.s64 = 204;
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f8.u32);
loc_82A7FB30:
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fb6c
	if (ctx.cr6.eq) goto loc_82A7FB6C;
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,192(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FB50;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// li r11,208
	ctx.r11.s64 = 208;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f8.u32);
loc_82A7FB6C:
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fba8
	if (ctx.cr6.eq) goto loc_82A7FBA8;
	// lfs f0,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,196(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FB8C;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// li r11,212
	ctx.r11.s64 = 212;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f8.u32);
loc_82A7FBA8:
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82a7fbcc
	if (!ctx.cr6.eq) goto loc_82A7FBCC;
	// lfs f0,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82a7fbcc
	if (!ctx.cr6.eq) goto loc_82A7FBCC;
	// lfs f0,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fc68
	if (ctx.cr6.eq) goto loc_82A7FC68;
loc_82A7FBCC:
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fc00
	if (ctx.cr6.eq) goto loc_82A7FC00;
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,240(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FBEC;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
loc_82A7FC00:
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fc34
	if (ctx.cr6.eq) goto loc_82A7FC34;
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,244(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FC20;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,260(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
loc_82A7FC34:
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a7fc68
	if (ctx.cr6.eq) goto loc_82A7FC68;
	// lfs f0,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f1,248(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82A7FC54;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
loc_82A7FC68:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ade98
	ctx.lr = 0x82A7FC78;
	sub_826ADE98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82cb6b34
	ctx.lr = 0x82A7FC84;
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

__attribute__((alias("__imp__sub_82A7FC98"))) PPC_WEAK_FUNC(sub_82A7FC98);
PPC_FUNC_IMPL(__imp__sub_82A7FC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// lwz r9,268(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// stfs f0,272(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 272, temp.u32);
	// lwz r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7FCBC"))) PPC_WEAK_FUNC(sub_82A7FCBC);
PPC_FUNC_IMPL(__imp__sub_82A7FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7FCC0"))) PPC_WEAK_FUNC(sub_82A7FCC0);
PPC_FUNC_IMPL(__imp__sub_82A7FCC0) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a7fcec
	if (ctx.cr6.eq) goto loc_82A7FCEC;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822ab8c0
	ctx.lr = 0x82A7FCEC;
	sub_822AB8C0(ctx, base);
loc_82A7FCEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A7FCFC"))) PPC_WEAK_FUNC(sub_82A7FCFC);
PPC_FUNC_IMPL(__imp__sub_82A7FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A7FD00"))) PPC_WEAK_FUNC(sub_82A7FD00);
PPC_FUNC_IMPL(__imp__sub_82A7FD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A7FD08;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ac4
	ctx.lr = 0x82A7FD10;
	__savefpr_19(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r9,752(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A7FD3C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a7fd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A7FD3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A7FD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,-17808(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17808);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r6,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r6.u32);
	// lfs f11,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823d7698
	ctx.lr = 0x82A7FDCC;
	sub_823D7698(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A7FDDC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a7fddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A7FDDC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,-18108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18108);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82485a40
	ctx.lr = 0x82A7FE04;
	sub_82485A40(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x823829d8
	ctx.lr = 0x82A7FE24;
	sub_823829D8(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x825e8e78
	ctx.lr = 0x82A7FE48;
	sub_825E8E78(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82485a40
	ctx.lr = 0x82A7FE54;
	sub_82485A40(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x823829d8
	ctx.lr = 0x82A7FE6C;
	sub_823829D8(ctx, base);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82a7fe9c
	if (!ctx.cr6.eq) goto loc_82A7FE9C;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a7fe9c
	if (!ctx.cr6.eq) goto loc_82A7FE9C;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a802a8
	if (ctx.cr6.eq) goto loc_82A802A8;
loc_82A7FE9C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x823d7698
	ctx.lr = 0x82A7FEC0;
	sub_823D7698(ctx, base);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v63,r0,r3
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lvx128 v62,r3,r8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r3,r7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v58,r3,r6
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v56,v58,v61
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmrglw128 v55,v58,v61
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// lvx128 v62,r0,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v54,v59,v56
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// vmrglw128 v52,v59,v56
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v59,r0,r9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v57,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvx128 v58,r0,r8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v51,v57,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvx128 v57,r0,r7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v45,v62,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v56,r0,r6
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v48,v63,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// lvx128 v61,r0,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v49,v63,v53
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// lvx128 v60,r0,r10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v46,v63,v51
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v47,v59,v58
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v43,v62,v53
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrghw128 v44,v57,v56
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v41,v62,v52
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrglw128 v40,v57,v56
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v50,v63,v54
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrglw128 v42,v59,v58
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v39,v62,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v61,v54
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmrghw128 v37,v47,v44
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v36,v61,v53
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmrglw128 v35,v47,v44
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v34,v61,v52
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrghw128 v33,v42,v40
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v32,v61,v51
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrglw128 v59,v42,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmsum4fp128 v58,v60,v54
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v57,v60,v53
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v56,v60,v52
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v55,v60,v51
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v53,v48,v46
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v52,v45,v43
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v54,v50,v49
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v51,v41,v39
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v49,v38,v36
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v50,v54,v53
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v52,v51
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v47,v34,v32
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v45,v58,v57
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmsum4fp128 v46,v50,v37
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmrghw128 v44,v56,v55
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v43,v48,v37
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmrghw128 v42,v49,v47
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmsum4fp128 v41,v48,v33
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// vmsum4fp128 v40,v48,v35
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v38,v48,v59
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmrghw128 v39,v45,v44
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmsum4fp128 v34,v42,v37
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vmsum4fp128 v32,v42,v33
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vmsum4fp128 v54,v42,v59
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmrghw128 v36,v43,v41
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmsum4fp128 v47,v50,v59
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// vmsum4fp128 v53,v39,v37
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// vmsum4fp128 v52,v39,v33
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmsum4fp128 v49,v50,v33
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// lvx128 v58,r0,r10
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v45,v39,v59
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lvx128 v59,r0,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v55,v42,v35
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrghw128 v42,v40,v38
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmsum4fp128 v51,v39,v35
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrglw128 v43,v59,v58
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v48,v50,v35
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrghw128 v44,v59,v58
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvx128 v57,r0,r9
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// vmrghw128 v37,v36,v42
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// lvx128 v56,r0,r8
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v41,v57,v56
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v39,v57,v56
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v34,v32
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v35,v44,v41
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrglw128 v58,v44,v41
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// lvx128 v61,r0,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v57,v43,v39
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lvx128 v60,r0,r7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v36,v53,v52
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v34,v46,v49
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v38,v55,v54
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v59,v51,v45
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v32,v48,v47
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v54,v43,v39
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v33,v40,v38
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v55,v36,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v56,v34,v32
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v52,v37,v55
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v53,v56,v33
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v51,v37,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrglw128 v50,v56,v33
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v49,v53,v52
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrglw128 v48,v53,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v47,v50,v51
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmsum4fp128 v45,v63,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v63,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v43,v63,v47
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v42,v63,v46
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v41,v62,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v39,v62,v48
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v40,v62,v47
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v38,v62,v46
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v37,v61,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v34,v61,v48
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v32,v60,v49
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v61,v47
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v33,v61,v46
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v63,v60,v47
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v62,v60,v48
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v61,v60,v46
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmrghw128 v60,v45,v43
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v59,v44,v42
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v56,v41,v40
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v55,v39,v38
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v53,v60,v59
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v52,v37,v36
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v51,v34,v33
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmsum4fp128 v49,v53,v35
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmrghw128 v50,v56,v55
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v48,v32,v63
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v46,v62,v61
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v47,v53,v57
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmrghw128 v44,v52,v51
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmsum4fp128 v43,v50,v57
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v42,v50,v58
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// vmsum4fp128 v39,v53,v58
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// vmrghw128 v40,v48,v46
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum4fp128 v45,v50,v35
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v37,v44,v57
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// vmsum4fp128 v36,v44,v58
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// vmsum4fp128 v34,v44,v54
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v32,v40,v57
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v59,v40,v58
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// vmsum4fp128 v58,v53,v54
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v41,v50,v54
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// lvx128 v60,r0,r3
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v38,v44,v35
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vmsum4fp128 v57,v40,v54
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vmsum4fp128 v33,v40,v35
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v35.f32), 0xFF));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f0,352(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// vmrghw128 v56,v49,v47
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// lfs f13,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r9,8
	ctx.r9.s64 = 8;
	// vmrghw128 v55,v45,v43
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v51,v36,v34
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v49,v39,v58
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v54,v42,v41
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v53,v38,v37
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v48,v59,v57
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v33,v32
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v47,v53,v51
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v46,v56,v49
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v45,v50,v48
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrghw128 v44,v46,v47
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v43,v52,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrglw128 v42,v52,v45
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrglw128 v41,v46,v47
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v40,v44,v43
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrglw128 v39,v44,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// vmrghw128 v38,v41,v42
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrglw128 v37,v41,v42
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmsum4fp128 v36,v63,v40
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v35,v63,v39
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v34,v63,v38
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v33,v63,v37
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v32,v62,v40
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v63,v62,v38
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v59,v62,v39
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v58,v62,v37
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v57,v61,v40
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v56,v61,v38
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v55,v61,v39
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v54,v61,v37
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v53,v60,v40
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v52,v60,v38
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vmsum4fp128 v51,v60,v39
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v50,v60,v37
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vmrghw128 v49,v36,v34
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v48,v35,v33
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v47,v32,v63
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v46,v59,v58
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v45,v49,v48
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v44,v57,v56
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v43,v55,v54
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v42,v47,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v41,v53,v52
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v40,v51,v50
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stvx128 v45,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v39,v44,v43
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v44.u32)));
	// stfs f0,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// stvx128 v42,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A80294:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a80294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A80294;
loc_82A802A8:
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a802cc
	if (!ctx.cr6.eq) goto loc_82A802CC;
	// lfs f0,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a802cc
	if (!ctx.cr6.eq) goto loc_82A802CC;
	// lfs f0,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82a803bc
	if (ctx.cr6.eq) goto loc_82A803BC;
loc_82A802CC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f23.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f13,f0
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f21,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f21.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f20,f12,f0
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f19,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f19.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f11,f13,f22
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f22.f64));
	// fmadds f9,f9,f13,f20
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f20.f64));
	// fmadds f7,f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f8,f12,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f13,f6,f12,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f12,f2,f12,f7
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f7,f1,f13,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f30,f13,f9
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f5,f29,f13,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f28,f12,f7
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f3,f27,f12,f6
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f2,f26,f12,f5
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f1,f25,f31,f4
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f0,f24,f31,f3
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f31.f64 + ctx.f3.f64));
	// fmadds f13,f23,f31,f2
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fadds f12,f21,f1
	ctx.f12.f64 = double(float(ctx.f21.f64 + ctx.f1.f64));
	// stfs f12,352(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fadds f11,f0,f19
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// stfs f11,356(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,360(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
loc_82A803BC:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826b3dd0
	ctx.lr = 0x82A803C8;
	sub_826B3DD0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b10
	ctx.lr = 0x82A803D4;
	__restfpr_19(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A803D8"))) PPC_WEAK_FUNC(sub_82A803D8);
PPC_FUNC_IMPL(__imp__sub_82A803D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-14816
	ctx.r8.s64 = ctx.r9.s64 + -14816;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80400"))) PPC_WEAK_FUNC(sub_82A80400);
PPC_FUNC_IMPL(__imp__sub_82A80400) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80408"))) PPC_WEAK_FUNC(sub_82A80408);
PPC_FUNC_IMPL(__imp__sub_82A80408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-14816
	ctx.r8.s64 = ctx.r9.s64 + -14816;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80428"))) PPC_WEAK_FUNC(sub_82A80428);
PPC_FUNC_IMPL(__imp__sub_82A80428) {
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
	// bl 0x82a80498
	ctx.lr = 0x82A80448;
	sub_82A80498(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8047c
	if (ctx.cr6.eq) goto loc_82A8047C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a80474
	if (ctx.cr6.lt) goto loc_82A80474;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8047c
	if (!ctx.cr6.gt) goto loc_82A8047C;
loc_82A80474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A8047C;
	sub_82294A58(ctx, base);
loc_82A8047C:
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

__attribute__((alias("__imp__sub_82A80498"))) PPC_WEAK_FUNC(sub_82A80498);
PPC_FUNC_IMPL(__imp__sub_82A80498) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-14816
	ctx.r10.s64 = ctx.r11.s64 + -14816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A804BC;
	sub_8229C068(ctx, base);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-27096
	ctx.r8.s64 = ctx.r9.s64 + -27096;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A804D0;
	sub_8229C068(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x825365c0
	ctx.lr = 0x82A804D8;
	sub_825365C0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822c58f0
	ctx.lr = 0x82A804E0;
	sub_822C58F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82A804E8;
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

__attribute__((alias("__imp__sub_82A804FC"))) PPC_WEAK_FUNC(sub_82A804FC);
PPC_FUNC_IMPL(__imp__sub_82A804FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80500"))) PPC_WEAK_FUNC(sub_82A80500);
PPC_FUNC_IMPL(__imp__sub_82A80500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80504"))) PPC_WEAK_FUNC(sub_82A80504);
PPC_FUNC_IMPL(__imp__sub_82A80504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80508"))) PPC_WEAK_FUNC(sub_82A80508);
PPC_FUNC_IMPL(__imp__sub_82A80508) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A80520;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a805a4
	if (ctx.cr6.eq) goto loc_82A805A4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-14508
	ctx.r11.s64 = ctx.r8.s64 + -14508;
	// lis r5,-32088
	ctx.r5.s64 = -2102919168;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,3704
	ctx.r6.s64 = ctx.r5.s64 + 3704;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1008
	ctx.r5.s64 = 1008;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A80594;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A805A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A805B8"))) PPC_WEAK_FUNC(sub_82A805B8);
PPC_FUNC_IMPL(__imp__sub_82A805B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A805C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-24268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a805ec
	if (!ctx.cr6.eq) goto loc_82A805EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7aa8
	ctx.lr = 0x82A805E0;
	sub_82AD7AA8(ctx, base);
	// stw r3,-24268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24268, ctx.r3.u32);
	// bl 0x82ad7b58
	ctx.lr = 0x82A805E8;
	sub_82AD7B58(ctx, base);
	// lwz r10,-24268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
loc_82A805EC:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24836);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a8060c
	if (ctx.cr6.eq) goto loc_82A8060C;
	// bl 0x829a0b50
	ctx.lr = 0x82A80600;
	sub_829A0B50(ctx, base);
	// lwz r11,-24836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24836);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a80614
	goto loc_82A80614;
loc_82A8060C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A80614:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a80644
	if (!ctx.cr6.eq) goto loc_82A80644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A80634;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A8063C;
	sub_822AADA8(ctx, base);
	// lwz r11,-24836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24836);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A80644:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a80670
	if (!ctx.cr6.eq) goto loc_82A80670;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A80660;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A80668;
	sub_82398640(ctx, base);
	// lwz r11,-24836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24836);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A80670:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a806a8
	if (ctx.cr6.eq) goto loc_82A806A8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A8068C;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a806a8
	if (!ctx.cr6.eq) goto loc_82A806A8;
	// lwz r3,-24836(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24836);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A806A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A806A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A806B0"))) PPC_WEAK_FUNC(sub_82A806B0);
PPC_FUNC_IMPL(__imp__sub_82A806B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A806B8"))) PPC_WEAK_FUNC(sub_82A806B8);
PPC_FUNC_IMPL(__imp__sub_82A806B8) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-24268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a806fc
	if (!ctx.cr6.eq) goto loc_82A806FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82ad7aa8
	ctx.lr = 0x82A806F0;
	sub_82AD7AA8(ctx, base);
	// stw r3,-24268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24268, ctx.r3.u32);
	// bl 0x82ad7b58
	ctx.lr = 0x82A806F8;
	sub_82AD7B58(ctx, base);
	// lwz r11,-24268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24268);
loc_82A806FC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A80724"))) PPC_WEAK_FUNC(sub_82A80724);
PPC_FUNC_IMPL(__imp__sub_82A80724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80728"))) PPC_WEAK_FUNC(sub_82A80728);
PPC_FUNC_IMPL(__imp__sub_82A80728) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a807c8
	if (ctx.cr6.eq) goto loc_82A807C8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82A8075C:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ldx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8244fc30
	ctx.lr = 0x82A80778;
	sub_8244FC30(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x8244fc30
	ctx.lr = 0x82A80798;
	sub_8244FC30(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,972(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ld r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// bl 0x8244fd80
	ctx.lr = 0x82A807BC;
	sub_8244FD80(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpwi cr6,r30,96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 96, ctx.xer);
	// blt cr6,0x82a8075c
	if (ctx.cr6.lt) goto loc_82A8075C;
loc_82A807C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A807E4"))) PPC_WEAK_FUNC(sub_82A807E4);
PPC_FUNC_IMPL(__imp__sub_82A807E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A807E8"))) PPC_WEAK_FUNC(sub_82A807E8);
PPC_FUNC_IMPL(__imp__sub_82A807E8) {
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
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a808cc
	if (ctx.cr6.eq) goto loc_82A808CC;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r30,r5,3,21,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// beq cr6,0x82a80878
	if (ctx.cr6.eq) goto loc_82A80878;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x8244fc30
	ctx.lr = 0x82A8084C;
	sub_8244FC30(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// b 0x82a808bc
	goto loc_82A808BC;
loc_82A80878:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x8244fc30
	ctx.lr = 0x82A80894;
	sub_8244FC30(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
loc_82A808BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8244fd80
	ctx.lr = 0x82A808CC;
	sub_8244FD80(ctx, base);
loc_82A808CC:
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

__attribute__((alias("__imp__sub_82A808E4"))) PPC_WEAK_FUNC(sub_82A808E4);
PPC_FUNC_IMPL(__imp__sub_82A808E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A808E8"))) PPC_WEAK_FUNC(sub_82A808E8);
PPC_FUNC_IMPL(__imp__sub_82A808E8) {
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
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80978
	if (ctx.cr6.eq) goto loc_82A80978;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r30,r4,3,21,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,280(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 280);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A80954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80978
	if (ctx.cr6.eq) goto loc_82A80978;
	// lwz r10,972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82a8097c
	goto loc_82A8097C;
loc_82A80978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8097C:
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

__attribute__((alias("__imp__sub_82A80994"))) PPC_WEAK_FUNC(sub_82A80994);
PPC_FUNC_IMPL(__imp__sub_82A80994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80998"))) PPC_WEAK_FUNC(sub_82A80998);
PPC_FUNC_IMPL(__imp__sub_82A80998) {
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
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80a38
	if (ctx.cr6.eq) goto loc_82A80A38;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r30,r4,3,21,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,280(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 280);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A80A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80a38
	if (ctx.cr6.eq) goto loc_82A80A38;
	// lwz r10,972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a80a30
	if (ctx.cr6.eq) goto loc_82A80A30;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a80a3c
	if (!ctx.cr6.eq) goto loc_82A80A3C;
loc_82A80A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a80a3c
	goto loc_82A80A3C;
loc_82A80A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A80A3C:
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

__attribute__((alias("__imp__sub_82A80A54"))) PPC_WEAK_FUNC(sub_82A80A54);
PPC_FUNC_IMPL(__imp__sub_82A80A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80A58"))) PPC_WEAK_FUNC(sub_82A80A58);
PPC_FUNC_IMPL(__imp__sub_82A80A58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80b34
	if (ctx.cr6.eq) goto loc_82A80B34;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r30,r4,3,21,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,280(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 280);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A80AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a80b34
	if (ctx.cr6.eq) goto loc_82A80B34;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a80b34
	if (!ctx.cr6.eq) goto loc_82A80B34;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,276(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 276);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A80B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82a80b38
	if (ctx.cr6.lt) goto loc_82A80B38;
loc_82A80B34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A80B38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80B54"))) PPC_WEAK_FUNC(sub_82A80B54);
PPC_FUNC_IMPL(__imp__sub_82A80B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80B58"))) PPC_WEAK_FUNC(sub_82A80B58);
PPC_FUNC_IMPL(__imp__sub_82A80B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A80B60;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a80bd0
	if (ctx.cr6.eq) goto loc_82A80BD0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82A80B88:
	// lwz r3,968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// lwz r9,276(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A80BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a80bc0
	if (ctx.cr6.gt) goto loc_82A80BC0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a80bc4
	if (!ctx.cr6.lt) goto loc_82A80BC4;
loc_82A80BC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82A80BC4:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// blt cr6,0x82a80b88
	if (ctx.cr6.lt) goto loc_82A80B88;
loc_82A80BD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A80BE0"))) PPC_WEAK_FUNC(sub_82A80BE0);
PPC_FUNC_IMPL(__imp__sub_82A80BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a80c04
	if (ctx.cr6.eq) goto loc_82A80C04;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f1,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a80c0c
	goto loc_82A80C0C;
loc_82A80C04:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f1,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
loc_82A80C0C:
	// lwz r9,972(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	// rlwinm r8,r5,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// lwz r10,984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A80C40"))) PPC_WEAK_FUNC(sub_82A80C40);
PPC_FUNC_IMPL(__imp__sub_82A80C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80C44"))) PPC_WEAK_FUNC(sub_82A80C44);
PPC_FUNC_IMPL(__imp__sub_82A80C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80C48"))) PPC_WEAK_FUNC(sub_82A80C48);
PPC_FUNC_IMPL(__imp__sub_82A80C48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a80ce4
	if (ctx.cr6.eq) goto loc_82A80CE4;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// rlwinm r11,r4,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ldx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x8244fc30
	ctx.lr = 0x82A80CA0;
	sub_8244FC30(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ld r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// bl 0x8244fc30
	ctx.lr = 0x82A80CC0;
	sub_8244FC30(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8244fd80
	ctx.lr = 0x82A80CE4;
	sub_8244FD80(ctx, base);
loc_82A80CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80D00"))) PPC_WEAK_FUNC(sub_82A80D00);
PPC_FUNC_IMPL(__imp__sub_82A80D00) {
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
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a80d94
	if (ctx.cr6.eq) goto loc_82A80D94;
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// rlwinm r30,r4,3,21,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-18324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f1.f64 = double(temp.f32);
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x8244fc30
	ctx.lr = 0x82A80D5C;
	sub_8244FC30(ctx, base);
	// lwz r11,972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// bl 0x8244fd80
	ctx.lr = 0x82A80D94;
	sub_8244FD80(ctx, base);
loc_82A80D94:
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

__attribute__((alias("__imp__sub_82A80DAC"))) PPC_WEAK_FUNC(sub_82A80DAC);
PPC_FUNC_IMPL(__imp__sub_82A80DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80DB0"))) PPC_WEAK_FUNC(sub_82A80DB0);
PPC_FUNC_IMPL(__imp__sub_82A80DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f11,996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r10,-29076
	ctx.r8.s64 = ctx.r10.s64 + -29076;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f12,-29076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29076);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r7,-18304
	ctx.r6.s64 = ctx.r7.s64 + -18304;
	// lfs f0,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3368);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r10,r5,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lfsx f9,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f13,f1
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r5,r8,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lfsx f6,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f1,f6,f0,f8
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f5,f1,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// ld r4,960(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 960);
	// stfs f1,996(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 996, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8244fc30
	sub_8244FC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A80E48"))) PPC_WEAK_FUNC(sub_82A80E48);
PPC_FUNC_IMPL(__imp__sub_82A80E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80E4C"))) PPC_WEAK_FUNC(sub_82A80E4C);
PPC_FUNC_IMPL(__imp__sub_82A80E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80E50"))) PPC_WEAK_FUNC(sub_82A80E50);
PPC_FUNC_IMPL(__imp__sub_82A80E50) {
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

__attribute__((alias("__imp__sub_82A80E60"))) PPC_WEAK_FUNC(sub_82A80E60);
PPC_FUNC_IMPL(__imp__sub_82A80E60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80E78"))) PPC_WEAK_FUNC(sub_82A80E78);
PPC_FUNC_IMPL(__imp__sub_82A80E78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-14472
	ctx.r7.s64 = ctx.r9.s64 + -14472;
	// stb r8,916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 916, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80EA8"))) PPC_WEAK_FUNC(sub_82A80EA8);
PPC_FUNC_IMPL(__imp__sub_82A80EA8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80EB0"))) PPC_WEAK_FUNC(sub_82A80EB0);
PPC_FUNC_IMPL(__imp__sub_82A80EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-14472
	ctx.r7.s64 = ctx.r9.s64 + -14472;
	// stb r8,916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 916, ctx.r8.u8);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80ED8"))) PPC_WEAK_FUNC(sub_82A80ED8);
PPC_FUNC_IMPL(__imp__sub_82A80ED8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14472
	ctx.r10.s64 = ctx.r11.s64 + -14472;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A80F04;
	sub_8229C068(ctx, base);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x82a81048
	ctx.lr = 0x82A80F0C;
	sub_82A81048(ctx, base);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x82a80fd0
	ctx.lr = 0x82A80F14;
	sub_82A80FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60220
	ctx.lr = 0x82A80F1C;
	sub_82A60220(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a80f50
	if (ctx.cr6.eq) goto loc_82A80F50;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a80f48
	if (ctx.cr6.lt) goto loc_82A80F48;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a80f50
	if (!ctx.cr6.gt) goto loc_82A80F50;
loc_82A80F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A80F50;
	sub_82294A58(ctx, base);
loc_82A80F50:
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

__attribute__((alias("__imp__sub_82A80F6C"))) PPC_WEAK_FUNC(sub_82A80F6C);
PPC_FUNC_IMPL(__imp__sub_82A80F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80F70"))) PPC_WEAK_FUNC(sub_82A80F70);
PPC_FUNC_IMPL(__imp__sub_82A80F70) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-14472
	ctx.r10.s64 = ctx.r11.s64 + -14472;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A80F94;
	sub_8229C068(ctx, base);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x82a81048
	ctx.lr = 0x82A80F9C;
	sub_82A81048(ctx, base);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x82a80fd0
	ctx.lr = 0x82A80FA4;
	sub_82A80FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60220
	ctx.lr = 0x82A80FAC;
	sub_82A60220(ctx, base);
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

__attribute__((alias("__imp__sub_82A80FC0"))) PPC_WEAK_FUNC(sub_82A80FC0);
PPC_FUNC_IMPL(__imp__sub_82A80FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80FC4"))) PPC_WEAK_FUNC(sub_82A80FC4);
PPC_FUNC_IMPL(__imp__sub_82A80FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80FC8"))) PPC_WEAK_FUNC(sub_82A80FC8);
PPC_FUNC_IMPL(__imp__sub_82A80FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A80FCC"))) PPC_WEAK_FUNC(sub_82A80FCC);
PPC_FUNC_IMPL(__imp__sub_82A80FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A80FD0"))) PPC_WEAK_FUNC(sub_82A80FD0);
PPC_FUNC_IMPL(__imp__sub_82A80FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A80FD8;
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
	// beq cr6,0x82a81018
	if (ctx.cr6.eq) goto loc_82A81018;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a81004
	if (!ctx.cr6.eq) goto loc_82A81004;
	// bl 0x822900a0
	ctx.lr = 0x82A81000;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A81004:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A81018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A81018:
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

__attribute__((alias("__imp__sub_82A81030"))) PPC_WEAK_FUNC(sub_82A81030);
PPC_FUNC_IMPL(__imp__sub_82A81030) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a80fd0
	sub_82A80FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A81034"))) PPC_WEAK_FUNC(sub_82A81034);
PPC_FUNC_IMPL(__imp__sub_82A81034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81038"))) PPC_WEAK_FUNC(sub_82A81038);
PPC_FUNC_IMPL(__imp__sub_82A81038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8103C"))) PPC_WEAK_FUNC(sub_82A8103C);
PPC_FUNC_IMPL(__imp__sub_82A8103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81040"))) PPC_WEAK_FUNC(sub_82A81040);
PPC_FUNC_IMPL(__imp__sub_82A81040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81044"))) PPC_WEAK_FUNC(sub_82A81044);
PPC_FUNC_IMPL(__imp__sub_82A81044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81048"))) PPC_WEAK_FUNC(sub_82A81048);
PPC_FUNC_IMPL(__imp__sub_82A81048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A81050;
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
	// beq cr6,0x82a81090
	if (ctx.cr6.eq) goto loc_82A81090;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a8107c
	if (!ctx.cr6.eq) goto loc_82A8107C;
	// bl 0x822900a0
	ctx.lr = 0x82A81078;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A8107C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A81090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A81090:
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

__attribute__((alias("__imp__sub_82A810A8"))) PPC_WEAK_FUNC(sub_82A810A8);
PPC_FUNC_IMPL(__imp__sub_82A810A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a81048
	sub_82A81048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A810AC"))) PPC_WEAK_FUNC(sub_82A810AC);
PPC_FUNC_IMPL(__imp__sub_82A810AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A810B0"))) PPC_WEAK_FUNC(sub_82A810B0);
PPC_FUNC_IMPL(__imp__sub_82A810B0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A810C8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8114c
	if (ctx.cr6.eq) goto loc_82A8114C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-13776
	ctx.r11.s64 = ctx.r8.s64 + -13776;
	// lis r5,-32088
	ctx.r5.s64 = -2102919168;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,5584
	ctx.r6.s64 = ctx.r5.s64 + 5584;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,652
	ctx.r5.s64 = 652;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A8113C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A8114C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81160"))) PPC_WEAK_FUNC(sub_82A81160);
PPC_FUNC_IMPL(__imp__sub_82A81160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A81168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a81194
	if (!ctx.cr6.eq) goto loc_82A81194;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607298
	ctx.lr = 0x82A81188;
	sub_82607298(ctx, base);
	// stw r3,-28576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28576, ctx.r3.u32);
	// bl 0x82607358
	ctx.lr = 0x82A81190;
	sub_82607358(ctx, base);
	// lwz r10,-28576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
loc_82A81194:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24832);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a811b4
	if (ctx.cr6.eq) goto loc_82A811B4;
	// bl 0x823122c8
	ctx.lr = 0x82A811A8;
	sub_823122C8(ctx, base);
	// lwz r11,-24832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24832);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a811bc
	goto loc_82A811BC;
loc_82A811B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A811BC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a811ec
	if (!ctx.cr6.eq) goto loc_82A811EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A811DC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A811E4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24832);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A811EC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a81218
	if (!ctx.cr6.eq) goto loc_82A81218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A81208;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A81210;
	sub_82398640(ctx, base);
	// lwz r11,-24832(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24832);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A81218:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a81250
	if (ctx.cr6.eq) goto loc_82A81250;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A81234;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a81250
	if (!ctx.cr6.eq) goto loc_82A81250;
	// lwz r3,-24832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24832);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A81250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A81250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A81258"))) PPC_WEAK_FUNC(sub_82A81258);
PPC_FUNC_IMPL(__imp__sub_82A81258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81260"))) PPC_WEAK_FUNC(sub_82A81260);
PPC_FUNC_IMPL(__imp__sub_82A81260) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a812a4
	if (!ctx.cr6.eq) goto loc_82A812A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82607298
	ctx.lr = 0x82A81298;
	sub_82607298(ctx, base);
	// stw r3,-28576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28576, ctx.r3.u32);
	// bl 0x82607358
	ctx.lr = 0x82A812A0;
	sub_82607358(ctx, base);
	// lwz r11,-28576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28576);
loc_82A812A4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A812CC"))) PPC_WEAK_FUNC(sub_82A812CC);
PPC_FUNC_IMPL(__imp__sub_82A812CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A812D0"))) PPC_WEAK_FUNC(sub_82A812D0);
PPC_FUNC_IMPL(__imp__sub_82A812D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f1,-17272(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17272);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a813fc
	if (!ctx.cr6.gt) goto loc_82A813FC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r7,r10,52
	ctx.r7.s64 = ctx.r10.s64 + 52;
	// addi r9,r11,-22168
	ctx.r9.s64 = ctx.r11.s64 + -22168;
loc_82A81308:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a813f0
	if (!ctx.cr6.gt) goto loc_82A813F0;
	// lfs f0,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lfs f13,344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// lfs f11,348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,16384
	ctx.r11.s64 = ctx.r10.s64 + 16384;
	// lfs f10,356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lfs f6,352(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f6.f64 = double(temp.f32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lfs f8,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// rlwinm r30,r11,2,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfs f7,360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r31,r10,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfs f4,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r4,r4,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lfsx f11,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f2,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfsx f6,r4,r9
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f12,f8,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f5,f0,f8,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fneg f11,f7
	ctx.f11.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fnmsubs f3,f9,f6,f5
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f6.f64 - ctx.f5.f64)));
	// fsubs f10,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
loc_82A813BC:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f11,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f5,f7,f13,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fadds f0,f5,f10
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82a813e4
	if (!ctx.cr6.gt) goto loc_82A813E4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82A813E4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82a813bc
	if (!ctx.cr0.eq) goto loc_82A813BC;
loc_82A813F0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 + 100;
	// bne 0x82a81308
	if (!ctx.cr0.eq) goto loc_82A81308;
loc_82A813FC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81408"))) PPC_WEAK_FUNC(sub_82A81408);
PPC_FUNC_IMPL(__imp__sub_82A81408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lwz r11,508(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lfs f11,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a81588
	if (!ctx.cr6.gt) goto loc_82A81588;
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
loc_82A81454:
	// lwz r7,52(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82a814fc
	if (ctx.cr6.lt) goto loc_82A814FC;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A8148C:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lfs f30,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// bne 0x82a8148c
	if (!ctx.cr0.eq) goto loc_82A8148C;
loc_82A814FC:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a81540
	if (!ctx.cr6.lt) goto loc_82A81540;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82A8151C:
	// lfs f6,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82a8151c
	if (!ctx.cr0.eq) goto loc_82A8151C;
loc_82A81540:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f6,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// addi r6,r6,100
	ctx.r6.s64 = ctx.r6.s64 + 100;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fdivs f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fadds f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// bne 0x82a81454
	if (!ctx.cr0.eq) goto loc_82A81454;
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82A81588:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f7,f10
	ctx.f8.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A815D0"))) PPC_WEAK_FUNC(sub_82A815D0);
PPC_FUNC_IMPL(__imp__sub_82A815D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-13744
	ctx.r7.s64 = ctx.r9.s64 + -13744;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81600"))) PPC_WEAK_FUNC(sub_82A81600);
PPC_FUNC_IMPL(__imp__sub_82A81600) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81608"))) PPC_WEAK_FUNC(sub_82A81608);
PPC_FUNC_IMPL(__imp__sub_82A81608) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-13744
	ctx.r7.s64 = ctx.r9.s64 + -13744;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81630"))) PPC_WEAK_FUNC(sub_82A81630);
PPC_FUNC_IMPL(__imp__sub_82A81630) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-13744
	ctx.r10.s64 = ctx.r11.s64 + -13744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A8165C;
	sub_8229C068(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-27168
	ctx.r8.s64 = ctx.r9.s64 + -27168;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A81670;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384100
	ctx.lr = 0x82A81678;
	sub_82384100(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a816ac
	if (ctx.cr6.eq) goto loc_82A816AC;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a816a4
	if (ctx.cr6.lt) goto loc_82A816A4;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a816ac
	if (!ctx.cr6.gt) goto loc_82A816AC;
loc_82A816A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A816AC;
	sub_82294A58(ctx, base);
loc_82A816AC:
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

__attribute__((alias("__imp__sub_82A816C8"))) PPC_WEAK_FUNC(sub_82A816C8);
PPC_FUNC_IMPL(__imp__sub_82A816C8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-13744
	ctx.r10.s64 = ctx.r11.s64 + -13744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A816EC;
	sub_8229C068(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-27168
	ctx.r8.s64 = ctx.r9.s64 + -27168;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A81700;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384100
	ctx.lr = 0x82A81708;
	sub_82384100(ctx, base);
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

__attribute__((alias("__imp__sub_82A8171C"))) PPC_WEAK_FUNC(sub_82A8171C);
PPC_FUNC_IMPL(__imp__sub_82A8171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81720"))) PPC_WEAK_FUNC(sub_82A81720);
PPC_FUNC_IMPL(__imp__sub_82A81720) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A81738;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a817bc
	if (ctx.cr6.eq) goto loc_82A817BC;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-12728
	ctx.r11.s64 = ctx.r8.s64 + -12728;
	// lis r5,-32088
	ctx.r5.s64 = -2102919168;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,6488
	ctx.r6.s64 = ctx.r5.s64 + 6488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2052
	ctx.r6.s64 = 2052;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A817AC;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A817BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A817D0"))) PPC_WEAK_FUNC(sub_82A817D0);
PPC_FUNC_IMPL(__imp__sub_82A817D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A817D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a81804
	if (!ctx.cr6.eq) goto loc_82A81804;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606590
	ctx.lr = 0x82A817F8;
	sub_82606590(ctx, base);
	// stw r3,-28600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28600, ctx.r3.u32);
	// bl 0x82606640
	ctx.lr = 0x82A81800;
	sub_82606640(ctx, base);
	// lwz r10,-28600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
loc_82A81804:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24828);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a81824
	if (ctx.cr6.eq) goto loc_82A81824;
	// bl 0x823108d8
	ctx.lr = 0x82A81818;
	sub_823108D8(ctx, base);
	// lwz r11,-24828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24828);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a8182c
	goto loc_82A8182C;
loc_82A81824:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A8182C:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a8185c
	if (!ctx.cr6.eq) goto loc_82A8185C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A8184C;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A81854;
	sub_822AADA8(ctx, base);
	// lwz r11,-24828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24828);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A8185C:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a81888
	if (!ctx.cr6.eq) goto loc_82A81888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A81878;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A81880;
	sub_82398640(ctx, base);
	// lwz r11,-24828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24828);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A81888:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a818c0
	if (ctx.cr6.eq) goto loc_82A818C0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A818A4;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a818c0
	if (!ctx.cr6.eq) goto loc_82A818C0;
	// lwz r3,-24828(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24828);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A818C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A818C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A818C8"))) PPC_WEAK_FUNC(sub_82A818C8);
PPC_FUNC_IMPL(__imp__sub_82A818C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A818D0"))) PPC_WEAK_FUNC(sub_82A818D0);
PPC_FUNC_IMPL(__imp__sub_82A818D0) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a81914
	if (!ctx.cr6.eq) goto loc_82A81914;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82606590
	ctx.lr = 0x82A81908;
	sub_82606590(ctx, base);
	// stw r3,-28600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28600, ctx.r3.u32);
	// bl 0x82606640
	ctx.lr = 0x82A81910;
	sub_82606640(ctx, base);
	// lwz r11,-28600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28600);
loc_82A81914:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A8193C"))) PPC_WEAK_FUNC(sub_82A8193C);
PPC_FUNC_IMPL(__imp__sub_82A8193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81940"))) PPC_WEAK_FUNC(sub_82A81940);
PPC_FUNC_IMPL(__imp__sub_82A81940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81944"))) PPC_WEAK_FUNC(sub_82A81944);
PPC_FUNC_IMPL(__imp__sub_82A81944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81948"))) PPC_WEAK_FUNC(sub_82A81948);
PPC_FUNC_IMPL(__imp__sub_82A81948) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81950"))) PPC_WEAK_FUNC(sub_82A81950);
PPC_FUNC_IMPL(__imp__sub_82A81950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81954"))) PPC_WEAK_FUNC(sub_82A81954);
PPC_FUNC_IMPL(__imp__sub_82A81954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81958"))) PPC_WEAK_FUNC(sub_82A81958);
PPC_FUNC_IMPL(__imp__sub_82A81958) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-12696
	ctx.r7.s64 = ctx.r9.s64 + -12696;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81988"))) PPC_WEAK_FUNC(sub_82A81988);
PPC_FUNC_IMPL(__imp__sub_82A81988) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81990"))) PPC_WEAK_FUNC(sub_82A81990);
PPC_FUNC_IMPL(__imp__sub_82A81990) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-12696
	ctx.r7.s64 = ctx.r9.s64 + -12696;
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A819B8"))) PPC_WEAK_FUNC(sub_82A819B8);
PPC_FUNC_IMPL(__imp__sub_82A819B8) {
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
	// bl 0x82a81a28
	ctx.lr = 0x82A819D8;
	sub_82A81A28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a81a0c
	if (ctx.cr6.eq) goto loc_82A81A0C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a81a04
	if (ctx.cr6.lt) goto loc_82A81A04;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a81a0c
	if (!ctx.cr6.gt) goto loc_82A81A0C;
loc_82A81A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A81A0C;
	sub_82294A58(ctx, base);
loc_82A81A0C:
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

__attribute__((alias("__imp__sub_82A81A28"))) PPC_WEAK_FUNC(sub_82A81A28);
PPC_FUNC_IMPL(__imp__sub_82A81A28) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-12696
	ctx.r10.s64 = ctx.r11.s64 + -12696;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A81A4C;
	sub_8229C068(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-28704
	ctx.r8.s64 = ctx.r9.s64 + -28704;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A81A60;
	sub_8229C068(ctx, base);
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// bl 0x823721d0
	ctx.lr = 0x82A81A68;
	sub_823721D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261ae58
	ctx.lr = 0x82A81A70;
	sub_8261AE58(ctx, base);
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

__attribute__((alias("__imp__sub_82A81A84"))) PPC_WEAK_FUNC(sub_82A81A84);
PPC_FUNC_IMPL(__imp__sub_82A81A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81A88"))) PPC_WEAK_FUNC(sub_82A81A88);
PPC_FUNC_IMPL(__imp__sub_82A81A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81A90"))) PPC_WEAK_FUNC(sub_82A81A90);
PPC_FUNC_IMPL(__imp__sub_82A81A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A81A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82295bc8
	ctx.lr = 0x82A81AA8;
	sub_82295BC8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a81b2c
	if (ctx.cr6.eq) goto loc_82A81B2C;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r31,r10,-20912
	ctx.r31.s64 = ctx.r10.s64 + -20912;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// addi r30,r9,-20920
	ctx.r30.s64 = ctx.r9.s64 + -20920;
	// lis r8,-32088
	ctx.r8.s64 = -2102919168;
	// addi r29,r8,13944
	ctx.r29.s64 = ctx.r8.s64 + 13944;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lis r6,1032
	ctx.r6.s64 = 67633152;
	// ori r5,r6,16516
	ctx.r5.u64 = ctx.r6.u64 | 16516;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x822b1680
	ctx.lr = 0x82A81AE8;
	sub_822B1680(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// addi r3,r4,-10944
	ctx.r3.s64 = ctx.r4.s64 + -10944;
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1200
	ctx.r5.s64 = 1200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x82398460
	ctx.lr = 0x82A81B24;
	sub_82398460(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// b 0x82a81b34
	goto loc_82A81B34;
loc_82A81B2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82A81B34:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A81B48"))) PPC_WEAK_FUNC(sub_82A81B48);
PPC_FUNC_IMPL(__imp__sub_82A81B48) {
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
	// bl 0x829a7b30
	ctx.lr = 0x82A81B58;
	sub_829A7B30(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-24824(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24824);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a81b7c
	if (ctx.cr6.eq) goto loc_82A81B7C;
	// bl 0x829a7b30
	ctx.lr = 0x82A81B6C;
	sub_829A7B30(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-24824(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24824);
	// stw r3,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r3.u32);
	// b 0x82a81b8c
	goto loc_82A81B8C;
loc_82A81B7C:
	// lis r7,-31883
	ctx.r7.s64 = -2089484288;
	// lwz r6,-24824(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24824);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r5.u32);
loc_82A81B8C:
	// bl 0x822955c8
	ctx.lr = 0x82A81B90;
	sub_822955C8(ctx, base);
	// lis r4,-31883
	ctx.r4.s64 = -2089484288;
	// lwz r11,-24824(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24824);
	// stw r3,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r3.u32);
	// bl 0x822949a0
	ctx.lr = 0x82A81BA0;
	sub_822949A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-24824(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24824);
	// bl 0x822b1678
	ctx.lr = 0x82A81BB0;
	sub_822B1678(ctx, base);
	// bl 0x822a8400
	ctx.lr = 0x82A81BB4;
	sub_822A8400(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a81bfc
	if (ctx.cr6.eq) goto loc_82A81BFC;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r8,-24824(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24824);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x822949a0
	ctx.lr = 0x82A81BD0;
	sub_822949A0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a81bfc
	if (!ctx.cr6.eq) goto loc_82A81BFC;
	// lis r5,-31883
	ctx.r5.s64 = -2089484288;
	// lwz r4,-24824(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24824);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r3,-24824(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24824);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A81BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A81BFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81C0C"))) PPC_WEAK_FUNC(sub_82A81C0C);
PPC_FUNC_IMPL(__imp__sub_82A81C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81C10"))) PPC_WEAK_FUNC(sub_82A81C10);
PPC_FUNC_IMPL(__imp__sub_82A81C10) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r10,r11,5760
	ctx.r10.s64 = ctx.r11.s64 + 5760;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// addi r8,r9,5760
	ctx.r8.s64 = ctx.r9.s64 + 5760;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81C44"))) PPC_WEAK_FUNC(sub_82A81C44);
PPC_FUNC_IMPL(__imp__sub_82A81C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81C48"))) PPC_WEAK_FUNC(sub_82A81C48);
PPC_FUNC_IMPL(__imp__sub_82A81C48) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822b3a90
	ctx.lr = 0x82A81C6C;
	sub_822B3A90(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x829a7b30
	ctx.lr = 0x82A81C74;
	sub_829A7B30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81CA0"))) PPC_WEAK_FUNC(sub_82A81CA0);
PPC_FUNC_IMPL(__imp__sub_82A81CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82A81CBC;
	sub_822990D8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// addi r8,r9,-1440
	ctx.r8.s64 = ctx.r9.s64 + -1440;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82A81CD8;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82A81CE4;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82294bb8
	ctx.lr = 0x82A81CF0;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A81CF8;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A81D00;
	sub_82299080(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81D14"))) PPC_WEAK_FUNC(sub_82A81D14);
PPC_FUNC_IMPL(__imp__sub_82A81D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81D18"))) PPC_WEAK_FUNC(sub_82A81D18);
PPC_FUNC_IMPL(__imp__sub_82A81D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82A81D34;
	sub_822990D8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// addi r8,r9,-1424
	ctx.r8.s64 = ctx.r9.s64 + -1424;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82A81D50;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82A81D5C;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82294bb8
	ctx.lr = 0x82A81D68;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A81D70;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A81D78;
	sub_82299080(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81D8C"))) PPC_WEAK_FUNC(sub_82A81D8C);
PPC_FUNC_IMPL(__imp__sub_82A81D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81D90"))) PPC_WEAK_FUNC(sub_82A81D90);
PPC_FUNC_IMPL(__imp__sub_82A81D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// stb r5,455(r1)
	PPC_STORE_U8(ctx.r1.u32 + 455, ctx.r5.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82A81DB0;
	sub_822990D8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// addi r8,r9,-1408
	ctx.r8.s64 = ctx.r9.s64 + -1408;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,455(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 455);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82A81DE4;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82A81DF0;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82294bb8
	ctx.lr = 0x82A81DFC;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A81E04;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A81E0C;
	sub_82299080(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81E20"))) PPC_WEAK_FUNC(sub_82A81E20);
PPC_FUNC_IMPL(__imp__sub_82A81E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82A81E3C;
	sub_822990D8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// addi r8,r9,-1376
	ctx.r8.s64 = ctx.r9.s64 + -1376;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82A81E58;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82A81E64;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82294bb8
	ctx.lr = 0x82A81E70;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A81E78;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A81E80;
	sub_82299080(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81E94"))) PPC_WEAK_FUNC(sub_82A81E94);
PPC_FUNC_IMPL(__imp__sub_82A81E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81E98"))) PPC_WEAK_FUNC(sub_82A81E98);
PPC_FUNC_IMPL(__imp__sub_82A81E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822990d8
	ctx.lr = 0x82A81EB8;
	sub_822990D8(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a81ed0
	if (!ctx.cr6.gt) goto loc_82A81ED0;
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r9.u32);
loc_82A81ED0:
	// lwz r8,444(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r6,-31906
	ctx.r6.s64 = -2090991616;
	// addi r5,r6,-1360
	ctx.r5.s64 = ctx.r6.s64 + -1360;
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295680
	ctx.lr = 0x82A81EF8;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64338
	ctx.lr = 0x82A81F04;
	sub_82B64338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82294bb8
	ctx.lr = 0x82A81F10;
	sub_82294BB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82A81F18;
	sub_82299080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A81F20;
	sub_82299080(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A81F34"))) PPC_WEAK_FUNC(sub_82A81F34);
PPC_FUNC_IMPL(__imp__sub_82A81F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A81F38"))) PPC_WEAK_FUNC(sub_82A81F38);
PPC_FUNC_IMPL(__imp__sub_82A81F38) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x82b08b98
	ctx.lr = 0x82A81F58;
	sub_82B08B98(ctx, base);
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82295bc8
	ctx.lr = 0x82A81F60;
	sub_82295BC8(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a81f80
	if (ctx.cr6.eq) goto loc_82A81F80;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82b63400
	ctx.lr = 0x82A81F78;
	sub_82B63400(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// b 0x82a81f88
	goto loc_82A81F88;
loc_82A81F80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
loc_82A81F88:
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b634d0
	ctx.lr = 0x82A81F98;
	sub_82B634D0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r6,1036(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1036);
	// stw r6,1148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1148, ctx.r6.u32);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1032(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1032);
	// stw r3,1152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1152, ctx.r3.u32);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,1040(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// stw r9,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r9.u32);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r6,1044(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1044);
	// stw r6,1160(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1160, ctx.r6.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A81FE0;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a81ca0
	ctx.lr = 0x82A81FEC;
	sub_82A81CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1016(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1016);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,1016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A82014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82299080
	ctx.lr = 0x82A8201C;
	sub_82299080(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r31,r7,1148
	ctx.r31.s64 = ctx.r7.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A8202C;
	sub_82A81A88(ctx, base);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A82044;
	sub_82563CE8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1004(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// bl 0x82563ce8
	ctx.lr = 0x82A82060;
	sub_82563CE8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stfs f0,1136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1136, temp.u32);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r31,r10,1148
	ctx.r31.s64 = ctx.r10.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A8207C;
	sub_82A81A88(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A82094;
	sub_82563CE8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1004(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1004);
	// bl 0x82563ce8
	ctx.lr = 0x82A820B0;
	sub_82563CE8(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stfs f13,1140(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1140, temp.u32);
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,1036(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1036);
	// addi r4,r5,948
	ctx.r4.s64 = ctx.r5.s64 + 948;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r3,1164
	ctx.r11.s64 = ctx.r3.s64 + 1164;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r4,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r31,r7,1148
	ctx.r31.s64 = ctx.r7.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82128;
	sub_82A81A88(ctx, base);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r4,r5,948
	ctx.r4.s64 = ctx.r5.s64 + 948;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r10,r11,-16728
	ctx.r10.s64 = ctx.r11.s64 + -16728;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82194;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a81d18
	ctx.lr = 0x82A821A0;
	sub_82A81D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,1020(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A821C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x82A821CC;
	sub_82299080(ctx, base);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,984(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 984);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b635b0
	ctx.lr = 0x82A821DC;
	sub_82B635B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63b30
	ctx.lr = 0x82A821E4;
	sub_82B63B30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63a00
	ctx.lr = 0x82A821EC;
	sub_82B63A00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,996(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 996);
	// bl 0x82556ff8
	ctx.lr = 0x82A821FC;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1024(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1024);
	// bl 0x82556ff8
	ctx.lr = 0x82A8220C;
	sub_82556FF8(ctx, base);
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,1184(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1184);
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r4,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r4.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r4,r9,-10880
	ctx.r4.s64 = ctx.r9.s64 + -10880;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8233df70
	ctx.lr = 0x82A82248;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82562de8
	ctx.lr = 0x82A82258;
	sub_82562DE8(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r3,1048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1048, ctx.r3.u32);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,1052(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1052, ctx.r6.u32);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,1048(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1048);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a822d0
	if (ctx.cr6.eq) goto loc_82A822D0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,-10836
	ctx.r4.s64 = ctx.r10.s64 + -10836;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8233df70
	ctx.lr = 0x82A822A4;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82562de8
	ctx.lr = 0x82A822B8;
	sub_82562DE8(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r3,1052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1052, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1048(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1048);
	// bl 0x82556ff8
	ctx.lr = 0x82A822D0;
	sub_82556FF8(ctx, base);
loc_82A822D0:
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r5.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// addi r4,r4,-10796
	ctx.r4.s64 = ctx.r4.s64 + -10796;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8233df70
	ctx.lr = 0x82A822F8;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82562de8
	ctx.lr = 0x82A82308;
	sub_82562DE8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r3,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r3.u32);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,1056(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a823d8
	if (ctx.cr6.eq) goto loc_82A823D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63d60
	ctx.lr = 0x82A82328;
	sub_82B63D60(ctx, base);
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82338;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81d90
	ctx.lr = 0x82A82348;
	sub_82A81D90(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r7,1056(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1056(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,668(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8236C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a82388
	if (ctx.cr6.eq) goto loc_82A82388;
	// lis r9,-31905
	ctx.r9.s64 = -2090926080;
	// addi r8,r9,-16728
	ctx.r8.s64 = ctx.r9.s64 + -16728;
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// b 0x82a82394
	goto loc_82A82394;
loc_82A82388:
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r6,r7,1532
	ctx.r6.s64 = ctx.r7.s64 + 1532;
	// stw r6,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
loc_82A82394:
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r11,1056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,676(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 676);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A823C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1056(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1056);
	// bl 0x82556ff8
	ctx.lr = 0x82A823D0;
	sub_82556FF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82A823D8;
	sub_82299080(ctx, base);
loc_82A823D8:
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,1184(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1184);
	// rlwinm r4,r5,0,2,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r4,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r4.u32);
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r4,r9,-10772
	ctx.r4.s64 = ctx.r9.s64 + -10772;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8233df70
	ctx.lr = 0x82A82414;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82562de8
	ctx.lr = 0x82A82424;
	sub_82562DE8(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r3,1060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1060, ctx.r3.u32);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,1064(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1064, ctx.r6.u32);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,1060(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1060);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a8249c
	if (ctx.cr6.eq) goto loc_82A8249C;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r10,-10740
	ctx.r4.s64 = ctx.r10.s64 + -10740;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8233df70
	ctx.lr = 0x82A82470;
	sub_8233DF70(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1060(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1060);
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82562de8
	ctx.lr = 0x82A82484;
	sub_82562DE8(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r3,1064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1064, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1060(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1060);
	// bl 0x82556ff8
	ctx.lr = 0x82A8249C;
	sub_82556FF8(ctx, base);
loc_82A8249C:
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,1008(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1008);
	// lwz r3,976(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// stw r3,896(r4)
	PPC_STORE_U32(ctx.r4.u32 + 896, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,1008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// bl 0x82556ff8
	ctx.lr = 0x82A824C0;
	sub_82556FF8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,1188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1188, ctx.r9.u8);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f12,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1192(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1192, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82A824FC;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-16468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16468);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,980(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82A8251C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f1,17440(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,992(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 992);
	// bl 0x82563f48
	ctx.lr = 0x82A8253C;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f1,-16472(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -16472);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r3,992(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// bl 0x82563f48
	ctx.lr = 0x82A8255C;
	sub_82563F48(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 916, ctx.r10.u32);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f11,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1144(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1144, temp.u32);
	// bl 0x82b64238
	ctx.lr = 0x82A8257C;
	sub_82B64238(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

__attribute__((alias("__imp__sub_82A82598"))) PPC_WEAK_FUNC(sub_82A82598);
PPC_FUNC_IMPL(__imp__sub_82A82598) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a82604
	if (ctx.cr6.eq) goto loc_82A82604;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1112(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1112);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1088(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// bl 0x82b640d0
	ctx.lr = 0x82A825D4;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1048(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1048);
	// bl 0x82556ff8
	ctx.lr = 0x82A825E4;
	sub_82556FF8(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1184(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1184);
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a826f8
	goto loc_82A826F8;
	// b 0x82a82624
	goto loc_82A82624;
loc_82A82604:
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,1184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1184);
	// rlwinm r7,r8,2,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a82624
	if (ctx.cr6.eq) goto loc_82A82624;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a826f8
	goto loc_82A826F8;
loc_82A82624:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r4,1188(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1188);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82a8263c
	if (ctx.cr6.eq) goto loc_82A8263C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a826f8
	goto loc_82A826F8;
loc_82A8263C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,1112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// bl 0x82b640d0
	ctx.lr = 0x82A82650;
	sub_82B640D0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,1056(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a82670
	if (ctx.cr6.eq) goto loc_82A82670;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,1056(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// bl 0x82556ff8
	ctx.lr = 0x82A82670;
	sub_82556FF8(ctx, base);
loc_82A82670:
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,916(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 916);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a826e4
	if (ctx.cr6.eq) goto loc_82A826E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63a00
	ctx.lr = 0x82A82690;
	sub_82B63A00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b634d8
	ctx.lr = 0x82A82698;
	sub_82B634D8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a826dc
	if (ctx.cr6.eq) goto loc_82A826DC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b634c8
	ctx.lr = 0x82A826BC;
	sub_82B634C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a826d0
	if (ctx.cr6.eq) goto loc_82A826D0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822990f0
	ctx.lr = 0x82A826D0;
	sub_822990F0(ctx, base);
loc_82A826D0:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x82a826e4
	goto loc_82A826E4;
loc_82A826DC:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_82A826E4:
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,916(r7)
	PPC_STORE_U32(ctx.r7.u32 + 916, ctx.r6.u32);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82b08c00
	ctx.lr = 0x82A826F8;
	sub_82B08C00(ctx, base);
loc_82A826F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A82708"))) PPC_WEAK_FUNC(sub_82A82708);
PPC_FUNC_IMPL(__imp__sub_82A82708) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b634c8
	ctx.lr = 0x82A82724;
	sub_82B634C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a8273c
	if (ctx.cr6.eq) goto loc_82A8273C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822990f0
	ctx.lr = 0x82A8273C;
	sub_822990F0(ctx, base);
loc_82A8273C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A82750"))) PPC_WEAK_FUNC(sub_82A82750);
PPC_FUNC_IMPL(__imp__sub_82A82750) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82b08c70
	ctx.lr = 0x82A82768;
	sub_82B08C70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A82778"))) PPC_WEAK_FUNC(sub_82A82778);
PPC_FUNC_IMPL(__imp__sub_82A82778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r3.u32);
	// stfs f1,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 716, temp.u32);
	// lfs f1,716(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// bl 0x82b08e40
	ctx.lr = 0x82A8279C;
	sub_82B08E40(ctx, base);
	// lfs f1,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r9,700(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A827B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r7,916(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 916);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lbz r5,920(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 920);
	// stw r5,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r5.u32);
	// lwz r4,616(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r4,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// lwz r3,620(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a827f4
	if (ctx.cr6.lt) goto loc_82A827F4;
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a82810
	if (ctx.cr6.eq) goto loc_82A82810;
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A827F4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a82808
	if (ctx.cr6.eq) goto loc_82A82808;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63a00
	ctx.lr = 0x82A82808;
	sub_82B63A00(ctx, base);
loc_82A82808:
	// b 0x82a8332c
	goto loc_82A8332C;
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A82810:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a8332c
	if (ctx.cr6.eq) goto loc_82A8332C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b638b0
	ctx.lr = 0x82A82824;
	sub_82B638B0(ctx, base);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r7,1056(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a82844
	if (ctx.cr6.eq) goto loc_82A82844;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// bl 0x82556ff8
	ctx.lr = 0x82A82844;
	sub_82556FF8(ctx, base);
loc_82A82844:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63d60
	ctx.lr = 0x82A8284C;
	sub_82B63D60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82a8287c
	if (ctx.cr6.eq) goto loc_82A8287C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,996(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 996);
	// bl 0x82556ff8
	ctx.lr = 0x82A82868;
	sub_82556FF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// bl 0x82556ff8
	ctx.lr = 0x82A82878;
	sub_82556FF8(ctx, base);
	// b 0x82a8289c
	goto loc_82A8289C;
loc_82A8287C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,996(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// bl 0x82556ff8
	ctx.lr = 0x82A8288C;
	sub_82556FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	// bl 0x82556ff8
	ctx.lr = 0x82A8289C;
	sub_82556FF8(ctx, base);
loc_82A8289C:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lbz r6,1188(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1188);
	// stw r6,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r6.u32);
	// lwz r5,624(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82a828d8
	if (ctx.cr6.eq) goto loc_82A828D8;
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82a82948
	if (ctx.cr6.eq) goto loc_82A82948;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82a82990
	if (ctx.cr6.eq) goto loc_82A82990;
	// b 0x82a82a94
	goto loc_82A82A94;
loc_82A828D8:
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f0,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1180);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,1192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stfs f10,1192(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1192, temp.u32);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f9,1192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1192);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-31904
	ctx.r7.s64 = -2090860544;
	// lfs f8,-14320(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14320);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x82a82930
	if (!ctx.cr6.gt) goto loc_82A82930;
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f7,-32444(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32444);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1192(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1192, temp.u32);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r3,1188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1188, ctx.r3.u8);
loc_82A82930:
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f1,1192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// bl 0x82b64cb8
	ctx.lr = 0x82A82944;
	sub_82B64CB8(ctx, base);
	// b 0x82a82a9c
	goto loc_82A82A9C;
loc_82A82948:
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r8,976(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 976);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 976);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,328(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 328);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A82968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8298c
	if (ctx.cr6.eq) goto loc_82A8298C;
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lfs f6,-32444(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -32444);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1192(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1192, temp.u32);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,1188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1188, ctx.r10.u8);
loc_82A8298C:
	// b 0x82a82a9c
	goto loc_82A82A9C;
loc_82A82990:
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f5,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,1180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1180);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// lfs f2,1192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1192);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stfs f1,1192(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1192, temp.u32);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f0,1192(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f13,-29076(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29076);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a82a7c
	if (!ctx.cr6.lt) goto loc_82A82A7C;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// bl 0x82b64cb8
	ctx.lr = 0x82A829E0;
	sub_82B64CB8(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// bl 0x82b64c28
	ctx.lr = 0x82A829EC;
	sub_82B64C28(ctx, base);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f12,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1192(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1192, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1008(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1008);
	// bl 0x82556ff8
	ctx.lr = 0x82A82A0C;
	sub_82556FF8(ctx, base);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,1188(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1188, ctx.r6.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63e68
	ctx.lr = 0x82A82A20;
	sub_82B63E68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82A2C;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81e98
	ctx.lr = 0x82A82A3C;
	sub_82A81E98(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1064(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1064);
	// bl 0x82570f58
	ctx.lr = 0x82A82A4C;
	sub_82570F58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1060(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// bl 0x82556ff8
	ctx.lr = 0x82A82A5C;
	sub_82556FF8(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stw r9,1184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1184, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82A82A78;
	sub_82299080(ctx, base);
	// b 0x82a82a90
	goto loc_82A82A90;
loc_82A82A7C:
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f1,1192(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1192);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// bl 0x82b64cb8
	ctx.lr = 0x82A82A90;
	sub_82B64CB8(ctx, base);
loc_82A82A90:
	// b 0x82a82a9c
	goto loc_82A82A9C;
loc_82A82A94:
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
loc_82A82A9C:
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82a82aac
	if (ctx.cr6.eq) goto loc_82A82AAC;
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A82AAC:
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f11,1144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f10,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x82a82ac8
	if (ctx.cr6.eq) goto loc_82A82AC8;
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A82AC8:
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r9,928(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a82c00
	if (ctx.cr6.eq) goto loc_82A82C00;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r6,1184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1184);
	// rlwinm r5,r6,2,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a82bfc
	if (!ctx.cr6.eq) goto loc_82A82BFC;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r11,1184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a82bfc
	if (ctx.cr6.eq) goto loc_82A82BFC;
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r7,1184(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1184);
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stw r6,1184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1184, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// bl 0x82556ff8
	ctx.lr = 0x82A82B30;
	sub_82556FF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63558
	ctx.lr = 0x82A82B38;
	sub_82B63558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a82bfc
	if (!ctx.cr6.eq) goto loc_82A82BFC;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a82b8c
	if (ctx.cr6.eq) goto loc_82A82B8C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r9,21574
	ctx.r4.s64 = ctx.r9.s64 + 21574;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82295680
	ctx.lr = 0x82A82B60;
	sub_82295680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r7,1056(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,668(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A82B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x82A82B8C;
	sub_82299080(ctx, base);
loc_82A82B8C:
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1100(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1100);
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1076(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1076);
	// bl 0x82b640d0
	ctx.lr = 0x82A82BA0;
	sub_82B640D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63b30
	ctx.lr = 0x82A82BA8;
	sub_82B63B30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 976);
	// bl 0x82b64b98
	ctx.lr = 0x82A82BBC;
	sub_82B64B98(ctx, base);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f1,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,976(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// bl 0x82b64cb8
	ctx.lr = 0x82A82BD0;
	sub_82B64CB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1008(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1008);
	// bl 0x82556ff8
	ctx.lr = 0x82A82BE0;
	sub_82556FF8(ctx, base);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lfs f9,-15120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1192(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1192, temp.u32);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1188, ctx.r10.u8);
loc_82A82BFC:
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A82C00:
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r8,928(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 928);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a82f1c
	if (ctx.cr6.eq) goto loc_82A82F1C;
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r5,1184(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1184);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a82f18
	if (!ctx.cr6.eq) goto loc_82A82F18;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a82f18
	if (!ctx.cr6.eq) goto loc_82A82F18;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82C4C;
	sub_82A81A88(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b634e0
	ctx.lr = 0x82A82C58;
	sub_82B634E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a82f18
	if (!ctx.cr6.eq) goto loc_82A82F18;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r6,r7,1164
	ctx.r6.s64 = ctx.r7.s64 + 1164;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r4,r5,1148
	ctx.r4.s64 = ctx.r5.s64 + 1148;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r10,948
	ctx.r9.s64 = ctx.r10.s64 + 948;
	// stw r9,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r9.u32);
	// stw r6,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r6.u32);
	// lwz r8,632(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,628(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,632(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,628(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,632(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,628(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r7,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82CD0;
	sub_82A81A88(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r4,r5,1148
	ctx.r4.s64 = ctx.r5.s64 + 1148;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r10,948
	ctx.r9.s64 = ctx.r10.s64 + 948;
	// lis r8,-31905
	ctx.r8.s64 = -2090926080;
	// addi r7,r8,-16728
	ctx.r7.s64 = ctx.r8.s64 + -16728;
	// stw r9,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r9.u32);
	// stw r7,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r7.u32);
	// lwz r6,640(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,636(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,636(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,640(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,636(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r6,640(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,636(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r31,r3,1148
	ctx.r31.s64 = ctx.r3.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82D4C;
	sub_82A81A88(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A82D64;
	sub_82563CE8(ctx, base);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f8,1136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1004(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1004);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82563f48
	ctx.lr = 0x82A82D88;
	sub_82563F48(ctx, base);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r31,r8,1148
	ctx.r31.s64 = ctx.r8.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82D98;
	sub_82A81A88(ctx, base);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A82DB0;
	sub_82563CE8(ctx, base);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f7,1140(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1140);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1004(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1004);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82563f48
	ctx.lr = 0x82A82DD4;
	sub_82563F48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82DDC;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82a81ca0
	ctx.lr = 0x82A82DE8;
	sub_82A81CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r11,1016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1016(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A82E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82299080
	ctx.lr = 0x82A82E14;
	sub_82299080(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82E1C;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82a81d18
	ctx.lr = 0x82A82E28;
	sub_82A81D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r6,1020(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1020);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1020(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1020);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A82E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82299080
	ctx.lr = 0x82A82E54;
	sub_82299080(ctx, base);
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1092(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1068(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1068);
	// bl 0x82b640d0
	ctx.lr = 0x82A82E68;
	sub_82B640D0(ctx, base);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r6,1056(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1056);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a82f18
	if (ctx.cr6.eq) goto loc_82A82F18;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63d60
	ctx.lr = 0x82A82E80;
	sub_82B63D60(ctx, base);
	// stb r3,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r3.u8);
	// lbz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a81d90
	ctx.lr = 0x82A82E94;
	sub_82A81D90(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1056);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A82EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a82ed8
	if (ctx.cr6.eq) goto loc_82A82ED8;
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r5,r6,-16728
	ctx.r5.s64 = ctx.r6.s64 + -16728;
	// stw r5,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r5.u32);
	// b 0x82a82ee4
	goto loc_82A82EE4;
loc_82A82ED8:
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,1532
	ctx.r3.s64 = ctx.r4.s64 + 1532;
	// stw r3,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r3.u32);
loc_82A82EE4:
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r9,1056(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,676(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 676);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A82F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82299080
	ctx.lr = 0x82A82F18;
	sub_82299080(ctx, base);
loc_82A82F18:
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A82F1C:
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,928(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 928);
	// rlwinm r3,r4,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a83234
	if (ctx.cr6.eq) goto loc_82A83234;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a83230
	if (!ctx.cr6.eq) goto loc_82A83230;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r6,1184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1184);
	// rlwinm r5,r6,2,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a83230
	if (!ctx.cr6.eq) goto loc_82A83230;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82F68;
	sub_82A81A88(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63518
	ctx.lr = 0x82A82F74;
	sub_82B63518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a83230
	if (!ctx.cr6.eq) goto loc_82A83230;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r11,r3,1164
	ctx.r11.s64 = ctx.r3.s64 + 1164;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r9,r10,1148
	ctx.r9.s64 = ctx.r10.s64 + 1148;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r6,948
	ctx.r5.s64 = ctx.r6.s64 + 948;
	// stw r5,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r5.u32);
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,652(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,648(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r7,652(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,648(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A82FEC;
	sub_82A81A88(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r9,r10,1148
	ctx.r9.s64 = ctx.r10.s64 + 1148;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r6,948
	ctx.r5.s64 = ctx.r6.s64 + 948;
	// lis r4,-31905
	ctx.r4.s64 = -2090926080;
	// addi r3,r4,-16728
	ctx.r3.s64 = ctx.r4.s64 + -16728;
	// stw r5,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r5.u32);
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// lwz r11,660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,656(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,660(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,656(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r5,660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r11,660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,656(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r31,r8,1148
	ctx.r31.s64 = ctx.r8.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A83068;
	sub_82A81A88(ctx, base);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A83080;
	sub_82563CE8(ctx, base);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f6,1136(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1136);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1004(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1004);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82563f48
	ctx.lr = 0x82A830A4;
	sub_82563F48(ctx, base);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r31,r4,1148
	ctx.r31.s64 = ctx.r4.s64 + 1148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A830B4;
	sub_82A81A88(ctx, base);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82563ce8
	ctx.lr = 0x82A830CC;
	sub_82563CE8(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lfs f5,1140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1004(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1004);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82563f48
	ctx.lr = 0x82A830F0;
	sub_82563F48(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A830F8;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82a81ca0
	ctx.lr = 0x82A83104;
	sub_82A81CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r8,1016(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1016);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1016(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1016);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,668(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 668);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A83128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82299080
	ctx.lr = 0x82A83130;
	sub_82299080(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A83138;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82a81d18
	ctx.lr = 0x82A83144;
	sub_82A81D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1020(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A83168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82299080
	ctx.lr = 0x82A83170;
	sub_82299080(ctx, base);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1092(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1092);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1068(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1068);
	// bl 0x82b640d0
	ctx.lr = 0x82A83184;
	sub_82B640D0(ctx, base);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1056(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1056);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a83230
	if (ctx.cr6.eq) goto loc_82A83230;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63d60
	ctx.lr = 0x82A8319C;
	sub_82B63D60(ctx, base);
	// stb r3,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r3.u8);
	// lbz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a81d90
	ctx.lr = 0x82A831B0;
	sub_82A81D90(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r11,1056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,668(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 668);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A831D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a831f0
	if (ctx.cr6.eq) goto loc_82A831F0;
	// lis r6,-31905
	ctx.r6.s64 = -2090926080;
	// addi r5,r6,-16728
	ctx.r5.s64 = ctx.r6.s64 + -16728;
	// stw r5,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r5.u32);
	// b 0x82a831fc
	goto loc_82A831FC;
loc_82A831F0:
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// addi r3,r4,1532
	ctx.r3.s64 = ctx.r4.s64 + 1532;
	// stw r3,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r3.u32);
loc_82A831FC:
	// lwz r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r9,1056(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1056(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1056);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,676(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 676);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A83228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x82A83230;
	sub_82299080(ctx, base);
loc_82A83230:
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A83234:
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,928(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 928);
	// rlwinm r3,r4,0,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8332c
	if (ctx.cr6.eq) goto loc_82A8332C;
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a8329c
	if (ctx.cr6.eq) goto loc_82A8329C;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1100(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1100);
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1076(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// bl 0x82b640d0
	ctx.lr = 0x82A83274;
	sub_82B640D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1060(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1060);
	// bl 0x82556ff8
	ctx.lr = 0x82A83284;
	sub_82556FF8(ctx, base);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1184(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1184);
	// rlwinm r11,r3,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// b 0x82a8332c
	goto loc_82A8332C;
loc_82A8329C:
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r8,1184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1184);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a8332c
	if (!ctx.cr6.eq) goto loc_82A8332C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b63d60
	ctx.lr = 0x82A832BC;
	sub_82B63D60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82a8332c
	if (ctx.cr6.eq) goto loc_82A8332C;
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1184(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1184);
	// oris r11,r3,32768
	ctx.r11.u64 = ctx.r3.u64 | 2147483648;
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// lwz r9,708(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,1096(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1096);
	// lwz r8,708(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1072(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1072);
	// bl 0x82b640d0
	ctx.lr = 0x82A832F0;
	sub_82B640D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a81a88
	ctx.lr = 0x82A832F8;
	sub_82A81A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82a81e20
	ctx.lr = 0x82A83304;
	sub_82A81E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1052(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1052);
	// bl 0x82570f58
	ctx.lr = 0x82A83314;
	sub_82570F58(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82299080
	ctx.lr = 0x82A8331C;
	sub_82299080(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,708(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,1048(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1048);
	// bl 0x82556ff8
	ctx.lr = 0x82A8332C;
	sub_82556FF8(ctx, base);
loc_82A8332C:
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,928(r5)
	PPC_STORE_U32(ctx.r5.u32 + 928, ctx.r4.u32);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8334C"))) PPC_WEAK_FUNC(sub_82A8334C);
PPC_FUNC_IMPL(__imp__sub_82A8334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83350"))) PPC_WEAK_FUNC(sub_82A83350);
PPC_FUNC_IMPL(__imp__sub_82A83350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82b090c0
	ctx.lr = 0x82A83370;
	sub_82B090C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82A83390;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f1,-16196(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16196);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 980);
	// bl 0x82563f48
	ctx.lr = 0x82A833B0;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f1,-15120(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,992(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// bl 0x82563f48
	ctx.lr = 0x82A833D0;
	sub_82563F48(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,17440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17440);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 992);
	// bl 0x82563f48
	ctx.lr = 0x82A833F0;
	sub_82563F48(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,848(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 848);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a83454
	if (ctx.cr6.eq) goto loc_82A83454;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r11,920(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 920);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a83454
	if (ctx.cr6.eq) goto loc_82A83454;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1024);
	// bl 0x82556ff8
	ctx.lr = 0x82A83444;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,996(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 996);
	// bl 0x82556ff8
	ctx.lr = 0x82A83454;
	sub_82556FF8(ctx, base);
loc_82A83454:
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,1044(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1044);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,960(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 960, temp.u32);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,1040(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1040);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,960(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 960, temp.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,1036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,960(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 960, temp.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,1032(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,960(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 960, temp.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,1028(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1028);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,960(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 960, temp.u32);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,1020(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,960(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 960, temp.u32);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1016(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1016);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,960(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,1012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,960(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 960, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1012(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1012);
	// bl 0x82556ff8
	ctx.lr = 0x82A834E4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1016(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1016);
	// bl 0x82556ff8
	ctx.lr = 0x82A834F4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1020(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1020);
	// bl 0x82556ff8
	ctx.lr = 0x82A83504;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1028(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1028);
	// bl 0x82556ff8
	ctx.lr = 0x82A83514;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1032(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1032);
	// bl 0x82556ff8
	ctx.lr = 0x82A83524;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// bl 0x82556ff8
	ctx.lr = 0x82A83534;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// bl 0x82556ff8
	ctx.lr = 0x82A83544;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1044(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	// bl 0x82556ff8
	ctx.lr = 0x82A83554;
	sub_82556FF8(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,1004(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1004);
	// lfs f5,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,932(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 932, temp.u32);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,1000(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1000);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,932(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 932, temp.u32);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,988(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 988);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,932(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 932, temp.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,984(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,932(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 932, temp.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,992(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 992);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,932(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 932, temp.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r7,980(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 980);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,932(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 932, temp.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,980(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 980);
	// bl 0x82556ff8
	ctx.lr = 0x82A835C4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,992(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 992);
	// bl 0x82556ff8
	ctx.lr = 0x82A835D4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	// bl 0x82556ff8
	ctx.lr = 0x82A835E4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// bl 0x82556ff8
	ctx.lr = 0x82A835F4;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1000(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1000);
	// bl 0x82556ff8
	ctx.lr = 0x82A83604;
	sub_82556FF8(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,1004(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1004);
	// bl 0x82556ff8
	ctx.lr = 0x82A83614;
	sub_82556FF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83624"))) PPC_WEAK_FUNC(sub_82A83624);
PPC_FUNC_IMPL(__imp__sub_82A83624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83628"))) PPC_WEAK_FUNC(sub_82A83628);
PPC_FUNC_IMPL(__imp__sub_82A83628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f0,1144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stfs f12,1144(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1144, temp.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfs f11,1144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1144);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f10,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82a83670
	if (!ctx.cr6.lt) goto loc_82A83670;
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lfs f9,-15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15120);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1144(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1144, temp.u32);
loc_82A83670:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83674"))) PPC_WEAK_FUNC(sub_82A83674);
PPC_FUNC_IMPL(__imp__sub_82A83674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83678"))) PPC_WEAK_FUNC(sub_82A83678);
PPC_FUNC_IMPL(__imp__sub_82A83678) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-10008
	ctx.r8.s64 = ctx.r9.s64 + -10008;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A836A0"))) PPC_WEAK_FUNC(sub_82A836A0);
PPC_FUNC_IMPL(__imp__sub_82A836A0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A836A8"))) PPC_WEAK_FUNC(sub_82A836A8);
PPC_FUNC_IMPL(__imp__sub_82A836A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-10008
	ctx.r8.s64 = ctx.r9.s64 + -10008;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A836C8"))) PPC_WEAK_FUNC(sub_82A836C8);
PPC_FUNC_IMPL(__imp__sub_82A836C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// lwz r11,-25660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A836E8"))) PPC_WEAK_FUNC(sub_82A836E8);
PPC_FUNC_IMPL(__imp__sub_82A836E8) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-10712
	ctx.r10.s64 = ctx.r11.s64 + -10712;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A83714;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82A8371C;
	sub_82A60080(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a83750
	if (ctx.cr6.eq) goto loc_82A83750;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a83748
	if (ctx.cr6.lt) goto loc_82A83748;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a83750
	if (!ctx.cr6.gt) goto loc_82A83750;
loc_82A83748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A83750;
	sub_82294A58(ctx, base);
loc_82A83750:
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

__attribute__((alias("__imp__sub_82A8376C"))) PPC_WEAK_FUNC(sub_82A8376C);
PPC_FUNC_IMPL(__imp__sub_82A8376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83770"))) PPC_WEAK_FUNC(sub_82A83770);
PPC_FUNC_IMPL(__imp__sub_82A83770) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-10712
	ctx.r10.s64 = ctx.r11.s64 + -10712;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A83794;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82A8379C;
	sub_82A60080(ctx, base);
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

__attribute__((alias("__imp__sub_82A837B0"))) PPC_WEAK_FUNC(sub_82A837B0);
PPC_FUNC_IMPL(__imp__sub_82A837B0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-10008
	ctx.r10.s64 = ctx.r11.s64 + -10008;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A837DC;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A837F0;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82A837F8;
	sub_82A60080(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a8382c
	if (ctx.cr6.eq) goto loc_82A8382C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a83824
	if (ctx.cr6.lt) goto loc_82A83824;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8382c
	if (!ctx.cr6.gt) goto loc_82A8382C;
loc_82A83824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A8382C;
	sub_82294A58(ctx, base);
loc_82A8382C:
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

__attribute__((alias("__imp__sub_82A83848"))) PPC_WEAK_FUNC(sub_82A83848);
PPC_FUNC_IMPL(__imp__sub_82A83848) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-10008
	ctx.r10.s64 = ctx.r11.s64 + -10008;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A8386C;
	sub_8229C068(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-10712
	ctx.r8.s64 = ctx.r9.s64 + -10712;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A83880;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a60080
	ctx.lr = 0x82A83888;
	sub_82A60080(ctx, base);
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

__attribute__((alias("__imp__sub_82A8389C"))) PPC_WEAK_FUNC(sub_82A8389C);
PPC_FUNC_IMPL(__imp__sub_82A8389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A838A0"))) PPC_WEAK_FUNC(sub_82A838A0);
PPC_FUNC_IMPL(__imp__sub_82A838A0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A838B8;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8393c
	if (ctx.cr6.eq) goto loc_82A8393C;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,-9304
	ctx.r11.s64 = ctx.r8.s64 + -9304;
	// lis r5,-32087
	ctx.r5.s64 = -2102853632;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-26512
	ctx.r6.s64 = ctx.r5.s64 + -26512;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,-988
	ctx.r10.s64 = ctx.r4.s64 + -988;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2312
	ctx.r5.s64 = 2312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A8392C;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A8393C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83950"))) PPC_WEAK_FUNC(sub_82A83950);
PPC_FUNC_IMPL(__imp__sub_82A83950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A83958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-28648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a83984
	if (!ctx.cr6.eq) goto loc_82A83984;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604b40
	ctx.lr = 0x82A83978;
	sub_82604B40(ctx, base);
	// stw r3,-28648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28648, ctx.r3.u32);
	// bl 0x82604bf0
	ctx.lr = 0x82A83980;
	sub_82604BF0(ctx, base);
	// lwz r10,-28648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
loc_82A83984:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-24820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24820);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a839a4
	if (ctx.cr6.eq) goto loc_82A839A4;
	// bl 0x82313678
	ctx.lr = 0x82A83998;
	sub_82313678(ctx, base);
	// lwz r11,-24820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24820);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a839ac
	goto loc_82A839AC;
loc_82A839A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A839AC:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r10,14476
	ctx.r30.s64 = ctx.r10.s64 + 14476;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a839dc
	if (!ctx.cr6.eq) goto loc_82A839DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A839CC;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A839D4;
	sub_822AADA8(ctx, base);
	// lwz r11,-24820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24820);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A839DC:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a83a08
	if (!ctx.cr6.eq) goto loc_82A83A08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A839F8;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A83A00;
	sub_82398640(ctx, base);
	// lwz r11,-24820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24820);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A83A08:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a83a40
	if (ctx.cr6.eq) goto loc_82A83A40;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A83A24;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a83a40
	if (!ctx.cr6.eq) goto loc_82A83A40;
	// lwz r3,-24820(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24820);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A83A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A83A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A83A48"))) PPC_WEAK_FUNC(sub_82A83A48);
PPC_FUNC_IMPL(__imp__sub_82A83A48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83A50"))) PPC_WEAK_FUNC(sub_82A83A50);
PPC_FUNC_IMPL(__imp__sub_82A83A50) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-28648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a83a94
	if (!ctx.cr6.eq) goto loc_82A83A94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82604b40
	ctx.lr = 0x82A83A88;
	sub_82604B40(ctx, base);
	// stw r3,-28648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28648, ctx.r3.u32);
	// bl 0x82604bf0
	ctx.lr = 0x82A83A90;
	sub_82604BF0(ctx, base);
	// lwz r11,-28648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28648);
loc_82A83A94:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82A83ABC"))) PPC_WEAK_FUNC(sub_82A83ABC);
PPC_FUNC_IMPL(__imp__sub_82A83ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83AC0"))) PPC_WEAK_FUNC(sub_82A83AC0);
PPC_FUNC_IMPL(__imp__sub_82A83AC0) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a83b8c
	if (ctx.cr6.eq) goto loc_82A83B8C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a83af8
	if (ctx.cr6.gt) goto loc_82A83AF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a83b00
	goto loc_82A83B00;
loc_82A83AF8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A83B00:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A83B08;
	sub_8258A128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a83b8c
	if (ctx.cr6.eq) goto loc_82A83B8C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a83b40
	if (ctx.cr6.eq) goto loc_82A83B40;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a83b40
	if (!ctx.cr6.gt) goto loc_82A83B40;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a83b48
	if (!ctx.cr6.eq) goto loc_82A83B48;
loc_82A83B40:
	// lwz r3,2220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// b 0x82a83b50
	goto loc_82A83B50;
loc_82A83B48:
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x829d9328
	ctx.lr = 0x82A83B50;
	sub_829D9328(ctx, base);
loc_82A83B50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a83b70
	if (!ctx.cr6.eq) goto loc_82A83B70;
	// lwz r3,2208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
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
loc_82A83B70:
	// lwz r3,856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// bl 0x829d93a8
	ctx.lr = 0x82A83B78;
	sub_829D93A8(ctx, base);
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
loc_82A83B8C:
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
}

__attribute__((alias("__imp__sub_82A83BA4"))) PPC_WEAK_FUNC(sub_82A83BA4);
PPC_FUNC_IMPL(__imp__sub_82A83BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83BA8"))) PPC_WEAK_FUNC(sub_82A83BA8);
PPC_FUNC_IMPL(__imp__sub_82A83BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A83BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a83c94
	if (!ctx.cr6.gt) goto loc_82A83C94;
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a83c94
	if (ctx.cr6.eq) goto loc_82A83C94;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a83c94
	if (ctx.cr6.eq) goto loc_82A83C94;
	// lwz r10,160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a83c94
	if (ctx.cr6.eq) goto loc_82A83C94;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a83c28
	if (ctx.cr6.eq) goto loc_82A83C28;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A83C28:
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1138
	ctx.lr = 0x82A83C30;
	sub_822D1138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824b1b30
	ctx.lr = 0x82A83C44;
	sub_824B1B30(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a83c8c
	if (!ctx.cr6.gt) goto loc_82A83C8C;
loc_82A83C54:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x824e1a30
	ctx.lr = 0x82A83C60;
	sub_824E1A30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a83c78
	if (ctx.cr6.eq) goto loc_82A83C78;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a83ca0
	if (!ctx.cr6.eq) goto loc_82A83CA0;
loc_82A83C78:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a83c54
	if (ctx.cr6.lt) goto loc_82A83C54;
loc_82A83C8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230db18
	ctx.lr = 0x82A83C94;
	sub_8230DB18(ctx, base);
loc_82A83C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A83CA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230db18
	ctx.lr = 0x82A83CA8;
	sub_8230DB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A83CB4"))) PPC_WEAK_FUNC(sub_82A83CB4);
PPC_FUNC_IMPL(__imp__sub_82A83CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83CB8"))) PPC_WEAK_FUNC(sub_82A83CB8);
PPC_FUNC_IMPL(__imp__sub_82A83CB8) {
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
	// lwz r4,1052(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1052);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a83cec
	if (ctx.cr6.eq) goto loc_82A83CEC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8242f280
	ctx.lr = 0x82A83CE8;
	sub_8242F280(ctx, base);
	// b 0x82a83d3c
	goto loc_82A83D3C;
loc_82A83CEC:
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r11,r11,-28372
	ctx.r11.s64 = ctx.r11.s64 + -28372;
	// lwz r10,-28360(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28360);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a83d24
	if (!ctx.cr6.eq) goto loc_82A83D24;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,-28360(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28360, ctx.r10.u32);
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A83D24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82A83D3C:
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

__attribute__((alias("__imp__sub_82A83D54"))) PPC_WEAK_FUNC(sub_82A83D54);
PPC_FUNC_IMPL(__imp__sub_82A83D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83D58"))) PPC_WEAK_FUNC(sub_82A83D58);
PPC_FUNC_IMPL(__imp__sub_82A83D58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82562de8
	sub_82562DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A83D6C"))) PPC_WEAK_FUNC(sub_82A83D6C);
PPC_FUNC_IMPL(__imp__sub_82A83D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83D70"))) PPC_WEAK_FUNC(sub_82A83D70);
PPC_FUNC_IMPL(__imp__sub_82A83D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A83D78;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-19448
	ctx.r28.s64 = ctx.r11.s64 + -19448;
	// lwz r11,-19440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19440);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a83e50
	if (!ctx.cr6.eq) goto loc_82A83E50;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-19440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19440, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9288
	ctx.r31.s64 = ctx.r9.s64 + -9288;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a83dc8
	if (!ctx.cr6.eq) goto loc_82A83DC8;
	// bl 0x8233e3e0
	ctx.lr = 0x82A83DC8;
	sub_8233E3E0(ctx, base);
loc_82A83DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A83DDC;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a83df0
	if (ctx.cr6.eq) goto loc_82A83DF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A83DF0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a83e40
	if (ctx.cr6.eq) goto loc_82A83E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A83E08;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a83e40
	if (ctx.cr6.eq) goto loc_82A83E40;
loc_82A83E20:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A83E2C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a83e64
	if (ctx.cr6.eq) goto loc_82A83E64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a83e20
	if (!ctx.cr6.eq) goto loc_82A83E20;
loc_82A83E40:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A83E4C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A83E50:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a83e6c
	if (!ctx.cr6.eq) goto loc_82A83E6C;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A83E64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a83e4c
	goto loc_82A83E4C;
loc_82A83E6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A83E78;
	sub_82562DE8(ctx, base);
	// bl 0x82a891b0
	ctx.lr = 0x82A83E7C;
	sub_82A891B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A83E84"))) PPC_WEAK_FUNC(sub_82A83E84);
PPC_FUNC_IMPL(__imp__sub_82A83E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83E88"))) PPC_WEAK_FUNC(sub_82A83E88);
PPC_FUNC_IMPL(__imp__sub_82A83E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A83E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-19128
	ctx.r28.s64 = ctx.r11.s64 + -19128;
	// lwz r11,-19120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19120);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a83f68
	if (!ctx.cr6.eq) goto loc_82A83F68;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-19120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19120, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9272
	ctx.r31.s64 = ctx.r9.s64 + -9272;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a83ee0
	if (!ctx.cr6.eq) goto loc_82A83EE0;
	// bl 0x8233e3e0
	ctx.lr = 0x82A83EE0;
	sub_8233E3E0(ctx, base);
loc_82A83EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A83EF4;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a83f08
	if (ctx.cr6.eq) goto loc_82A83F08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A83F08:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a83f58
	if (ctx.cr6.eq) goto loc_82A83F58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A83F20;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a83f58
	if (ctx.cr6.eq) goto loc_82A83F58;
loc_82A83F38:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A83F44;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a83f8c
	if (ctx.cr6.eq) goto loc_82A83F8C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a83f38
	if (!ctx.cr6.eq) goto loc_82A83F38;
loc_82A83F58:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A83F64:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A83F68:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a83f94
	if (ctx.cr6.eq) goto loc_82A83F94;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A83F80;
	sub_82562DE8(ctx, base);
	// bl 0x82a89230
	ctx.lr = 0x82A83F84;
	sub_82A89230(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A83F8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a83f64
	goto loc_82A83F64;
loc_82A83F94:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a89230
	ctx.lr = 0x82A83F9C;
	sub_82A89230(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A83FA4"))) PPC_WEAK_FUNC(sub_82A83FA4);
PPC_FUNC_IMPL(__imp__sub_82A83FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83FA8"))) PPC_WEAK_FUNC(sub_82A83FA8);
PPC_FUNC_IMPL(__imp__sub_82A83FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A83FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-18788
	ctx.r28.s64 = ctx.r11.s64 + -18788;
	// lwz r11,-18780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18780);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a84088
	if (!ctx.cr6.eq) goto loc_82A84088;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-18780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18780, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9256
	ctx.r31.s64 = ctx.r9.s64 + -9256;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84000
	if (!ctx.cr6.eq) goto loc_82A84000;
	// bl 0x8233e3e0
	ctx.lr = 0x82A84000;
	sub_8233E3E0(ctx, base);
loc_82A84000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A84014;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84028
	if (ctx.cr6.eq) goto loc_82A84028;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A84028:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84078
	if (ctx.cr6.eq) goto loc_82A84078;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A84040;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a84078
	if (ctx.cr6.eq) goto loc_82A84078;
loc_82A84058:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A84064;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a840ac
	if (ctx.cr6.eq) goto loc_82A840AC;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a84058
	if (!ctx.cr6.eq) goto loc_82A84058;
loc_82A84078:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A84084:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A84088:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a840b4
	if (ctx.cr6.eq) goto loc_82A840B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A840A0;
	sub_82562DE8(ctx, base);
	// bl 0x82a892b0
	ctx.lr = 0x82A840A4;
	sub_82A892B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A840AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a84084
	goto loc_82A84084;
loc_82A840B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a892b0
	ctx.lr = 0x82A840BC;
	sub_82A892B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A840C4"))) PPC_WEAK_FUNC(sub_82A840C4);
PPC_FUNC_IMPL(__imp__sub_82A840C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A840C8"))) PPC_WEAK_FUNC(sub_82A840C8);
PPC_FUNC_IMPL(__imp__sub_82A840C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1868(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1868);
	// lwz r10,1872(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1872);
	// lwz r9,1876(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1876);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A840E4"))) PPC_WEAK_FUNC(sub_82A840E4);
PPC_FUNC_IMPL(__imp__sub_82A840E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A840E8"))) PPC_WEAK_FUNC(sub_82A840E8);
PPC_FUNC_IMPL(__imp__sub_82A840E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A840F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-18800
	ctx.r28.s64 = ctx.r11.s64 + -18800;
	// lwz r11,-18792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18792);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a841c8
	if (!ctx.cr6.eq) goto loc_82A841C8;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-18792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18792, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9236
	ctx.r31.s64 = ctx.r9.s64 + -9236;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84140
	if (!ctx.cr6.eq) goto loc_82A84140;
	// bl 0x8233e3e0
	ctx.lr = 0x82A84140;
	sub_8233E3E0(ctx, base);
loc_82A84140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A84154;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84168
	if (ctx.cr6.eq) goto loc_82A84168;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A84168:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a841b8
	if (ctx.cr6.eq) goto loc_82A841B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A84180;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a841b8
	if (ctx.cr6.eq) goto loc_82A841B8;
loc_82A84198:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A841A4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a841ec
	if (ctx.cr6.eq) goto loc_82A841EC;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a84198
	if (!ctx.cr6.eq) goto loc_82A84198;
loc_82A841B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A841C4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A841C8:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a841f4
	if (ctx.cr6.eq) goto loc_82A841F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A841E0;
	sub_82562DE8(ctx, base);
	// bl 0x82a892b0
	ctx.lr = 0x82A841E4;
	sub_82A892B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A841EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a841c4
	goto loc_82A841C4;
loc_82A841F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a892b0
	ctx.lr = 0x82A841FC;
	sub_82A892B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84204"))) PPC_WEAK_FUNC(sub_82A84204);
PPC_FUNC_IMPL(__imp__sub_82A84204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84208"))) PPC_WEAK_FUNC(sub_82A84208);
PPC_FUNC_IMPL(__imp__sub_82A84208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A84210;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-18812
	ctx.r28.s64 = ctx.r11.s64 + -18812;
	// lwz r11,-18804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18804);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a842e8
	if (!ctx.cr6.eq) goto loc_82A842E8;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-18804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18804, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9212
	ctx.r31.s64 = ctx.r9.s64 + -9212;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84260
	if (!ctx.cr6.eq) goto loc_82A84260;
	// bl 0x8233e3e0
	ctx.lr = 0x82A84260;
	sub_8233E3E0(ctx, base);
loc_82A84260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A84274;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84288
	if (ctx.cr6.eq) goto loc_82A84288;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A84288:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a842d8
	if (ctx.cr6.eq) goto loc_82A842D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A842A0;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a842d8
	if (ctx.cr6.eq) goto loc_82A842D8;
loc_82A842B8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A842C4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8430c
	if (ctx.cr6.eq) goto loc_82A8430C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a842b8
	if (!ctx.cr6.eq) goto loc_82A842B8;
loc_82A842D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A842E4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A842E8:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84314
	if (ctx.cr6.eq) goto loc_82A84314;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A84300;
	sub_82562DE8(ctx, base);
	// bl 0x82a89330
	ctx.lr = 0x82A84304;
	sub_82A89330(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A8430C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a842e4
	goto loc_82A842E4;
loc_82A84314:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a89330
	ctx.lr = 0x82A8431C;
	sub_82A89330(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84324"))) PPC_WEAK_FUNC(sub_82A84324);
PPC_FUNC_IMPL(__imp__sub_82A84324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84328"))) PPC_WEAK_FUNC(sub_82A84328);
PPC_FUNC_IMPL(__imp__sub_82A84328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A84330;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-19140
	ctx.r28.s64 = ctx.r11.s64 + -19140;
	// lwz r11,-19132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19132);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a84408
	if (!ctx.cr6.eq) goto loc_82A84408;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-19132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19132, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9176
	ctx.r31.s64 = ctx.r9.s64 + -9176;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84380
	if (!ctx.cr6.eq) goto loc_82A84380;
	// bl 0x8233e3e0
	ctx.lr = 0x82A84380;
	sub_8233E3E0(ctx, base);
loc_82A84380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A84394;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a843a8
	if (ctx.cr6.eq) goto loc_82A843A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A843A8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a843f8
	if (ctx.cr6.eq) goto loc_82A843F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A843C0;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a843f8
	if (ctx.cr6.eq) goto loc_82A843F8;
loc_82A843D8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A843E4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8442c
	if (ctx.cr6.eq) goto loc_82A8442C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a843d8
	if (!ctx.cr6.eq) goto loc_82A843D8;
loc_82A843F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A84404:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A84408:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84434
	if (ctx.cr6.eq) goto loc_82A84434;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A84420;
	sub_82562DE8(ctx, base);
	// bl 0x82a893b0
	ctx.lr = 0x82A84424;
	sub_82A893B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A8442C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a84404
	goto loc_82A84404;
loc_82A84434:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a893b0
	ctx.lr = 0x82A8443C;
	sub_82A893B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84444"))) PPC_WEAK_FUNC(sub_82A84444);
PPC_FUNC_IMPL(__imp__sub_82A84444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84448"))) PPC_WEAK_FUNC(sub_82A84448);
PPC_FUNC_IMPL(__imp__sub_82A84448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A84450;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-18824
	ctx.r28.s64 = ctx.r11.s64 + -18824;
	// lwz r11,-18816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18816);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a84528
	if (!ctx.cr6.eq) goto loc_82A84528;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-18816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18816, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r9,-9156
	ctx.r31.s64 = ctx.r9.s64 + -9156;
	// lwz r11,17912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17912);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a844a0
	if (!ctx.cr6.eq) goto loc_82A844A0;
	// bl 0x8233e3e0
	ctx.lr = 0x82A844A0;
	sub_8233E3E0(ctx, base);
loc_82A844A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A844B4;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a844c8
	if (ctx.cr6.eq) goto loc_82A844C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82A844C8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84518
	if (ctx.cr6.eq) goto loc_82A84518;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A844E0;
	sub_822946F0(ctx, base);
	// lis r11,-31889
	ctx.r11.s64 = -2089877504;
	// rlwinm r10,r3,2,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// addi r9,r11,32016
	ctx.r9.s64 = ctx.r11.s64 + 32016;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a84518
	if (ctx.cr6.eq) goto loc_82A84518;
loc_82A844F8:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A84504;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8454c
	if (ctx.cr6.eq) goto loc_82A8454C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a844f8
	if (!ctx.cr6.eq) goto loc_82A844F8;
loc_82A84518:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A84524:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A84528:
	// lwz r3,1104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84554
	if (ctx.cr6.eq) goto loc_82A84554;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A84540;
	sub_82562DE8(ctx, base);
	// bl 0x82a89430
	ctx.lr = 0x82A84544;
	sub_82A89430(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A8454C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a84524
	goto loc_82A84524;
loc_82A84554:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a89430
	ctx.lr = 0x82A8455C;
	sub_82A89430(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84564"))) PPC_WEAK_FUNC(sub_82A84564);
PPC_FUNC_IMPL(__imp__sub_82A84564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84568"))) PPC_WEAK_FUNC(sub_82A84568);
PPC_FUNC_IMPL(__imp__sub_82A84568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A84570;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a845ac
	if (ctx.cr6.eq) goto loc_82A845AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A845A8;
	sub_82562DE8(ctx, base);
	// b 0x82a845b0
	goto loc_82A845B0;
loc_82A845AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A845B0:
	// bl 0x82a894b0
	ctx.lr = 0x82A845B4;
	sub_82A894B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a84614
	if (ctx.cr6.eq) goto loc_82A84614;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82570f58
	ctx.lr = 0x82A845C8;
	sub_82570F58(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a845e0
	if (ctx.cr6.eq) goto loc_82A845E0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82571b30
	ctx.lr = 0x82A845E0;
	sub_82571B30(ctx, base);
loc_82A845E0:
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84670
	if (ctx.cr6.eq) goto loc_82A84670;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84670
	if (ctx.cr6.eq) goto loc_82A84670;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82A84614:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a84630
	if (ctx.cr6.eq) goto loc_82A84630;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A8462C;
	sub_82562DE8(ctx, base);
	// b 0x82a84634
	goto loc_82A84634;
loc_82A84630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84634:
	// bl 0x82a89530
	ctx.lr = 0x82A84638;
	sub_82A89530(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84670
	if (ctx.cr6.eq) goto loc_82A84670;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82A84670:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8468C"))) PPC_WEAK_FUNC(sub_82A8468C);
PPC_FUNC_IMPL(__imp__sub_82A8468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84690"))) PPC_WEAK_FUNC(sub_82A84690);
PPC_FUNC_IMPL(__imp__sub_82A84690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A84698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a846c4
	if (ctx.cr6.eq) goto loc_82A846C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82562de8
	ctx.lr = 0x82A846C0;
	sub_82562DE8(ctx, base);
	// b 0x82a846c8
	goto loc_82A846C8;
loc_82A846C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A846C8:
	// bl 0x82a895b0
	ctx.lr = 0x82A846CC;
	sub_82A895B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a84710
	if (ctx.cr6.eq) goto loc_82A84710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A846EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a84710
	if (ctx.cr6.eq) goto loc_82A84710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A84710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84718"))) PPC_WEAK_FUNC(sub_82A84718);
PPC_FUNC_IMPL(__imp__sub_82A84718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82A84720;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lbz r11,1761(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1761);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82a84978
	if (!ctx.cr6.eq) goto loc_82A84978;
	// lis r31,-31881
	ctx.r31.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// addi r26,r11,-18836
	ctx.r26.s64 = ctx.r11.s64 + -18836;
	// addi r25,r10,32016
	ctx.r25.s64 = ctx.r10.s64 + 32016;
	// lwz r11,-18828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18828);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a84810
	if (!ctx.cr6.eq) goto loc_82A84810;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r10,17912(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17912);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r30,r9,-9132
	ctx.r30.s64 = ctx.r9.s64 + -9132;
	// stw r11,-18828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18828, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a8478c
	if (!ctx.cr6.eq) goto loc_82A8478C;
	// bl 0x8233e3e0
	ctx.lr = 0x82A8478C;
	sub_8233E3E0(ctx, base);
loc_82A8478C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A847A0;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a847b4
	if (ctx.cr6.eq) goto loc_82A847B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82A847B4:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a847fc
	if (ctx.cr6.eq) goto loc_82A847FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A847CC;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a847fc
	if (ctx.cr6.eq) goto loc_82A847FC;
loc_82A847DC:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A847E8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a848e4
	if (ctx.cr6.eq) goto loc_82A848E4;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a847dc
	if (!ctx.cr6.eq) goto loc_82A847DC;
loc_82A847FC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
loc_82A84808:
	// lwz r11,-18828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18828);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82A84810:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r10,-18844
	ctx.r29.s64 = ctx.r10.s64 + -18844;
	// bne cr6,0x82a848c8
	if (!ctx.cr6.eq) goto loc_82A848C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lwz r10,17912(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17912);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-18828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18828, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r9,-9108
	ctx.r30.s64 = ctx.r9.s64 + -9108;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a84848
	if (!ctx.cr6.eq) goto loc_82A84848;
	// bl 0x8233e3e0
	ctx.lr = 0x82A84848;
	sub_8233E3E0(ctx, base);
loc_82A84848:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82343a80
	ctx.lr = 0x82A8485C;
	sub_82343A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84870
	if (ctx.cr6.eq) goto loc_82A84870;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82A84870:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a848b8
	if (ctx.cr6.eq) goto loc_82A848B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// bl 0x822946f0
	ctx.lr = 0x82A84888;
	sub_822946F0(ctx, base);
	// rlwinm r11,r3,2,18,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFC;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a848b8
	if (ctx.cr6.eq) goto loc_82A848B8;
loc_82A84898:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0328
	ctx.lr = 0x82A848A4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a848ec
	if (ctx.cr6.eq) goto loc_82A848EC;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a84898
	if (!ctx.cr6.eq) goto loc_82A84898;
loc_82A848B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A848C4:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A848C8:
	// lwz r3,1104(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a848f4
	if (ctx.cr6.eq) goto loc_82A848F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A848E0;
	sub_82562DE8(ctx, base);
	// b 0x82a848f8
	goto loc_82A848F8;
loc_82A848E4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82a84808
	goto loc_82A84808;
loc_82A848EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a848c4
	goto loc_82A848C4;
loc_82A848F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A848F8:
	// bl 0x82a895b0
	ctx.lr = 0x82A848FC;
	sub_82A895B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84918
	if (ctx.cr6.eq) goto loc_82A84918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A84918:
	// lwz r3,1104(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84934
	if (ctx.cr6.eq) goto loc_82A84934;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A84930;
	sub_82562DE8(ctx, base);
	// b 0x82a84938
	goto loc_82A84938;
loc_82A84934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84938:
	// bl 0x82a895b0
	ctx.lr = 0x82A8493C;
	sub_82A895B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84958
	if (ctx.cr6.eq) goto loc_82A84958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A84958:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,1956(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 1956);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f0,1948(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 1948, temp.u32);
	// lfs f0,17480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1892(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 1892, temp.u32);
	// stfs f13,1960(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 1960, temp.u32);
loc_82A84978:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84980"))) PPC_WEAK_FUNC(sub_82A84980);
PPC_FUNC_IMPL(__imp__sub_82A84980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a849f8
	if (!ctx.cr6.gt) goto loc_82A849F8;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a849f8
	if (ctx.cr6.eq) goto loc_82A849F8;
	// lwz r7,676(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a849f8
	if (!ctx.cr6.gt) goto loc_82A849F8;
	// lwz r11,672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
loc_82A849BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// rlwinm r6,r9,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a849e8
	if (ctx.cr6.eq) goto loc_82A849E8;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a84a00
	if (ctx.cr6.eq) goto loc_82A84A00;
	// rlwinm r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a84a00
	if (ctx.cr6.eq) goto loc_82A84A00;
loc_82A849E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a849bc
	if (ctx.cr6.lt) goto loc_82A849BC;
loc_82A849F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A84A00:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84A08"))) PPC_WEAK_FUNC(sub_82A84A08);
PPC_FUNC_IMPL(__imp__sub_82A84A08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,25344(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25344);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a84aa4
	if (ctx.cr6.eq) goto loc_82A84AA4;
loc_82A84A1C:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a84a44
	if (ctx.cr0.lt) goto loc_82A84A44;
	// lwz r10,744(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a84a44
	if (!ctx.cr6.lt) goto loc_82A84A44;
	// lwz r10,740(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a84a1c
	if (ctx.cr6.eq) goto loc_82A84A1C;
loc_82A84A44:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a84aa4
	if (ctx.cr6.eq) goto loc_82A84AA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a84aa4
	if (ctx.cr6.lt) goto loc_82A84AA4;
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a84aa4
	if (!ctx.cr6.lt) goto loc_82A84AA4;
	// lwz r9,740(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a84a9c
	if (ctx.cr6.eq) goto loc_82A84A9C;
loc_82A84A78:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82a84a44
	if (ctx.cr0.lt) goto loc_82A84A44;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a84a44
	if (!ctx.cr6.lt) goto loc_82A84A44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a84a78
	if (ctx.cr6.eq) goto loc_82A84A78;
	// b 0x82a84a44
	goto loc_82A84A44;
loc_82A84A9C:
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// b 0x829d9660
	sub_829D9660(ctx, base);
	return;
loc_82A84AA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84AAC"))) PPC_WEAK_FUNC(sub_82A84AAC);
PPC_FUNC_IMPL(__imp__sub_82A84AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84AB0"))) PPC_WEAK_FUNC(sub_82A84AB0);
PPC_FUNC_IMPL(__imp__sub_82A84AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A84AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84afc
	if (ctx.cr6.eq) goto loc_82A84AFC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a84aec
	if (ctx.cr6.gt) goto loc_82A84AEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,980(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x82a84b00
	goto loc_82A84B00;
loc_82A84AEC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,980(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x82a84b00
	goto loc_82A84B00;
loc_82A84AFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A84B00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a84b98
	if (ctx.cr6.eq) goto loc_82A84B98;
	// lwz r11,756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84b98
	if (ctx.cr6.eq) goto loc_82A84B98;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb2c0
	ctx.lr = 0x82A84B24;
	sub_82BEB2C0(ctx, base);
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// bne cr6,0x82a84b4c
	if (!ctx.cr6.eq) goto loc_82A84B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a84a08
	ctx.lr = 0x82A84B34;
	sub_82A84A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a84b4c
	if (ctx.cr6.eq) goto loc_82A84B4C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a89810
	ctx.lr = 0x82A84B4C;
	sub_82A89810(ctx, base);
loc_82A84B4C:
	// lwz r11,568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a84b98
	if (!ctx.cr6.eq) goto loc_82A84B98;
	// lwz r3,2128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// bl 0x82a5c7a0
	ctx.lr = 0x82A84B60;
	sub_82A5C7A0(ctx, base);
	// lwz r31,772(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb2c0
	ctx.lr = 0x82A84B70;
	sub_82BEB2C0(ctx, base);
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// bne cr6,0x82a84b98
	if (!ctx.cr6.eq) goto loc_82A84B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a84a08
	ctx.lr = 0x82A84B80;
	sub_82A84A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a84b98
	if (ctx.cr6.eq) goto loc_82A84B98;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a89810
	ctx.lr = 0x82A84B98;
	sub_82A89810(ctx, base);
loc_82A84B98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84BA0"))) PPC_WEAK_FUNC(sub_82A84BA0);
PPC_FUNC_IMPL(__imp__sub_82A84BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,17228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84BB0"))) PPC_WEAK_FUNC(sub_82A84BB0);
PPC_FUNC_IMPL(__imp__sub_82A84BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A84BB8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1761(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1761);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82a85038
	if (ctx.cr6.eq) goto loc_82A85038;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82a85038
	if (ctx.cr6.eq) goto loc_82A85038;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a85038
	if (ctx.cr6.eq) goto loc_82A85038;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82a85038
	if (ctx.cr6.eq) goto loc_82A85038;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a84c84
	if (!ctx.cr6.eq) goto loc_82A84C84;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84c30
	if (ctx.cr6.eq) goto loc_82A84C30;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a84c20
	if (ctx.cr6.gt) goto loc_82A84C20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x82a84c34
	goto loc_82A84C34;
loc_82A84C20:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// b 0x82a84c34
	goto loc_82A84C34;
loc_82A84C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A84C34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84c74
	if (ctx.cr6.eq) goto loc_82A84C74;
	// lwz r10,2220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a84c58
	if (ctx.cr6.eq) goto loc_82A84C58;
	// lwz r10,780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a85038
	if (!ctx.cr6.eq) goto loc_82A85038;
loc_82A84C58:
	// lwz r11,2228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a84c74
	if (ctx.cr6.eq) goto loc_82A84C74;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a85038
	if (!ctx.cr6.eq) goto loc_82A85038;
loc_82A84C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a84980
	ctx.lr = 0x82A84C7C;
	sub_82A84980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a85038
	if (!ctx.cr6.eq) goto loc_82A85038;
loc_82A84C84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r9,r31,1936
	ctx.r9.s64 = ctx.r31.s64 + 1936;
	// lfs f0,1812(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2288, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,2292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2292, temp.u32);
	// stfs f31,2284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2284, temp.u32);
loc_82A84CBC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f31,-4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f11,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f7,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,56(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f6,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f5,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,72(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne 0x82a84cbc
	if (!ctx.cr0.eq) goto loc_82A84CBC;
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f30,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82a84d74
	if (ctx.cr6.eq) goto loc_82A84D74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,1932(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// stfs f31,0(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,1944(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
	// lwz r10,1124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A84D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84d74
	if (ctx.cr6.eq) goto loc_82A84D74;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82572c40
	ctx.lr = 0x82A84D74;
	sub_82572C40(ctx, base);
loc_82A84D74:
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84d94
	if (ctx.cr6.eq) goto loc_82A84D94;
	// bl 0x82a80b58
	ctx.lr = 0x82A84D84;
	sub_82A80B58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a84d94
	if (!ctx.cr6.eq) goto loc_82A84D94;
	// stfs f31,2032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stfs f30,2040(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A84D94:
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stfs f31,1892(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// stfs f31,1896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stfs f31,1884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1884, temp.u32);
	// addi r28,r10,-8872
	ctx.r28.s64 = ctx.r10.s64 + -8872;
	// stfs f31,1900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f31,1888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stfs f31,1904(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// bne cr6,0x82a84ef0
	if (!ctx.cr6.eq) goto loc_82A84EF0;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84ef0
	if (!ctx.cr6.eq) goto loc_82A84EF0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8904
	ctx.r4.s64 = ctx.r11.s64 + -8904;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84DF0;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84e0c
	if (ctx.cr6.eq) goto loc_82A84E0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A84E08;
	sub_82562DE8(ctx, base);
	// b 0x82a84e10
	goto loc_82A84E10;
loc_82A84E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84E10:
	// bl 0x82a89630
	ctx.lr = 0x82A84E14;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84e20
	if (ctx.cr6.eq) goto loc_82A84E20;
	// bl 0x82a6eb20
	ctx.lr = 0x82A84E20;
	sub_82A6EB20(ctx, base);
loc_82A84E20:
	// stfs f31,2108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2108, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f31,2124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2124, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f31,2140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,2156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2156, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84E4C;
	sub_8233E028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a85cb8
	ctx.lr = 0x82A84E5C;
	sub_82A85CB8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8848
	ctx.r4.s64 = ctx.r11.s64 + -8848;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84E7C;
	sub_8233E028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a85cb8
	ctx.lr = 0x82A84E8C;
	sub_82A85CB8(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,-8816
	ctx.r4.s64 = ctx.r10.s64 + -8816;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84EAC;
	sub_8233E028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a85cb8
	ctx.lr = 0x82A84EBC;
	sub_82A85CB8(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r9,-8788
	ctx.r4.s64 = ctx.r9.s64 + -8788;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84EDC;
	sub_8233E028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a85cb8
	ctx.lr = 0x82A84EEC;
	sub_82A85CB8(ctx, base);
	// b 0x82a84fc0
	goto loc_82A84FC0;
loc_82A84EF0:
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r30,r11,-17628
	ctx.r30.s64 = ctx.r11.s64 + -17628;
	// lwz r11,-17596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17596);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a84f84
	if (!ctx.cr6.eq) goto loc_82A84F84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,-17596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17596, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-8944
	ctx.r4.s64 = ctx.r9.s64 + -8944;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8233e028
	ctx.lr = 0x82A84F30;
	sub_8233E028(ctx, base);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r8,-8980
	ctx.r4.s64 = ctx.r8.s64 + -8980;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8233e028
	ctx.lr = 0x82A84F4C;
	sub_8233E028(ctx, base);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r6,-9028
	ctx.r4.s64 = ctx.r6.s64 + -9028;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8233e028
	ctx.lr = 0x82A84F68;
	sub_8233E028(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r5,-9072
	ctx.r4.s64 = ctx.r5.s64 + -9072;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8233e028
	ctx.lr = 0x82A84F84;
	sub_8233E028(ctx, base);
loc_82A84F84:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f31,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f31.f64 = double(temp.f32);
loc_82A84F90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a85cb8
	ctx.lr = 0x82A84FA0;
	sub_82A85CB8(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a84f90
	if (ctx.cr6.lt) goto loc_82A84F90;
	// stfs f31,2108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2108, temp.u32);
	// stfs f31,2124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2124, temp.u32);
	// stfs f31,2140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// stfs f31,2156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2156, temp.u32);
loc_82A84FC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// bl 0x82295680
	ctx.lr = 0x82A84FD0;
	sub_82295680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A84FE8;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85004
	if (ctx.cr6.eq) goto loc_82A85004;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82562de8
	ctx.lr = 0x82A85000;
	sub_82562DE8(ctx, base);
	// b 0x82a85008
	goto loc_82A85008;
loc_82A85004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85008:
	// bl 0x82a895b0
	ctx.lr = 0x82A8500C;
	sub_82A895B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85028
	if (ctx.cr6.eq) goto loc_82A85028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A85028:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82299080
	ctx.lr = 0x82A85030;
	sub_82299080(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,1761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1761, ctx.r11.u8);
loc_82A85038:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85048"))) PPC_WEAK_FUNC(sub_82A85048);
PPC_FUNC_IMPL(__imp__sub_82A85048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A85050;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-18324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82A85078:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,121
	ctx.r9.s64 = ctx.r10.s64 + 121;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,1932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1932);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f31,r8,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82a850b8
	if (!ctx.cr6.gt) goto loc_82A850B8;
	// lfs f12,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82a850b0
	if (!ctx.cr6.eq) goto loc_82A850B0;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,2040(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// b 0x82a850bc
	goto loc_82A850BC;
loc_82A850B0:
	// stfs f12,1944(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// b 0x82a850bc
	goto loc_82A850BC;
loc_82A850B8:
	// stfs f13,1944(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
loc_82A850BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x82a85078
	if (ctx.cr6.lt) goto loc_82A85078;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A850DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a85124
	if (ctx.cr6.eq) goto loc_82A85124;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// ld r4,-18212(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18212);
	// bl 0x8229e490
	ctx.lr = 0x82A85108;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A85124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A85124:
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,1812(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,2292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2292, temp.u32);
	// stfs f0,2288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2288, temp.u32);
	// stb r11,1761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1761, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85144"))) PPC_WEAK_FUNC(sub_82A85144);
PPC_FUNC_IMPL(__imp__sub_82A85144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85148"))) PPC_WEAK_FUNC(sub_82A85148);
PPC_FUNC_IMPL(__imp__sub_82A85148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A85150;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85184
	if (ctx.cr6.eq) goto loc_82A85184;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82562de8
	ctx.lr = 0x82A85180;
	sub_82562DE8(ctx, base);
	// b 0x82a85188
	goto loc_82A85188;
loc_82A85184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85188:
	// bl 0x82a89630
	ctx.lr = 0x82A8518C;
	sub_82A89630(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a851c4
	if (ctx.cr6.eq) goto loc_82A851C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a6ec50
	ctx.lr = 0x82A851A4;
	sub_82A6EC50(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a851c4
	if (ctx.cr6.eq) goto loc_82A851C4;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a851c4
	if (ctx.cr6.eq) goto loc_82A851C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82571b30
	ctx.lr = 0x82A851C4;
	sub_82571B30(ctx, base);
loc_82A851C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A851D0"))) PPC_WEAK_FUNC(sub_82A851D0);
PPC_FUNC_IMPL(__imp__sub_82A851D0) {
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
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85248
	if (ctx.cr6.eq) goto loc_82A85248;
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// bl 0x826127a8
	ctx.lr = 0x82A851F8;
	sub_826127A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85248
	if (ctx.cr6.eq) goto loc_82A85248;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82a18288
	ctx.lr = 0x82A85208;
	sub_82A18288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85248
	if (ctx.cr6.eq) goto loc_82A85248;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85248
	if (ctx.cr6.eq) goto loc_82A85248;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85248
	if (ctx.cr6.eq) goto loc_82A85248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82592840
	ctx.lr = 0x82A85234;
	sub_82592840(ctx, base);
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
loc_82A85248:
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
}

__attribute__((alias("__imp__sub_82A85260"))) PPC_WEAK_FUNC(sub_82A85260);
PPC_FUNC_IMPL(__imp__sub_82A85260) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a852a4
	if (!ctx.cr6.eq) goto loc_82A852A4;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85314
	if (ctx.cr6.eq) goto loc_82A85314;
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// bl 0x826127a8
	ctx.lr = 0x82A85298;
	sub_826127A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a85314
	if (ctx.cr6.eq) goto loc_82A85314;
loc_82A852A4:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82a18288
	ctx.lr = 0x82A852AC;
	sub_82A18288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85314
	if (ctx.cr6.eq) goto loc_82A85314;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85314
	if (ctx.cr6.eq) goto loc_82A85314;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85314
	if (ctx.cr6.eq) goto loc_82A85314;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,120(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,316(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A852F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a896b0
	ctx.lr = 0x82A85300;
	sub_82A896B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8530c
	if (ctx.cr6.eq) goto loc_82A8530C;
	// bl 0x82a897b0
	ctx.lr = 0x82A8530C;
	sub_82A897B0(ctx, base);
loc_82A8530C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82a85318
	goto loc_82A85318;
loc_82A85314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85318:
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

__attribute__((alias("__imp__sub_82A85330"))) PPC_WEAK_FUNC(sub_82A85330);
PPC_FUNC_IMPL(__imp__sub_82A85330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A85338;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bgt cr6,0x82a854f4
	if (ctx.cr6.gt) goto loc_82A854F4;
	// bne cr6,0x82a85398
	if (!ctx.cr6.eq) goto loc_82A85398;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r11,r31,1932
	ctx.r11.s64 = ctx.r31.s64 + 1932;
	// li r10,15
	ctx.r10.s64 = 15;
	// lfs f13,-18324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82A85368:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a8537c
	if (ctx.cr6.eq) goto loc_82A8537C;
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82a85380
	goto loc_82A85380;
loc_82A8537C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82A85380:
	// stfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82a85368
	if (!ctx.cr0.eq) goto loc_82A85368;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A85398:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82a853b0
	if (ctx.cr6.eq) goto loc_82A853B0;
	// lfs f0,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a853b8
	goto loc_82A853B8;
loc_82A853B0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
loc_82A853B8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f0,1932(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f0,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1944(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// bne cr6,0x82a85444
	if (!ctx.cr6.eq) goto loc_82A85444;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A853E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a854f4
	if (ctx.cr6.eq) goto loc_82A854F4;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-18212(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18212);
	// beq cr6,0x82a85424
	if (ctx.cr6.eq) goto loc_82A85424;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A85418;
	sub_8229E490(ctx, base);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82a854e0
	goto loc_82A854E0;
loc_82A85424:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A85438;
	sub_8229E490(ctx, base);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82a854e0
	goto loc_82A854E0;
loc_82A85444:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x82a854f4
	if (!ctx.cr6.eq) goto loc_82A854F4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8748
	ctx.r4.s64 = ctx.r11.s64 + -8748;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// bl 0x8233e028
	ctx.lr = 0x82A8546C;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a854f4
	if (ctx.cr6.eq) goto loc_82A854F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85484;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a854f4
	if (ctx.cr6.eq) goto loc_82A854F4;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-18212(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18212);
	// beq cr6,0x82a854c4
	if (ctx.cr6.eq) goto loc_82A854C4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A854B8;
	sub_8229E490(ctx, base);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82a854e0
	goto loc_82A854E0;
loc_82A854C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r1,92
	ctx.r30.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A854D8;
	sub_8229E490(ctx, base);
	// lwz r9,228(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82A854E0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A854F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A854F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A854FC"))) PPC_WEAK_FUNC(sub_82A854FC);
PPC_FUNC_IMPL(__imp__sub_82A854FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85500"))) PPC_WEAK_FUNC(sub_82A85500);
PPC_FUNC_IMPL(__imp__sub_82A85500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// bne cr6,0x82a8552c
	if (!ctx.cr6.eq) goto loc_82A8552C;
	// addi r11,r3,1944
	ctx.r11.s64 = ctx.r3.s64 + 1944;
	// li r10,15
	ctx.r10.s64 = 15;
loc_82A85514:
	// stfs f1,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82a85514
	if (!ctx.cr0.eq) goto loc_82A85514;
	// blr 
	return;
loc_82A8552C:
	// addi r10,r4,121
	ctx.r10.s64 = ctx.r4.s64 + 121;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfsx f1,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f2,1944(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1944, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85548"))) PPC_WEAK_FUNC(sub_82A85548);
PPC_FUNC_IMPL(__imp__sub_82A85548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82A85550;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,1136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8560c
	if (!ctx.cr6.eq) goto loc_82A8560C;
	// lwz r29,1132(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a8560c
	if (ctx.cr6.eq) goto loc_82A8560C;
	// lwz r11,504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85604
	if (ctx.cr6.eq) goto loc_82A85604;
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// bl 0x826127a8
	ctx.lr = 0x82A8558C;
	sub_826127A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a85604
	if (ctx.cr6.eq) goto loc_82A85604;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82a18288
	ctx.lr = 0x82A855A0;
	sub_82A18288(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85604
	if (ctx.cr6.eq) goto loc_82A85604;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85604
	if (ctx.cr6.eq) goto loc_82A85604;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85604
	if (ctx.cr6.eq) goto loc_82A85604;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A855E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a896b0
	ctx.lr = 0x82A855F0;
	sub_82A896B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a855fc
	if (ctx.cr6.eq) goto loc_82A855FC;
	// bl 0x82a897b0
	ctx.lr = 0x82A855FC;
	sub_82A897B0(ctx, base);
loc_82A855FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82a85608
	goto loc_82A85608;
loc_82A85604:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A85608:
	// stw r11,1136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1136, ctx.r11.u32);
loc_82A8560C:
	// lwz r30,1136(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a85844
	if (ctx.cr6.eq) goto loc_82A85844;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8720
	ctx.r4.s64 = ctx.r11.s64 + -8720;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85638;
	sub_8233E028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a85658
	if (ctx.cr6.eq) goto loc_82A85658;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A85650;
	sub_82562DE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82a8565c
	goto loc_82A8565C;
loc_82A85658:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82A8565C:
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bgt cr6,0x82a85790
	if (ctx.cr6.gt) goto loc_82A85790;
	// lis r12,-32088
	ctx.r12.s64 = -2102919168;
	// addi r12,r12,22144
	ctx.r12.s64 = ctx.r12.s64 + 22144;
	// rlwinm r0,r26,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r26.u64) {
	case 0:
		goto loc_82A85690;
	case 1:
		goto loc_82A856D0;
	case 2:
		goto loc_82A85710;
	case 3:
		goto loc_82A85750;
	default:
		__builtin_unreachable();
	}
	// lwz r21,22160(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22160);
	// lwz r21,22224(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22224);
	// lwz r21,22288(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22288);
	// lwz r21,22352(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22352);
loc_82A85690:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8700
	ctx.r4.s64 = ctx.r11.s64 + -8700;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A856B0;
	sub_8233E028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a857d0
	if (ctx.cr6.eq) goto loc_82A857D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A856C8;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a857d0
	goto loc_82A857D0;
loc_82A856D0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8684
	ctx.r4.s64 = ctx.r11.s64 + -8684;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A856F0;
	sub_8233E028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a857d0
	if (ctx.cr6.eq) goto loc_82A857D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A85708;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a857d0
	goto loc_82A857D0;
loc_82A85710:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8668
	ctx.r4.s64 = ctx.r11.s64 + -8668;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85730;
	sub_8233E028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a857d0
	if (ctx.cr6.eq) goto loc_82A857D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A85748;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a857d0
	goto loc_82A857D0;
loc_82A85750:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8652
	ctx.r4.s64 = ctx.r11.s64 + -8652;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85770;
	sub_8233E028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a857d0
	if (ctx.cr6.eq) goto loc_82A857D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562de8
	ctx.lr = 0x82A85788;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a857d0
	goto loc_82A857D0;
loc_82A85790:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a85844
	if (ctx.cr6.eq) goto loc_82A85844;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,-18212(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -18212);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// bl 0x8229e490
	ctx.lr = 0x82A857B4;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A857D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A857D0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a85844
	if (ctx.cr6.eq) goto loc_82A85844;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a85844
	if (ctx.cr6.eq) goto loc_82A85844;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8256bc60
	ctx.lr = 0x82A857F0;
	sub_8256BC60(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82563f48
	ctx.lr = 0x82A85808;
	sub_82563F48(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-18212(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -18212);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r1,92
	ctx.r31.s64 = ctx.r1.s64 + 92;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A85828;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A85844:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8584C"))) PPC_WEAK_FUNC(sub_82A8584C);
PPC_FUNC_IMPL(__imp__sub_82A8584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85850"))) PPC_WEAK_FUNC(sub_82A85850);
PPC_FUNC_IMPL(__imp__sub_82A85850) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a858c8
	if (ctx.cr6.eq) goto loc_82A858C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x82a858c8
	if (ctx.cr6.gt) goto loc_82A858C8;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a858e4
	if (ctx.cr6.eq) goto loc_82A858E4;
	// bl 0x82a80db0
	ctx.lr = 0x82A858B4;
	sub_82A80DB0(ctx, base);
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
loc_82A858C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,1812(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2032(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f0,17224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,2040(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A858E4:
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

__attribute__((alias("__imp__sub_82A858F8"))) PPC_WEAK_FUNC(sub_82A858F8);
PPC_FUNC_IMPL(__imp__sub_82A858F8) {
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
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85984
	if (ctx.cr6.eq) goto loc_82A85984;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a85960
	if (!ctx.cr6.eq) goto loc_82A85960;
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a85960
	if (ctx.cr6.eq) goto loc_82A85960;
	// bl 0x82a80c48
	ctx.lr = 0x82A85934;
	sub_82A80C48(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// bl 0x82a80c48
	ctx.lr = 0x82A85940;
	sub_82A80C48(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// bl 0x82a80c48
	ctx.lr = 0x82A8594C;
	sub_82A80C48(ctx, base);
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
loc_82A85960:
	// bl 0x82a80728
	ctx.lr = 0x82A85964;
	sub_82A80728(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f13,17228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,2040(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A85984:
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

__attribute__((alias("__imp__sub_82A85998"))) PPC_WEAK_FUNC(sub_82A85998);
PPC_FUNC_IMPL(__imp__sub_82A85998) {
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
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85a00
	if (ctx.cr6.eq) goto loc_82A85A00;
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a859fc
	if (ctx.cr6.eq) goto loc_82A859FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a80c48
	ctx.lr = 0x82A859D0;
	sub_82A80C48(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// bl 0x82a80c48
	ctx.lr = 0x82A859DC;
	sub_82A80C48(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// bl 0x82a80c48
	ctx.lr = 0x82A859E8;
	sub_82A80C48(ctx, base);
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
loc_82A859FC:
	// bl 0x82a80728
	ctx.lr = 0x82A85A00;
	sub_82A80728(ctx, base);
loc_82A85A00:
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

__attribute__((alias("__imp__sub_82A85A14"))) PPC_WEAK_FUNC(sub_82A85A14);
PPC_FUNC_IMPL(__imp__sub_82A85A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85A18"))) PPC_WEAK_FUNC(sub_82A85A18);
PPC_FUNC_IMPL(__imp__sub_82A85A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A85A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85a88
	if (ctx.cr6.eq) goto loc_82A85A88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x82a85a88
	if (ctx.cr6.gt) goto loc_82A85A88;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85ad0
	if (ctx.cr6.eq) goto loc_82A85AD0;
	// bl 0x82a80db0
	ctx.lr = 0x82A85A80;
	sub_82A80DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A85A88:
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85ad0
	if (ctx.cr6.eq) goto loc_82A85AD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a807e8
	ctx.lr = 0x82A85AA0;
	sub_82A807E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a85ad0
	if (ctx.cr6.eq) goto loc_82A85AD0;
	// lfs f0,2036(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2028(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a85ad0
	if (!ctx.cr6.lt) goto loc_82A85AD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f13,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,2040(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A85AD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85AD8"))) PPC_WEAK_FUNC(sub_82A85AD8);
PPC_FUNC_IMPL(__imp__sub_82A85AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85ae8
	if (ctx.cr6.eq) goto loc_82A85AE8;
	// b 0x82a808e8
	sub_82A808E8(ctx, base);
	return;
loc_82A85AE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85AF0"))) PPC_WEAK_FUNC(sub_82A85AF0);
PPC_FUNC_IMPL(__imp__sub_82A85AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85b00
	if (ctx.cr6.eq) goto loc_82A85B00;
	// b 0x82a80998
	sub_82A80998(ctx, base);
	return;
loc_82A85B00:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85B08"))) PPC_WEAK_FUNC(sub_82A85B08);
PPC_FUNC_IMPL(__imp__sub_82A85B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85b18
	if (ctx.cr6.eq) goto loc_82A85B18;
	// b 0x82a80b58
	sub_82A80B58(ctx, base);
	return;
loc_82A85B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85B20"))) PPC_WEAK_FUNC(sub_82A85B20);
PPC_FUNC_IMPL(__imp__sub_82A85B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A85B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85b90
	if (ctx.cr6.eq) goto loc_82A85B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x82a85b90
	if (ctx.cr6.gt) goto loc_82A85B90;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85bd0
	if (ctx.cr6.eq) goto loc_82A85BD0;
	// bl 0x82a80db0
	ctx.lr = 0x82A85B88;
	sub_82A80DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82A85B90:
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85bd0
	if (ctx.cr6.eq) goto loc_82A85BD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a80be0
	ctx.lr = 0x82A85BA8;
	sub_82A80BE0(ctx, base);
	// lfs f0,2036(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2028(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a85bd0
	if (!ctx.cr6.lt) goto loc_82A85BD0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f13,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,2040(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A85BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85BD8"))) PPC_WEAK_FUNC(sub_82A85BD8);
PPC_FUNC_IMPL(__imp__sub_82A85BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a80c48
	sub_82A80C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85BE8"))) PPC_WEAK_FUNC(sub_82A85BE8);
PPC_FUNC_IMPL(__imp__sub_82A85BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85BEC"))) PPC_WEAK_FUNC(sub_82A85BEC);
PPC_FUNC_IMPL(__imp__sub_82A85BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85BF0"))) PPC_WEAK_FUNC(sub_82A85BF0);
PPC_FUNC_IMPL(__imp__sub_82A85BF0) {
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
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85c60
	if (ctx.cr6.eq) goto loc_82A85C60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A85C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f1,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bgt cr6,0x82a85c60
	if (ctx.cr6.gt) goto loc_82A85C60;
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85c9c
	if (ctx.cr6.eq) goto loc_82A85C9C;
	// bl 0x82a80db0
	ctx.lr = 0x82A85C5C;
	sub_82A80DB0(ctx, base);
	// b 0x82a85c9c
	goto loc_82A85C9C;
loc_82A85C60:
	// lwz r3,2180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85c9c
	if (ctx.cr6.eq) goto loc_82A85C9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a80d00
	ctx.lr = 0x82A85C74;
	sub_82A80D00(ctx, base);
	// lfs f0,2036(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2028(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a85c9c
	if (!ctx.cr6.lt) goto loc_82A85C9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f13,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,2040(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_82A85C9C:
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

__attribute__((alias("__imp__sub_82A85CB4"))) PPC_WEAK_FUNC(sub_82A85CB4);
PPC_FUNC_IMPL(__imp__sub_82A85CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85CB8"))) PPC_WEAK_FUNC(sub_82A85CB8);
PPC_FUNC_IMPL(__imp__sub_82A85CB8) {
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
	// lwz r3,1104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85d5c
	if (ctx.cr6.eq) goto loc_82A85D5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82562de8
	ctx.lr = 0x82A85CE0;
	sub_82562DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a85d5c
	if (ctx.cr6.eq) goto loc_82A85D5C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lfs f13,-32444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f0,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f1,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f31,f8,f0,f10
	ctx.f31.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// bl 0x82a6fe00
	ctx.lr = 0x82A85D48;
	sub_82A6FE00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85d58
	if (ctx.cr6.eq) goto loc_82A85D58;
	// stfs f31,844(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 844, temp.u32);
	// b 0x82a85d5c
	goto loc_82A85D5C;
loc_82A85D58:
	// stfs f31,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
loc_82A85D5C:
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

__attribute__((alias("__imp__sub_82A85D74"))) PPC_WEAK_FUNC(sub_82A85D74);
PPC_FUNC_IMPL(__imp__sub_82A85D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85D78"))) PPC_WEAK_FUNC(sub_82A85D78);
PPC_FUNC_IMPL(__imp__sub_82A85D78) {
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
	// lwz r11,1104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a85fdc
	if (ctx.cr6.eq) goto loc_82A85FDC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8636
	ctx.r4.s64 = ctx.r11.s64 + -8636;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85DBC;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85dd8
	if (ctx.cr6.eq) goto loc_82A85DD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85DD4;
	sub_82562DE8(ctx, base);
	// b 0x82a85ddc
	goto loc_82A85DDC;
loc_82A85DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85DDC:
	// bl 0x82a89630
	ctx.lr = 0x82A85DE0;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85dec
	if (ctx.cr6.eq) goto loc_82A85DEC;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85DEC;
	sub_82A6EB20(ctx, base);
loc_82A85DEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8616
	ctx.r4.s64 = ctx.r11.s64 + -8616;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85E0C;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85e28
	if (ctx.cr6.eq) goto loc_82A85E28;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85E24;
	sub_82562DE8(ctx, base);
	// b 0x82a85e2c
	goto loc_82A85E2C;
loc_82A85E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85E2C:
	// bl 0x82a89630
	ctx.lr = 0x82A85E30;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85e3c
	if (ctx.cr6.eq) goto loc_82A85E3C;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85E3C;
	sub_82A6EB20(ctx, base);
loc_82A85E3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8588
	ctx.r4.s64 = ctx.r11.s64 + -8588;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85E5C;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85e78
	if (ctx.cr6.eq) goto loc_82A85E78;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85E74;
	sub_82562DE8(ctx, base);
	// b 0x82a85e7c
	goto loc_82A85E7C;
loc_82A85E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85E7C:
	// bl 0x82a89630
	ctx.lr = 0x82A85E80;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85e8c
	if (ctx.cr6.eq) goto loc_82A85E8C;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85E8C;
	sub_82A6EB20(ctx, base);
loc_82A85E8C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8556
	ctx.r4.s64 = ctx.r11.s64 + -8556;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85EAC;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85ec8
	if (ctx.cr6.eq) goto loc_82A85EC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85EC4;
	sub_82562DE8(ctx, base);
	// b 0x82a85ecc
	goto loc_82A85ECC;
loc_82A85EC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85ECC:
	// bl 0x82a89630
	ctx.lr = 0x82A85ED0;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85edc
	if (ctx.cr6.eq) goto loc_82A85EDC;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85EDC;
	sub_82A6EB20(ctx, base);
loc_82A85EDC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8532
	ctx.r4.s64 = ctx.r11.s64 + -8532;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85EFC;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85f18
	if (ctx.cr6.eq) goto loc_82A85F18;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85F14;
	sub_82562DE8(ctx, base);
	// b 0x82a85f1c
	goto loc_82A85F1C;
loc_82A85F18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85F1C:
	// bl 0x82a89630
	ctx.lr = 0x82A85F20;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85f2c
	if (ctx.cr6.eq) goto loc_82A85F2C;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85F2C;
	sub_82A6EB20(ctx, base);
loc_82A85F2C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8904
	ctx.r4.s64 = ctx.r11.s64 + -8904;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85F4C;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85f68
	if (ctx.cr6.eq) goto loc_82A85F68;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85F64;
	sub_82562DE8(ctx, base);
	// b 0x82a85f6c
	goto loc_82A85F6C;
loc_82A85F68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85F6C:
	// bl 0x82a89630
	ctx.lr = 0x82A85F70;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85f7c
	if (ctx.cr6.eq) goto loc_82A85F7C;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85F7C;
	sub_82A6EB20(ctx, base);
loc_82A85F7C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-8512
	ctx.r4.s64 = ctx.r11.s64 + -8512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82A85F9C;
	sub_8233E028(ctx, base);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85fb8
	if (ctx.cr6.eq) goto loc_82A85FB8;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82562de8
	ctx.lr = 0x82A85FB4;
	sub_82562DE8(ctx, base);
	// b 0x82a85fbc
	goto loc_82A85FBC;
loc_82A85FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85FBC:
	// bl 0x82a89630
	ctx.lr = 0x82A85FC0;
	sub_82A89630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a85fcc
	if (ctx.cr6.eq) goto loc_82A85FCC;
	// bl 0x82a6eb20
	ctx.lr = 0x82A85FCC;
	sub_82A6EB20(ctx, base);
loc_82A85FCC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-18324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2200(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2200, temp.u32);
	// stfs f0,2232(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2232, temp.u32);
loc_82A85FDC:
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

__attribute__((alias("__imp__sub_82A85FF4"))) PPC_WEAK_FUNC(sub_82A85FF4);
PPC_FUNC_IMPL(__imp__sub_82A85FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

