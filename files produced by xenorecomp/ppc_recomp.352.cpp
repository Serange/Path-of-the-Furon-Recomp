#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B69CA0"))) PPC_WEAK_FUNC(sub_82B69CA0);
PPC_FUNC_IMPL(__imp__sub_82B69CA0) {
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
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69cd8
	if (!ctx.cr6.eq) goto loc_82B69CD8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b762d8
	ctx.lr = 0x82B69CCC;
	sub_82B762D8(ctx, base);
	// stw r3,-23320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23320, ctx.r3.u32);
	// bl 0x82b76388
	ctx.lr = 0x82B69CD4;
	sub_82B76388(ctx, base);
	// lwz r3,-23320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23320);
loc_82B69CD8:
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

__attribute__((alias("__imp__sub_82B69CEC"))) PPC_WEAK_FUNC(sub_82B69CEC);
PPC_FUNC_IMPL(__imp__sub_82B69CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69CF0"))) PPC_WEAK_FUNC(sub_82B69CF0);
PPC_FUNC_IMPL(__imp__sub_82B69CF0) {
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
	// bne cr6,0x82b69d44
	if (!ctx.cr6.eq) goto loc_82B69D44;
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
	ctx.lr = 0x82B69D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B69D44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ecf8
	ctx.lr = 0x82B69D4C;
	sub_82B7ECF8(ctx, base);
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

__attribute__((alias("__imp__sub_82B69D60"))) PPC_WEAK_FUNC(sub_82B69D60);
PPC_FUNC_IMPL(__imp__sub_82B69D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B69D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r29,r10,26648
	ctx.r29.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B69DB4;
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
	// bne cr6,0x82b69df0
	if (!ctx.cr6.eq) goto loc_82B69DF0;
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
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B69DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B69DF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b7f468
	ctx.lr = 0x82B69DFC;
	sub_82B7F468(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b69e20
	if (ctx.cr6.eq) goto loc_82B69E20;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82B69E20;
	sub_82294520(ctx, base);
loc_82B69E20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82B69E28;
	sub_82294CC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69E30"))) PPC_WEAK_FUNC(sub_82B69E30);
PPC_FUNC_IMPL(__imp__sub_82B69E30) {
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
	// lwz r3,-23168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69e68
	if (!ctx.cr6.eq) goto loc_82B69E68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7f518
	ctx.lr = 0x82B69E5C;
	sub_82B7F518(ctx, base);
	// stw r3,-23168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23168, ctx.r3.u32);
	// bl 0x82b7f5c8
	ctx.lr = 0x82B69E64;
	sub_82B7F5C8(ctx, base);
	// lwz r3,-23168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23168);
loc_82B69E68:
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

__attribute__((alias("__imp__sub_82B69E7C"))) PPC_WEAK_FUNC(sub_82B69E7C);
PPC_FUNC_IMPL(__imp__sub_82B69E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69E80"))) PPC_WEAK_FUNC(sub_82B69E80);
PPC_FUNC_IMPL(__imp__sub_82B69E80) {
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
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69eb8
	if (!ctx.cr6.eq) goto loc_82B69EB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b9a388
	ctx.lr = 0x82B69EAC;
	sub_82B9A388(ctx, base);
	// stw r3,-22904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22904, ctx.r3.u32);
	// bl 0x82b9a438
	ctx.lr = 0x82B69EB4;
	sub_82B9A438(ctx, base);
	// lwz r3,-22904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22904);
loc_82B69EB8:
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

__attribute__((alias("__imp__sub_82B69ECC"))) PPC_WEAK_FUNC(sub_82B69ECC);
PPC_FUNC_IMPL(__imp__sub_82B69ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69ED0"))) PPC_WEAK_FUNC(sub_82B69ED0);
PPC_FUNC_IMPL(__imp__sub_82B69ED0) {
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
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69f08
	if (!ctx.cr6.eq) goto loc_82B69F08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b98c60
	ctx.lr = 0x82B69EFC;
	sub_82B98C60(ctx, base);
	// stw r3,-22908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22908, ctx.r3.u32);
	// bl 0x82b98d10
	ctx.lr = 0x82B69F04;
	sub_82B98D10(ctx, base);
	// lwz r3,-22908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22908);
loc_82B69F08:
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

__attribute__((alias("__imp__sub_82B69F1C"))) PPC_WEAK_FUNC(sub_82B69F1C);
PPC_FUNC_IMPL(__imp__sub_82B69F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69F20"))) PPC_WEAK_FUNC(sub_82B69F20);
PPC_FUNC_IMPL(__imp__sub_82B69F20) {
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
	// lwz r3,-23052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69f58
	if (!ctx.cr6.eq) goto loc_82B69F58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8cd80
	ctx.lr = 0x82B69F4C;
	sub_82B8CD80(ctx, base);
	// stw r3,-23052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23052, ctx.r3.u32);
	// bl 0x82b8ce30
	ctx.lr = 0x82B69F54;
	sub_82B8CE30(ctx, base);
	// lwz r3,-23052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23052);
loc_82B69F58:
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

__attribute__((alias("__imp__sub_82B69F6C"))) PPC_WEAK_FUNC(sub_82B69F6C);
PPC_FUNC_IMPL(__imp__sub_82B69F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69F70"))) PPC_WEAK_FUNC(sub_82B69F70);
PPC_FUNC_IMPL(__imp__sub_82B69F70) {
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
	// lwz r3,-23048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69fa8
	if (!ctx.cr6.eq) goto loc_82B69FA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8d038
	ctx.lr = 0x82B69F9C;
	sub_82B8D038(ctx, base);
	// stw r3,-23048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23048, ctx.r3.u32);
	// bl 0x82b8d0e8
	ctx.lr = 0x82B69FA4;
	sub_82B8D0E8(ctx, base);
	// lwz r3,-23048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23048);
loc_82B69FA8:
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

__attribute__((alias("__imp__sub_82B69FBC"))) PPC_WEAK_FUNC(sub_82B69FBC);
PPC_FUNC_IMPL(__imp__sub_82B69FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69FC0"))) PPC_WEAK_FUNC(sub_82B69FC0);
PPC_FUNC_IMPL(__imp__sub_82B69FC0) {
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
	// lwz r3,-23172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b69ff8
	if (!ctx.cr6.eq) goto loc_82B69FF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7ea88
	ctx.lr = 0x82B69FEC;
	sub_82B7EA88(ctx, base);
	// stw r3,-23172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23172, ctx.r3.u32);
	// bl 0x82b7eb38
	ctx.lr = 0x82B69FF4;
	sub_82B7EB38(ctx, base);
	// lwz r3,-23172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23172);
loc_82B69FF8:
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

__attribute__((alias("__imp__sub_82B6A00C"))) PPC_WEAK_FUNC(sub_82B6A00C);
PPC_FUNC_IMPL(__imp__sub_82B6A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A010"))) PPC_WEAK_FUNC(sub_82B6A010);
PPC_FUNC_IMPL(__imp__sub_82B6A010) {
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
	// lwz r3,-23240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a048
	if (!ctx.cr6.eq) goto loc_82B6A048;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7c680
	ctx.lr = 0x82B6A03C;
	sub_82B7C680(ctx, base);
	// stw r3,-23240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23240, ctx.r3.u32);
	// bl 0x82b7c730
	ctx.lr = 0x82B6A044;
	sub_82B7C730(ctx, base);
	// lwz r3,-23240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23240);
loc_82B6A048:
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

__attribute__((alias("__imp__sub_82B6A05C"))) PPC_WEAK_FUNC(sub_82B6A05C);
PPC_FUNC_IMPL(__imp__sub_82B6A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A060"))) PPC_WEAK_FUNC(sub_82B6A060);
PPC_FUNC_IMPL(__imp__sub_82B6A060) {
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
	// lwz r3,-23212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a098
	if (!ctx.cr6.eq) goto loc_82B6A098;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7d550
	ctx.lr = 0x82B6A08C;
	sub_82B7D550(ctx, base);
	// stw r3,-23212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23212, ctx.r3.u32);
	// bl 0x82b7d600
	ctx.lr = 0x82B6A094;
	sub_82B7D600(ctx, base);
	// lwz r3,-23212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23212);
loc_82B6A098:
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

__attribute__((alias("__imp__sub_82B6A0AC"))) PPC_WEAK_FUNC(sub_82B6A0AC);
PPC_FUNC_IMPL(__imp__sub_82B6A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A0B0"))) PPC_WEAK_FUNC(sub_82B6A0B0);
PPC_FUNC_IMPL(__imp__sub_82B6A0B0) {
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
	// lwz r3,-23228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a0e8
	if (!ctx.cr6.eq) goto loc_82B6A0E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7ccd0
	ctx.lr = 0x82B6A0DC;
	sub_82B7CCD0(ctx, base);
	// stw r3,-23228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23228, ctx.r3.u32);
	// bl 0x82b7cd80
	ctx.lr = 0x82B6A0E4;
	sub_82B7CD80(ctx, base);
	// lwz r3,-23228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23228);
loc_82B6A0E8:
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

__attribute__((alias("__imp__sub_82B6A0FC"))) PPC_WEAK_FUNC(sub_82B6A0FC);
PPC_FUNC_IMPL(__imp__sub_82B6A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A100"))) PPC_WEAK_FUNC(sub_82B6A100);
PPC_FUNC_IMPL(__imp__sub_82B6A100) {
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
	// lwz r3,-23232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a138
	if (!ctx.cr6.eq) goto loc_82B6A138;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7cab0
	ctx.lr = 0x82B6A12C;
	sub_82B7CAB0(ctx, base);
	// stw r3,-23232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23232, ctx.r3.u32);
	// bl 0x82b7cb60
	ctx.lr = 0x82B6A134;
	sub_82B7CB60(ctx, base);
	// lwz r3,-23232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23232);
loc_82B6A138:
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

__attribute__((alias("__imp__sub_82B6A14C"))) PPC_WEAK_FUNC(sub_82B6A14C);
PPC_FUNC_IMPL(__imp__sub_82B6A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A150"))) PPC_WEAK_FUNC(sub_82B6A150);
PPC_FUNC_IMPL(__imp__sub_82B6A150) {
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
	// lwz r3,-23216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a188
	if (!ctx.cr6.eq) goto loc_82B6A188;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7d330
	ctx.lr = 0x82B6A17C;
	sub_82B7D330(ctx, base);
	// stw r3,-23216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23216, ctx.r3.u32);
	// bl 0x82b7d3e0
	ctx.lr = 0x82B6A184;
	sub_82B7D3E0(ctx, base);
	// lwz r3,-23216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23216);
loc_82B6A188:
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

__attribute__((alias("__imp__sub_82B6A19C"))) PPC_WEAK_FUNC(sub_82B6A19C);
PPC_FUNC_IMPL(__imp__sub_82B6A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A1A0"))) PPC_WEAK_FUNC(sub_82B6A1A0);
PPC_FUNC_IMPL(__imp__sub_82B6A1A0) {
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
	// lwz r3,-23196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a1d8
	if (!ctx.cr6.eq) goto loc_82B6A1D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7ddd0
	ctx.lr = 0x82B6A1CC;
	sub_82B7DDD0(ctx, base);
	// stw r3,-23196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23196, ctx.r3.u32);
	// bl 0x82b7de80
	ctx.lr = 0x82B6A1D4;
	sub_82B7DE80(ctx, base);
	// lwz r3,-23196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23196);
loc_82B6A1D8:
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

__attribute__((alias("__imp__sub_82B6A1EC"))) PPC_WEAK_FUNC(sub_82B6A1EC);
PPC_FUNC_IMPL(__imp__sub_82B6A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A1F0"))) PPC_WEAK_FUNC(sub_82B6A1F0);
PPC_FUNC_IMPL(__imp__sub_82B6A1F0) {
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
	// lwz r3,-23208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a228
	if (!ctx.cr6.eq) goto loc_82B6A228;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7d770
	ctx.lr = 0x82B6A21C;
	sub_82B7D770(ctx, base);
	// stw r3,-23208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23208, ctx.r3.u32);
	// bl 0x82b7d820
	ctx.lr = 0x82B6A224;
	sub_82B7D820(ctx, base);
	// lwz r3,-23208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23208);
loc_82B6A228:
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

__attribute__((alias("__imp__sub_82B6A23C"))) PPC_WEAK_FUNC(sub_82B6A23C);
PPC_FUNC_IMPL(__imp__sub_82B6A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A240"))) PPC_WEAK_FUNC(sub_82B6A240);
PPC_FUNC_IMPL(__imp__sub_82B6A240) {
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
	// lwz r3,-23220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a278
	if (!ctx.cr6.eq) goto loc_82B6A278;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7d110
	ctx.lr = 0x82B6A26C;
	sub_82B7D110(ctx, base);
	// stw r3,-23220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23220, ctx.r3.u32);
	// bl 0x82b7d1c0
	ctx.lr = 0x82B6A274;
	sub_82B7D1C0(ctx, base);
	// lwz r3,-23220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23220);
loc_82B6A278:
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

__attribute__((alias("__imp__sub_82B6A28C"))) PPC_WEAK_FUNC(sub_82B6A28C);
PPC_FUNC_IMPL(__imp__sub_82B6A28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A290"))) PPC_WEAK_FUNC(sub_82B6A290);
PPC_FUNC_IMPL(__imp__sub_82B6A290) {
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
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a2c8
	if (!ctx.cr6.eq) goto loc_82B6A2C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7d990
	ctx.lr = 0x82B6A2BC;
	sub_82B7D990(ctx, base);
	// stw r3,-23204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23204, ctx.r3.u32);
	// bl 0x82b7da40
	ctx.lr = 0x82B6A2C4;
	sub_82B7DA40(ctx, base);
	// lwz r3,-23204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23204);
loc_82B6A2C8:
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

__attribute__((alias("__imp__sub_82B6A2DC"))) PPC_WEAK_FUNC(sub_82B6A2DC);
PPC_FUNC_IMPL(__imp__sub_82B6A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A2E0"))) PPC_WEAK_FUNC(sub_82B6A2E0);
PPC_FUNC_IMPL(__imp__sub_82B6A2E0) {
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
	// lwz r3,-23200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a318
	if (!ctx.cr6.eq) goto loc_82B6A318;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7dbb0
	ctx.lr = 0x82B6A30C;
	sub_82B7DBB0(ctx, base);
	// stw r3,-23200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23200, ctx.r3.u32);
	// bl 0x82b7dc60
	ctx.lr = 0x82B6A314;
	sub_82B7DC60(ctx, base);
	// lwz r3,-23200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23200);
loc_82B6A318:
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

__attribute__((alias("__imp__sub_82B6A32C"))) PPC_WEAK_FUNC(sub_82B6A32C);
PPC_FUNC_IMPL(__imp__sub_82B6A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A330"))) PPC_WEAK_FUNC(sub_82B6A330);
PPC_FUNC_IMPL(__imp__sub_82B6A330) {
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
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a368
	if (!ctx.cr6.eq) goto loc_82B6A368;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7cef0
	ctx.lr = 0x82B6A35C;
	sub_82B7CEF0(ctx, base);
	// stw r3,-23224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23224, ctx.r3.u32);
	// bl 0x82b7cfa0
	ctx.lr = 0x82B6A364;
	sub_82B7CFA0(ctx, base);
	// lwz r3,-23224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23224);
loc_82B6A368:
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

__attribute__((alias("__imp__sub_82B6A37C"))) PPC_WEAK_FUNC(sub_82B6A37C);
PPC_FUNC_IMPL(__imp__sub_82B6A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A380"))) PPC_WEAK_FUNC(sub_82B6A380);
PPC_FUNC_IMPL(__imp__sub_82B6A380) {
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
	// lwz r3,-23012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23012);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a3b8
	if (!ctx.cr6.eq) goto loc_82B6A3B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8f620
	ctx.lr = 0x82B6A3AC;
	sub_82B8F620(ctx, base);
	// stw r3,-23012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23012, ctx.r3.u32);
	// bl 0x82b8f6d0
	ctx.lr = 0x82B6A3B4;
	sub_82B8F6D0(ctx, base);
	// lwz r3,-23012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23012);
loc_82B6A3B8:
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

__attribute__((alias("__imp__sub_82B6A3CC"))) PPC_WEAK_FUNC(sub_82B6A3CC);
PPC_FUNC_IMPL(__imp__sub_82B6A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A3D0"))) PPC_WEAK_FUNC(sub_82B6A3D0);
PPC_FUNC_IMPL(__imp__sub_82B6A3D0) {
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
	// lwz r3,-23016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a408
	if (!ctx.cr6.eq) goto loc_82B6A408;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8f400
	ctx.lr = 0x82B6A3FC;
	sub_82B8F400(ctx, base);
	// stw r3,-23016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23016, ctx.r3.u32);
	// bl 0x82b8f4b0
	ctx.lr = 0x82B6A404;
	sub_82B8F4B0(ctx, base);
	// lwz r3,-23016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23016);
loc_82B6A408:
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

__attribute__((alias("__imp__sub_82B6A41C"))) PPC_WEAK_FUNC(sub_82B6A41C);
PPC_FUNC_IMPL(__imp__sub_82B6A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A420"))) PPC_WEAK_FUNC(sub_82B6A420);
PPC_FUNC_IMPL(__imp__sub_82B6A420) {
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
	// lwz r3,-23244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a458
	if (!ctx.cr6.eq) goto loc_82B6A458;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7c468
	ctx.lr = 0x82B6A44C;
	sub_82B7C468(ctx, base);
	// stw r3,-23244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23244, ctx.r3.u32);
	// bl 0x82b7c518
	ctx.lr = 0x82B6A454;
	sub_82B7C518(ctx, base);
	// lwz r3,-23244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23244);
loc_82B6A458:
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

__attribute__((alias("__imp__sub_82B6A46C"))) PPC_WEAK_FUNC(sub_82B6A46C);
PPC_FUNC_IMPL(__imp__sub_82B6A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A470"))) PPC_WEAK_FUNC(sub_82B6A470);
PPC_FUNC_IMPL(__imp__sub_82B6A470) {
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
	// lwz r3,-23236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a4a8
	if (!ctx.cr6.eq) goto loc_82B6A4A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7c898
	ctx.lr = 0x82B6A49C;
	sub_82B7C898(ctx, base);
	// stw r3,-23236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23236, ctx.r3.u32);
	// bl 0x82b7c948
	ctx.lr = 0x82B6A4A4;
	sub_82B7C948(ctx, base);
	// lwz r3,-23236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23236);
loc_82B6A4A8:
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

__attribute__((alias("__imp__sub_82B6A4BC"))) PPC_WEAK_FUNC(sub_82B6A4BC);
PPC_FUNC_IMPL(__imp__sub_82B6A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A4C0"))) PPC_WEAK_FUNC(sub_82B6A4C0);
PPC_FUNC_IMPL(__imp__sub_82B6A4C0) {
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
	// lwz r3,-23176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a4f8
	if (!ctx.cr6.eq) goto loc_82B6A4F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7e868
	ctx.lr = 0x82B6A4EC;
	sub_82B7E868(ctx, base);
	// stw r3,-23176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23176, ctx.r3.u32);
	// bl 0x82b7e918
	ctx.lr = 0x82B6A4F4;
	sub_82B7E918(ctx, base);
	// lwz r3,-23176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23176);
loc_82B6A4F8:
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

__attribute__((alias("__imp__sub_82B6A50C"))) PPC_WEAK_FUNC(sub_82B6A50C);
PPC_FUNC_IMPL(__imp__sub_82B6A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A510"))) PPC_WEAK_FUNC(sub_82B6A510);
PPC_FUNC_IMPL(__imp__sub_82B6A510) {
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
	// lwz r3,-23192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a548
	if (!ctx.cr6.eq) goto loc_82B6A548;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7dff0
	ctx.lr = 0x82B6A53C;
	sub_82B7DFF0(ctx, base);
	// stw r3,-23192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23192, ctx.r3.u32);
	// bl 0x82b7e0a0
	ctx.lr = 0x82B6A544;
	sub_82B7E0A0(ctx, base);
	// lwz r3,-23192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23192);
loc_82B6A548:
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

__attribute__((alias("__imp__sub_82B6A55C"))) PPC_WEAK_FUNC(sub_82B6A55C);
PPC_FUNC_IMPL(__imp__sub_82B6A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A560"))) PPC_WEAK_FUNC(sub_82B6A560);
PPC_FUNC_IMPL(__imp__sub_82B6A560) {
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
	// lwz r3,-23188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a598
	if (!ctx.cr6.eq) goto loc_82B6A598;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7e210
	ctx.lr = 0x82B6A58C;
	sub_82B7E210(ctx, base);
	// stw r3,-23188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23188, ctx.r3.u32);
	// bl 0x82b7e2c0
	ctx.lr = 0x82B6A594;
	sub_82B7E2C0(ctx, base);
	// lwz r3,-23188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23188);
loc_82B6A598:
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

__attribute__((alias("__imp__sub_82B6A5AC"))) PPC_WEAK_FUNC(sub_82B6A5AC);
PPC_FUNC_IMPL(__imp__sub_82B6A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A5B0"))) PPC_WEAK_FUNC(sub_82B6A5B0);
PPC_FUNC_IMPL(__imp__sub_82B6A5B0) {
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
	// lwz r3,-23184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a5e8
	if (!ctx.cr6.eq) goto loc_82B6A5E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7e428
	ctx.lr = 0x82B6A5DC;
	sub_82B7E428(ctx, base);
	// stw r3,-23184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23184, ctx.r3.u32);
	// bl 0x82b7e4d8
	ctx.lr = 0x82B6A5E4;
	sub_82B7E4D8(ctx, base);
	// lwz r3,-23184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23184);
loc_82B6A5E8:
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

__attribute__((alias("__imp__sub_82B6A5FC"))) PPC_WEAK_FUNC(sub_82B6A5FC);
PPC_FUNC_IMPL(__imp__sub_82B6A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A600"))) PPC_WEAK_FUNC(sub_82B6A600);
PPC_FUNC_IMPL(__imp__sub_82B6A600) {
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
	// lwz r3,-23180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a638
	if (!ctx.cr6.eq) goto loc_82B6A638;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7e648
	ctx.lr = 0x82B6A62C;
	sub_82B7E648(ctx, base);
	// stw r3,-23180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23180, ctx.r3.u32);
	// bl 0x82b7e6f8
	ctx.lr = 0x82B6A634;
	sub_82B7E6F8(ctx, base);
	// lwz r3,-23180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23180);
loc_82B6A638:
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

__attribute__((alias("__imp__sub_82B6A64C"))) PPC_WEAK_FUNC(sub_82B6A64C);
PPC_FUNC_IMPL(__imp__sub_82B6A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A650"))) PPC_WEAK_FUNC(sub_82B6A650);
PPC_FUNC_IMPL(__imp__sub_82B6A650) {
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
	// lwz r3,-23268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a688
	if (!ctx.cr6.eq) goto loc_82B6A688;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7b7b0
	ctx.lr = 0x82B6A67C;
	sub_82B7B7B0(ctx, base);
	// stw r3,-23268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23268, ctx.r3.u32);
	// bl 0x82b7b860
	ctx.lr = 0x82B6A684;
	sub_82B7B860(ctx, base);
	// lwz r3,-23268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23268);
loc_82B6A688:
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

__attribute__((alias("__imp__sub_82B6A69C"))) PPC_WEAK_FUNC(sub_82B6A69C);
PPC_FUNC_IMPL(__imp__sub_82B6A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A6A0"))) PPC_WEAK_FUNC(sub_82B6A6A0);
PPC_FUNC_IMPL(__imp__sub_82B6A6A0) {
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
	// lwz r3,-23340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a6d8
	if (!ctx.cr6.eq) goto loc_82B6A6D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b74f00
	ctx.lr = 0x82B6A6CC;
	sub_82B74F00(ctx, base);
	// stw r3,-23340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23340, ctx.r3.u32);
	// bl 0x82b74fb0
	ctx.lr = 0x82B6A6D4;
	sub_82B74FB0(ctx, base);
	// lwz r3,-23340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23340);
loc_82B6A6D8:
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

__attribute__((alias("__imp__sub_82B6A6EC"))) PPC_WEAK_FUNC(sub_82B6A6EC);
PPC_FUNC_IMPL(__imp__sub_82B6A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A6F0"))) PPC_WEAK_FUNC(sub_82B6A6F0);
PPC_FUNC_IMPL(__imp__sub_82B6A6F0) {
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
	// lwz r3,-23336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a728
	if (!ctx.cr6.eq) goto loc_82B6A728;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b75118
	ctx.lr = 0x82B6A71C;
	sub_82B75118(ctx, base);
	// stw r3,-23336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23336, ctx.r3.u32);
	// bl 0x82b751c8
	ctx.lr = 0x82B6A724;
	sub_82B751C8(ctx, base);
	// lwz r3,-23336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23336);
loc_82B6A728:
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

__attribute__((alias("__imp__sub_82B6A73C"))) PPC_WEAK_FUNC(sub_82B6A73C);
PPC_FUNC_IMPL(__imp__sub_82B6A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A740"))) PPC_WEAK_FUNC(sub_82B6A740);
PPC_FUNC_IMPL(__imp__sub_82B6A740) {
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
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a778
	if (!ctx.cr6.eq) goto loc_82B6A778;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b75338
	ctx.lr = 0x82B6A76C;
	sub_82B75338(ctx, base);
	// stw r3,-23332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23332, ctx.r3.u32);
	// bl 0x82b753e8
	ctx.lr = 0x82B6A774;
	sub_82B753E8(ctx, base);
	// lwz r3,-23332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23332);
loc_82B6A778:
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

__attribute__((alias("__imp__sub_82B6A78C"))) PPC_WEAK_FUNC(sub_82B6A78C);
PPC_FUNC_IMPL(__imp__sub_82B6A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A790"))) PPC_WEAK_FUNC(sub_82B6A790);
PPC_FUNC_IMPL(__imp__sub_82B6A790) {
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
	// lwz r3,-23328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a7c8
	if (!ctx.cr6.eq) goto loc_82B6A7C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b75558
	ctx.lr = 0x82B6A7BC;
	sub_82B75558(ctx, base);
	// stw r3,-23328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23328, ctx.r3.u32);
	// bl 0x82b75608
	ctx.lr = 0x82B6A7C4;
	sub_82B75608(ctx, base);
	// lwz r3,-23328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23328);
loc_82B6A7C8:
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

__attribute__((alias("__imp__sub_82B6A7DC"))) PPC_WEAK_FUNC(sub_82B6A7DC);
PPC_FUNC_IMPL(__imp__sub_82B6A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A7E0"))) PPC_WEAK_FUNC(sub_82B6A7E0);
PPC_FUNC_IMPL(__imp__sub_82B6A7E0) {
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
	// lwz r3,-23344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a818
	if (!ctx.cr6.eq) goto loc_82B6A818;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b74ce8
	ctx.lr = 0x82B6A80C;
	sub_82B74CE8(ctx, base);
	// stw r3,-23344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23344, ctx.r3.u32);
	// bl 0x82b74d98
	ctx.lr = 0x82B6A814;
	sub_82B74D98(ctx, base);
	// lwz r3,-23344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23344);
loc_82B6A818:
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

__attribute__((alias("__imp__sub_82B6A82C"))) PPC_WEAK_FUNC(sub_82B6A82C);
PPC_FUNC_IMPL(__imp__sub_82B6A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A830"))) PPC_WEAK_FUNC(sub_82B6A830);
PPC_FUNC_IMPL(__imp__sub_82B6A830) {
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
	// lwz r3,-23324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a868
	if (!ctx.cr6.eq) goto loc_82B6A868;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b75778
	ctx.lr = 0x82B6A85C;
	sub_82B75778(ctx, base);
	// stw r3,-23324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23324, ctx.r3.u32);
	// bl 0x82b75828
	ctx.lr = 0x82B6A864;
	sub_82B75828(ctx, base);
	// lwz r3,-23324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23324);
loc_82B6A868:
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

__attribute__((alias("__imp__sub_82B6A87C"))) PPC_WEAK_FUNC(sub_82B6A87C);
PPC_FUNC_IMPL(__imp__sub_82B6A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A880"))) PPC_WEAK_FUNC(sub_82B6A880);
PPC_FUNC_IMPL(__imp__sub_82B6A880) {
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
	// lwz r3,-23248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a8b8
	if (!ctx.cr6.eq) goto loc_82B6A8B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7c248
	ctx.lr = 0x82B6A8AC;
	sub_82B7C248(ctx, base);
	// stw r3,-23248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23248, ctx.r3.u32);
	// bl 0x82b7c2f8
	ctx.lr = 0x82B6A8B4;
	sub_82B7C2F8(ctx, base);
	// lwz r3,-23248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23248);
loc_82B6A8B8:
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

__attribute__((alias("__imp__sub_82B6A8CC"))) PPC_WEAK_FUNC(sub_82B6A8CC);
PPC_FUNC_IMPL(__imp__sub_82B6A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A8D0"))) PPC_WEAK_FUNC(sub_82B6A8D0);
PPC_FUNC_IMPL(__imp__sub_82B6A8D0) {
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
	// lwz r3,-23264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a908
	if (!ctx.cr6.eq) goto loc_82B6A908;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7b9c8
	ctx.lr = 0x82B6A8FC;
	sub_82B7B9C8(ctx, base);
	// stw r3,-23264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23264, ctx.r3.u32);
	// bl 0x82b7ba78
	ctx.lr = 0x82B6A904;
	sub_82B7BA78(ctx, base);
	// lwz r3,-23264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23264);
loc_82B6A908:
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

__attribute__((alias("__imp__sub_82B6A91C"))) PPC_WEAK_FUNC(sub_82B6A91C);
PPC_FUNC_IMPL(__imp__sub_82B6A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A920"))) PPC_WEAK_FUNC(sub_82B6A920);
PPC_FUNC_IMPL(__imp__sub_82B6A920) {
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
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a958
	if (!ctx.cr6.eq) goto loc_82B6A958;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7bbe8
	ctx.lr = 0x82B6A94C;
	sub_82B7BBE8(ctx, base);
	// stw r3,-23260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23260, ctx.r3.u32);
	// bl 0x82b7bc98
	ctx.lr = 0x82B6A954;
	sub_82B7BC98(ctx, base);
	// lwz r3,-23260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23260);
loc_82B6A958:
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

__attribute__((alias("__imp__sub_82B6A96C"))) PPC_WEAK_FUNC(sub_82B6A96C);
PPC_FUNC_IMPL(__imp__sub_82B6A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A970"))) PPC_WEAK_FUNC(sub_82B6A970);
PPC_FUNC_IMPL(__imp__sub_82B6A970) {
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
	// lwz r3,-23252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a9a8
	if (!ctx.cr6.eq) goto loc_82B6A9A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7c028
	ctx.lr = 0x82B6A99C;
	sub_82B7C028(ctx, base);
	// stw r3,-23252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23252, ctx.r3.u32);
	// bl 0x82b7c0d8
	ctx.lr = 0x82B6A9A4;
	sub_82B7C0D8(ctx, base);
	// lwz r3,-23252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23252);
loc_82B6A9A8:
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

__attribute__((alias("__imp__sub_82B6A9BC"))) PPC_WEAK_FUNC(sub_82B6A9BC);
PPC_FUNC_IMPL(__imp__sub_82B6A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A9C0"))) PPC_WEAK_FUNC(sub_82B6A9C0);
PPC_FUNC_IMPL(__imp__sub_82B6A9C0) {
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
	// lwz r3,-23256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6a9f8
	if (!ctx.cr6.eq) goto loc_82B6A9F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7be08
	ctx.lr = 0x82B6A9EC;
	sub_82B7BE08(ctx, base);
	// stw r3,-23256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23256, ctx.r3.u32);
	// bl 0x82b7beb8
	ctx.lr = 0x82B6A9F4;
	sub_82B7BEB8(ctx, base);
	// lwz r3,-23256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23256);
loc_82B6A9F8:
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

__attribute__((alias("__imp__sub_82B6AA0C"))) PPC_WEAK_FUNC(sub_82B6AA0C);
PPC_FUNC_IMPL(__imp__sub_82B6AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AA10"))) PPC_WEAK_FUNC(sub_82B6AA10);
PPC_FUNC_IMPL(__imp__sub_82B6AA10) {
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
	// lwz r3,-23064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6aa48
	if (!ctx.cr6.eq) goto loc_82B6AA48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8c730
	ctx.lr = 0x82B6AA3C;
	sub_82B8C730(ctx, base);
	// stw r3,-23064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23064, ctx.r3.u32);
	// bl 0x82b8c7e0
	ctx.lr = 0x82B6AA44;
	sub_82B8C7E0(ctx, base);
	// lwz r3,-23064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23064);
loc_82B6AA48:
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

__attribute__((alias("__imp__sub_82B6AA5C"))) PPC_WEAK_FUNC(sub_82B6AA5C);
PPC_FUNC_IMPL(__imp__sub_82B6AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AA60"))) PPC_WEAK_FUNC(sub_82B6AA60);
PPC_FUNC_IMPL(__imp__sub_82B6AA60) {
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
	// lwz r3,-23044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6aa98
	if (!ctx.cr6.eq) goto loc_82B6AA98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8d258
	ctx.lr = 0x82B6AA8C;
	sub_82B8D258(ctx, base);
	// stw r3,-23044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23044, ctx.r3.u32);
	// bl 0x82b8d308
	ctx.lr = 0x82B6AA94;
	sub_82B8D308(ctx, base);
	// lwz r3,-23044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23044);
loc_82B6AA98:
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

__attribute__((alias("__imp__sub_82B6AAAC"))) PPC_WEAK_FUNC(sub_82B6AAAC);
PPC_FUNC_IMPL(__imp__sub_82B6AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AAB0"))) PPC_WEAK_FUNC(sub_82B6AAB0);
PPC_FUNC_IMPL(__imp__sub_82B6AAB0) {
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
	// lwz r3,-23040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6aae8
	if (!ctx.cr6.eq) goto loc_82B6AAE8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8d470
	ctx.lr = 0x82B6AADC;
	sub_82B8D470(ctx, base);
	// stw r3,-23040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23040, ctx.r3.u32);
	// bl 0x82b8d520
	ctx.lr = 0x82B6AAE4;
	sub_82B8D520(ctx, base);
	// lwz r3,-23040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23040);
loc_82B6AAE8:
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

__attribute__((alias("__imp__sub_82B6AAFC"))) PPC_WEAK_FUNC(sub_82B6AAFC);
PPC_FUNC_IMPL(__imp__sub_82B6AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AB00"))) PPC_WEAK_FUNC(sub_82B6AB00);
PPC_FUNC_IMPL(__imp__sub_82B6AB00) {
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
	// lwz r3,-23036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23036);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ab38
	if (!ctx.cr6.eq) goto loc_82B6AB38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8d690
	ctx.lr = 0x82B6AB2C;
	sub_82B8D690(ctx, base);
	// stw r3,-23036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23036, ctx.r3.u32);
	// bl 0x82b8d740
	ctx.lr = 0x82B6AB34;
	sub_82B8D740(ctx, base);
	// lwz r3,-23036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23036);
loc_82B6AB38:
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

__attribute__((alias("__imp__sub_82B6AB4C"))) PPC_WEAK_FUNC(sub_82B6AB4C);
PPC_FUNC_IMPL(__imp__sub_82B6AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AB50"))) PPC_WEAK_FUNC(sub_82B6AB50);
PPC_FUNC_IMPL(__imp__sub_82B6AB50) {
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
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ab88
	if (!ctx.cr6.eq) goto loc_82B6AB88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b98708
	ctx.lr = 0x82B6AB7C;
	sub_82B98708(ctx, base);
	// stw r3,-22912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22912, ctx.r3.u32);
	// bl 0x82b987b8
	ctx.lr = 0x82B6AB84;
	sub_82B987B8(ctx, base);
	// lwz r3,-22912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22912);
loc_82B6AB88:
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

__attribute__((alias("__imp__sub_82B6AB9C"))) PPC_WEAK_FUNC(sub_82B6AB9C);
PPC_FUNC_IMPL(__imp__sub_82B6AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ABA0"))) PPC_WEAK_FUNC(sub_82B6ABA0);
PPC_FUNC_IMPL(__imp__sub_82B6ABA0) {
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
	// lwz r3,-23100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6abd8
	if (!ctx.cr6.eq) goto loc_82B6ABD8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b88ee0
	ctx.lr = 0x82B6ABCC;
	sub_82B88EE0(ctx, base);
	// stw r3,-23100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23100, ctx.r3.u32);
	// bl 0x82b88f90
	ctx.lr = 0x82B6ABD4;
	sub_82B88F90(ctx, base);
	// lwz r3,-23100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23100);
loc_82B6ABD8:
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

__attribute__((alias("__imp__sub_82B6ABEC"))) PPC_WEAK_FUNC(sub_82B6ABEC);
PPC_FUNC_IMPL(__imp__sub_82B6ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ABF0"))) PPC_WEAK_FUNC(sub_82B6ABF0);
PPC_FUNC_IMPL(__imp__sub_82B6ABF0) {
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
	// lwz r3,-23032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ac28
	if (!ctx.cr6.eq) goto loc_82B6AC28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8d8a8
	ctx.lr = 0x82B6AC1C;
	sub_82B8D8A8(ctx, base);
	// stw r3,-23032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23032, ctx.r3.u32);
	// bl 0x82b8d958
	ctx.lr = 0x82B6AC24;
	sub_82B8D958(ctx, base);
	// lwz r3,-23032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23032);
loc_82B6AC28:
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

__attribute__((alias("__imp__sub_82B6AC3C"))) PPC_WEAK_FUNC(sub_82B6AC3C);
PPC_FUNC_IMPL(__imp__sub_82B6AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AC40"))) PPC_WEAK_FUNC(sub_82B6AC40);
PPC_FUNC_IMPL(__imp__sub_82B6AC40) {
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
	// lwz r3,-23028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23028);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ac78
	if (!ctx.cr6.eq) goto loc_82B6AC78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8dac8
	ctx.lr = 0x82B6AC6C;
	sub_82B8DAC8(ctx, base);
	// stw r3,-23028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23028, ctx.r3.u32);
	// bl 0x82b8db78
	ctx.lr = 0x82B6AC74;
	sub_82B8DB78(ctx, base);
	// lwz r3,-23028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23028);
loc_82B6AC78:
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

__attribute__((alias("__imp__sub_82B6AC8C"))) PPC_WEAK_FUNC(sub_82B6AC8C);
PPC_FUNC_IMPL(__imp__sub_82B6AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AC90"))) PPC_WEAK_FUNC(sub_82B6AC90);
PPC_FUNC_IMPL(__imp__sub_82B6AC90) {
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
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6acc8
	if (!ctx.cr6.eq) goto loc_82B6ACC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b97c00
	ctx.lr = 0x82B6ACBC;
	sub_82B97C00(ctx, base);
	// stw r3,-22916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22916, ctx.r3.u32);
	// bl 0x82b97cb0
	ctx.lr = 0x82B6ACC4;
	sub_82B97CB0(ctx, base);
	// lwz r3,-22916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22916);
loc_82B6ACC8:
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

__attribute__((alias("__imp__sub_82B6ACDC"))) PPC_WEAK_FUNC(sub_82B6ACDC);
PPC_FUNC_IMPL(__imp__sub_82B6ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ACE0"))) PPC_WEAK_FUNC(sub_82B6ACE0);
PPC_FUNC_IMPL(__imp__sub_82B6ACE0) {
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
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ad18
	if (!ctx.cr6.eq) goto loc_82B6AD18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b979e8
	ctx.lr = 0x82B6AD0C;
	sub_82B979E8(ctx, base);
	// stw r3,-22920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22920, ctx.r3.u32);
	// bl 0x82b97a98
	ctx.lr = 0x82B6AD14;
	sub_82B97A98(ctx, base);
	// lwz r3,-22920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22920);
loc_82B6AD18:
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

__attribute__((alias("__imp__sub_82B6AD2C"))) PPC_WEAK_FUNC(sub_82B6AD2C);
PPC_FUNC_IMPL(__imp__sub_82B6AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AD30"))) PPC_WEAK_FUNC(sub_82B6AD30);
PPC_FUNC_IMPL(__imp__sub_82B6AD30) {
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
	// lwz r3,-23156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ad68
	if (!ctx.cr6.eq) goto loc_82B6AD68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7fb70
	ctx.lr = 0x82B6AD5C;
	sub_82B7FB70(ctx, base);
	// stw r3,-23156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23156, ctx.r3.u32);
	// bl 0x82b7fc20
	ctx.lr = 0x82B6AD64;
	sub_82B7FC20(ctx, base);
	// lwz r3,-23156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23156);
loc_82B6AD68:
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

__attribute__((alias("__imp__sub_82B6AD7C"))) PPC_WEAK_FUNC(sub_82B6AD7C);
PPC_FUNC_IMPL(__imp__sub_82B6AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AD80"))) PPC_WEAK_FUNC(sub_82B6AD80);
PPC_FUNC_IMPL(__imp__sub_82B6AD80) {
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
	// lwz r3,-23140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6adb8
	if (!ctx.cr6.eq) goto loc_82B6ADB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b808a0
	ctx.lr = 0x82B6ADAC;
	sub_82B808A0(ctx, base);
	// stw r3,-23140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23140, ctx.r3.u32);
	// bl 0x82b80950
	ctx.lr = 0x82B6ADB4;
	sub_82B80950(ctx, base);
	// lwz r3,-23140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23140);
loc_82B6ADB8:
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

__attribute__((alias("__imp__sub_82B6ADCC"))) PPC_WEAK_FUNC(sub_82B6ADCC);
PPC_FUNC_IMPL(__imp__sub_82B6ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ADD0"))) PPC_WEAK_FUNC(sub_82B6ADD0);
PPC_FUNC_IMPL(__imp__sub_82B6ADD0) {
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
	// lwz r3,-23148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ae08
	if (!ctx.cr6.eq) goto loc_82B6AE08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b802f0
	ctx.lr = 0x82B6ADFC;
	sub_82B802F0(ctx, base);
	// stw r3,-23148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23148, ctx.r3.u32);
	// bl 0x82b803a0
	ctx.lr = 0x82B6AE04;
	sub_82B803A0(ctx, base);
	// lwz r3,-23148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23148);
loc_82B6AE08:
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

__attribute__((alias("__imp__sub_82B6AE1C"))) PPC_WEAK_FUNC(sub_82B6AE1C);
PPC_FUNC_IMPL(__imp__sub_82B6AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AE20"))) PPC_WEAK_FUNC(sub_82B6AE20);
PPC_FUNC_IMPL(__imp__sub_82B6AE20) {
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
	// lwz r3,-23136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ae58
	if (!ctx.cr6.eq) goto loc_82B6AE58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b80c00
	ctx.lr = 0x82B6AE4C;
	sub_82B80C00(ctx, base);
	// stw r3,-23136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23136, ctx.r3.u32);
	// bl 0x82b80cb0
	ctx.lr = 0x82B6AE54;
	sub_82B80CB0(ctx, base);
	// lwz r3,-23136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23136);
loc_82B6AE58:
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

__attribute__((alias("__imp__sub_82B6AE6C"))) PPC_WEAK_FUNC(sub_82B6AE6C);
PPC_FUNC_IMPL(__imp__sub_82B6AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AE70"))) PPC_WEAK_FUNC(sub_82B6AE70);
PPC_FUNC_IMPL(__imp__sub_82B6AE70) {
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
	// lwz r3,-23152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6aea8
	if (!ctx.cr6.eq) goto loc_82B6AEA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7ff40
	ctx.lr = 0x82B6AE9C;
	sub_82B7FF40(ctx, base);
	// stw r3,-23152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23152, ctx.r3.u32);
	// bl 0x82b7fff0
	ctx.lr = 0x82B6AEA4;
	sub_82B7FFF0(ctx, base);
	// lwz r3,-23152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23152);
loc_82B6AEA8:
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

__attribute__((alias("__imp__sub_82B6AEBC"))) PPC_WEAK_FUNC(sub_82B6AEBC);
PPC_FUNC_IMPL(__imp__sub_82B6AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AEC0"))) PPC_WEAK_FUNC(sub_82B6AEC0);
PPC_FUNC_IMPL(__imp__sub_82B6AEC0) {
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
	// lwz r3,-23132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6aef8
	if (!ctx.cr6.eq) goto loc_82B6AEF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b80fb8
	ctx.lr = 0x82B6AEEC;
	sub_82B80FB8(ctx, base);
	// stw r3,-23132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23132, ctx.r3.u32);
	// bl 0x82b81068
	ctx.lr = 0x82B6AEF4;
	sub_82B81068(ctx, base);
	// lwz r3,-23132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23132);
loc_82B6AEF8:
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

__attribute__((alias("__imp__sub_82B6AF0C"))) PPC_WEAK_FUNC(sub_82B6AF0C);
PPC_FUNC_IMPL(__imp__sub_82B6AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AF10"))) PPC_WEAK_FUNC(sub_82B6AF10);
PPC_FUNC_IMPL(__imp__sub_82B6AF10) {
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
	// lwz r3,-23128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6af48
	if (!ctx.cr6.eq) goto loc_82B6AF48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b812a8
	ctx.lr = 0x82B6AF3C;
	sub_82B812A8(ctx, base);
	// stw r3,-23128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23128, ctx.r3.u32);
	// bl 0x82b81358
	ctx.lr = 0x82B6AF44;
	sub_82B81358(ctx, base);
	// lwz r3,-23128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23128);
loc_82B6AF48:
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

__attribute__((alias("__imp__sub_82B6AF5C"))) PPC_WEAK_FUNC(sub_82B6AF5C);
PPC_FUNC_IMPL(__imp__sub_82B6AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AF60"))) PPC_WEAK_FUNC(sub_82B6AF60);
PPC_FUNC_IMPL(__imp__sub_82B6AF60) {
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
	// lwz r3,-23060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6af98
	if (!ctx.cr6.eq) goto loc_82B6AF98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8c948
	ctx.lr = 0x82B6AF8C;
	sub_82B8C948(ctx, base);
	// stw r3,-23060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23060, ctx.r3.u32);
	// bl 0x82b8c9f8
	ctx.lr = 0x82B6AF94;
	sub_82B8C9F8(ctx, base);
	// lwz r3,-23060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23060);
loc_82B6AF98:
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

__attribute__((alias("__imp__sub_82B6AFAC"))) PPC_WEAK_FUNC(sub_82B6AFAC);
PPC_FUNC_IMPL(__imp__sub_82B6AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AFB0"))) PPC_WEAK_FUNC(sub_82B6AFB0);
PPC_FUNC_IMPL(__imp__sub_82B6AFB0) {
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
	// lwz r3,-23288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6afe8
	if (!ctx.cr6.eq) goto loc_82B6AFE8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7a488
	ctx.lr = 0x82B6AFDC;
	sub_82B7A488(ctx, base);
	// stw r3,-23288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23288, ctx.r3.u32);
	// bl 0x82b7a538
	ctx.lr = 0x82B6AFE4;
	sub_82B7A538(ctx, base);
	// lwz r3,-23288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23288);
loc_82B6AFE8:
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

__attribute__((alias("__imp__sub_82B6AFFC"))) PPC_WEAK_FUNC(sub_82B6AFFC);
PPC_FUNC_IMPL(__imp__sub_82B6AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B000"))) PPC_WEAK_FUNC(sub_82B6B000);
PPC_FUNC_IMPL(__imp__sub_82B6B000) {
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
	// lwz r3,-23120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b038
	if (!ctx.cr6.eq) goto loc_82B6B038;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b816f8
	ctx.lr = 0x82B6B02C;
	sub_82B816F8(ctx, base);
	// stw r3,-23120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23120, ctx.r3.u32);
	// bl 0x82b817a8
	ctx.lr = 0x82B6B034;
	sub_82B817A8(ctx, base);
	// lwz r3,-23120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23120);
loc_82B6B038:
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

__attribute__((alias("__imp__sub_82B6B04C"))) PPC_WEAK_FUNC(sub_82B6B04C);
PPC_FUNC_IMPL(__imp__sub_82B6B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B050"))) PPC_WEAK_FUNC(sub_82B6B050);
PPC_FUNC_IMPL(__imp__sub_82B6B050) {
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
	// lwz r3,-23164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b088
	if (!ctx.cr6.eq) goto loc_82B6B088;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7f738
	ctx.lr = 0x82B6B07C;
	sub_82B7F738(ctx, base);
	// stw r3,-23164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23164, ctx.r3.u32);
	// bl 0x82b7f7e8
	ctx.lr = 0x82B6B084;
	sub_82B7F7E8(ctx, base);
	// lwz r3,-23164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23164);
loc_82B6B088:
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

__attribute__((alias("__imp__sub_82B6B09C"))) PPC_WEAK_FUNC(sub_82B6B09C);
PPC_FUNC_IMPL(__imp__sub_82B6B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B0A0"))) PPC_WEAK_FUNC(sub_82B6B0A0);
PPC_FUNC_IMPL(__imp__sub_82B6B0A0) {
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
	// lwz r3,-23160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b0d8
	if (!ctx.cr6.eq) goto loc_82B6B0D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7f950
	ctx.lr = 0x82B6B0CC;
	sub_82B7F950(ctx, base);
	// stw r3,-23160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23160, ctx.r3.u32);
	// bl 0x82b7fa00
	ctx.lr = 0x82B6B0D4;
	sub_82B7FA00(ctx, base);
	// lwz r3,-23160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23160);
loc_82B6B0D8:
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

__attribute__((alias("__imp__sub_82B6B0EC"))) PPC_WEAK_FUNC(sub_82B6B0EC);
PPC_FUNC_IMPL(__imp__sub_82B6B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B0F0"))) PPC_WEAK_FUNC(sub_82B6B0F0);
PPC_FUNC_IMPL(__imp__sub_82B6B0F0) {
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
	// lwz r3,-23144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b128
	if (!ctx.cr6.eq) goto loc_82B6B128;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b80678
	ctx.lr = 0x82B6B11C;
	sub_82B80678(ctx, base);
	// stw r3,-23144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23144, ctx.r3.u32);
	// bl 0x82b80728
	ctx.lr = 0x82B6B124;
	sub_82B80728(ctx, base);
	// lwz r3,-23144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23144);
loc_82B6B128:
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

__attribute__((alias("__imp__sub_82B6B13C"))) PPC_WEAK_FUNC(sub_82B6B13C);
PPC_FUNC_IMPL(__imp__sub_82B6B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B140"))) PPC_WEAK_FUNC(sub_82B6B140);
PPC_FUNC_IMPL(__imp__sub_82B6B140) {
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
	// lwz r3,-23284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b178
	if (!ctx.cr6.eq) goto loc_82B6B178;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7a6a0
	ctx.lr = 0x82B6B16C;
	sub_82B7A6A0(ctx, base);
	// stw r3,-23284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23284, ctx.r3.u32);
	// bl 0x82b7a750
	ctx.lr = 0x82B6B174;
	sub_82B7A750(ctx, base);
	// lwz r3,-23284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23284);
loc_82B6B178:
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

__attribute__((alias("__imp__sub_82B6B18C"))) PPC_WEAK_FUNC(sub_82B6B18C);
PPC_FUNC_IMPL(__imp__sub_82B6B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B190"))) PPC_WEAK_FUNC(sub_82B6B190);
PPC_FUNC_IMPL(__imp__sub_82B6B190) {
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
	// lwz r3,-23280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b1c8
	if (!ctx.cr6.eq) goto loc_82B6B1C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7ab58
	ctx.lr = 0x82B6B1BC;
	sub_82B7AB58(ctx, base);
	// stw r3,-23280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23280, ctx.r3.u32);
	// bl 0x82b7ac08
	ctx.lr = 0x82B6B1C4;
	sub_82B7AC08(ctx, base);
	// lwz r3,-23280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23280);
loc_82B6B1C8:
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

__attribute__((alias("__imp__sub_82B6B1DC"))) PPC_WEAK_FUNC(sub_82B6B1DC);
PPC_FUNC_IMPL(__imp__sub_82B6B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B1E0"))) PPC_WEAK_FUNC(sub_82B6B1E0);
PPC_FUNC_IMPL(__imp__sub_82B6B1E0) {
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
	// bne cr6,0x82b6b234
	if (!ctx.cr6.eq) goto loc_82B6B234;
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
	ctx.lr = 0x82B6B234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B6B234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6B248;
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

__attribute__((alias("__imp__sub_82B6B25C"))) PPC_WEAK_FUNC(sub_82B6B25C);
PPC_FUNC_IMPL(__imp__sub_82B6B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B260"))) PPC_WEAK_FUNC(sub_82B6B260);
PPC_FUNC_IMPL(__imp__sub_82B6B260) {
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
	// bne cr6,0x82b6b2b4
	if (!ctx.cr6.eq) goto loc_82B6B2B4;
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
	ctx.lr = 0x82B6B2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B6B2B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6B2C8;
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

__attribute__((alias("__imp__sub_82B6B2DC"))) PPC_WEAK_FUNC(sub_82B6B2DC);
PPC_FUNC_IMPL(__imp__sub_82B6B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B2E0"))) PPC_WEAK_FUNC(sub_82B6B2E0);
PPC_FUNC_IMPL(__imp__sub_82B6B2E0) {
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
	// lwz r3,-23276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b318
	if (!ctx.cr6.eq) goto loc_82B6B318;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7b090
	ctx.lr = 0x82B6B30C;
	sub_82B7B090(ctx, base);
	// stw r3,-23276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23276, ctx.r3.u32);
	// bl 0x82b7b140
	ctx.lr = 0x82B6B314;
	sub_82B7B140(ctx, base);
	// lwz r3,-23276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23276);
loc_82B6B318:
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

__attribute__((alias("__imp__sub_82B6B32C"))) PPC_WEAK_FUNC(sub_82B6B32C);
PPC_FUNC_IMPL(__imp__sub_82B6B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B330"))) PPC_WEAK_FUNC(sub_82B6B330);
PPC_FUNC_IMPL(__imp__sub_82B6B330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6B338;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r29,r10,26648
	ctx.r29.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6B380;
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
	// bne cr6,0x82b6b3bc
	if (!ctx.cr6.eq) goto loc_82B6B3BC;
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
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B6B3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B6B3BC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b6b3e0
	if (ctx.cr6.eq) goto loc_82B6B3E0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82B6B3E0;
	sub_82294520(ctx, base);
loc_82B6B3E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82B6B3E8;
	sub_82294CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B3F0"))) PPC_WEAK_FUNC(sub_82B6B3F0);
PPC_FUNC_IMPL(__imp__sub_82B6B3F0) {
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
	// lwz r3,-23124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b428
	if (!ctx.cr6.eq) goto loc_82B6B428;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b814c8
	ctx.lr = 0x82B6B41C;
	sub_82B814C8(ctx, base);
	// stw r3,-23124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23124, ctx.r3.u32);
	// bl 0x82b81578
	ctx.lr = 0x82B6B424;
	sub_82B81578(ctx, base);
	// lwz r3,-23124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23124);
loc_82B6B428:
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

__attribute__((alias("__imp__sub_82B6B43C"))) PPC_WEAK_FUNC(sub_82B6B43C);
PPC_FUNC_IMPL(__imp__sub_82B6B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B440"))) PPC_WEAK_FUNC(sub_82B6B440);
PPC_FUNC_IMPL(__imp__sub_82B6B440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B6B448;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31887
	ctx.r10.s64 = -2089746432;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r29,r10,26648
	ctx.r29.s64 = ctx.r10.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6B494;
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
	// bne cr6,0x82b6b4d0
	if (!ctx.cr6.eq) goto loc_82B6B4D0;
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
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B6B4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B6B4D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b7b678
	ctx.lr = 0x82B6B4DC;
	sub_82B7B678(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b6b500
	if (ctx.cr6.eq) goto loc_82B6B500;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82B6B500;
	sub_82294520(ctx, base);
loc_82B6B500:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82B6B508;
	sub_82294CC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B510"))) PPC_WEAK_FUNC(sub_82B6B510);
PPC_FUNC_IMPL(__imp__sub_82B6B510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6B518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	ctx.lr = 0x82B6B55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82b6b5ac
	if (!ctx.cr6.eq) goto loc_82B6B5AC;
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
	ctx.lr = 0x82B6B5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B6B5AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b7b718
	ctx.lr = 0x82B6B5B8;
	sub_82B7B718(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B5C0"))) PPC_WEAK_FUNC(sub_82B6B5C0);
PPC_FUNC_IMPL(__imp__sub_82B6B5C0) {
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
	// lwz r3,-23272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b5f8
	if (!ctx.cr6.eq) goto loc_82B6B5F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b7b3d8
	ctx.lr = 0x82B6B5EC;
	sub_82B7B3D8(ctx, base);
	// stw r3,-23272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23272, ctx.r3.u32);
	// bl 0x82b7b488
	ctx.lr = 0x82B6B5F4;
	sub_82B7B488(ctx, base);
	// lwz r3,-23272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23272);
loc_82B6B5F8:
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

__attribute__((alias("__imp__sub_82B6B60C"))) PPC_WEAK_FUNC(sub_82B6B60C);
PPC_FUNC_IMPL(__imp__sub_82B6B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B610"))) PPC_WEAK_FUNC(sub_82B6B610);
PPC_FUNC_IMPL(__imp__sub_82B6B610) {
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
	// lwz r3,-23056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b648
	if (!ctx.cr6.eq) goto loc_82B6B648;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8cb60
	ctx.lr = 0x82B6B63C;
	sub_82B8CB60(ctx, base);
	// stw r3,-23056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23056, ctx.r3.u32);
	// bl 0x82b8cc10
	ctx.lr = 0x82B6B644;
	sub_82B8CC10(ctx, base);
	// lwz r3,-23056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23056);
loc_82B6B648:
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

__attribute__((alias("__imp__sub_82B6B65C"))) PPC_WEAK_FUNC(sub_82B6B65C);
PPC_FUNC_IMPL(__imp__sub_82B6B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B660"))) PPC_WEAK_FUNC(sub_82B6B660);
PPC_FUNC_IMPL(__imp__sub_82B6B660) {
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
	// lwz r3,-23316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b698
	if (!ctx.cr6.eq) goto loc_82B6B698;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b764f8
	ctx.lr = 0x82B6B68C;
	sub_82B764F8(ctx, base);
	// stw r3,-23316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23316, ctx.r3.u32);
	// bl 0x82b765a8
	ctx.lr = 0x82B6B694;
	sub_82B765A8(ctx, base);
	// lwz r3,-23316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23316);
loc_82B6B698:
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

__attribute__((alias("__imp__sub_82B6B6AC"))) PPC_WEAK_FUNC(sub_82B6B6AC);
PPC_FUNC_IMPL(__imp__sub_82B6B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B6B0"))) PPC_WEAK_FUNC(sub_82B6B6B0);
PPC_FUNC_IMPL(__imp__sub_82B6B6B0) {
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
	// lwz r3,-23020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b6e8
	if (!ctx.cr6.eq) goto loc_82B6B6E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8f1e0
	ctx.lr = 0x82B6B6DC;
	sub_82B8F1E0(ctx, base);
	// stw r3,-23020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23020, ctx.r3.u32);
	// bl 0x82b8f290
	ctx.lr = 0x82B6B6E4;
	sub_82B8F290(ctx, base);
	// lwz r3,-23020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23020);
loc_82B6B6E8:
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

__attribute__((alias("__imp__sub_82B6B6FC"))) PPC_WEAK_FUNC(sub_82B6B6FC);
PPC_FUNC_IMPL(__imp__sub_82B6B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B700"))) PPC_WEAK_FUNC(sub_82B6B700);
PPC_FUNC_IMPL(__imp__sub_82B6B700) {
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
	// lwz r3,-23300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b738
	if (!ctx.cr6.eq) goto loc_82B6B738;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b76d70
	ctx.lr = 0x82B6B72C;
	sub_82B76D70(ctx, base);
	// stw r3,-23300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23300, ctx.r3.u32);
	// bl 0x82b76e20
	ctx.lr = 0x82B6B734;
	sub_82B76E20(ctx, base);
	// lwz r3,-23300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23300);
loc_82B6B738:
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

__attribute__((alias("__imp__sub_82B6B74C"))) PPC_WEAK_FUNC(sub_82B6B74C);
PPC_FUNC_IMPL(__imp__sub_82B6B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B750"))) PPC_WEAK_FUNC(sub_82B6B750);
PPC_FUNC_IMPL(__imp__sub_82B6B750) {
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
	// lwz r3,-23116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b788
	if (!ctx.cr6.eq) goto loc_82B6B788;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b81a48
	ctx.lr = 0x82B6B77C;
	sub_82B81A48(ctx, base);
	// stw r3,-23116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23116, ctx.r3.u32);
	// bl 0x82b81af8
	ctx.lr = 0x82B6B784;
	sub_82B81AF8(ctx, base);
	// lwz r3,-23116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23116);
loc_82B6B788:
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

__attribute__((alias("__imp__sub_82B6B79C"))) PPC_WEAK_FUNC(sub_82B6B79C);
PPC_FUNC_IMPL(__imp__sub_82B6B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B7A0"))) PPC_WEAK_FUNC(sub_82B6B7A0);
PPC_FUNC_IMPL(__imp__sub_82B6B7A0) {
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
	// lwz r3,-23308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b7d8
	if (!ctx.cr6.eq) goto loc_82B6B7D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b76930
	ctx.lr = 0x82B6B7CC;
	sub_82B76930(ctx, base);
	// stw r3,-23308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23308, ctx.r3.u32);
	// bl 0x82b769e0
	ctx.lr = 0x82B6B7D4;
	sub_82B769E0(ctx, base);
	// lwz r3,-23308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23308);
loc_82B6B7D8:
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

__attribute__((alias("__imp__sub_82B6B7EC"))) PPC_WEAK_FUNC(sub_82B6B7EC);
PPC_FUNC_IMPL(__imp__sub_82B6B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B7F0"))) PPC_WEAK_FUNC(sub_82B6B7F0);
PPC_FUNC_IMPL(__imp__sub_82B6B7F0) {
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
	// lwz r3,-23304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b828
	if (!ctx.cr6.eq) goto loc_82B6B828;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b76b50
	ctx.lr = 0x82B6B81C;
	sub_82B76B50(ctx, base);
	// stw r3,-23304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23304, ctx.r3.u32);
	// bl 0x82b76c00
	ctx.lr = 0x82B6B824;
	sub_82B76C00(ctx, base);
	// lwz r3,-23304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23304);
loc_82B6B828:
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

__attribute__((alias("__imp__sub_82B6B83C"))) PPC_WEAK_FUNC(sub_82B6B83C);
PPC_FUNC_IMPL(__imp__sub_82B6B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B840"))) PPC_WEAK_FUNC(sub_82B6B840);
PPC_FUNC_IMPL(__imp__sub_82B6B840) {
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
	// lwz r3,-23312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b878
	if (!ctx.cr6.eq) goto loc_82B6B878;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b76710
	ctx.lr = 0x82B6B86C;
	sub_82B76710(ctx, base);
	// stw r3,-23312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23312, ctx.r3.u32);
	// bl 0x82b767c0
	ctx.lr = 0x82B6B874;
	sub_82B767C0(ctx, base);
	// lwz r3,-23312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23312);
loc_82B6B878:
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

__attribute__((alias("__imp__sub_82B6B88C"))) PPC_WEAK_FUNC(sub_82B6B88C);
PPC_FUNC_IMPL(__imp__sub_82B6B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B890"))) PPC_WEAK_FUNC(sub_82B6B890);
PPC_FUNC_IMPL(__imp__sub_82B6B890) {
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
	// lwz r3,-23296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b8c8
	if (!ctx.cr6.eq) goto loc_82B6B8C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b76f90
	ctx.lr = 0x82B6B8BC;
	sub_82B76F90(ctx, base);
	// stw r3,-23296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23296, ctx.r3.u32);
	// bl 0x82b77040
	ctx.lr = 0x82B6B8C4;
	sub_82B77040(ctx, base);
	// lwz r3,-23296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23296);
loc_82B6B8C8:
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

__attribute__((alias("__imp__sub_82B6B8DC"))) PPC_WEAK_FUNC(sub_82B6B8DC);
PPC_FUNC_IMPL(__imp__sub_82B6B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B8E0"))) PPC_WEAK_FUNC(sub_82B6B8E0);
PPC_FUNC_IMPL(__imp__sub_82B6B8E0) {
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
	// lwz r3,-23292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b918
	if (!ctx.cr6.eq) goto loc_82B6B918;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b771b0
	ctx.lr = 0x82B6B90C;
	sub_82B771B0(ctx, base);
	// stw r3,-23292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23292, ctx.r3.u32);
	// bl 0x82b77260
	ctx.lr = 0x82B6B914;
	sub_82B77260(ctx, base);
	// lwz r3,-23292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23292);
loc_82B6B918:
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

__attribute__((alias("__imp__sub_82B6B92C"))) PPC_WEAK_FUNC(sub_82B6B92C);
PPC_FUNC_IMPL(__imp__sub_82B6B92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B930"))) PPC_WEAK_FUNC(sub_82B6B930);
PPC_FUNC_IMPL(__imp__sub_82B6B930) {
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
	// lwz r3,-22932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b968
	if (!ctx.cr6.eq) goto loc_82B6B968;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b94b88
	ctx.lr = 0x82B6B95C;
	sub_82B94B88(ctx, base);
	// stw r3,-22932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22932, ctx.r3.u32);
	// bl 0x82b94c38
	ctx.lr = 0x82B6B964;
	sub_82B94C38(ctx, base);
	// lwz r3,-22932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22932);
loc_82B6B968:
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

__attribute__((alias("__imp__sub_82B6B97C"))) PPC_WEAK_FUNC(sub_82B6B97C);
PPC_FUNC_IMPL(__imp__sub_82B6B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B980"))) PPC_WEAK_FUNC(sub_82B6B980);
PPC_FUNC_IMPL(__imp__sub_82B6B980) {
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
	// lwz r3,-22928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6b9b8
	if (!ctx.cr6.eq) goto loc_82B6B9B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b94eb0
	ctx.lr = 0x82B6B9AC;
	sub_82B94EB0(ctx, base);
	// stw r3,-22928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22928, ctx.r3.u32);
	// bl 0x82b94f60
	ctx.lr = 0x82B6B9B4;
	sub_82B94F60(ctx, base);
	// lwz r3,-22928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22928);
loc_82B6B9B8:
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

__attribute__((alias("__imp__sub_82B6B9CC"))) PPC_WEAK_FUNC(sub_82B6B9CC);
PPC_FUNC_IMPL(__imp__sub_82B6B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B9D0"))) PPC_WEAK_FUNC(sub_82B6B9D0);
PPC_FUNC_IMPL(__imp__sub_82B6B9D0) {
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
	// lwz r3,-22976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ba08
	if (!ctx.cr6.eq) goto loc_82B6BA08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b92238
	ctx.lr = 0x82B6B9FC;
	sub_82B92238(ctx, base);
	// stw r3,-22976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22976, ctx.r3.u32);
	// bl 0x82b922e8
	ctx.lr = 0x82B6BA04;
	sub_82B922E8(ctx, base);
	// lwz r3,-22976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22976);
loc_82B6BA08:
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

__attribute__((alias("__imp__sub_82B6BA1C"))) PPC_WEAK_FUNC(sub_82B6BA1C);
PPC_FUNC_IMPL(__imp__sub_82B6BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BA20"))) PPC_WEAK_FUNC(sub_82B6BA20);
PPC_FUNC_IMPL(__imp__sub_82B6BA20) {
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
	// lwz r3,-22972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22972);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6ba58
	if (!ctx.cr6.eq) goto loc_82B6BA58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b924a8
	ctx.lr = 0x82B6BA4C;
	sub_82B924A8(ctx, base);
	// stw r3,-22972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22972, ctx.r3.u32);
	// bl 0x82b92558
	ctx.lr = 0x82B6BA54;
	sub_82B92558(ctx, base);
	// lwz r3,-22972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22972);
loc_82B6BA58:
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

__attribute__((alias("__imp__sub_82B6BA6C"))) PPC_WEAK_FUNC(sub_82B6BA6C);
PPC_FUNC_IMPL(__imp__sub_82B6BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BA70"))) PPC_WEAK_FUNC(sub_82B6BA70);
PPC_FUNC_IMPL(__imp__sub_82B6BA70) {
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
	// lwz r3,-22968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6baa8
	if (!ctx.cr6.eq) goto loc_82B6BAA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b92738
	ctx.lr = 0x82B6BA9C;
	sub_82B92738(ctx, base);
	// stw r3,-22968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22968, ctx.r3.u32);
	// bl 0x82b927e8
	ctx.lr = 0x82B6BAA4;
	sub_82B927E8(ctx, base);
	// lwz r3,-22968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22968);
loc_82B6BAA8:
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

__attribute__((alias("__imp__sub_82B6BABC"))) PPC_WEAK_FUNC(sub_82B6BABC);
PPC_FUNC_IMPL(__imp__sub_82B6BABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BAC0"))) PPC_WEAK_FUNC(sub_82B6BAC0);
PPC_FUNC_IMPL(__imp__sub_82B6BAC0) {
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
	// lwz r3,-22964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22964);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6baf8
	if (!ctx.cr6.eq) goto loc_82B6BAF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b92960
	ctx.lr = 0x82B6BAEC;
	sub_82B92960(ctx, base);
	// stw r3,-22964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22964, ctx.r3.u32);
	// bl 0x82b92a10
	ctx.lr = 0x82B6BAF4;
	sub_82B92A10(ctx, base);
	// lwz r3,-22964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22964);
loc_82B6BAF8:
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

__attribute__((alias("__imp__sub_82B6BB0C"))) PPC_WEAK_FUNC(sub_82B6BB0C);
PPC_FUNC_IMPL(__imp__sub_82B6BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BB10"))) PPC_WEAK_FUNC(sub_82B6BB10);
PPC_FUNC_IMPL(__imp__sub_82B6BB10) {
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
	// lwz r3,-23084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23084);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bb48
	if (!ctx.cr6.eq) goto loc_82B6BB48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8a550
	ctx.lr = 0x82B6BB3C;
	sub_82B8A550(ctx, base);
	// stw r3,-23084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23084, ctx.r3.u32);
	// bl 0x82b8a600
	ctx.lr = 0x82B6BB44;
	sub_82B8A600(ctx, base);
	// lwz r3,-23084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23084);
loc_82B6BB48:
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

__attribute__((alias("__imp__sub_82B6BB5C"))) PPC_WEAK_FUNC(sub_82B6BB5C);
PPC_FUNC_IMPL(__imp__sub_82B6BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BB60"))) PPC_WEAK_FUNC(sub_82B6BB60);
PPC_FUNC_IMPL(__imp__sub_82B6BB60) {
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
	// lwz r3,-23080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bb98
	if (!ctx.cr6.eq) goto loc_82B6BB98;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b8a7c0
	ctx.lr = 0x82B6BB8C;
	sub_82B8A7C0(ctx, base);
	// stw r3,-23080(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23080, ctx.r3.u32);
	// bl 0x82b8a870
	ctx.lr = 0x82B6BB94;
	sub_82B8A870(ctx, base);
	// lwz r3,-23080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23080);
loc_82B6BB98:
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

__attribute__((alias("__imp__sub_82B6BBAC"))) PPC_WEAK_FUNC(sub_82B6BBAC);
PPC_FUNC_IMPL(__imp__sub_82B6BBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BBB0"))) PPC_WEAK_FUNC(sub_82B6BBB0);
PPC_FUNC_IMPL(__imp__sub_82B6BBB0) {
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
	// lwz r3,-22948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bbe8
	if (!ctx.cr6.eq) goto loc_82B6BBE8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b93c58
	ctx.lr = 0x82B6BBDC;
	sub_82B93C58(ctx, base);
	// stw r3,-22948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22948, ctx.r3.u32);
	// bl 0x82b93d08
	ctx.lr = 0x82B6BBE4;
	sub_82B93D08(ctx, base);
	// lwz r3,-22948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22948);
loc_82B6BBE8:
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

__attribute__((alias("__imp__sub_82B6BBFC"))) PPC_WEAK_FUNC(sub_82B6BBFC);
PPC_FUNC_IMPL(__imp__sub_82B6BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BC00"))) PPC_WEAK_FUNC(sub_82B6BC00);
PPC_FUNC_IMPL(__imp__sub_82B6BC00) {
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
	// lwz r3,-22944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bc38
	if (!ctx.cr6.eq) goto loc_82B6BC38;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b93ec8
	ctx.lr = 0x82B6BC2C;
	sub_82B93EC8(ctx, base);
	// stw r3,-22944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22944, ctx.r3.u32);
	// bl 0x82b93f78
	ctx.lr = 0x82B6BC34;
	sub_82B93F78(ctx, base);
	// lwz r3,-22944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22944);
loc_82B6BC38:
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

__attribute__((alias("__imp__sub_82B6BC4C"))) PPC_WEAK_FUNC(sub_82B6BC4C);
PPC_FUNC_IMPL(__imp__sub_82B6BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BC50"))) PPC_WEAK_FUNC(sub_82B6BC50);
PPC_FUNC_IMPL(__imp__sub_82B6BC50) {
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
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bc88
	if (!ctx.cr6.eq) goto loc_82B6BC88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b71840
	ctx.lr = 0x82B6BC7C;
	sub_82B71840(ctx, base);
	// stw r3,-23372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23372, ctx.r3.u32);
	// bl 0x82b718f0
	ctx.lr = 0x82B6BC84;
	sub_82B718F0(ctx, base);
	// lwz r3,-23372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23372);
loc_82B6BC88:
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

__attribute__((alias("__imp__sub_82B6BC9C"))) PPC_WEAK_FUNC(sub_82B6BC9C);
PPC_FUNC_IMPL(__imp__sub_82B6BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BCA0"))) PPC_WEAK_FUNC(sub_82B6BCA0);
PPC_FUNC_IMPL(__imp__sub_82B6BCA0) {
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
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bcd8
	if (!ctx.cr6.eq) goto loc_82B6BCD8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b71ac0
	ctx.lr = 0x82B6BCCC;
	sub_82B71AC0(ctx, base);
	// stw r3,-23368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23368, ctx.r3.u32);
	// bl 0x82b71b70
	ctx.lr = 0x82B6BCD4;
	sub_82B71B70(ctx, base);
	// lwz r3,-23368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23368);
loc_82B6BCD8:
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

__attribute__((alias("__imp__sub_82B6BCEC"))) PPC_WEAK_FUNC(sub_82B6BCEC);
PPC_FUNC_IMPL(__imp__sub_82B6BCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BCF0"))) PPC_WEAK_FUNC(sub_82B6BCF0);
PPC_FUNC_IMPL(__imp__sub_82B6BCF0) {
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
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bd28
	if (!ctx.cr6.eq) goto loc_82B6BD28;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b71ce8
	ctx.lr = 0x82B6BD1C;
	sub_82B71CE8(ctx, base);
	// stw r3,-23364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23364, ctx.r3.u32);
	// bl 0x82b71d98
	ctx.lr = 0x82B6BD24;
	sub_82B71D98(ctx, base);
	// lwz r3,-23364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23364);
loc_82B6BD28:
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

__attribute__((alias("__imp__sub_82B6BD3C"))) PPC_WEAK_FUNC(sub_82B6BD3C);
PPC_FUNC_IMPL(__imp__sub_82B6BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BD40"))) PPC_WEAK_FUNC(sub_82B6BD40);
PPC_FUNC_IMPL(__imp__sub_82B6BD40) {
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
	// lwz r3,-23360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bd78
	if (!ctx.cr6.eq) goto loc_82B6BD78;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b71fa0
	ctx.lr = 0x82B6BD6C;
	sub_82B71FA0(ctx, base);
	// stw r3,-23360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23360, ctx.r3.u32);
	// bl 0x82b72050
	ctx.lr = 0x82B6BD74;
	sub_82B72050(ctx, base);
	// lwz r3,-23360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23360);
loc_82B6BD78:
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

__attribute__((alias("__imp__sub_82B6BD8C"))) PPC_WEAK_FUNC(sub_82B6BD8C);
PPC_FUNC_IMPL(__imp__sub_82B6BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BD90"))) PPC_WEAK_FUNC(sub_82B6BD90);
PPC_FUNC_IMPL(__imp__sub_82B6BD90) {
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
	// lwz r3,-22960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bdc8
	if (!ctx.cr6.eq) goto loc_82B6BDC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b930e0
	ctx.lr = 0x82B6BDBC;
	sub_82B930E0(ctx, base);
	// stw r3,-22960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22960, ctx.r3.u32);
	// bl 0x82b93190
	ctx.lr = 0x82B6BDC4;
	sub_82B93190(ctx, base);
	// lwz r3,-22960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22960);
loc_82B6BDC8:
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

__attribute__((alias("__imp__sub_82B6BDDC"))) PPC_WEAK_FUNC(sub_82B6BDDC);
PPC_FUNC_IMPL(__imp__sub_82B6BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BDE0"))) PPC_WEAK_FUNC(sub_82B6BDE0);
PPC_FUNC_IMPL(__imp__sub_82B6BDE0) {
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
	// lwz r3,-22956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22956);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6be18
	if (!ctx.cr6.eq) goto loc_82B6BE18;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b93378
	ctx.lr = 0x82B6BE0C;
	sub_82B93378(ctx, base);
	// stw r3,-22956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22956, ctx.r3.u32);
	// bl 0x82b93428
	ctx.lr = 0x82B6BE14;
	sub_82B93428(ctx, base);
	// lwz r3,-22956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22956);
loc_82B6BE18:
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

__attribute__((alias("__imp__sub_82B6BE2C"))) PPC_WEAK_FUNC(sub_82B6BE2C);
PPC_FUNC_IMPL(__imp__sub_82B6BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BE30"))) PPC_WEAK_FUNC(sub_82B6BE30);
PPC_FUNC_IMPL(__imp__sub_82B6BE30) {
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
	// lwz r3,-22952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6be68
	if (!ctx.cr6.eq) goto loc_82B6BE68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b935f0
	ctx.lr = 0x82B6BE5C;
	sub_82B935F0(ctx, base);
	// stw r3,-22952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22952, ctx.r3.u32);
	// bl 0x82b936a0
	ctx.lr = 0x82B6BE64;
	sub_82B936A0(ctx, base);
	// lwz r3,-22952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
loc_82B6BE68:
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

__attribute__((alias("__imp__sub_82B6BE7C"))) PPC_WEAK_FUNC(sub_82B6BE7C);
PPC_FUNC_IMPL(__imp__sub_82B6BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BE80"))) PPC_WEAK_FUNC(sub_82B6BE80);
PPC_FUNC_IMPL(__imp__sub_82B6BE80) {
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
	// lwz r3,-23096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6beb8
	if (!ctx.cr6.eq) goto loc_82B6BEB8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b89aa0
	ctx.lr = 0x82B6BEAC;
	sub_82B89AA0(ctx, base);
	// stw r3,-23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23096, ctx.r3.u32);
	// bl 0x82b89b50
	ctx.lr = 0x82B6BEB4;
	sub_82B89B50(ctx, base);
	// lwz r3,-23096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23096);
loc_82B6BEB8:
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

__attribute__((alias("__imp__sub_82B6BECC"))) PPC_WEAK_FUNC(sub_82B6BECC);
PPC_FUNC_IMPL(__imp__sub_82B6BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BED0"))) PPC_WEAK_FUNC(sub_82B6BED0);
PPC_FUNC_IMPL(__imp__sub_82B6BED0) {
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
	// lwz r3,-23092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bf08
	if (!ctx.cr6.eq) goto loc_82B6BF08;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b89cc0
	ctx.lr = 0x82B6BEFC;
	sub_82B89CC0(ctx, base);
	// stw r3,-23092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23092, ctx.r3.u32);
	// bl 0x82b89d70
	ctx.lr = 0x82B6BF04;
	sub_82B89D70(ctx, base);
	// lwz r3,-23092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23092);
loc_82B6BF08:
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

__attribute__((alias("__imp__sub_82B6BF1C"))) PPC_WEAK_FUNC(sub_82B6BF1C);
PPC_FUNC_IMPL(__imp__sub_82B6BF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BF20"))) PPC_WEAK_FUNC(sub_82B6BF20);
PPC_FUNC_IMPL(__imp__sub_82B6BF20) {
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
	// lwz r3,-23088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23088);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bf58
	if (!ctx.cr6.eq) goto loc_82B6BF58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b89ee8
	ctx.lr = 0x82B6BF4C;
	sub_82B89EE8(ctx, base);
	// stw r3,-23088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23088, ctx.r3.u32);
	// bl 0x82b89f98
	ctx.lr = 0x82B6BF54;
	sub_82B89F98(ctx, base);
	// lwz r3,-23088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23088);
loc_82B6BF58:
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

__attribute__((alias("__imp__sub_82B6BF6C"))) PPC_WEAK_FUNC(sub_82B6BF6C);
PPC_FUNC_IMPL(__imp__sub_82B6BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BF70"))) PPC_WEAK_FUNC(sub_82B6BF70);
PPC_FUNC_IMPL(__imp__sub_82B6BF70) {
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
	// lwz r3,-23008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23008);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bfa8
	if (!ctx.cr6.eq) goto loc_82B6BFA8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b90150
	ctx.lr = 0x82B6BF9C;
	sub_82B90150(ctx, base);
	// stw r3,-23008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23008, ctx.r3.u32);
	// bl 0x82b90200
	ctx.lr = 0x82B6BFA4;
	sub_82B90200(ctx, base);
	// lwz r3,-23008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23008);
loc_82B6BFA8:
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

__attribute__((alias("__imp__sub_82B6BFBC"))) PPC_WEAK_FUNC(sub_82B6BFBC);
PPC_FUNC_IMPL(__imp__sub_82B6BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BFC0"))) PPC_WEAK_FUNC(sub_82B6BFC0);
PPC_FUNC_IMPL(__imp__sub_82B6BFC0) {
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
	// lwz r3,-23004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23004);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6bff8
	if (!ctx.cr6.eq) goto loc_82B6BFF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b90540
	ctx.lr = 0x82B6BFEC;
	sub_82B90540(ctx, base);
	// stw r3,-23004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23004, ctx.r3.u32);
	// bl 0x82b905f0
	ctx.lr = 0x82B6BFF4;
	sub_82B905F0(ctx, base);
	// lwz r3,-23004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23004);
loc_82B6BFF8:
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

__attribute__((alias("__imp__sub_82B6C00C"))) PPC_WEAK_FUNC(sub_82B6C00C);
PPC_FUNC_IMPL(__imp__sub_82B6C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C010"))) PPC_WEAK_FUNC(sub_82B6C010);
PPC_FUNC_IMPL(__imp__sub_82B6C010) {
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
	// lwz r3,-23000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c048
	if (!ctx.cr6.eq) goto loc_82B6C048;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b908f0
	ctx.lr = 0x82B6C03C;
	sub_82B908F0(ctx, base);
	// stw r3,-23000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23000, ctx.r3.u32);
	// bl 0x82b909a0
	ctx.lr = 0x82B6C044;
	sub_82B909A0(ctx, base);
	// lwz r3,-23000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23000);
loc_82B6C048:
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

__attribute__((alias("__imp__sub_82B6C05C"))) PPC_WEAK_FUNC(sub_82B6C05C);
PPC_FUNC_IMPL(__imp__sub_82B6C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C060"))) PPC_WEAK_FUNC(sub_82B6C060);
PPC_FUNC_IMPL(__imp__sub_82B6C060) {
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
	// lwz r3,-22988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22988);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c098
	if (!ctx.cr6.eq) goto loc_82B6C098;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b91088
	ctx.lr = 0x82B6C08C;
	sub_82B91088(ctx, base);
	// stw r3,-22988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22988, ctx.r3.u32);
	// bl 0x82b91138
	ctx.lr = 0x82B6C094;
	sub_82B91138(ctx, base);
	// lwz r3,-22988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22988);
loc_82B6C098:
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

__attribute__((alias("__imp__sub_82B6C0AC"))) PPC_WEAK_FUNC(sub_82B6C0AC);
PPC_FUNC_IMPL(__imp__sub_82B6C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C0B0"))) PPC_WEAK_FUNC(sub_82B6C0B0);
PPC_FUNC_IMPL(__imp__sub_82B6C0B0) {
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
	// lwz r3,-22996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22996);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c0e8
	if (!ctx.cr6.eq) goto loc_82B6C0E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b90bd0
	ctx.lr = 0x82B6C0DC;
	sub_82B90BD0(ctx, base);
	// stw r3,-22996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22996, ctx.r3.u32);
	// bl 0x82b90c80
	ctx.lr = 0x82B6C0E4;
	sub_82B90C80(ctx, base);
	// lwz r3,-22996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22996);
loc_82B6C0E8:
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

__attribute__((alias("__imp__sub_82B6C0FC"))) PPC_WEAK_FUNC(sub_82B6C0FC);
PPC_FUNC_IMPL(__imp__sub_82B6C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C100"))) PPC_WEAK_FUNC(sub_82B6C100);
PPC_FUNC_IMPL(__imp__sub_82B6C100) {
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
	// lwz r3,-22992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22992);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c138
	if (!ctx.cr6.eq) goto loc_82B6C138;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b90df8
	ctx.lr = 0x82B6C12C;
	sub_82B90DF8(ctx, base);
	// stw r3,-22992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22992, ctx.r3.u32);
	// bl 0x82b90ea8
	ctx.lr = 0x82B6C134;
	sub_82B90EA8(ctx, base);
	// lwz r3,-22992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22992);
loc_82B6C138:
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

__attribute__((alias("__imp__sub_82B6C14C"))) PPC_WEAK_FUNC(sub_82B6C14C);
PPC_FUNC_IMPL(__imp__sub_82B6C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C150"))) PPC_WEAK_FUNC(sub_82B6C150);
PPC_FUNC_IMPL(__imp__sub_82B6C150) {
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
	// lwz r3,-22940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c188
	if (!ctx.cr6.eq) goto loc_82B6C188;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b94418
	ctx.lr = 0x82B6C17C;
	sub_82B94418(ctx, base);
	// stw r3,-22940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22940, ctx.r3.u32);
	// bl 0x82b944c8
	ctx.lr = 0x82B6C184;
	sub_82B944C8(ctx, base);
	// lwz r3,-22940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22940);
loc_82B6C188:
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

__attribute__((alias("__imp__sub_82B6C19C"))) PPC_WEAK_FUNC(sub_82B6C19C);
PPC_FUNC_IMPL(__imp__sub_82B6C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C1A0"))) PPC_WEAK_FUNC(sub_82B6C1A0);
PPC_FUNC_IMPL(__imp__sub_82B6C1A0) {
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
	// lwz r3,-22936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c1d8
	if (!ctx.cr6.eq) goto loc_82B6C1D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b94638
	ctx.lr = 0x82B6C1CC;
	sub_82B94638(ctx, base);
	// stw r3,-22936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22936, ctx.r3.u32);
	// bl 0x82b946e8
	ctx.lr = 0x82B6C1D4;
	sub_82B946E8(ctx, base);
	// lwz r3,-22936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22936);
loc_82B6C1D8:
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

__attribute__((alias("__imp__sub_82B6C1EC"))) PPC_WEAK_FUNC(sub_82B6C1EC);
PPC_FUNC_IMPL(__imp__sub_82B6C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C1F0"))) PPC_WEAK_FUNC(sub_82B6C1F0);
PPC_FUNC_IMPL(__imp__sub_82B6C1F0) {
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
	// lwz r3,-22984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c228
	if (!ctx.cr6.eq) goto loc_82B6C228;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b91a60
	ctx.lr = 0x82B6C21C;
	sub_82B91A60(ctx, base);
	// stw r3,-22984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22984, ctx.r3.u32);
	// bl 0x82b91b10
	ctx.lr = 0x82B6C224;
	sub_82B91B10(ctx, base);
	// lwz r3,-22984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22984);
loc_82B6C228:
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

__attribute__((alias("__imp__sub_82B6C23C"))) PPC_WEAK_FUNC(sub_82B6C23C);
PPC_FUNC_IMPL(__imp__sub_82B6C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C240"))) PPC_WEAK_FUNC(sub_82B6C240);
PPC_FUNC_IMPL(__imp__sub_82B6C240) {
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
	// lwz r3,-22980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c278
	if (!ctx.cr6.eq) goto loc_82B6C278;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b91ce8
	ctx.lr = 0x82B6C26C;
	sub_82B91CE8(ctx, base);
	// stw r3,-22980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22980, ctx.r3.u32);
	// bl 0x82b91d98
	ctx.lr = 0x82B6C274;
	sub_82B91D98(ctx, base);
	// lwz r3,-22980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22980);
loc_82B6C278:
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

__attribute__((alias("__imp__sub_82B6C28C"))) PPC_WEAK_FUNC(sub_82B6C28C);
PPC_FUNC_IMPL(__imp__sub_82B6C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C290"))) PPC_WEAK_FUNC(sub_82B6C290);
PPC_FUNC_IMPL(__imp__sub_82B6C290) {
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
	// lwz r3,-23112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c2c8
	if (!ctx.cr6.eq) goto loc_82B6C2C8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b88508
	ctx.lr = 0x82B6C2BC;
	sub_82B88508(ctx, base);
	// stw r3,-23112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23112, ctx.r3.u32);
	// bl 0x82b885b8
	ctx.lr = 0x82B6C2C4;
	sub_82B885B8(ctx, base);
	// lwz r3,-23112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23112);
loc_82B6C2C8:
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

__attribute__((alias("__imp__sub_82B6C2DC"))) PPC_WEAK_FUNC(sub_82B6C2DC);
PPC_FUNC_IMPL(__imp__sub_82B6C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C2E0"))) PPC_WEAK_FUNC(sub_82B6C2E0);
PPC_FUNC_IMPL(__imp__sub_82B6C2E0) {
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
	// lwz r3,-23104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c318
	if (!ctx.cr6.eq) goto loc_82B6C318;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b88950
	ctx.lr = 0x82B6C30C;
	sub_82B88950(ctx, base);
	// stw r3,-23104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23104, ctx.r3.u32);
	// bl 0x82b88a00
	ctx.lr = 0x82B6C314;
	sub_82B88A00(ctx, base);
	// lwz r3,-23104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23104);
loc_82B6C318:
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

__attribute__((alias("__imp__sub_82B6C32C"))) PPC_WEAK_FUNC(sub_82B6C32C);
PPC_FUNC_IMPL(__imp__sub_82B6C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C330"))) PPC_WEAK_FUNC(sub_82B6C330);
PPC_FUNC_IMPL(__imp__sub_82B6C330) {
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
	// lwz r3,-23108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b6c368
	if (!ctx.cr6.eq) goto loc_82B6C368;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// bl 0x82b88728
	ctx.lr = 0x82B6C35C;
	sub_82B88728(ctx, base);
	// stw r3,-23108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23108, ctx.r3.u32);
	// bl 0x82b887d8
	ctx.lr = 0x82B6C364;
	sub_82B887D8(ctx, base);
	// lwz r3,-23108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23108);
loc_82B6C368:
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

__attribute__((alias("__imp__sub_82B6C37C"))) PPC_WEAK_FUNC(sub_82B6C37C);
PPC_FUNC_IMPL(__imp__sub_82B6C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C380"))) PPC_WEAK_FUNC(sub_82B6C380);
PPC_FUNC_IMPL(__imp__sub_82B6C380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C388;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1940
	ctx.r30.s64 = ctx.r11.s64 + -1940;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c3d8
	if (ctx.cr6.eq) goto loc_82B6C3D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C3AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C3B8;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c3e4
	if (ctx.cr6.eq) goto loc_82B6C3E4;
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
	// bne cr6,0x82b6c3ac
	if (!ctx.cr6.eq) goto loc_82B6C3AC;
loc_82B6C3D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C3E4:
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

__attribute__((alias("__imp__sub_82B6C3F8"))) PPC_WEAK_FUNC(sub_82B6C3F8);
PPC_FUNC_IMPL(__imp__sub_82B6C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1912
	ctx.r30.s64 = ctx.r11.s64 + -1912;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c450
	if (ctx.cr6.eq) goto loc_82B6C450;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C424:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C430;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c45c
	if (ctx.cr6.eq) goto loc_82B6C45C;
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
	// bne cr6,0x82b6c424
	if (!ctx.cr6.eq) goto loc_82B6C424;
loc_82B6C450:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C45C:
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

__attribute__((alias("__imp__sub_82B6C470"))) PPC_WEAK_FUNC(sub_82B6C470);
PPC_FUNC_IMPL(__imp__sub_82B6C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1592
	ctx.r30.s64 = ctx.r11.s64 + -1592;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c4c8
	if (ctx.cr6.eq) goto loc_82B6C4C8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C49C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C4A8;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c4d4
	if (ctx.cr6.eq) goto loc_82B6C4D4;
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
	// bne cr6,0x82b6c49c
	if (!ctx.cr6.eq) goto loc_82B6C49C;
loc_82B6C4C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C4D4:
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

__attribute__((alias("__imp__sub_82B6C4E8"))) PPC_WEAK_FUNC(sub_82B6C4E8);
PPC_FUNC_IMPL(__imp__sub_82B6C4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1568
	ctx.r30.s64 = ctx.r11.s64 + -1568;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c540
	if (ctx.cr6.eq) goto loc_82B6C540;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C514:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C520;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c54c
	if (ctx.cr6.eq) goto loc_82B6C54C;
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
	// bne cr6,0x82b6c514
	if (!ctx.cr6.eq) goto loc_82B6C514;
loc_82B6C540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C54C:
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

__attribute__((alias("__imp__sub_82B6C560"))) PPC_WEAK_FUNC(sub_82B6C560);
PPC_FUNC_IMPL(__imp__sub_82B6C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1544
	ctx.r30.s64 = ctx.r11.s64 + -1544;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c5b8
	if (ctx.cr6.eq) goto loc_82B6C5B8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C598;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c5c4
	if (ctx.cr6.eq) goto loc_82B6C5C4;
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
	// bne cr6,0x82b6c58c
	if (!ctx.cr6.eq) goto loc_82B6C58C;
loc_82B6C5B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C5C4:
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

__attribute__((alias("__imp__sub_82B6C5D8"))) PPC_WEAK_FUNC(sub_82B6C5D8);
PPC_FUNC_IMPL(__imp__sub_82B6C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82B6C5E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-1520
	ctx.r30.s64 = ctx.r11.s64 + -1520;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6c630
	if (ctx.cr6.eq) goto loc_82B6C630;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82B6C604:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x82B6C610;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82b6c63c
	if (ctx.cr6.eq) goto loc_82B6C63C;
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
	// bne cr6,0x82b6c604
	if (!ctx.cr6.eq) goto loc_82B6C604;
loc_82B6C630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C63C:
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

__attribute__((alias("__imp__sub_82B6C650"))) PPC_WEAK_FUNC(sub_82B6C650);
PPC_FUNC_IMPL(__imp__sub_82B6C650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82B6C658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,11480
	ctx.r31.s64 = ctx.r11.s64 + 11480;
	// lwz r11,-23212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c688
	if (!ctx.cr6.eq) goto loc_82B6C688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7d550
	ctx.lr = 0x82B6C680;
	sub_82B7D550(ctx, base);
	// stw r3,-23212(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23212, ctx.r3.u32);
	// bl 0x82b7d600
	ctx.lr = 0x82B6C688;
	sub_82B7D600(ctx, base);
loc_82B6C688:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c6a8
	if (!ctx.cr6.eq) goto loc_82B6C6A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7d770
	ctx.lr = 0x82B6C6A0;
	sub_82B7D770(ctx, base);
	// stw r3,-23208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23208, ctx.r3.u32);
	// bl 0x82b7d820
	ctx.lr = 0x82B6C6A8;
	sub_82B7D820(ctx, base);
loc_82B6C6A8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c6c8
	if (!ctx.cr6.eq) goto loc_82B6C6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b80678
	ctx.lr = 0x82B6C6C0;
	sub_82B80678(ctx, base);
	// stw r3,-23144(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23144, ctx.r3.u32);
	// bl 0x82b80728
	ctx.lr = 0x82B6C6C8;
	sub_82B80728(ctx, base);
loc_82B6C6C8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c6e8
	if (!ctx.cr6.eq) goto loc_82B6C6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b808a0
	ctx.lr = 0x82B6C6E0;
	sub_82B808A0(ctx, base);
	// stw r3,-23140(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23140, ctx.r3.u32);
	// bl 0x82b80950
	ctx.lr = 0x82B6C6E8;
	sub_82B80950(ctx, base);
loc_82B6C6E8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c708
	if (!ctx.cr6.eq) goto loc_82B6C708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b98708
	ctx.lr = 0x82B6C700;
	sub_82B98708(ctx, base);
	// stw r3,-22912(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22912, ctx.r3.u32);
	// bl 0x82b987b8
	ctx.lr = 0x82B6C708;
	sub_82B987B8(ctx, base);
loc_82B6C708:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c728
	if (!ctx.cr6.eq) goto loc_82B6C728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b814c8
	ctx.lr = 0x82B6C720;
	sub_82B814C8(ctx, base);
	// stw r3,-23124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23124, ctx.r3.u32);
	// bl 0x82b81578
	ctx.lr = 0x82B6C728;
	sub_82B81578(ctx, base);
loc_82B6C728:
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// addi r28,r10,29176
	ctx.r28.s64 = ctx.r10.s64 + 29176;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-15488
	ctx.r8.s64 = ctx.r10.s64 + -15488;
	// lwz r10,-23120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23120);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stwx r8,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r8.u32);
	// bne cr6,0x82b6c76c
	if (!ctx.cr6.eq) goto loc_82B6C76C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b816f8
	ctx.lr = 0x82B6C764;
	sub_82B816F8(ctx, base);
	// stw r3,-23120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23120, ctx.r3.u32);
	// bl 0x82b817a8
	ctx.lr = 0x82B6C76C;
	sub_82B817A8(ctx, base);
loc_82B6C76C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c78c
	if (!ctx.cr6.eq) goto loc_82B6C78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9a388
	ctx.lr = 0x82B6C784;
	sub_82B9A388(ctx, base);
	// stw r3,-22904(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22904, ctx.r3.u32);
	// bl 0x82b9a438
	ctx.lr = 0x82B6C78C;
	sub_82B9A438(ctx, base);
loc_82B6C78C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c7ac
	if (!ctx.cr6.eq) goto loc_82B6C7AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8cd80
	ctx.lr = 0x82B6C7A4;
	sub_82B8CD80(ctx, base);
	// stw r3,-23052(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23052, ctx.r3.u32);
	// bl 0x82b8ce30
	ctx.lr = 0x82B6C7AC;
	sub_82B8CE30(ctx, base);
loc_82B6C7AC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c7cc
	if (!ctx.cr6.eq) goto loc_82B6C7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7c680
	ctx.lr = 0x82B6C7C4;
	sub_82B7C680(ctx, base);
	// stw r3,-23240(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23240, ctx.r3.u32);
	// bl 0x82b7c730
	ctx.lr = 0x82B6C7CC;
	sub_82B7C730(ctx, base);
loc_82B6C7CC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c7ec
	if (!ctx.cr6.eq) goto loc_82B6C7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ccd0
	ctx.lr = 0x82B6C7E4;
	sub_82B7CCD0(ctx, base);
	// stw r3,-23228(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23228, ctx.r3.u32);
	// bl 0x82b7cd80
	ctx.lr = 0x82B6C7EC;
	sub_82B7CD80(ctx, base);
loc_82B6C7EC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c80c
	if (!ctx.cr6.eq) goto loc_82B6C80C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7cab0
	ctx.lr = 0x82B6C804;
	sub_82B7CAB0(ctx, base);
	// stw r3,-23232(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23232, ctx.r3.u32);
	// bl 0x82b7cb60
	ctx.lr = 0x82B6C80C;
	sub_82B7CB60(ctx, base);
loc_82B6C80C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c82c
	if (!ctx.cr6.eq) goto loc_82B6C82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7d330
	ctx.lr = 0x82B6C824;
	sub_82B7D330(ctx, base);
	// stw r3,-23216(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23216, ctx.r3.u32);
	// bl 0x82b7d3e0
	ctx.lr = 0x82B6C82C;
	sub_82B7D3E0(ctx, base);
loc_82B6C82C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c84c
	if (!ctx.cr6.eq) goto loc_82B6C84C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ddd0
	ctx.lr = 0x82B6C844;
	sub_82B7DDD0(ctx, base);
	// stw r3,-23196(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23196, ctx.r3.u32);
	// bl 0x82b7de80
	ctx.lr = 0x82B6C84C;
	sub_82B7DE80(ctx, base);
loc_82B6C84C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c86c
	if (!ctx.cr6.eq) goto loc_82B6C86C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7d110
	ctx.lr = 0x82B6C864;
	sub_82B7D110(ctx, base);
	// stw r3,-23220(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23220, ctx.r3.u32);
	// bl 0x82b7d1c0
	ctx.lr = 0x82B6C86C;
	sub_82B7D1C0(ctx, base);
loc_82B6C86C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c88c
	if (!ctx.cr6.eq) goto loc_82B6C88C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7d990
	ctx.lr = 0x82B6C884;
	sub_82B7D990(ctx, base);
	// stw r3,-23204(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23204, ctx.r3.u32);
	// bl 0x82b7da40
	ctx.lr = 0x82B6C88C;
	sub_82B7DA40(ctx, base);
loc_82B6C88C:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c8ac
	if (!ctx.cr6.eq) goto loc_82B6C8AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7dbb0
	ctx.lr = 0x82B6C8A4;
	sub_82B7DBB0(ctx, base);
	// stw r3,-23200(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23200, ctx.r3.u32);
	// bl 0x82b7dc60
	ctx.lr = 0x82B6C8AC;
	sub_82B7DC60(ctx, base);
loc_82B6C8AC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c8cc
	if (!ctx.cr6.eq) goto loc_82B6C8CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7cef0
	ctx.lr = 0x82B6C8C4;
	sub_82B7CEF0(ctx, base);
	// stw r3,-23224(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23224, ctx.r3.u32);
	// bl 0x82b7cfa0
	ctx.lr = 0x82B6C8CC;
	sub_82B7CFA0(ctx, base);
loc_82B6C8CC:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c8ec
	if (!ctx.cr6.eq) goto loc_82B6C8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6e700
	ctx.lr = 0x82B6C8E4;
	sub_82B6E700(ctx, base);
	// stw r3,-23376(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23376, ctx.r3.u32);
	// bl 0x82b6e7b0
	ctx.lr = 0x82B6C8EC;
	sub_82B6E7B0(ctx, base);
loc_82B6C8EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-15368
	ctx.r7.s64 = ctx.r10.s64 + -15368;
	// lwz r11,-23012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23012);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x82b6c928
	if (!ctx.cr6.eq) goto loc_82B6C928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8f620
	ctx.lr = 0x82B6C920;
	sub_82B8F620(ctx, base);
	// stw r3,-23012(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23012, ctx.r3.u32);
	// bl 0x82b8f6d0
	ctx.lr = 0x82B6C928;
	sub_82B8F6D0(ctx, base);
loc_82B6C928:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c948
	if (!ctx.cr6.eq) goto loc_82B6C948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7c468
	ctx.lr = 0x82B6C940;
	sub_82B7C468(ctx, base);
	// stw r3,-23244(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23244, ctx.r3.u32);
	// bl 0x82b7c518
	ctx.lr = 0x82B6C948;
	sub_82B7C518(ctx, base);
loc_82B6C948:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c968
	if (!ctx.cr6.eq) goto loc_82B6C968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7c898
	ctx.lr = 0x82B6C960;
	sub_82B7C898(ctx, base);
	// stw r3,-23236(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23236, ctx.r3.u32);
	// bl 0x82b7c948
	ctx.lr = 0x82B6C968;
	sub_82B7C948(ctx, base);
loc_82B6C968:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c988
	if (!ctx.cr6.eq) goto loc_82B6C988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7e868
	ctx.lr = 0x82B6C980;
	sub_82B7E868(ctx, base);
	// stw r3,-23176(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23176, ctx.r3.u32);
	// bl 0x82b7e918
	ctx.lr = 0x82B6C988;
	sub_82B7E918(ctx, base);
loc_82B6C988:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c9a8
	if (!ctx.cr6.eq) goto loc_82B6C9A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7dff0
	ctx.lr = 0x82B6C9A0;
	sub_82B7DFF0(ctx, base);
	// stw r3,-23192(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23192, ctx.r3.u32);
	// bl 0x82b7e0a0
	ctx.lr = 0x82B6C9A8;
	sub_82B7E0A0(ctx, base);
loc_82B6C9A8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c9c8
	if (!ctx.cr6.eq) goto loc_82B6C9C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7e210
	ctx.lr = 0x82B6C9C0;
	sub_82B7E210(ctx, base);
	// stw r3,-23188(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23188, ctx.r3.u32);
	// bl 0x82b7e2c0
	ctx.lr = 0x82B6C9C8;
	sub_82B7E2C0(ctx, base);
loc_82B6C9C8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6c9e8
	if (!ctx.cr6.eq) goto loc_82B6C9E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7e428
	ctx.lr = 0x82B6C9E0;
	sub_82B7E428(ctx, base);
	// stw r3,-23184(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23184, ctx.r3.u32);
	// bl 0x82b7e4d8
	ctx.lr = 0x82B6C9E8;
	sub_82B7E4D8(ctx, base);
loc_82B6C9E8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ca08
	if (!ctx.cr6.eq) goto loc_82B6CA08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7e648
	ctx.lr = 0x82B6CA00;
	sub_82B7E648(ctx, base);
	// stw r3,-23180(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23180, ctx.r3.u32);
	// bl 0x82b7e6f8
	ctx.lr = 0x82B6CA08;
	sub_82B7E6F8(ctx, base);
loc_82B6CA08:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ca28
	if (!ctx.cr6.eq) goto loc_82B6CA28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7b7b0
	ctx.lr = 0x82B6CA20;
	sub_82B7B7B0(ctx, base);
	// stw r3,-23268(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23268, ctx.r3.u32);
	// bl 0x82b7b860
	ctx.lr = 0x82B6CA28;
	sub_82B7B860(ctx, base);
loc_82B6CA28:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ca48
	if (!ctx.cr6.eq) goto loc_82B6CA48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7c248
	ctx.lr = 0x82B6CA40;
	sub_82B7C248(ctx, base);
	// stw r3,-23248(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23248, ctx.r3.u32);
	// bl 0x82b7c2f8
	ctx.lr = 0x82B6CA48;
	sub_82B7C2F8(ctx, base);
loc_82B6CA48:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ca68
	if (!ctx.cr6.eq) goto loc_82B6CA68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7c028
	ctx.lr = 0x82B6CA60;
	sub_82B7C028(ctx, base);
	// stw r3,-23252(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23252, ctx.r3.u32);
	// bl 0x82b7c0d8
	ctx.lr = 0x82B6CA68;
	sub_82B7C0D8(ctx, base);
loc_82B6CA68:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ca88
	if (!ctx.cr6.eq) goto loc_82B6CA88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7b9c8
	ctx.lr = 0x82B6CA80;
	sub_82B7B9C8(ctx, base);
	// stw r3,-23264(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23264, ctx.r3.u32);
	// bl 0x82b7ba78
	ctx.lr = 0x82B6CA88;
	sub_82B7BA78(ctx, base);
loc_82B6CA88:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6caa8
	if (!ctx.cr6.eq) goto loc_82B6CAA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7bbe8
	ctx.lr = 0x82B6CAA0;
	sub_82B7BBE8(ctx, base);
	// stw r3,-23260(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23260, ctx.r3.u32);
	// bl 0x82b7bc98
	ctx.lr = 0x82B6CAA8;
	sub_82B7BC98(ctx, base);
loc_82B6CAA8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cac8
	if (!ctx.cr6.eq) goto loc_82B6CAC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7be08
	ctx.lr = 0x82B6CAC0;
	sub_82B7BE08(ctx, base);
	// stw r3,-23256(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23256, ctx.r3.u32);
	// bl 0x82b7beb8
	ctx.lr = 0x82B6CAC8;
	sub_82B7BEB8(ctx, base);
loc_82B6CAC8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cae8
	if (!ctx.cr6.eq) goto loc_82B6CAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b74ce8
	ctx.lr = 0x82B6CAE0;
	sub_82B74CE8(ctx, base);
	// stw r3,-23344(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23344, ctx.r3.u32);
	// bl 0x82b74d98
	ctx.lr = 0x82B6CAE8;
	sub_82B74D98(ctx, base);
loc_82B6CAE8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cb08
	if (!ctx.cr6.eq) goto loc_82B6CB08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8b338
	ctx.lr = 0x82B6CB00;
	sub_82B8B338(ctx, base);
	// stw r3,-23076(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23076, ctx.r3.u32);
	// bl 0x82b8b3e8
	ctx.lr = 0x82B6CB08;
	sub_82B8B3E8(ctx, base);
loc_82B6CB08:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cb28
	if (!ctx.cr6.eq) goto loc_82B6CB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b74f00
	ctx.lr = 0x82B6CB20;
	sub_82B74F00(ctx, base);
	// stw r3,-23340(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23340, ctx.r3.u32);
	// bl 0x82b74fb0
	ctx.lr = 0x82B6CB28;
	sub_82B74FB0(ctx, base);
loc_82B6CB28:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cb48
	if (!ctx.cr6.eq) goto loc_82B6CB48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75118
	ctx.lr = 0x82B6CB40;
	sub_82B75118(ctx, base);
	// stw r3,-23336(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23336, ctx.r3.u32);
	// bl 0x82b751c8
	ctx.lr = 0x82B6CB48;
	sub_82B751C8(ctx, base);
loc_82B6CB48:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cb68
	if (!ctx.cr6.eq) goto loc_82B6CB68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75338
	ctx.lr = 0x82B6CB60;
	sub_82B75338(ctx, base);
	// stw r3,-23332(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23332, ctx.r3.u32);
	// bl 0x82b753e8
	ctx.lr = 0x82B6CB68;
	sub_82B753E8(ctx, base);
loc_82B6CB68:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cb88
	if (!ctx.cr6.eq) goto loc_82B6CB88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75558
	ctx.lr = 0x82B6CB80;
	sub_82B75558(ctx, base);
	// stw r3,-23328(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23328, ctx.r3.u32);
	// bl 0x82b75608
	ctx.lr = 0x82B6CB88;
	sub_82B75608(ctx, base);
loc_82B6CB88:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cba8
	if (!ctx.cr6.eq) goto loc_82B6CBA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d038
	ctx.lr = 0x82B6CBA0;
	sub_82B8D038(ctx, base);
	// stw r3,-23048(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23048, ctx.r3.u32);
	// bl 0x82b8d0e8
	ctx.lr = 0x82B6CBA8;
	sub_82B8D0E8(ctx, base);
loc_82B6CBA8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cbc8
	if (!ctx.cr6.eq) goto loc_82B6CBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8c730
	ctx.lr = 0x82B6CBC0;
	sub_82B8C730(ctx, base);
	// stw r3,-23064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23064, ctx.r3.u32);
	// bl 0x82b8c7e0
	ctx.lr = 0x82B6CBC8;
	sub_82B8C7E0(ctx, base);
loc_82B6CBC8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cbe8
	if (!ctx.cr6.eq) goto loc_82B6CBE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7f518
	ctx.lr = 0x82B6CBE0;
	sub_82B7F518(ctx, base);
	// stw r3,-23168(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23168, ctx.r3.u32);
	// bl 0x82b7f5c8
	ctx.lr = 0x82B6CBE8;
	sub_82B7F5C8(ctx, base);
loc_82B6CBE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-15248
	ctx.r7.s64 = ctx.r10.s64 + -15248;
	// lwz r11,-23044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23044);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x82b6cc24
	if (!ctx.cr6.eq) goto loc_82B6CC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d258
	ctx.lr = 0x82B6CC1C;
	sub_82B8D258(ctx, base);
	// stw r3,-23044(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23044, ctx.r3.u32);
	// bl 0x82b8d308
	ctx.lr = 0x82B6CC24;
	sub_82B8D308(ctx, base);
loc_82B6CC24:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cc44
	if (!ctx.cr6.eq) goto loc_82B6CC44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d470
	ctx.lr = 0x82B6CC3C;
	sub_82B8D470(ctx, base);
	// stw r3,-23040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23040, ctx.r3.u32);
	// bl 0x82b8d520
	ctx.lr = 0x82B6CC44;
	sub_82B8D520(ctx, base);
loc_82B6CC44:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cc64
	if (!ctx.cr6.eq) goto loc_82B6CC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d690
	ctx.lr = 0x82B6CC5C;
	sub_82B8D690(ctx, base);
	// stw r3,-23036(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23036, ctx.r3.u32);
	// bl 0x82b8d740
	ctx.lr = 0x82B6CC64;
	sub_82B8D740(ctx, base);
loc_82B6CC64:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cc84
	if (!ctx.cr6.eq) goto loc_82B6CC84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b88ee0
	ctx.lr = 0x82B6CC7C;
	sub_82B88EE0(ctx, base);
	// stw r3,-23100(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23100, ctx.r3.u32);
	// bl 0x82b88f90
	ctx.lr = 0x82B6CC84;
	sub_82B88F90(ctx, base);
loc_82B6CC84:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cca4
	if (!ctx.cr6.eq) goto loc_82B6CCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8d8a8
	ctx.lr = 0x82B6CC9C;
	sub_82B8D8A8(ctx, base);
	// stw r3,-23032(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23032, ctx.r3.u32);
	// bl 0x82b8d958
	ctx.lr = 0x82B6CCA4;
	sub_82B8D958(ctx, base);
loc_82B6CCA4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ccc4
	if (!ctx.cr6.eq) goto loc_82B6CCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8dac8
	ctx.lr = 0x82B6CCBC;
	sub_82B8DAC8(ctx, base);
	// stw r3,-23028(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23028, ctx.r3.u32);
	// bl 0x82b8db78
	ctx.lr = 0x82B6CCC4;
	sub_82B8DB78(ctx, base);
loc_82B6CCC4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cce4
	if (!ctx.cr6.eq) goto loc_82B6CCE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b977c8
	ctx.lr = 0x82B6CCDC;
	sub_82B977C8(ctx, base);
	// stw r3,-22924(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22924, ctx.r3.u32);
	// bl 0x82b97878
	ctx.lr = 0x82B6CCE4;
	sub_82B97878(ctx, base);
loc_82B6CCE4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cd04
	if (!ctx.cr6.eq) goto loc_82B6CD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97c00
	ctx.lr = 0x82B6CCFC;
	sub_82B97C00(ctx, base);
	// stw r3,-22916(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22916, ctx.r3.u32);
	// bl 0x82b97cb0
	ctx.lr = 0x82B6CD04;
	sub_82B97CB0(ctx, base);
loc_82B6CD04:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cd24
	if (!ctx.cr6.eq) goto loc_82B6CD24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b979e8
	ctx.lr = 0x82B6CD1C;
	sub_82B979E8(ctx, base);
	// stw r3,-22920(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22920, ctx.r3.u32);
	// bl 0x82b97a98
	ctx.lr = 0x82B6CD24;
	sub_82B97A98(ctx, base);
loc_82B6CD24:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cd44
	if (!ctx.cr6.eq) goto loc_82B6CD44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7fb70
	ctx.lr = 0x82B6CD3C;
	sub_82B7FB70(ctx, base);
	// stw r3,-23156(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23156, ctx.r3.u32);
	// bl 0x82b7fc20
	ctx.lr = 0x82B6CD44;
	sub_82B7FC20(ctx, base);
loc_82B6CD44:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cd64
	if (!ctx.cr6.eq) goto loc_82B6CD64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b802f0
	ctx.lr = 0x82B6CD5C;
	sub_82B802F0(ctx, base);
	// stw r3,-23148(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23148, ctx.r3.u32);
	// bl 0x82b803a0
	ctx.lr = 0x82B6CD64;
	sub_82B803A0(ctx, base);
loc_82B6CD64:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cd84
	if (!ctx.cr6.eq) goto loc_82B6CD84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b80c00
	ctx.lr = 0x82B6CD7C;
	sub_82B80C00(ctx, base);
	// stw r3,-23136(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23136, ctx.r3.u32);
	// bl 0x82b80cb0
	ctx.lr = 0x82B6CD84;
	sub_82B80CB0(ctx, base);
loc_82B6CD84:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cda4
	if (!ctx.cr6.eq) goto loc_82B6CDA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ff40
	ctx.lr = 0x82B6CD9C;
	sub_82B7FF40(ctx, base);
	// stw r3,-23152(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23152, ctx.r3.u32);
	// bl 0x82b7fff0
	ctx.lr = 0x82B6CDA4;
	sub_82B7FFF0(ctx, base);
loc_82B6CDA4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cdc4
	if (!ctx.cr6.eq) goto loc_82B6CDC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b80fb8
	ctx.lr = 0x82B6CDBC;
	sub_82B80FB8(ctx, base);
	// stw r3,-23132(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23132, ctx.r3.u32);
	// bl 0x82b81068
	ctx.lr = 0x82B6CDC4;
	sub_82B81068(ctx, base);
loc_82B6CDC4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cde4
	if (!ctx.cr6.eq) goto loc_82B6CDE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b812a8
	ctx.lr = 0x82B6CDDC;
	sub_82B812A8(ctx, base);
	// stw r3,-23128(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23128, ctx.r3.u32);
	// bl 0x82b81358
	ctx.lr = 0x82B6CDE4;
	sub_82B81358(ctx, base);
loc_82B6CDE4:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ce04
	if (!ctx.cr6.eq) goto loc_82B6CE04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8c948
	ctx.lr = 0x82B6CDFC;
	sub_82B8C948(ctx, base);
	// stw r3,-23060(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23060, ctx.r3.u32);
	// bl 0x82b8c9f8
	ctx.lr = 0x82B6CE04;
	sub_82B8C9F8(ctx, base);
loc_82B6CE04:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ce24
	if (!ctx.cr6.eq) goto loc_82B6CE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8f400
	ctx.lr = 0x82B6CE1C;
	sub_82B8F400(ctx, base);
	// stw r3,-23016(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23016, ctx.r3.u32);
	// bl 0x82b8f4b0
	ctx.lr = 0x82B6CE24;
	sub_82B8F4B0(ctx, base);
loc_82B6CE24:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ce44
	if (!ctx.cr6.eq) goto loc_82B6CE44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b75778
	ctx.lr = 0x82B6CE3C;
	sub_82B75778(ctx, base);
	// stw r3,-23324(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23324, ctx.r3.u32);
	// bl 0x82b75828
	ctx.lr = 0x82B6CE44;
	sub_82B75828(ctx, base);
loc_82B6CE44:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6ce64
	if (!ctx.cr6.eq) goto loc_82B6CE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8b558
	ctx.lr = 0x82B6CE5C;
	sub_82B8B558(ctx, base);
	// stw r3,-23072(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23072, ctx.r3.u32);
	// bl 0x82b8b608
	ctx.lr = 0x82B6CE64;
	sub_82B8B608(ctx, base);
loc_82B6CE64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-15128
	ctx.r7.s64 = ctx.r10.s64 + -15128;
	// lwz r11,-23172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23172);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x82b6cea0
	if (!ctx.cr6.eq) goto loc_82B6CEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ea88
	ctx.lr = 0x82B6CE98;
	sub_82B7EA88(ctx, base);
	// stw r3,-23172(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23172, ctx.r3.u32);
	// bl 0x82b7eb38
	ctx.lr = 0x82B6CEA0;
	sub_82B7EB38(ctx, base);
loc_82B6CEA0:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cec0
	if (!ctx.cr6.eq) goto loc_82B6CEC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7b090
	ctx.lr = 0x82B6CEB8;
	sub_82B7B090(ctx, base);
	// stw r3,-23276(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23276, ctx.r3.u32);
	// bl 0x82b7b140
	ctx.lr = 0x82B6CEC0;
	sub_82B7B140(ctx, base);
loc_82B6CEC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-15008
	ctx.r7.s64 = ctx.r10.s64 + -15008;
	// lwz r11,-23272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23272);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x82b6cefc
	if (!ctx.cr6.eq) goto loc_82B6CEFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7b3d8
	ctx.lr = 0x82B6CEF4;
	sub_82B7B3D8(ctx, base);
	// stw r3,-23272(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23272, ctx.r3.u32);
	// bl 0x82b7b488
	ctx.lr = 0x82B6CEFC;
	sub_82B7B488(ctx, base);
loc_82B6CEFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,-14888
	ctx.r7.s64 = ctx.r10.s64 + -14888;
	// lwz r11,-23288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23288);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r7,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u32);
	// bne cr6,0x82b6cf38
	if (!ctx.cr6.eq) goto loc_82B6CF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7a488
	ctx.lr = 0x82B6CF30;
	sub_82B7A488(ctx, base);
	// stw r3,-23288(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23288, ctx.r3.u32);
	// bl 0x82b7a538
	ctx.lr = 0x82B6CF38;
	sub_82B7A538(ctx, base);
loc_82B6CF38:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cf58
	if (!ctx.cr6.eq) goto loc_82B6CF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7a6a0
	ctx.lr = 0x82B6CF50;
	sub_82B7A6A0(ctx, base);
	// stw r3,-23284(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23284, ctx.r3.u32);
	// bl 0x82b7a750
	ctx.lr = 0x82B6CF58;
	sub_82B7A750(ctx, base);
loc_82B6CF58:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cf78
	if (!ctx.cr6.eq) goto loc_82B6CF78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7ab58
	ctx.lr = 0x82B6CF70;
	sub_82B7AB58(ctx, base);
	// stw r3,-23280(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23280, ctx.r3.u32);
	// bl 0x82b7ac08
	ctx.lr = 0x82B6CF78;
	sub_82B7AC08(ctx, base);
loc_82B6CF78:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cf98
	if (!ctx.cr6.eq) goto loc_82B6CF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7f738
	ctx.lr = 0x82B6CF90;
	sub_82B7F738(ctx, base);
	// stw r3,-23164(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23164, ctx.r3.u32);
	// bl 0x82b7f7e8
	ctx.lr = 0x82B6CF98;
	sub_82B7F7E8(ctx, base);
loc_82B6CF98:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cfb8
	if (!ctx.cr6.eq) goto loc_82B6CFB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7f950
	ctx.lr = 0x82B6CFB0;
	sub_82B7F950(ctx, base);
	// stw r3,-23160(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23160, ctx.r3.u32);
	// bl 0x82b7fa00
	ctx.lr = 0x82B6CFB8;
	sub_82B7FA00(ctx, base);
loc_82B6CFB8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cfd8
	if (!ctx.cr6.eq) goto loc_82B6CFD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8cb60
	ctx.lr = 0x82B6CFD0;
	sub_82B8CB60(ctx, base);
	// stw r3,-23056(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23056, ctx.r3.u32);
	// bl 0x82b8cc10
	ctx.lr = 0x82B6CFD8;
	sub_82B8CC10(ctx, base);
loc_82B6CFD8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6cff8
	if (!ctx.cr6.eq) goto loc_82B6CFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b762d8
	ctx.lr = 0x82B6CFF0;
	sub_82B762D8(ctx, base);
	// stw r3,-23320(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23320, ctx.r3.u32);
	// bl 0x82b76388
	ctx.lr = 0x82B6CFF8;
	sub_82B76388(ctx, base);
loc_82B6CFF8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d018
	if (!ctx.cr6.eq) goto loc_82B6D018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b764f8
	ctx.lr = 0x82B6D010;
	sub_82B764F8(ctx, base);
	// stw r3,-23316(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23316, ctx.r3.u32);
	// bl 0x82b765a8
	ctx.lr = 0x82B6D018;
	sub_82B765A8(ctx, base);
loc_82B6D018:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d038
	if (!ctx.cr6.eq) goto loc_82B6D038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8f1e0
	ctx.lr = 0x82B6D030;
	sub_82B8F1E0(ctx, base);
	// stw r3,-23020(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23020, ctx.r3.u32);
	// bl 0x82b8f290
	ctx.lr = 0x82B6D038;
	sub_82B8F290(ctx, base);
loc_82B6D038:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d058
	if (!ctx.cr6.eq) goto loc_82B6D058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b76d70
	ctx.lr = 0x82B6D050;
	sub_82B76D70(ctx, base);
	// stw r3,-23300(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23300, ctx.r3.u32);
	// bl 0x82b76e20
	ctx.lr = 0x82B6D058;
	sub_82B76E20(ctx, base);
loc_82B6D058:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d078
	if (!ctx.cr6.eq) goto loc_82B6D078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b81a48
	ctx.lr = 0x82B6D070;
	sub_82B81A48(ctx, base);
	// stw r3,-23116(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23116, ctx.r3.u32);
	// bl 0x82b81af8
	ctx.lr = 0x82B6D078;
	sub_82B81AF8(ctx, base);
loc_82B6D078:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d098
	if (!ctx.cr6.eq) goto loc_82B6D098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b76930
	ctx.lr = 0x82B6D090;
	sub_82B76930(ctx, base);
	// stw r3,-23308(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23308, ctx.r3.u32);
	// bl 0x82b769e0
	ctx.lr = 0x82B6D098;
	sub_82B769E0(ctx, base);
loc_82B6D098:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d0b8
	if (!ctx.cr6.eq) goto loc_82B6D0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8dcf8
	ctx.lr = 0x82B6D0B0;
	sub_82B8DCF8(ctx, base);
	// stw r3,-23024(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23024, ctx.r3.u32);
	// bl 0x82b8dda8
	ctx.lr = 0x82B6D0B8;
	sub_82B8DDA8(ctx, base);
loc_82B6D0B8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d0d8
	if (!ctx.cr6.eq) goto loc_82B6D0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b76b50
	ctx.lr = 0x82B6D0D0;
	sub_82B76B50(ctx, base);
	// stw r3,-23304(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23304, ctx.r3.u32);
	// bl 0x82b76c00
	ctx.lr = 0x82B6D0D8;
	sub_82B76C00(ctx, base);
loc_82B6D0D8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d0f8
	if (!ctx.cr6.eq) goto loc_82B6D0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b76710
	ctx.lr = 0x82B6D0F0;
	sub_82B76710(ctx, base);
	// stw r3,-23312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23312, ctx.r3.u32);
	// bl 0x82b767c0
	ctx.lr = 0x82B6D0F8;
	sub_82B767C0(ctx, base);
loc_82B6D0F8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d118
	if (!ctx.cr6.eq) goto loc_82B6D118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b76f90
	ctx.lr = 0x82B6D110;
	sub_82B76F90(ctx, base);
	// stw r3,-23296(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23296, ctx.r3.u32);
	// bl 0x82b77040
	ctx.lr = 0x82B6D118;
	sub_82B77040(ctx, base);
loc_82B6D118:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d138
	if (!ctx.cr6.eq) goto loc_82B6D138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b771b0
	ctx.lr = 0x82B6D130;
	sub_82B771B0(ctx, base);
	// stw r3,-23292(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23292, ctx.r3.u32);
	// bl 0x82b77260
	ctx.lr = 0x82B6D138;
	sub_82B77260(ctx, base);
loc_82B6D138:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d158
	if (!ctx.cr6.eq) goto loc_82B6D158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8c510
	ctx.lr = 0x82B6D150;
	sub_82B8C510(ctx, base);
	// stw r3,-23068(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23068, ctx.r3.u32);
	// bl 0x82b8c5c0
	ctx.lr = 0x82B6D158;
	sub_82B8C5C0(ctx, base);
loc_82B6D158:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d178
	if (!ctx.cr6.eq) goto loc_82B6D178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b98c60
	ctx.lr = 0x82B6D170;
	sub_82B98C60(ctx, base);
	// stw r3,-22908(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22908, ctx.r3.u32);
	// bl 0x82b98d10
	ctx.lr = 0x82B6D178;
	sub_82B98D10(ctx, base);
loc_82B6D178:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d198
	if (!ctx.cr6.eq) goto loc_82B6D198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b94b88
	ctx.lr = 0x82B6D190;
	sub_82B94B88(ctx, base);
	// stw r3,-22932(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22932, ctx.r3.u32);
	// bl 0x82b94c38
	ctx.lr = 0x82B6D198;
	sub_82B94C38(ctx, base);
loc_82B6D198:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d1b8
	if (!ctx.cr6.eq) goto loc_82B6D1B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b94eb0
	ctx.lr = 0x82B6D1B0;
	sub_82B94EB0(ctx, base);
	// stw r3,-22928(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22928, ctx.r3.u32);
	// bl 0x82b94f60
	ctx.lr = 0x82B6D1B8;
	sub_82B94F60(ctx, base);
loc_82B6D1B8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d1d8
	if (!ctx.cr6.eq) goto loc_82B6D1D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b92238
	ctx.lr = 0x82B6D1D0;
	sub_82B92238(ctx, base);
	// stw r3,-22976(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22976, ctx.r3.u32);
	// bl 0x82b922e8
	ctx.lr = 0x82B6D1D8;
	sub_82B922E8(ctx, base);
loc_82B6D1D8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22972);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d1f8
	if (!ctx.cr6.eq) goto loc_82B6D1F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b924a8
	ctx.lr = 0x82B6D1F0;
	sub_82B924A8(ctx, base);
	// stw r3,-22972(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22972, ctx.r3.u32);
	// bl 0x82b92558
	ctx.lr = 0x82B6D1F8;
	sub_82B92558(ctx, base);
loc_82B6D1F8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d218
	if (!ctx.cr6.eq) goto loc_82B6D218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b92738
	ctx.lr = 0x82B6D210;
	sub_82B92738(ctx, base);
	// stw r3,-22968(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22968, ctx.r3.u32);
	// bl 0x82b927e8
	ctx.lr = 0x82B6D218;
	sub_82B927E8(ctx, base);
loc_82B6D218:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d238
	if (!ctx.cr6.eq) goto loc_82B6D238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b92960
	ctx.lr = 0x82B6D230;
	sub_82B92960(ctx, base);
	// stw r3,-22964(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22964, ctx.r3.u32);
	// bl 0x82b92a10
	ctx.lr = 0x82B6D238;
	sub_82B92A10(ctx, base);
loc_82B6D238:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d258
	if (!ctx.cr6.eq) goto loc_82B6D258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8a550
	ctx.lr = 0x82B6D250;
	sub_82B8A550(ctx, base);
	// stw r3,-23084(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23084, ctx.r3.u32);
	// bl 0x82b8a600
	ctx.lr = 0x82B6D258;
	sub_82B8A600(ctx, base);
loc_82B6D258:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d278
	if (!ctx.cr6.eq) goto loc_82B6D278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b8a7c0
	ctx.lr = 0x82B6D270;
	sub_82B8A7C0(ctx, base);
	// stw r3,-23080(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23080, ctx.r3.u32);
	// bl 0x82b8a870
	ctx.lr = 0x82B6D278;
	sub_82B8A870(ctx, base);
loc_82B6D278:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d298
	if (!ctx.cr6.eq) goto loc_82B6D298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93c58
	ctx.lr = 0x82B6D290;
	sub_82B93C58(ctx, base);
	// stw r3,-22948(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22948, ctx.r3.u32);
	// bl 0x82b93d08
	ctx.lr = 0x82B6D298;
	sub_82B93D08(ctx, base);
loc_82B6D298:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d2b8
	if (!ctx.cr6.eq) goto loc_82B6D2B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93ec8
	ctx.lr = 0x82B6D2B0;
	sub_82B93EC8(ctx, base);
	// stw r3,-22944(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22944, ctx.r3.u32);
	// bl 0x82b93f78
	ctx.lr = 0x82B6D2B8;
	sub_82B93F78(ctx, base);
loc_82B6D2B8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d2d8
	if (!ctx.cr6.eq) goto loc_82B6D2D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b71840
	ctx.lr = 0x82B6D2D0;
	sub_82B71840(ctx, base);
	// stw r3,-23372(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23372, ctx.r3.u32);
	// bl 0x82b718f0
	ctx.lr = 0x82B6D2D8;
	sub_82B718F0(ctx, base);
loc_82B6D2D8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d2f8
	if (!ctx.cr6.eq) goto loc_82B6D2F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b71ac0
	ctx.lr = 0x82B6D2F0;
	sub_82B71AC0(ctx, base);
	// stw r3,-23368(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23368, ctx.r3.u32);
	// bl 0x82b71b70
	ctx.lr = 0x82B6D2F8;
	sub_82B71B70(ctx, base);
loc_82B6D2F8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d318
	if (!ctx.cr6.eq) goto loc_82B6D318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b71ce8
	ctx.lr = 0x82B6D310;
	sub_82B71CE8(ctx, base);
	// stw r3,-23364(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23364, ctx.r3.u32);
	// bl 0x82b71d98
	ctx.lr = 0x82B6D318;
	sub_82B71D98(ctx, base);
loc_82B6D318:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d338
	if (!ctx.cr6.eq) goto loc_82B6D338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b71fa0
	ctx.lr = 0x82B6D330;
	sub_82B71FA0(ctx, base);
	// stw r3,-23360(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23360, ctx.r3.u32);
	// bl 0x82b72050
	ctx.lr = 0x82B6D338;
	sub_82B72050(ctx, base);
loc_82B6D338:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d358
	if (!ctx.cr6.eq) goto loc_82B6D358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b930e0
	ctx.lr = 0x82B6D350;
	sub_82B930E0(ctx, base);
	// stw r3,-22960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22960, ctx.r3.u32);
	// bl 0x82b93190
	ctx.lr = 0x82B6D358;
	sub_82B93190(ctx, base);
loc_82B6D358:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d378
	if (!ctx.cr6.eq) goto loc_82B6D378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b93378
	ctx.lr = 0x82B6D370;
	sub_82B93378(ctx, base);
	// stw r3,-22956(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22956, ctx.r3.u32);
	// bl 0x82b93428
	ctx.lr = 0x82B6D378;
	sub_82B93428(ctx, base);
loc_82B6D378:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d398
	if (!ctx.cr6.eq) goto loc_82B6D398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b935f0
	ctx.lr = 0x82B6D390;
	sub_82B935F0(ctx, base);
	// stw r3,-22952(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22952, ctx.r3.u32);
	// bl 0x82b936a0
	ctx.lr = 0x82B6D398;
	sub_82B936A0(ctx, base);
loc_82B6D398:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d3b8
	if (!ctx.cr6.eq) goto loc_82B6D3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89aa0
	ctx.lr = 0x82B6D3B0;
	sub_82B89AA0(ctx, base);
	// stw r3,-23096(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23096, ctx.r3.u32);
	// bl 0x82b89b50
	ctx.lr = 0x82B6D3B8;
	sub_82B89B50(ctx, base);
loc_82B6D3B8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d3d8
	if (!ctx.cr6.eq) goto loc_82B6D3D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89cc0
	ctx.lr = 0x82B6D3D0;
	sub_82B89CC0(ctx, base);
	// stw r3,-23092(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23092, ctx.r3.u32);
	// bl 0x82b89d70
	ctx.lr = 0x82B6D3D8;
	sub_82B89D70(ctx, base);
loc_82B6D3D8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d3f8
	if (!ctx.cr6.eq) goto loc_82B6D3F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b89ee8
	ctx.lr = 0x82B6D3F0;
	sub_82B89EE8(ctx, base);
	// stw r3,-23088(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23088, ctx.r3.u32);
	// bl 0x82b89f98
	ctx.lr = 0x82B6D3F8;
	sub_82B89F98(ctx, base);
loc_82B6D3F8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23008);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d418
	if (!ctx.cr6.eq) goto loc_82B6D418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90150
	ctx.lr = 0x82B6D410;
	sub_82B90150(ctx, base);
	// stw r3,-23008(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23008, ctx.r3.u32);
	// bl 0x82b90200
	ctx.lr = 0x82B6D418;
	sub_82B90200(ctx, base);
loc_82B6D418:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d438
	if (!ctx.cr6.eq) goto loc_82B6D438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b91088
	ctx.lr = 0x82B6D430;
	sub_82B91088(ctx, base);
	// stw r3,-22988(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22988, ctx.r3.u32);
	// bl 0x82b91138
	ctx.lr = 0x82B6D438;
	sub_82B91138(ctx, base);
loc_82B6D438:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d458
	if (!ctx.cr6.eq) goto loc_82B6D458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90540
	ctx.lr = 0x82B6D450;
	sub_82B90540(ctx, base);
	// stw r3,-23004(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23004, ctx.r3.u32);
	// bl 0x82b905f0
	ctx.lr = 0x82B6D458;
	sub_82B905F0(ctx, base);
loc_82B6D458:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d478
	if (!ctx.cr6.eq) goto loc_82B6D478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b908f0
	ctx.lr = 0x82B6D470;
	sub_82B908F0(ctx, base);
	// stw r3,-23000(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23000, ctx.r3.u32);
	// bl 0x82b909a0
	ctx.lr = 0x82B6D478;
	sub_82B909A0(ctx, base);
loc_82B6D478:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d498
	if (!ctx.cr6.eq) goto loc_82B6D498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90bd0
	ctx.lr = 0x82B6D490;
	sub_82B90BD0(ctx, base);
	// stw r3,-22996(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22996, ctx.r3.u32);
	// bl 0x82b90c80
	ctx.lr = 0x82B6D498;
	sub_82B90C80(ctx, base);
loc_82B6D498:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d4b8
	if (!ctx.cr6.eq) goto loc_82B6D4B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b90df8
	ctx.lr = 0x82B6D4B0;
	sub_82B90DF8(ctx, base);
	// stw r3,-22992(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22992, ctx.r3.u32);
	// bl 0x82b90ea8
	ctx.lr = 0x82B6D4B8;
	sub_82B90EA8(ctx, base);
loc_82B6D4B8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d4d8
	if (!ctx.cr6.eq) goto loc_82B6D4D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b94418
	ctx.lr = 0x82B6D4D0;
	sub_82B94418(ctx, base);
	// stw r3,-22940(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22940, ctx.r3.u32);
	// bl 0x82b944c8
	ctx.lr = 0x82B6D4D8;
	sub_82B944C8(ctx, base);
loc_82B6D4D8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d4f8
	if (!ctx.cr6.eq) goto loc_82B6D4F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b94638
	ctx.lr = 0x82B6D4F0;
	sub_82B94638(ctx, base);
	// stw r3,-22936(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22936, ctx.r3.u32);
	// bl 0x82b946e8
	ctx.lr = 0x82B6D4F8;
	sub_82B946E8(ctx, base);
loc_82B6D4F8:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d518
	if (!ctx.cr6.eq) goto loc_82B6D518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b91a60
	ctx.lr = 0x82B6D510;
	sub_82B91A60(ctx, base);
	// stw r3,-22984(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22984, ctx.r3.u32);
	// bl 0x82b91b10
	ctx.lr = 0x82B6D518;
	sub_82B91B10(ctx, base);
loc_82B6D518:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-22980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d538
	if (!ctx.cr6.eq) goto loc_82B6D538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b91ce8
	ctx.lr = 0x82B6D530;
	sub_82B91CE8(ctx, base);
	// stw r3,-22980(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22980, ctx.r3.u32);
	// bl 0x82b91d98
	ctx.lr = 0x82B6D538;
	sub_82B91D98(ctx, base);
loc_82B6D538:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d558
	if (!ctx.cr6.eq) goto loc_82B6D558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b88508
	ctx.lr = 0x82B6D550;
	sub_82B88508(ctx, base);
	// stw r3,-23112(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23112, ctx.r3.u32);
	// bl 0x82b885b8
	ctx.lr = 0x82B6D558;
	sub_82B885B8(ctx, base);
loc_82B6D558:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d578
	if (!ctx.cr6.eq) goto loc_82B6D578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b88950
	ctx.lr = 0x82B6D570;
	sub_82B88950(ctx, base);
	// stw r3,-23104(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23104, ctx.r3.u32);
	// bl 0x82b88a00
	ctx.lr = 0x82B6D578;
	sub_82B88A00(ctx, base);
loc_82B6D578:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-23108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d598
	if (!ctx.cr6.eq) goto loc_82B6D598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b88728
	ctx.lr = 0x82B6D590;
	sub_82B88728(ctx, base);
	// stw r3,-23108(r30)
	PPC_STORE_U32(ctx.r30.u32 + -23108, ctx.r3.u32);
	// bl 0x82b887d8
	ctx.lr = 0x82B6D598;
	sub_82B887D8(ctx, base);
loc_82B6D598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6D5A0"))) PPC_WEAK_FUNC(sub_82B6D5A0);
PPC_FUNC_IMPL(__imp__sub_82B6D5A0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-21984
	ctx.r4.s64 = ctx.r11.s64 + -21984;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x82B6D5C8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r9,3264
	ctx.r8.s64 = ctx.r9.s64 + 3264;
	// stw r11,3264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3264, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D5F0"))) PPC_WEAK_FUNC(sub_82B6D5F0);
PPC_FUNC_IMPL(__imp__sub_82B6D5F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D5F8"))) PPC_WEAK_FUNC(sub_82B6D5F8);
PPC_FUNC_IMPL(__imp__sub_82B6D5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D604"))) PPC_WEAK_FUNC(sub_82B6D604);
PPC_FUNC_IMPL(__imp__sub_82B6D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6D608"))) PPC_WEAK_FUNC(sub_82B6D608);
PPC_FUNC_IMPL(__imp__sub_82B6D608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82B6D624;
	sub_822BBAD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82cb2ea0
	ctx.lr = 0x82B6D638;
	sub_82CB2EA0(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b6d654
	if (ctx.cr6.eq) goto loc_82B6D654;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b6d654
	if (ctx.cr6.eq) goto loc_82B6D654;
	// bl 0x82294a58
	ctx.lr = 0x82B6D654;
	sub_82294A58(ctx, base);
loc_82B6D654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D66C"))) PPC_WEAK_FUNC(sub_82B6D66C);
PPC_FUNC_IMPL(__imp__sub_82B6D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6D670"))) PPC_WEAK_FUNC(sub_82B6D670);
PPC_FUNC_IMPL(__imp__sub_82B6D670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b6d698
	if (ctx.cr6.eq) goto loc_82B6D698;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82b6d6a0
	goto loc_82B6D6A0;
loc_82B6D698:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82B6D6A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82B6D6A8;
	sub_822BBAD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82cb2ea0
	ctx.lr = 0x82B6D6BC;
	sub_82CB2EA0(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b6d6d8
	if (ctx.cr6.eq) goto loc_82B6D6D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b6d6d8
	if (ctx.cr6.eq) goto loc_82B6D6D8;
	// bl 0x82294a58
	ctx.lr = 0x82B6D6D8;
	sub_82294A58(ctx, base);
loc_82B6D6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D6F0"))) PPC_WEAK_FUNC(sub_82B6D6F0);
PPC_FUNC_IMPL(__imp__sub_82B6D6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b6d73c
	if (!ctx.cr6.eq) goto loc_82B6D73C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294d90
	ctx.lr = 0x82B6D710;
	sub_82294D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x822bc6c8
	ctx.lr = 0x82B6D720;
	sub_822BC6C8(ctx, base);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b6d73c
	if (ctx.cr6.eq) goto loc_82B6D73C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b6d73c
	if (ctx.cr6.eq) goto loc_82B6D73C;
	// bl 0x82294a58
	ctx.lr = 0x82B6D73C;
	sub_82294A58(ctx, base);
loc_82B6D73C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D74C"))) PPC_WEAK_FUNC(sub_82B6D74C);
PPC_FUNC_IMPL(__imp__sub_82B6D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6D750"))) PPC_WEAK_FUNC(sub_82B6D750);
PPC_FUNC_IMPL(__imp__sub_82B6D750) {
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
	// lis r10,-31909
	ctx.r10.s64 = -2091188224;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8896
	ctx.r9.s64 = ctx.r10.s64 + 8896;
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// bl 0x82c079f8
	ctx.lr = 0x82B6D770;
	sub_82C079F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6D790"))) PPC_WEAK_FUNC(sub_82B6D790);
PPC_FUNC_IMPL(__imp__sub_82B6D790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ba7bd8
	ctx.lr = 0x82B6D7A0;
	sub_82BA7BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b6d7c0
	if (!ctx.cr6.eq) goto loc_82B6D7C0;
loc_82B6D7AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82B6D7C0:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,9920
	ctx.r10.s64 = ctx.r11.s64 + 9920;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,10196
	ctx.r10.s64 = ctx.r11.s64 + 10196;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,10472
	ctx.r10.s64 = ctx.r11.s64 + 10472;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,10748
	ctx.r10.s64 = ctx.r11.s64 + 10748;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,11300
	ctx.r10.s64 = ctx.r11.s64 + 11300;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,11844
	ctx.r10.s64 = ctx.r11.s64 + 11844;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,12396
	ctx.r10.s64 = ctx.r11.s64 + 12396;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,13224
	ctx.r10.s64 = ctx.r11.s64 + 13224;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,13500
	ctx.r10.s64 = ctx.r11.s64 + 13500;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,14052
	ctx.r10.s64 = ctx.r11.s64 + 14052;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,14328
	ctx.r10.s64 = ctx.r11.s64 + 14328;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,14880
	ctx.r10.s64 = ctx.r11.s64 + 14880;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,11024
	ctx.r10.s64 = ctx.r11.s64 + 11024;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,8540
	ctx.r10.s64 = ctx.r11.s64 + 8540;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,5776
	ctx.r10.s64 = ctx.r11.s64 + 5776;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,6052
	ctx.r10.s64 = ctx.r11.s64 + 6052;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,6884
	ctx.r10.s64 = ctx.r11.s64 + 6884;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,6608
	ctx.r10.s64 = ctx.r11.s64 + 6608;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r10,r11,30448
	ctx.r10.s64 = ctx.r11.s64 + 30448;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r10,r11,30724
	ctx.r10.s64 = ctx.r11.s64 + 30724;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,4120
	ctx.r10.s64 = ctx.r11.s64 + 4120;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,6328
	ctx.r10.s64 = ctx.r11.s64 + 6328;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,5500
	ctx.r10.s64 = ctx.r11.s64 + 5500;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,12672
	ctx.r10.s64 = ctx.r11.s64 + 12672;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,3292
	ctx.r10.s64 = ctx.r11.s64 + 3292;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,13776
	ctx.r10.s64 = ctx.r11.s64 + 13776;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,3568
	ctx.r10.s64 = ctx.r11.s64 + 3568;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,4396
	ctx.r10.s64 = ctx.r11.s64 + 4396;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,4948
	ctx.r10.s64 = ctx.r11.s64 + 4948;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,7712
	ctx.r10.s64 = ctx.r11.s64 + 7712;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,7160
	ctx.r10.s64 = ctx.r11.s64 + 7160;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,12120
	ctx.r10.s64 = ctx.r11.s64 + 12120;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,9368
	ctx.r10.s64 = ctx.r11.s64 + 9368;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,9644
	ctx.r10.s64 = ctx.r11.s64 + 9644;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,14604
	ctx.r10.s64 = ctx.r11.s64 + 14604;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,9092
	ctx.r10.s64 = ctx.r11.s64 + 9092;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r11,8816
	ctx.r10.s64 = ctx.r11.s64 + 8816;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82b6d7ac
	if (ctx.cr6.eq) goto loc_82B6D7AC;
	// bl 0x82c08288
	ctx.lr = 0x82B6DAA8;
	sub_82C08288(ctx, base);
	// bl 0x82ba9080
	ctx.lr = 0x82B6DAAC;
	sub_82BA9080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c06fa0
	ctx.lr = 0x82B6DAB4;
	sub_82C06FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba9bb8
	ctx.lr = 0x82B6DABC;
	sub_82BA9BB8(ctx, base);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r9,-32069
	ctx.r9.s64 = -2101673984;
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// lis r7,-32069
	ctx.r7.s64 = -2101673984;
	// lis r6,-32073
	ctx.r6.s64 = -2101936128;
	// addi r3,r9,-25368
	ctx.r3.s64 = ctx.r9.s64 + -25368;
	// addi r5,r11,26256
	ctx.r5.s64 = ctx.r11.s64 + 26256;
	// addi r4,r10,25912
	ctx.r4.s64 = ctx.r10.s64 + 25912;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r11,r8,-24888
	ctx.r11.s64 = ctx.r8.s64 + -24888;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r10,r7,-23616
	ctx.r10.s64 = ctx.r7.s64 + -23616;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addi r9,r6,-10512
	ctx.r9.s64 = ctx.r6.s64 + -10512;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// bl 0x82c079f0
	ctx.lr = 0x82B6DB0C;
	sub_82C079F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6DB2C"))) PPC_WEAK_FUNC(sub_82B6DB2C);
PPC_FUNC_IMPL(__imp__sub_82B6DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6DB30"))) PPC_WEAK_FUNC(sub_82B6DB30);
PPC_FUNC_IMPL(__imp__sub_82B6DB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r10,r11,-21672
	ctx.r10.s64 = ctx.r11.s64 + -21672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6DB40"))) PPC_WEAK_FUNC(sub_82B6DB40);
PPC_FUNC_IMPL(__imp__sub_82B6DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82B6DB48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b6dcc8
	if (ctx.cr6.eq) goto loc_82B6DCC8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r27,r11,-21944
	ctx.r27.s64 = ctx.r11.s64 + -21944;
	// beq cr6,0x82b6db88
	if (ctx.cr6.eq) goto loc_82B6DB88;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B6DB74:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DB80;
	sub_82CB65F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b6db74
	if (!ctx.cr0.eq) goto loc_82B6DB74;
loc_82B6DB88:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82b6dbe0
	if (ctx.cr6.eq) goto loc_82B6DBE0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82B6DB98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b6db98
	if (!ctx.cr6.eq) goto loc_82B6DB98;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b6dbe0
	if (ctx.cr6.eq) goto loc_82B6DBE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82B6DBC4;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21940
	ctx.r4.s64 = ctx.r11.s64 + -21940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DBDC;
	sub_82CB65F0(ctx, base);
	// b 0x82b6dbfc
	goto loc_82B6DBFC;
loc_82B6DBE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82B6DBE8;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21924
	ctx.r4.s64 = ctx.r11.s64 + -21924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DBFC;
	sub_82CB65F0(ctx, base);
loc_82B6DBFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c05198
	ctx.lr = 0x82B6DC04;
	sub_82C05198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b6dc40
	if (ctx.cr6.eq) goto loc_82B6DC40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82B6DC14;
	sub_82C051A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c05198
	ctx.lr = 0x82B6DC20;
	sub_82C05198(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21916
	ctx.r4.s64 = ctx.r11.s64 + -21916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DC38;
	sub_82CB65F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82B6DC40:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DC50;
	sub_82CB65F0(ctx, base);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82b6dc8c
	if (!ctx.cr6.gt) goto loc_82B6DC8C;
	// addi r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 1;
loc_82B6DC64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c04fa8
	ctx.lr = 0x82B6DC70;
	sub_82C04FA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82b6db40
	ctx.lr = 0x82B6DC7C;
	sub_82B6DB40(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b6dc64
	if (ctx.cr6.lt) goto loc_82B6DC64;
loc_82B6DC8C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b6dcac
	if (ctx.cr6.eq) goto loc_82B6DCAC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B6DC98:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DCA4;
	sub_82CB65F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b6dc98
	if (!ctx.cr0.eq) goto loc_82B6DC98;
loc_82B6DCAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c051a0
	ctx.lr = 0x82B6DCB4;
	sub_82C051A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21904
	ctx.r4.s64 = ctx.r11.s64 + -21904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb65f0
	ctx.lr = 0x82B6DCC8;
	sub_82CB65F0(ctx, base);
loc_82B6DCC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6DCD0"))) PPC_WEAK_FUNC(sub_82B6DCD0);
PPC_FUNC_IMPL(__imp__sub_82B6DCD0) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82b6e518
	ctx.lr = 0x82B6DCEC;
	sub_82B6E518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b6dd10
	if (ctx.cr6.eq) goto loc_82B6DD10;
	// bl 0x82c06160
	ctx.lr = 0x82B6DCFC;
	sub_82C06160(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r10,-21676
	ctx.r9.s64 = ctx.r10.s64 + -21676;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82b6dd14
	goto loc_82B6DD14;
loc_82B6DD10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B6DD14:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r31,r11,-23384
	ctx.r31.s64 = ctx.r11.s64 + -23384;
	// stw r3,-23384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23384, ctx.r3.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-21896
	ctx.r4.s64 = ctx.r11.s64 + -21896;
	// bl 0x82c054f8
	ctx.lr = 0x82B6DD2C;
	sub_82C054F8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r9,-21888
	ctx.r4.s64 = ctx.r9.s64 + -21888;
	// lfs f1,-17484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c075f8
	ctx.lr = 0x82B6DD44;
	sub_82C075F8(ctx, base);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,-21876
	ctx.r4.s64 = ctx.r8.s64 + -21876;
	// bl 0x82c075a0
	ctx.lr = 0x82B6DD58;
	sub_82C075A0(ctx, base);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r6,-21864
	ctx.r4.s64 = ctx.r6.s64 + -21864;
	// lfs f1,-15120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c075f8
	ctx.lr = 0x82B6DD70;
	sub_82C075F8(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-21860
	ctx.r4.s64 = ctx.r4.s64 + -21860;
	// bl 0x82c07578
	ctx.lr = 0x82B6DD84;
	sub_82C07578(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-21852
	ctx.r4.s64 = ctx.r11.s64 + -21852;
	// bl 0x82c07578
	ctx.lr = 0x82B6DD98;
	sub_82C07578(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r10,-21836
	ctx.r4.s64 = ctx.r10.s64 + -21836;
	// bl 0x82c07578
	ctx.lr = 0x82B6DDAC;
	sub_82C07578(ctx, base);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r9,-21824
	ctx.r4.s64 = ctx.r9.s64 + -21824;
	// bl 0x82c07578
	ctx.lr = 0x82B6DDC0;
	sub_82C07578(ctx, base);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r8,-21816
	ctx.r4.s64 = ctx.r8.s64 + -21816;
	// bl 0x82c07578
	ctx.lr = 0x82B6DDD4;
	sub_82C07578(ctx, base);
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r7,-21808
	ctx.r4.s64 = ctx.r7.s64 + -21808;
	// bl 0x82c07578
	ctx.lr = 0x82B6DDE8;
	sub_82C07578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c077f8
	ctx.lr = 0x82B6DDF4;
	sub_82C077F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b6de0c
	if (ctx.cr6.eq) goto loc_82B6DE0C;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// bl 0x82b9e260
	ctx.lr = 0x82B6DE08;
	sub_82B9E260(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B6DE0C:
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

__attribute__((alias("__imp__sub_82B6DE24"))) PPC_WEAK_FUNC(sub_82B6DE24);
PPC_FUNC_IMPL(__imp__sub_82B6DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6DE28"))) PPC_WEAK_FUNC(sub_82B6DE28);
PPC_FUNC_IMPL(__imp__sub_82B6DE28) {
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
	// bl 0x82c06160
	ctx.lr = 0x82B6DE40;
	sub_82C06160(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21676
	ctx.r10.s64 = ctx.r11.s64 + -21676;
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

__attribute__((alias("__imp__sub_82B6DE64"))) PPC_WEAK_FUNC(sub_82B6DE64);
PPC_FUNC_IMPL(__imp__sub_82B6DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6DE68"))) PPC_WEAK_FUNC(sub_82B6DE68);
PPC_FUNC_IMPL(__imp__sub_82B6DE68) {
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
	// bl 0x82c06cf8
	ctx.lr = 0x82B6DE88;
	sub_82C06CF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b6deac
	if (ctx.cr6.eq) goto loc_82B6DEAC;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r10,8884(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8884);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6DEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6DEAC:
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

__attribute__((alias("__imp__sub_82B6DEC4"))) PPC_WEAK_FUNC(sub_82B6DEC4);
PPC_FUNC_IMPL(__imp__sub_82B6DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

