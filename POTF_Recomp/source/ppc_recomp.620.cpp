#include "ppc_recomp_shared.h"

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

